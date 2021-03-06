// Copyright 2016-2017 Mirage. All Rights Reserved.	

#pragma once

template<typename T32BITS, typename T64BITS, int PointerSize>
struct SelectIntPointerType
{

};

template<typename T32BITS, typename T64BITS>
struct SelectIntPointerType<T32BITS, T64BITS, 8>
{
	typedef T64BITS TIntPointer;
};

template<typename T32BITS, typename T64BITS>
struct SelectIntPointerType<T32BITS, T64BITS, 4>
{
	typedef T32BITS TIntPointer;
};

/**
* Generic types for almost all compilers and platforms
**/
struct LGenericPlatformTypes
{
	// Unsigned base types
	typedef unsigned char		uint8;
	typedef unsigned short int	uint16;
	typedef unsigned int		uint32;
	typedef unsigned long long	uint64;

	// Signed base types
	typedef signed char			int8;
	typedef signed short int	int16;
	typedef signed int			int32;
	typedef signed long long	int64;

	// Character types
	typedef char				ANSICHAR;
	typedef wchar_t				WIDECHAR;
	typedef uint8				CHAR8;
	typedef uint16				CHAR16;
	typedef uint32				CHAR32;
	typedef WIDECHAR			TCHAR;

	typedef SelectIntPointerType<uint32, uint64, sizeof(void*)>::TIntPointer UPTRINT;
	typedef SelectIntPointerType<int32, int64, sizeof(void*)>::TIntPointer PTRINT;
	typedef UPTRINT SIZE_T;
	typedef PTRINT SSIZE_T;

	typedef int32				TYPE_OF_NULL;
	typedef decltype(nullptr)	TYPE_OF_NULLPTR;
};
