#pragma once
//4*4jæÿ’Û
typedef struct MATRIX4X4_TYP
{
	union
	{
		float M[4][4];

		struct  
		{
			float M00,M01,M02,M03;
			float M10,M11,M12,M13;
			float M20,M21,M22,M23;
			float M30,M31,M32,M33;
		};
	};
}MATRIX4X4,*MATRIX4X4_PTR;


//4*3æÿ’Û
typedef struct MATRIX4X3_TYP
{
	union
	{
		float M[4][3];
		struct
		{
			float M00,M01,M02;
			float M10,M11,M12;
			float M20,M21,M23;
			float M30,M31,M32;
		};
	};
}	MATRIX4X3,*MATRIX4X3_PTR;

//1*4æÿ’Û
typedef struct MATRIX1X4_TYP
{
	union
	{
		float M[4];
		struct
		{
			float M00,M01,M02,M03;
		};
	};
} MATRIX1X4,*MATRIX1X4_PTR;

//3*3æÿ’Û
typedef struct MATRIX3X3_TYP
{
	union
	{
		float M[3][3];
		struct
		{
			float M00,M01,M02;
			float M10,M11,M12;
			float M20,M21,M22;
		};
	};
} MATRIX3X3,*MATRIX3X3_PTR;



//1*3æÿ’Û
typedef struct MATRIX1X3_TYP
{
	union
	{
		float M[3];
		struct  
		{
			float M00,M01,M02;
		};
	};
} MATRIX1X3,MATRIX1X3_PTR;

//3*2æÿ’Û
typedef struct MATRIX3X2_TYP
{
	union
	{
		float M[3][2];
		struct  
		{
			float M00,M01;
			float M10,M11;
			float M21,M22;
		};
	};
} MATRIX3X2,*MATRIX3X2_PTR;

//2*2æÿ’Û
typedef struct MATRIX2X2_TYP
{
	union
	{
		float M[2][2];
		struct  
		{
			float M00,M01;
			float M10,M11;
		};
	};
} MATRIX2X2,*MATRIX2X2_PTR;

//1*2æÿ’Û
typedef struct MATRIX1X2_TYP
{
	union
	{
		float M[2];
		struct  
		{
			float M00,M01;
		};
	};
} MATRIX1X2,*MATRIX1X2_PTR;