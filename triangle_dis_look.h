#pragma once
#include <math.h>
#include "MathConstant.h"

namespace Tool
{
	template<typename Type>

	Type sin(Type theta)
	{
		Type temp,test;
		Type n=0.0;
		Type m=1.0;
		Type sin=0.0;

		temp=theta*PI/180.0;
		test=theta*PI/180.0;

		while(fabs(temp)>0.000001)
		{
			for(Type i=1.0;i<2*n+2;i++)
			{
				m=m*i;
			}
			temp=(pow(-1,n))*(pow(test,2*n+1))/(m);
			sin+=temp;
			m=1.0;
			n++;

		}
		return sin;
	}
	template<typename Type>
	Type cos(Type theta)
	{
		Type temp,test;
		Type n=0.0;
		Type m=1.0;
		Type cos=0.0;

		temp=theta*PI/180.0;
		test=theta*PI/180.0;

		while(fabs(temp)>0.000001)
		{
			for(Type i=1.0;i<2*n+1;i++)
			{
				m=m*i;
			}
			temp=(pow(-1,n))*(pow(test,2*n))/(m);
			cos+=temp;
			m=1.0;
			n++;

		}
		return cos;
	}
	template<typename Type>
	Type arctan(Type theta)
	{
		Type n=0.0;
		Type arc_tan=0.0;
		Type temp;
		temp=theta;
		if(theta>-1 && theta<1)
		{

			while(fabs(temp)>0.000001)
			{
				temp=(pow(-1,n)*pow(theta,2*n+1))/(2*n+1);
				arc_tan+=temp;
				n++;
			}
			return arc_tan;
		}
		else if (theta >=1)
		{
			while(fabs(temp)>0.000001)
			{
				temp=(pow(-1,n+1))/((2*n+1)*pow(theta,2*n+1));
				arc_tan+=temp;
				n++;
			}
			return (arc_tan+PI/2);
		}
		else if (theta<=-1)
		{
			while(fabs(temp)>0.000001)
			{
				temp=(pow(-1,n+1))/((2*n+1)*pow(theta,2*n+1));
				arc_tan+=temp;
				n++;
			}
			return (arc_tan-PI/2);
		}
	}

	template<typename Type>
	Type Fast_Distance_2D(Type &x,Type &y)
	{
		x=abs(x);
		y=abs(y);

		Type mn=MIN(x,y);
		return(x+y-(mn>>1)-(mn>>2)+(mn>>4));
	}
	template<typename Type>
	Type Fast_Distance_3D(Type fx,Type fy,Type fz)
	{
		Type temp;
		Type x;Type y,Type z;
		x=(fabs(fx)*1024);
		y=(fabs(fy)*1024);
		z=(fabs(fz)*1024);
		if(y<x)
			SWAP(x,y,temp);
		if(z<y)
			SWAP(y,z,temp);
		if(y<x)
			SWAP(x,y,temp);
		int dist=(z+11*(y>>5)+(x>>2));
		return(Type(dis>>10));
	}
}