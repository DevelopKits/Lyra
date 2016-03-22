// Copyright 2016-2017 Mirage. All Rights Reserved.

#pragma once

struct LVector
{
public:
	float x;
	float y;
	float z;

public:
	static const LVector ZeroVector;
	static const LVector UpVector;
	static const LVector ForwardVector;
	static const LVector RightVector;

public:
#if ENABLE_NAN_DIAGNOSTIC

#else
	void Diagnostic() const {}
#endif

	LVector();
	explicit LVector(float InF);
	LVector(float InX, float InY, float InZ);

};