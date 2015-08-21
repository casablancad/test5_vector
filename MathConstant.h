#pragma once
#include "Matrix4x4.h"
#include "Matrix3x3.h"
#include "Matrix2x2.h"
#include "Vector2_class.h"
namespace Tool
{

	const float PI=3.141592654f;
	const float PI2=6.283185307f;
	const float PI_DIV_2=1.570796327f;
	const float PI_DIV_4=0.785398163f;
	const float PI_INV=0.318309886f;

	const int FIXP16_SHIFT=16;
	const int FIXP16_MAG=65536;
	const int FIXP16_DP_MASK=0x0000ffff;
	const int FIXP16_WP_MASK=0xffff0000;
	const int FIXP16_ROUND_UP=0x0000800000;

	const float EPSILON_E4=1E-4;
	const float EPSILON_E5=1E-5;
	const float EPSILON_E6=1E-6;

	const int PARM_LINE_NO_INTERSECT=0;
	const int PARM_LINE_INTERSECT_IN_SEGMENT=1;
	const int PARM_LINE_INTERSECT_OUT_SEGMENT=2;
	const int PARM_LINE_INTERSECT_EVERYWHERE=3;

	template<typename Type>
	 Matrix4x4<Type> IMAT_4X4()
	{
		Type IMAT[4][4]={
			{ (Type)1, (Type)0, (Type)0, (Type)0 },
			{ (Type)0, (Type)1, (Type)0, (Type)0 },
			{ (Type)0, (Type)0, (Type)1, (Type)0 },
			{ (Type)0, (Type)0, (Type)0, (Type)1 }
		};
		return Matrix4x4<Type>(IMAT);
	}
	template<typename Type>
	 Matrix3x3<Type> IMAT_3X3()
	{
		Type IMAT[3][3]={
			{ (Type)1, (Type)0, (Type)0},
			{ (Type)0, (Type)1, (Type)0},
			{ (Type)0, (Type)0, (Type)1}
			};
		return Matrix3x3<Type>(IMAT);
	}
// 	template<typename Type>
// 	Matrix2x2<Type> IMAT_2X2()
// 	{
// 		Type IMAT[2][2]={
// 			{ (Type)1, (Type)0},
// 			{ (Type)0, (Type)1}
// 	
// 		};
// 		return Matrix2x2<Type>(IMAT);
// 	}

	template <typename Type>
	inline Type MIN( Type &a, Type &b)
	{
		return ((a<b)?(a):(b));
	}

	template <typename Type>
	inline Type MAX( Type a, Type b)
	{
		return ((a>b)?(a):(b));
	}

	template <typename Type>
	inline Type SWAP( Type a, Type b, Type c)
	{
		t=a;
		a=b;
		b=t;
	}

	template <typename Type>
	inline Type DEG_TO_RAD(const Type ang)
	{
		return ((ang)*PI/180.0);
	}

	template <typename Type>
	inline Type RAD_TO_DEG(const Type rads)
	{
		return ((rads)*180.0/PI);
	}

	template <typename Type>
	inline Type RAND_RANGE(const Type x,const Type y)
	{
		return (x)+(rand()%((y)-(x)+1));
	}
	template<typename Type>
	void  Vector2_Init(Vector2<Type> &vdst, const Vector2<Type> &vsrc)
	{
		vdst.X()=vsrc.X();
		vdst.Y()=vsrc.Y();
		
	}
	template<typename Type>
	void Vector3_Init(Vector3<Type> &vdst,const Vector3<Type> &vsrc)
	{
		vdst.X()=vsrc.X();
		vdst.Y()=vsrc.Y();
		vdst.Z()=vsrc.Z();
	}
	template<typename Type>
	void Vector3_Copy(Vector3<Type> &vdst,Vector3<Type> &vsrc)
	{
		vdst.X()=vsrc.X();
		vdst.Y()=vsrc.Y();
		vdst.Z()=vsrc.Z();
	}

}