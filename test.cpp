#include "Vector2_class.h"
#include "Vector3_class.h"
#include "Vector4_class.h"
#include "Matrix2x2.h"
#include "Parmline2_class.h"
#include "Quat_class.h"
#include "Polar2_class.h"
#include "MathConstant.h"
#include "MathAPI.h"
#include "triangle_dis_look.h"
#include "Point2.h"


#include <iostream>

using namespace std;
using namespace Tool;
int main()
{
	cout<<"极坐标、柱面坐标和球面坐标函数"<<endl;
// 	Polar2<float> pp(5,PI2);
// 	Point2<float> pr(0,0);
// 	Polar2_To_Point2(pp,pr);
// 	cout<<pr.X()<<" "<<pr.Y()<<endl;
// 	cout<<"------------------"<<endl;
// 	 float x=0;
// 	 float y=0;
// 	 Polar2_To_RectXY(pp,x,y);
// 	 cout<<x<<" "<<y<<endl;

// 	Polar2<float> pp(0,0);
// 	Point2<float> pr(4,3);
// 	Point2_To_Polar2(pr,pp);
// 	cout<<pp.r()<<" "<<pp.theta()<<endl;
// 	cout<<"-------------------"<<endl;
// 	Point2<float> pp(5,PI);
// 	float r=0;
// 	float theta=0;
// 	Point2_To_PolarRTh(pp,r,theta);
// 	cout<<r<<" "<<theta<<endl;

	cout<<"*******************"<<endl;

// 	Cylindrical3<float> pc(10,PI/5,20);
// 	Point3<float> pr(0,0,0);
// 	Cylindrical3_To_Point3(pc,pr);
// 	cout<<pr.X()<<" "<<pr.Y()<<" "<<pr.Z()<<endl;
// 	float x=0;float y=0;float z=0;
// 	Cylindrical3_To_RectXYZ(pc,x,y,z);

// 	Cylindrical3<float> pc(0,0,0);
// 	Point3<float> pr(1,2,3);
// 	Point3_To_Cylindrical3(pr,pc);
// 	cout<<pc.r()<<" "<<pc.theta()<<" "<<pc.z()<<endl;
// 	float r=0;float theta=0;float z=0;
// 	Point3_To_CylindricalRThZ(pr,r,theta,z);
// 	cout<<r<<" "<<theta<<" "<<z<<endl;

	cout<<"*******************"<<endl;

// 	Spherical3<float> ps(1,PI/4,PI/2);
// 	Point3<float> pr(0,0,0);
// 	Spherical3_To_Point3(ps,pr);
// 	cout<<pr.X()<<" "<<pr.Y()<<" "<<pr.Z()<<endl;
// 	float x=0;float y=0;float z=0;
// 	Spherical3_To_RectXYZ(ps,x,y,z);
// 	cout<<x<<" "<<y<<" "<<z<<endl;

// 	Spherical3<float> ps(0,0,0);
// 	Point3<float> pr(10,20,30);
// 	Point3_To_Spherical3(pr,ps);
// 	cout<<ps.p()<<" "<<ps.theta()<<" "<<ps.phi()<<endl;
// 	float p=0;float theta=0;float phi=0;
// 	Point3_To_SphericalPThPh(pr,p,theta,phi);
// 	cout<<p<<" "<<theta<<" "<<phi<<endl;

// 
// 	cout<<"*******************"<<endl;
// 	cout<<"2D向量函数"<<endl;
// 	Vector2<float> v1(1,2);
// 	Vector2<float> v2(3,4);
// 	Vector2<float> vsum=Vector2_Add(v1,v2);
// 	cout<<"Vector2Add"<<" "<<vsum.X()<<" "<<vsum.Y()<<endl;
// 	Vector2<float> vsub=Vector2_Sub(v2,v1);
// 	cout<<"Vector2Sub"<<" "<<vsub.X()<<" "<<vsub.Y()<<endl;
// 	Vector2_Scale((float)2,v1);
// 	cout<<"VectorScale"<<" "<<v1.X()<<" "<<v1.Y()<<endl;
// 	float vDot=Vector2_Dot(v1,v2);
// 	cout<<"Vector2Dot"<<" "<<vDot<<endl;
// 	float vLen=Vector2_Length(v1);
// 	cout<<"Vector2Length"<<" "<<vLen<<endl;
// // 	float vLenFast=Vector2_Lenght_Fast(v2);
// // 	cout<<"Vector2LengthFast"<<" "<<vLenFast<<endl;
// 	Vector2_Normalize(v2);
// 	cout<<"Vector2Normalize"<<" "<<v2.X()<<" "<<v2.Y()<<endl;
// 	Vector2<float> vBuild;
// 	Vector2_Build(v1,v2,vBuild);
// 	cout<<"Vector2Build"<<" "<<vBuild.X()<<" "<<vBuild.Y()<<endl;

	cout<<"*******************"<<endl;
	cout<<"3D向量函数"<<endl;
	float m1[3]={1,2,3};
	float m2[3]={4,5,6};
	Vector3<float> v1(m1);
	Vector3<float> v2(m2);
	Vector3<float> vsum=Vector3_Add(v1,v2);
	cout<<"Vector3Add"<<" "<<vsum.X()<<" "<<vsum.Y()<<" "<<vsum.Z()<<endl;
	Vector3<float> vsub=Vector3_Sub(v2,v1);
	cout<<"Vector3Sub"<<" "<<vsub.X()<<" "<<vsub.Y()<<" "<<vsub.Z()<<endl;
	Vector3_Scale((float)3,v1);
	cout<<"Vector3Scale"<<" "<<v1.X()<<" "<<v1.Y()<<" "<<v1.Z()<<endl;
	float vdot=Vector3_Dot(v1,v2);
	cout<<"Vector3Dot"<<" "<<vdot<<endl;
	Vector3<float> vcross=Vector3_Cross(v1,v2);
	cout<<"Vector3Cross"<<" "<<vcross.X()<<" "<<vcross.Y()<<" "<<vcross.Z()<<endl;
	float vlen=Vector3_Length(v1);
	cout<<"Vector3Length"<<vlen<<endl;
	Vector3_Normalize(v1);
	cout<<"Vector3Normalize"<<v1.X()<<" "<<v1.Y()<<" "<<v1.Z()<<endl;
	Vector3<float> vBuild;
	Vector3_Build(v1,v2,vBuild);
	cout<<"Vector3Build"<<" "<<vBuild.X()<<" "<<vBuild.Y()<<" "<<vBuild.Z()<<endl;
	float vcosth=Vector3_CosTh(v1,v2);
	cout<<"Vector3CosTh"<<" "<<vcosth<<endl;

	




	
	




	



	system("pause");
	return 0;
}