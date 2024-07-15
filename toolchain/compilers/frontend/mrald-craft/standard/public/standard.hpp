
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
            enum class MetaPrimitiveBuiltinType
            {
                Char = 0,
                Short,
                Int,
                Long,
                Int8,
                Int16,
                Int32,
                Int64,
                Byte,
                Ushort,
                Uint,
                Ulong,
                Uint8,
                Uint16,
                Uint32,
                Uint64,
                Float,
                F32,
                Double,
                F64,
                Boolean
            };

            //Note: we might create string, vector, containers as builtin types
            //That way, we don't have to expose memory allocation to the user
            //..

            constexpr unsigned MetaPrimitiveIntegralDefaultValue()
            {
                return 0;
            }

            constexpr float MetaPrimitiveFloatingDefaultValue()
            {
                return 0.0;
            }

            constexpr bool MetaPrimitiveBinaryDefaultValue()
            {
                return false;
            }

            /* constexpr unsigned MetaPrimitiveIntegralMinValue() */
            /* {} */
            /* constexpr unsigned MetaPrimitiveIntegralMaxValue() */
            /* {} */
            /* constexpr unsigned MetaPrimitiveFloatingMinValue() */
            /* {} */
            /* constexpr unsigned MetaPrimitiveFloatingMaxValue() */
            /* {} */

            constexpr bool MetaPrimitiveBuiltinSigned(const MetaPrimitiveBuiltinType builtin_type)
            {
                switch (builtin_type)
                {
                    case MetaPrimitiveBuiltinType::Char:
                        return true;
                    case MetaPrimitiveBuiltinType::Short:
                        return true;
                    case MetaPrimitiveBuiltinType::Int:
                        return true;
                    case MetaPrimitiveBuiltinType::Long:
                        return true;
                    case MetaPrimitiveBuiltinType::Int8:
                        return true;
                    case MetaPrimitiveBuiltinType::Int16:
                        return true;
                    case MetaPrimitiveBuiltinType::Int32:
                        return true;
                    case MetaPrimitiveBuiltinType::Int64:
                        return true;
                    case MetaPrimitiveBuiltinType::Byte:
                        return false;
                    case MetaPrimitiveBuiltinType::Ushort:
                        return false;
                    case MetaPrimitiveBuiltinType::Uint:
                        return false;
                    case MetaPrimitiveBuiltinType::Ulong:
                        return false;
                    case MetaPrimitiveBuiltinType::Uint8:
                        return false;
                    case MetaPrimitiveBuiltinType::Uint16:
                        return false;
                    case MetaPrimitiveBuiltinType::Uint32:
                        return false;
                    case MetaPrimitiveBuiltinType::Uint64:
                        return false;
                    case MetaPrimitiveBuiltinType::Float:
                        return true;
                    case MetaPrimitiveBuiltinType::F32:
                        return true;
                    case MetaPrimitiveBuiltinType::Double:
                        return true;
                    case MetaPrimitiveBuiltinType::F64:
                        return true;
                    case MetaPrimitiveBuiltinType::Boolean:
                        return false;
                };
            }

            constexpr unsigned MetaPrimitiveBuiltinSize(const MetaPrimitiveBuiltinType builtin_type)
            {
                switch (builtin_type)
                {
                    case MetaPrimitiveBuiltinType::Char:
                        return 1;
                    case MetaPrimitiveBuiltinType::Short:
                        return 2;
                    case MetaPrimitiveBuiltinType::Int:
                        return 4;
                    case MetaPrimitiveBuiltinType::Long:
                        return 8;
                    case MetaPrimitiveBuiltinType::Int8:
                        return 1;
                    case MetaPrimitiveBuiltinType::Int16:
                        return 2;
                    case MetaPrimitiveBuiltinType::Int32:
                        return 4;
                    case MetaPrimitiveBuiltinType::Int64:
                        return 8;
                    case MetaPrimitiveBuiltinType::Byte:
                        return 1;
                    case MetaPrimitiveBuiltinType::Ushort:
                        return 2;
                    case MetaPrimitiveBuiltinType::Uint:
                        return 4;
                    case MetaPrimitiveBuiltinType::Ulong:
                        return 8;
                    case MetaPrimitiveBuiltinType::Uint8:
                        return 1;
                    case MetaPrimitiveBuiltinType::Uint16:
                        return 2;
                    case MetaPrimitiveBuiltinType::Uint32:
                        return 4;
                    case MetaPrimitiveBuiltinType::Uint64:
                        return 8;
                    case MetaPrimitiveBuiltinType::Float:
                        return 4;
                    case MetaPrimitiveBuiltinType::F32:
                        return 4;
                    case MetaPrimitiveBuiltinType::Double:
                        return 8;
                    case MetaPrimitiveBuiltinType::F64:
                        return 8;
                    case MetaPrimitiveBuiltinType::Boolean:
                        return 4;
                };
            }

            struct MetaType
            {
                MetaGroupType GroupType;
                MetaPrimitiveCategoryType PrimitiveCategoryType;
                MetaPrimitiveBuiltinType PrimitiveBuiltinType;
                MetaCustomCategoryType CustomCategoryType;
                //MetaCustomTypeName CustomTypeName;
                //MetaCustomTypeIdentifier CustomTypeIdentifier;
                //TODO: Fields, Members, Children, etc.
            };

            //TODO: Builtin Primitive Types
            //TODO: Builtin Primitive Operators
            //TODO: Struct VariableDeclaration::Identifier
            //TODO: Struct VariableDeclaration::Mutable
            //Etc..
            //
            //NOTE: For now, let's define everything here
            //Don't be shy how writing thinking process..
            //Or Perhaps, we should just create API functions and internally
            //we define our structs and so on..
        }; //namespace Standard
    }; //namespace Craft
}; //namespace Mrald

#endif

