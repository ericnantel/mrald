
#ifndef MRALD_CRAFT_STANDARD_HPP
#define MRALD_CRAFT_STANDARD_HPP

namespace Mrald
{
    namespace Craft
    {
        namespace Standard
        {
            void GetVersion(unsigned& major, unsigned& minor, unsigned& patch);

            void GetCodename(char (&codename)[64]);

            //
            //..................................|===Integral
            //..........|===Primitive===========|===Floating
            //Group=====|.......................|===Binary
            //..........|===Custom=====|===Data
            //.........................|===Enum
            //.........................|===Class
            //
            enum class MetaGroupType
            {
                Primitive = 0,
                Custom
            };
            enum class MetaPrimitiveCategoryType
            {
                Integral = 0,
                Floating,
                Binary
            };
            enum class MetaCustomCategoryType
            {
                Data = 0,
                Enum,
                Class
            };

            namespace MetaBuiltinTypes
            {
                namespace Int8
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = true;
                    constexpr unsigned Size = 1U;
                    constexpr signed DefaultValue = 0;
                    constexpr signed char MinValue = -128;
                    constexpr signed char MaxValue = +127;
                }; //namespace Int8
                namespace Char = Int8;

                namespace Int16
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = true;
                    constexpr unsigned Size = 2U;
                    constexpr signed DefaultValue = 0;
                    constexpr signed short MinValue = -32768;
                    constexpr signed short MaxValue = +32767;
                }; //namespace Int16
                namespace Short = Int16;

                namespace Int32
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = true;
                    constexpr unsigned Size = 4U;
                    constexpr signed DefaultValue = 0;
                    constexpr signed int MinValue = -2147483648;
                    constexpr signed int MaxValue = +2147483647;
                }; //namespace Int32
                namespace Int = Int32;

                namespace Int64
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = true;
                    constexpr unsigned Size = 8U;
                    constexpr signed DefaultValue = 0;
                    constexpr signed long MinValue = -9223372036854775807LL - 1LL;
                    constexpr signed long MaxValue = +9223372036854775807LL;
                }; //namespace Int64
                namespace Long = Int64;

                namespace Uint8
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = false;
                    constexpr unsigned Size = 1U;
                    constexpr unsigned DefaultValue = 0U;
                    constexpr unsigned char MinValue = 0;
                    constexpr unsigned char MaxValue = 255;
                }; //namespace Uint8
                namespace Uchar = Uint8;
                namespace Byte = Uint8;

                namespace Uint16
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = false;
                    constexpr unsigned Size = 2U;
                    constexpr unsigned DefaultValue = 0U;
                    constexpr unsigned short MinValue = 0;
                    constexpr unsigned short MaxValue = 65535;
                }; //namespace Uint16
                namespace Ushort = Uint16;

                namespace Uint32
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = false;
                    constexpr unsigned Size = 4U;
                    constexpr unsigned DefaultValue = 0U;
                    constexpr unsigned int MinValue = 0;
                    constexpr unsigned int MaxValue = 4294967295;
                }; //namespace Uint32
                namespace Uint = Uint32;

                namespace Uint64
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Integral;
                    constexpr bool Signed = false;
                    constexpr unsigned Size = 8U;
                    constexpr unsigned DefaultValue = 0U;
                    constexpr unsigned long MinValue = 0;
                    constexpr unsigned long MaxValue = 18446744073709551615UL;
                }; //namespace Uint64
                namespace Ulong = Uint64;

                namespace F32
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Floating;
                    constexpr bool Signed = true;
                    constexpr unsigned Size = 4;
                    constexpr float DefaultValue = 0.0f;
                    constexpr float MinValue = -3.40282347E+38;
                    constexpr float MaxValue = +3.40282347E+38;
                }; //namespace F32
                namespace Float = F32;

                namespace F64
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Floating;
                    constexpr bool Signed = true;
                    constexpr unsigned Size = 8;
                    constexpr double DefaultValue = 0.0;
                    constexpr double MinValue = -1.7976931348623157E+308;
                    constexpr double MaxValue = +1.7976931348623157E+308;
                }; //namespace F64
                namespace Double = F64;

                namespace Boolean
                {
                    constexpr MetaGroupType Group = MetaGroupType::Primitive;
                    constexpr MetaPrimitiveCategoryType Category = MetaPrimitiveCategoryType::Binary;
                    constexpr bool Signed = false;
                    constexpr unsigned Size = 4;
                    constexpr bool DefaultValue = false;
                }; //namespace Boolean
                namespace Bool = Boolean;
            }; //namespace MetaBuiltinTypes

            namespace MetaBuiltinOperators
            {
                namespace Add
                {
                    //constexpr auto Symbol = '+'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace Add

                namespace Subtract
                {
                    //constexpr auto Symbol = '-'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace Subtract

                namespace Multiply
                {
                    //constexpr auto Symbol = '*'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace Multiply

                namespace Divide
                {
                    //constexpr auto Symbol = '/'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace Divide

                namespace AddEqual
                {
                    //constexpr auto Symbol = '+='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace AddEqual

                namespace SubtractEqual
                {
                    //constexpr auto Symbol = '-='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace SubtractEqual

                namespace MultiplyEqual
                {
                    //constexpr auto Symbol = '*='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace MultiplyEqual

                namespace DivideEqual
                {
                    //constexpr auto Symbol = '/='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace DivideEqual

                namespace Increment
                {
                    //constexpr auto Symbol = '++'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace Increment

                namespace Decrement
                {
                    //constexpr auto Symbol = '--'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace Decrement

                namespace LessThan
                {
                    //constexpr auto Symbol = '<'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace LessThan

                namespace GreaterThan
                {
                    //constexpr auto Symbol = '>'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace GreaterThan

                namespace LessThanEqual
                {
                    //constexpr auto Symbol = '<='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace LessThanEqual

                namespace GreaterThanEqual
                {
                    //constexpr auto Symbol = '>='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64
                    };
                }; //namespace GreaterThanEqual

                namespace EqualEqual
                {
                    //constexpr auto Symbol = '=='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64,
                        Boolean
                    };
                }; //namespace EqualEqual

                namespace NotEqual
                {
                    //constexpr auto Symbol = '!='
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        Uint8,
                        Uint16,
                        Uint32,
                        Uint64,
                        F32,
                        F64,
                        Boolean
                    };
                }; //namespace NotEqual

                namespace Negate
                {
                    //constexpr auto Symbol = '-'
                    enum class Types
                    {
                        Int8,
                        Int16,
                        Int32,
                        Int64,
                        F32,
                        F64
                    };
                }; //namespace Negate

                namespace Inverse
                {
                    //constexpr auto Symbol = '!'
                    enum class Types
                    {
                        Boolean
                    };
                }; //namespace Inverse

            }; //namespace MetaBuiltinOperators

            //Note: we might create string, vector, containers as builtin types
            //That way, we don't have to expose memory allocation to the user
            //..

            //TODO: Builtin Primitive Types [X]
            //TODO: Builtin Custom Types []
            //TODO: Builtin Primitive Operators []
            //TODO: Builtin Custom Operators []

            //TODO: Struct VariableDeclaration::Identifier
            //TODO: Struct VariableDeclaration::Mutable
            //Etc..

        }; //namespace Standard
    }; //namespace Craft
}; //namespace Mrald

#endif
