#pragma once
#include "vector_struct.h"
typedef struct QUAT_TYP 
{
	union
	{
		float M[4];
		struct  
		{
			float q0;
			VECTOR3D qv;
		};
		struct
		{
			float w,x,y,z;
		};
	};
} QUAT,*QUAT_PTR;