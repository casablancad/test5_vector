#include "Vector2_class.h"
#include "Vector3_class.h"
#include "Vector4_class.h"
#include "Matrix2x2.h"
#include "Parmline2_class.h"
#include "Quat_class.h"
#include "Polar2_class.h"
#include "MathConstant.h"
#include "MathAPI.h"
#include "triangle_look.h"
#include "Point2.h"


#include <iostream>

using namespace std;
using namespace Tool;
int main()
{
		//Vector2<float> v(1.0f,2.0f);
	// 	std::cout<<v[0]<<v[1]<<std::endl;
	// 	float M[2][2]={1.0f,2.0f,3.0f,4.0f};
	// 	Matrix2<float> m(M);
	// 	std::cout<<m[0][0]<<std::endl;
	// 
	// 	Vector2<float> origin(2.0f,3.0f);
	// 	Vector2<float> direction(4.0f,5.0f);
	// 	Line2<float> line(origin,direction);

	//float Q[4]={1.0f,1.0f,2.0f,3.0f};
	// 	Quat<float> q(1.0f,1.0f,2.0f,3.0f);
	// 	std::cout<<q.W()<<std::endl;
	// 	std::cout<<q.q0()<<std::endl;
	//  	std::cout<<q.qv()[0]<<std::endl;
	// 	std::cout<<q.M()[0]<<std::endl;
	// 
	// 	Polar2<float> p(3.0f,45);
	// 	std::cout<<p.r()<<std::endl;
	// 	std::cout<<p.theta()<<std::endl;
	// 
	// 	float a=3.0f;
	// 	float b=4.0f;
	// 	std::cout<<MIN(a,b)<<std::endl;
// 	 	double theta=89.9;
// 		double theta0=50.0;
// 		double theta1=51.0;
//         std::cout<<sin_look(theta0)<<std::endl;
// 		std::cout<<sin_look(theta1)<<std::endl;
// 		std::cout<<sin(theta)<<std::endl;
// 	    std::cout<<cos_look(theta)<<std::endl;
// 	  std::cout<<cos(theta)<<std::endl;

	  Polar2<double> pp(5,PI2);
	  Point2<double> pr(0,0);
	  Polar2_To_Point2(pp,pr);
	 // cout<<Polar2_To_Point2(pp,pr).X()<<Polar2_To_Point2(pp,pr).Y()<<endl;
	  //double theta=1.2;
	  //cout<<arctan(theta)<<endl;
	  Matrix2x2<float> m1(1.0f,2.0f,3.0f,4.0f);
	  Matrix2x2<float> m2(1,0,0,1);
	  Matrix2x2<float> mprod;
	  Mat_Mul_2X2(m1,m2,mprod);
	  cout<<mprod.M(0,0)<<endl;
	system("pause");
	return 0;
}