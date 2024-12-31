#pragma once

#define cast_num  static_cast<unsigned long long>
#define cast_enum  static_cast<E>

template <typename E>
class BitFlagEnumClass
{

public:
	E m_eFlag;

	BitFlagEnumClass() {
		m_eFlag = cast_enum(0);
	}

	BitFlagEnumClass(E flag) {
		m_eFlag = flag;
	}

	BitFlagEnumClass operator=(E flag) {
		m_eFlag = flag;
		return *this;
	}

	BitFlagEnumClass operator=(BitFlagEnumClass flag) {
		m_eFlag = flag.m_eFlag;
		return *this;
	}

	BitFlagEnumClass operator|=(E flag) {
		m_eFlag = cast_enum(cast_num(flag) | cast_num(m_eFlag));
		return *this;
	}

	BitFlagEnumClass operator|=(BitFlagEnumClass flag) {
		m_eFlag = cast_enum(cast_num(flag.m_eFlag) | cast_num(flag.m_eFlag));
		return *this;
	}

	BitFlagEnumClass operator&=(E flag) {
		m_eFlag = cast_enum(cast_num(m_eFlag) & cast_num(flag));
		return *this;
	}

	BitFlagEnumClass operator&=(BitFlagEnumClass flag) {
		m_eFlag = cast_enum(cast_num(flag.m_eFlag) & cast_num(flag.m_eFlag));
		return *this;
	}

	BitFlagEnumClass operator^=(E flag) {
		m_eFlag = cast_enum(cast_num(m_eFlag) ^ cast_num(flag));
		return *this;
	}

	BitFlagEnumClass operator^=(BitFlagEnumClass flag) {
		m_eFlag = cast_enum(cast_num(flag.m_eFlag) ^ cast_num(flag.m_eFlag));
		return *this;
	}

	BitFlagEnumClass operator|(E flag) {
		m_eFlag = cast_enum(cast_num(m_eFlag) | cast_num(flag));
		return *this;
	}

	BitFlagEnumClass operator|(BitFlagEnumClass flag) {
		m_eFlag = cast_enum(cast_num(flag.m_eFlag) | cast_num(flag.m_eFlag));
		return *this;
	}

	BitFlagEnumClass operator&(E flag) {
		m_eFlag = cast_enum(cast_num(m_eFlag) & cast_num(flag));
		return *this;
	}

	BitFlagEnumClass operator&(BitFlagEnumClass flag) {
		m_eFlag = cast_enum(cast_num(flag.m_eFlag) & cast_num(flag.m_eFlag));
		return *this;
	}

	BitFlagEnumClass operator^(E flag) {
		m_eFlag = cast_enum(cast_num(m_eFlag) ^ cast_num(flag));
		return *this;
	}

	BitFlagEnumClass operator^(BitFlagEnumClass flag) {
		m_eFlag = cast_enum(cast_num(flag.m_eFlag) ^ cast_num(flag.m_eFlag));
		return *this;
	}
};


template <typename E>
BitFlagEnumClass<E> operator& (E flag, BitFlagEnumClass<E> FlagClass)
{
	return cast_enum(cast_num(flag) & cast_num(FlagClass.m_eFlag));
}

template <typename E>
BitFlagEnumClass<E> operator| (E flag, BitFlagEnumClass<E> FlagClass)
{
	return cast_enum(cast_num(flag) | cast_num(FlagClass.m_eFlag));
}

template <typename E>
BitFlagEnumClass<E> operator^ (E flag, BitFlagEnumClass<E> FlagClass)
{
	return cast_enum(cast_num(flag) ^ cast_num(FlagClass.m_eFlag));
}


template <typename E>
BitFlagEnumClass<E> operator& (E lflag, E rflag)
{
	return cast_enum(cast_num(lflag) & cast_num(rflag));
}

template <typename E>
BitFlagEnumClass<E> operator| (E lflag, E rflag)
{
	return cast_enum(cast_num(lflag) | cast_num(rflag));
}

template <typename E>
BitFlagEnumClass<E> operator^ (E lflag, E rflag)
{
	return cast_enum(cast_num(lflag) ^ cast_num(rflag));
}

#undef cast_num
#undef cast_enum
