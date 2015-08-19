#pragma once
typedef struct VECTOR2D_TYP
{
	union{
		float M[2];
		struct{
			float x,y;
		};
	};
}VECTOR2D,POINT2D,*VECTOR2D_PTR,*POINT2D_PTR;

typedef struct VECTOR3D_TYP 
{
	union{
		float M[3];
		struct{
			float x,y,z;
		};
	};
} VECTOR3D,POINT3D,*VECTOR3D_PTR,*POINT3D_PTR;

typedef struct VECTOR4D_TYP
{
	union{
		float M[4];
		struct{
			float x,y,z,w;
		};
	};
}VECTOR4D,POINT4D,*VECTOR4D_PTR,*POINT4D_PTR;

typedef struct VECTOR2DI_TYP
{
	int x,y;
} VECTOR2DI,*VECTOR2DI_PTR;

typedef struct VECTOR2DF_TYP
{
	float x,y;
}VECTOR2DF,*VECTOR2DF_PTR;