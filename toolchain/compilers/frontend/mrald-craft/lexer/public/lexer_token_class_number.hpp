
#ifndef MRALD_CRAFT_LEXER_TOKEN_CLASS_NUMBER_HPP
#define MRALD_CRAFT_LEXER_TOKEN_CLASS_NUMBER_HPP

namespace Mrald
{
	namespace Craft
	{
		namespace Lexer
		{
			enum class TokenClassNumber
			{
				Unknown = 0,
				SignedChar,
				UnsignedChar,
				SignedShort,
				UnsignedShort,
				SignedInteger,
				UnsignedInteger,
				SignedLong,
				UnsignedLong,
				HalfFloat,
				SingleFloat,
				DoubleFloat,
				PositiveInfinity,
				NegativeInfinity
			};
		};
	};
};

#endif