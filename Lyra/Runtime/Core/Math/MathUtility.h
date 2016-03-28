// Copyright 2016-2017 Mirage. All Rights Reserved.

#pragma once

#ifndef ENABLE_NAN_DIAGNOSTIC
	#define ENABLE_NAN_DIAGNOSTIC 0
#endif

#undef PI
#define PI					(3.1415926535897932f)
#define SMALLNUMBER			(1.e-8f)
#define KINDA_SMALL_NUMBER	(1.e-4f)
#define BIG_NUMBER			(3.4e+38f)
#define EULERS_NUMBER		(2.71828182845904523536f)

#define MAX_FLT (3.402823466e+38F)
#define INV_PI	(0.31830988618f)
#define HALF_PI (1.57079632679f)
#define DELTA	(0.00001f)


struct LMath
{
	static int RandHelper(int A)
	{
		return 0;
	}
};