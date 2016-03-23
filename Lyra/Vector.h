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
	explicit LVector( float InF );
	LVector( float InX, float InY, float InZ );

	LVector& operator=( const LVector& Other );
	LVector& operator^( const LVector& V ) const;	
	LVector& operator|( const LVector& V ) const;	
	LVector operator+( const LVector& V ) const;
	LVector operator+( float Bias ) const;
	LVector operator-( const LVector& V ) const;
	LVector operator-( float Bias ) const;
	LVector operator*( float Scale ) const;
	LVector operator*( const LVector& V ) const;
	LVector operator/( float Scale ) const;
	LVector operator/( const LVector& V ) const;
	LVector operator==( const LVector& V ) const;
	LVector operator!=( const LVector& V ) const;
	LVector operator-() const;
	LVector operator+=( const LVector& V );
	LVector operator-=( const LVector& V );
	LVector operator*=( float Scale );
	LVector operator/=( float Scale );
	LVector operator*=( const LVector& V );
	LVector operator/=( const LVector& V );
	float& operator[]( int Index );
	float operator[]( int Index ) const;

	float& Component( int Index );
	float Component( int Index ) const;
	bool Equals( const LVector& V, float Tolerance ) const;
	bool AllComponentsEqual( float Tolerance ) const;
	void Set( float InX, float InY, float InZ );
	float GetMax() const;
	float GetAbsMax() const;
	float GetMin() const;
	float GetAbsMin() const;
	LVector ComponentMin( const LVector& Other ) const;
	LVector ComponentMax( const LVector& Other ) const;
	LVector GetAbs() const;
	float Size() const;
	float SizeSquared() const;
	float Size2D() const;
	float SizeSquared2D() const;
	bool IsNearlyZero( float Tolerance ) const;
	bool IsZero() const;
	bool Normalize( float Tolerance );
	bool IsNormalized() const;
	void ToDirectionAndLength( LVector &OutDir, LVector &Length ) const;
	LVector GetSignVector() const;
	static LVector CrossProduct( const LVector& A, const LVector& B );
	static LVector DotProduct( const LVector& A, const LVector& B );
};