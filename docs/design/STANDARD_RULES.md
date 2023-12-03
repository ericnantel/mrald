
# The Mrald Standard Rules

*Last revision: Dec 2nd 2023*

## Introduction

**Mrald** is a data-focused, **open-source**, cross-platform, statically-typed, low-level programming language that aims for safety, **robustness**, simplicity and performance. Accessible to new and experienced coders. Inspired by other languages such as C, **C++**, Cobol, Pascal and Basic. Perfect to learn system programming and developing apps. **Mrald** also supports several aspects or paradigms of **functionnal** programming, **data-oriented** programming and **object-oriented** programming. The language enforces a few essential rules and promotes several more; to **prevent safety issues**, pitfalls, performance bottlenecks and **accessibility** across different devices, hardwares or operating systems.

### ER1 - _Safety Is Priority_
#### ER1.1 - No Implicit Type Cast
Type casting requires explicit use of the **`as`** operator. Primitive types(`float`,`int`, etc.) already have an existing **`as`** operator implementation within the language itself; However custom data types requires implementation of their respective **`as`** operator if needed. Take note, some type of **static** casting may result in precision-loss.
```
    float grade1 = 60 ;error cannot implicitly cast from integer to float
    float grade2 = 70f ;very good :)
    float grade3 = 80i as float ;ok using explicit static cast
    float grade4 = 100d as float; ok but issue precision-loss warning
```
Other type of casting, such as **downcast** and **upcast** are **dynamic** casting for objects, but are not currently part of the **Mrald** standards nor supported.
#### ER1.2 - No Return By-Reference
Functions or methods can only return copies; or nothing, because they cannot guarantee returning a valid reference when local variables goes out of scope or when data is protected. By default, parameters are pass by-reference and writeable, but you can mark them as readonly; or pass them by-value which will create a copy. When a copy is passed, it can be used inside the function body as any local variable; only difference is that it was initialized already prior to calling the function or method.
```
    ; no param example
    
    func get_number1
        int anumber = 10
        return anumber ;ok returns a copy of local variable
    end
    
    ; pass by-reference examples
    
    func get_number2
        param int anumber
        anumber = 10 ;ok anumber is a writeable param
        return
    end
    
    func get_number3
        param readonly int anumber
        anumber = 10 ;error anumber is a readonly param
        return
    end
    
    ; pass by-value examples
    
    func get_number4
        param copy int anumber
        anumber += 10 ; ok 
        return anumber
    end
    
    func get_number5
        param copy int anumber
        ; nothing
        return anumber ; ok but issue useless param warning..
    end
    
```
#### ER1.3 - No Multiple Returns
Operators, functions and methods **must** only have a single return instruction at the end of the body. The return instruction cannot be inside any conditional statement(`if`) or loop(`for`) body.
```
    func sum_number1
        param copy int a
        param copy int b
        int c = a + b
        return c ;excellent clean & simple :)
    end
    
    func sum_number2
        param copy int a
        param copy int b
        int c = a + b
        return c
        int d = c + a
        return d ;error cannot have multiple returns !
    end
```
However, it is not excluded to allow this feature in a future release..to support recursion, which the standards does not currently support at the moment.
#### ER1.4 - No Uninitialized Data
Data and primitive type variables must always be initialized when created.
```
    data body
        float mass
    end
    
    func main
        body plant1
        plant1.mass = 0.01 ; excellent :)
        
        body plant2
        plant2.mass += 10 ; error uninitialized mass field !
        
        float weight1 = 60 ; yes
        
        float weight2
        weight -= 5 ; error uninitialized weight variable !
        
        float weight3
        weight3 = plant1.mass + weight1 ; ok good
    end
```
It is not excluded that Data fields may have constant default values, in a future release..
#### ER1.5 - No Multiple Inheritance
Classes cannot have more than one parent class. It resolves the case of the diamond inheritance which is a major design flaw in other object-oriented programming languages like `C++`.
```
    class Human ;ok
        boolean alive
        Vector position
        func move
            position += Vector.right
            return
        end
    end
    
    class Animal ;ok
        boolean alive
    end
    
    class Cat
        parent Animal ; ok
    end
    
    class Dog
        parent Animal ; ok
    end
    
    class ARandomAnimal
        parent Cat
        parent Dog  ; error cannot have multiple parents !
                    ; error diamond issue !
    end
```
#### ER1.6 - No Grand Ancestors
Classes that are derived are finals and sealed. There cannot be an ancestor greater than the parent class itself. Descendance is kept short because there was rarely a good case when this was needed; it also prevents classes from having ancestors from the Ice Age if you know what I mean..
```
class Animal
    boolean alive
end

class Reptile
    parent Animal ; ok
end

class Snake
    parent Reptile ; error Reptile class is final !
end
```
### ER2 - _Accessibility Is Mandatory_
#### ER2.1 - All Features Must Be Available
A party, corporation or organization may not claim to support the language unless standards are all followed with all its current features, and that toolchains, documentation, executables and other files are made available and functional to users; at the exception of obsolete or vulnerable binaries, validated by an authorized audit or code review team and at its discretion to approve removal of such binaries from distribution. Refer also to the licenses.
#### ER2.2 - Documentation Must Be Available
Documentation is part of educational content.
#### ER2.3 - Open-Source Infringement Is Serious
* Canada Trade Commissioner [Learn More..](https://www.tradecommissioner.gc.ca/united-states-of-america-etats-unis-amerique/copyright_license-licence_droit.aspx?lang=eng)
* Open-Source Guide [Learn More..](https://opensource.guide/legal/)

### ER3 - _Data Is Data_
#### ER3.1 - Data Is Public
All data fields are publicly available through the **`.`** operator. Data fields are not protected by nature; however data variables can be pass by-reference as readonly; thus preventing a function scope from writing to one of its fields; or pass by-value thus creating a copy of the data which will not affect the original data.
```
    data body
        float mass
    end
    
    func set_mass1
        param readonly body b
        b.mass = 30 ;error cannot write to readonly body mass field !
        return
    end
    
    func set_mass2
        param body b
        b.mass = 20 ; ok
        return
    end
    
    func set_mass3
        param copy body b
        b.mass = 20 ; ok but useless..
        return
    end
    
    func main
        body bobby
        bobby.mass = 10 ; ok 
        
        set_mass1(bobby) ; compile error !
        
        set_mass2(bobby) ; ok now bobby.mass is 20
        
        set_mass3(bobby) ; ok but bobby.mass is still 20
    end
```
#### ER3.2 - Data Is Copyable
Data can always be copied or cloned, even from a readonly data, since we do not write to the data and fields are always publicly available.
```
    data coin
        Guid guid
    end
    
    func do_something
        param readonly coin c
        coin d = c ; ok c was cloned
        d.guid = Guid() ;ok d is writeable
        return d ; ok return copy of d
    end
    
    func main
        coin c1
        c1.guid = Guid()
        
        coin c2 = do_something(c1) ; ok 
        
    end
```
However we do not exclude a `writeonly` keyword which would prevent parameters from being read or copied. It could be used for sensitive data from being read even if hackers are using a deassembler or a debugger.
#### ER3.3 - Data Declaration Is Exportable
Data declarations can be exported through modules. Data have no implementation because they only contains fields which are either data or primitive types. Data cannot have fields which are references.
```
    module Vector
    path Core/Math/Vector.mrald
    
    export data Vector
        float x
        float y
        float z
    end
```
#### ER3.4 - Data Footprint Is Predictable
Data is represented by the fields it possesses. Its size is the sum of all its fields' size. Its size, in bytes, is known at compile time; helping the compiler and assembler optimizing and or reducing instructions. Data should be favored over classes when using structures such as containers.
#### ER3.5 - Data Has Very Low-Coupling
Due to the nature of data not having to own any references, and that data is copyable; and can be exported with modules; it reduces drastically coupling.
#### ER3.6 - Data Has No Behaviour
Only classes can define behaviours. Additionnaly, operators are a special type of global functions; not part of the data declaration they operate on.

### ER4 - _Modularity Is Key_
Data, functions, operators, classes are usually group into modules and exported for reusability within a project, to then be added to a target that is usually compiled as a library, api or executable.
#### ER4.1 - Reusability And Dependencies
Modules should be usuable not only in a single target, but for any target(s) a project may have. Improving compile speed is expected from modules. Projects can generate an internal dependency tree for modules. Meaning it knows what modules to compile and in which order. Modules that are not needed in any of the target(s) are not recompiled; thus improving compilation and assembling.
#### ER4.2 - External Modules
This feature is not yet available; however the intend is to allow modules from other programming languages, primarily from the C family(`C`,`C++`) to extend a **Mral** project.
```
    ; this is not available yet.
    module StdCppThread
    
    ; would be nice
    export extern C class StdCppThread
```

**_Copyright 2023 Eric Nantel_**
