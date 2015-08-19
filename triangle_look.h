#pragma once
#define PI(float) 3.1415926
namespace Tool
{
	template<typename Type>

	Type sin(Type theta)
	{
		double temp,test;
		double n=0.0;
		double m=1.0;
		double sin=0.0;

		temp=theta*PI/180.0;
		test=theta*PI/180.0;

		while(fabs(temp)>0.000001)
		{
			for(double i=1.0;i<2*n+2;i++)
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
		double temp,test;
		double n=0.0;
		double m=1.0;
		double cos=0.0;

		temp=theta*PI/180.0;
		test=theta*PI/180.0;

		while(fabs(temp)>0.000001)
		{
			for(double i=1.0;i<2*n+1;i++)
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
		if( theta > -1&& theta <=1)
		{
			
			double n=0.0;
			double arc_tan=0.0;
			double temp;
			temp=theta;
			while(fabs(temp)>0.000001)
			{
				temp=(pow(-1,n)*pow(theta,2*n+1))/(2*n+1);
				arc_tan+=temp;
				n++;
			}
			return arc_tan;
		}
		else
		{
			std::cout<<"ÊäÈëÓÐÎó"<<std::endl;
		}
	}

}