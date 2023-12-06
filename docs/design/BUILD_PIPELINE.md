# Mrald Build Pipeline

```mermaid
graph TB
SourceFiles[Source Files .mrald] -- Build--> CLI
CLI -- Interpreters --> IntLang((?))
CLI -- Compilers --> Cplusplus((C++))
Cplusplus ---> FrontEnd(Frontend)
FrontEnd ---> GCC[GCC ?]
FrontEnd ---> Clang[Clang ?]
FrontEnd ---> MraldCraft[Mrald-Craft]
MraldCraft -- Scanner -- Parser --> IRBuilder[IR Builder]
IRBuilder --> LLVMIR_1((LLVM IR .ll))
LLVMIR_1 ---> MiddleEnd(Middle end) ---> Config[Configuration]
Config --> Development
Config --> Production
Development --> IRPDB[Debug Symbols ?]
Production --> IROpt[IR Optimizer ?]
IRPDB --> LLVMIR_2((LLVL IR .ll))
IROpt --> LLVMIR_2((LLVL IR .ll))
LLVMIR_2 ---> BackEnd(Backend) ---> Target[Target OS - Arch 64] --> LLVMAS[LLVM Assembler]
LLVMAS --> Output[Output Files .obj .exe .lib .a]
```
