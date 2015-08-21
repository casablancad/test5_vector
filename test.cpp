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
#include <math.h>
#include <string.h>


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
// 
// 	cout<<"*******************"<<endl;
// 	cout<<"3D向量函数"<<endl;
// 	float m1[3]={1,2,3};
// 	float m2[3]={4,5,6};
// 	Vector3<float> v1(m1);
// 	Vector3<float> v2(m2);
// 	Vector3<float> vsum=Vector3_Add(v1,v2);
// 	cout<<"Vector3Add"<<" "<<vsum.X()<<" "<<vsum.Y()<<" "<<vsum.Z()<<endl;
// 	Vector3<float> vsub=Vector3_Sub(v2,v1);
// 	cout<<"Vector3Sub"<<" "<<vsub.X()<<" "<<vsub.Y()<<" "<<vsub.Z()<<endl;
// 	Vector3_Scale((float)3,v1);
// 	cout<<"Vector3Scale"<<" "<<v1.X()<<" "<<v1.Y()<<" "<<v1.Z()<<endl;
// 	float vdot=Vector3_Dot(v1,v2);
// 	cout<<"Vector3Dot"<<" "<<vdot<<endl;
// 	Vector3<float> vcross=Vector3_Cross(v1,v2);
// 	cout<<"Vector3Cross"<<" "<<vcross.X()<<" "<<vcross.Y()<<" "<<vcross.Z()<<endl;
// 	float vlen=Vector3_Length(v1);
// 	cout<<"Vector3Length"<<vlen<<endl;
// 	Vector3_Normalize(v1);
// 	cout<<"Vector3Normalize"<<v1.X()<<" "<<v1.Y()<<" "<<v1.Z()<<endl;
// 	Vector3<float> vBuild;
// 	Vector3_Build(v1,v2,vBuild);
// 	cout<<"Vector3Build"<<" "<<vBuild.X()<<" "<<vBuild.Y()<<" "<<vBuild.Z()<<endl;
// 	float vcosth=Vector3_CosTh(v1,v2);
// 	cout<<"Vector3CosTh"<<" "<<vcosth<<endl;

// 	cout<<"***********************"<<endl;
// 	cout<<"4D向量函数"<<endl;
// 	float m1[4]={1,0,0,1};
// 	float m2[4]={0,1,0,1};
// 	Vector4<float> v1(m1);
// 	Vector4<float> v2(m2);
// 	Vector4<float> vsum=Vector4_Add(v1,v2);
// 	cout<<"Vector4Add"<<" "<<vsum.X()<<" "<<vsum.Y()<<" "<<vsum.Z()<<" "<<vsum.W()<<endl;
// 	Vector4<float> vsub=Vector4_Sub(v1,v2);
// 	cout<<"Vector4Sub"<<" "<<vsub.X()<<" "<<vsub.Y()<<" "<<vsub.Z()<<" "<<vsum.W()<<endl;
// 	Vector4_Scale((float)2,v1);
// 	cout<<"Vector4Scale"<<v1.X()<<" "<<v1.Y()<<" "<<v1.Z()<<" "<<v1.W()<<endl;
// 	float vDot=Vector4_Dot(v1,v2);
// 	cout<<"Vector4Dot"<<" "<<vDot<<endl;
// 	Vector4<float> vCross;
// 	Vector4_Cross(v1,v2,vCross);
// 	cout<<"Vecotr4Cross"<<" "<<vCross.X()<<" "<<vCross.Y()<<" "<<vCross.Z()<<" "<<vCross.W()<<endl;
// 	float vlen=Vector4_Length(v1);
// 	cout<<"Vector4Length"<<" "<<vlen<<endl;
// 	Vector4_Normalize(v2);
// 	cout<<"Vector4Normalize"<<" "<<v2.X()<<" "<<v2.Y()<<" "<<v2.Z()<<" "<<v2.W()<<endl;
// 	Vector4<float> vBuild;
// 	Vector4_Build(v1,v2,vBuild);
// 	cout<<"Vector4Build"<<" "<<vBuild.X()<<" "<<vBuild.Y()<<" "<<vBuild.Z()<<" "<<vBuild.W()<<endl;
// 	float vCosTh=Vector4_CosTh(v1,v2);
// 	cout<<"Vector4CosTh"<<" "<<vCosTh<<endl;



// 	cout<<"***********************"<<endl;
// 	cout<<"2x2矩阵函数"<<endl;
// 	Matrix2x2<float> ma;
// 	Mat_Init_2X2(ma,(float)1,(float)0,(float)0,(float)1);
// 	cout<<"MatInit2x2"<<" "<<ma.M(0,0)<<" "<<ma.M(0,1)<<" "<<ma.M(1,0)<<" "<<ma.M(1,1)<<endl;
// 	float m_m1[2][2]={1,2,3,4};
// 	float m_m2[2][2]={1,0,0,1};
// 	Matrix2x2<float> m1(m_m1);
// 	Matrix2x2<float> m2(m_m2);
// 	Matrix2x2<float> msum;
// 	Mat_Add_2X2(m1,m2,msum);
// 	cout<<"MatAdd2x2"<<" "<<msum.M(0,0)<<" "<<msum.M(0,1)<<" "<<msum.M(1,0)<<" "<<msum.M(1,1)<<endl;
// 	Matrix2x2<float> mprod;
// 	Mat_Mul_2X2(m1,m2,mprod);
// 	cout<<"MatMul2x2"<<" "<<mprod.M(0,0)<<" "<<mprod.M(0,1)<<" "<<mprod.M(1,0)<<" "<<mprod.M(1,1)<<endl;
// 	float mdet;
// 	mdet=Mat_Det_2X2(m1);
// 	cout<<"MatDet2x2"<<" "<<mdet<<endl;
// 	Matrix2x2<float> min;
// 	Mat_Inverse_2X2(m1,min);
// 	cout<<"MatInverse"<<" "<<min.M(0,0)<<" "<<min.M(0,1)<<" "<<min.M(1,0)<<" "<<min.M(1,1)<<endl;


//   cout<<"***********************"<<endl;
//   cout<<"3x3矩阵函数"<<endl;
//   float m_m1[3]={1,2,3};
//   float m_m2[3][3]={1,0,0,0,1,0,0,0,1};
//   Matrix1x3<float> m1(m_m1);
//   Matrix3x3<float> m2(m_m2);
//   Matrix1x3<float> mprod;
//   Mat_Mul_1X3_3X3(m1,m2,mprod);
//   cout<<"Mat_Mul_1x3_3x3"<<" "<<mprod.M(0)<<" "<<mprod.M(1)<<" "<<mprod.M(2)<<endl;
//   float m_ma[3][3]={1,2,3,4,5,6,7,8,9};
//   float m_mb[3][3]={1,0,0,0,1,0,0,0,1};
//   Matrix3x3<float> ma(m_ma);
//   Matrix3x3<float> mb(m_mb);
//   Matrix3x3<float> mprod1;
//   Mat_Mul_3X3(ma,mb,mprod1);
//   cout<<"Mat_Mul_3x3"<<" "<<mprod1.M(0,0)<<" "<<mprod1.M(0,1)<<" "<<mprod1.M(0,2)<<endl;
//   cout<<"           "<<" "<<mprod1.M(1,0)<<" "<<mprod1.M(1,1)<<" "<<mprod1.M(1,2)<<endl;
//   cout<<"           "<<" "<<mprod1.M(2,0)<<" "<<mprod1.M(2,1)<<" "<<mprod1.M(2,2)<<endl;
//   Matrix3x2<float> mi_ma;
//   Mat_Init_3X2(mi_ma,(float)1,(float)0,(float)0,(float)1,(float)0,(float)0);
//   cout<<"Ma_Init_3x2"<<" "<<mi_ma.M(0,0)<<" "<<mi_ma.M(0,1)<<endl;
//   cout<<"           "<<" "<<mi_ma.M(1,0)<<" "<<mi_ma.M(1,1)<<endl;
//   cout<<"           "<<" "<<mi_ma.M(2,0)<<" "<<mi_ma.M(2,1)<<endl;
//   Matrix3x3<float> mi_ma1;
//   Mat_Init_3X3(mi_ma1,(float)1,(float)0,(float)0,(float)0,(float)1,(float)0,(float)0,(float)0,(float)1);
//   cout<<"Ma_Init_3x3"<<" "<<mi_ma1.M(0,0)<<" "<<mi_ma1.M(0,1)<<" "<<mi_ma1.M(0,2)<<endl;
//   cout<<"           "<<" "<<mi_ma1.M(1,0)<<" "<<mi_ma1.M(1,1)<<" "<<mi_ma1.M(1,2)<<endl;
//   cout<<"           "<<" "<<mi_ma1.M(2,0)<<" "<<mi_ma1.M(2,1)<<" "<<mi_ma1.M(2,2)<<endl;
//   Matrix3x3<float> ad_ma(m_ma);
//   Matrix3x3<float> ad_mb(m_mb);
//   Matrix3x3<float> ad_msum;
//   Mat_Add_3X3(ad_ma,ad_mb,ad_msum);
//   cout<<"Mat_Add_3x3"<<" "<<ad_msum.M(0,0)<<" "<<ad_msum.M(0,1)<<" "<<ad_msum.M(0,2)<<endl;
//   cout<<"           "<<" "<<ad_msum.M(1,0)<<" "<<ad_msum.M(1,1)<<" "<<ad_msum.M(1,2)<<endl;
//   cout<<"           "<<" "<<ad_msum.M(2,0)<<" "<<ad_msum.M(2,1)<<" "<<ad_msum.M(2,2)<<endl;
//   Vector3<float> va(m_m1);
//   Matrix3x3<float> mv(m_m2);
//   Vector3<float> vprod;
//   Mat_Mul_Vector3_3X3(va,mv,vprod);
//   cout<<"Mat_Mul_Vector3_3x3"<<" "<<vprod.X()<<" "<<vprod.Y()<<" "<<vprod.Z()<<endl;
//   float mdet;
//   mdet=Mat_Det_3X3(ma);
//   cout<<"Mat_Det_3x3"<<" "<<mdet<<endl;
//   Matrix3x3<float> mi_inv;
//   Mat_Inverse_3X3(mb,mi_inv);
//   cout<<"Mat_Inverse_3x3"<<" "<<mi_inv.M(0,0)<<" "<<mi_inv.M(0,1)<<" "<<mi_inv.M(0,2)<<endl;
//   cout<<"               "<<" "<<mi_inv.M(1,0)<<" "<<mi_inv.M(1,1)<<" "<<mi_inv.M(1,2)<<endl;
//   cout<<"               "<<" "<<mi_inv.M(2,0)<<" "<<mi_inv.M(2,1)<<" "<<mi_inv.M(2,2)<<endl;



// cout<<"***********************"<<endl;
// cout<<"4x4矩阵函数"<<endl;
// float m_m1[4][4]={1,2,3,4,5,5,5,5,5,10,11,12,13,14,15,16};
// float m_m2[4][4]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
// Matrix4x4<float> ma(m_m1);Matrix4x4<float> mb(m_m2);
// Matrix4x4<float> msum;
// Mat_Add_4X4(ma,mb,msum);
// cout<<"Matrix_Add_4x4"<<" "<<msum.M(0,0)<<" "<<msum.M(0,1)<<" "<<msum.M(0,2)<<" "<<msum.M(0,3)<<endl;
// cout<<"              "<<" "<<msum.M(1,0)<<" "<<msum.M(1,1)<<" "<<msum.M(1,2)<<" "<<msum.M(1,3)<<endl;
// cout<<"              "<<" "<<msum.M(2,0)<<" "<<msum.M(2,1)<<" "<<msum.M(2,2)<<" "<<msum.M(2,3)<<endl;
// cout<<"              "<<" "<<msum.M(3,0)<<" "<<msum.M(3,1)<<" "<<msum.M(3,2)<<" "<<msum.M(3,3)<<endl;
// Matrix4x4<float> mprod;
// Mat_Mul_4X4(ma,mb,mprod);
// cout<<"Matrix_Mul_4x4"<<" "<<mprod.M(0,0)<<" "<<mprod.M(0,1)<<" "<<mprod.M(0,2)<<" "<<mprod.M(0,3)<<endl;
// cout<<"              "<<" "<<mprod.M(1,0)<<" "<<mprod.M(1,1)<<" "<<mprod.M(1,2)<<" "<<mprod.M(1,3)<<endl;
// cout<<"              "<<" "<<mprod.M(2,0)<<" "<<mprod.M(2,1)<<" "<<mprod.M(2,2)<<" "<<mprod.M(2,3)<<endl;
// cout<<"              "<<" "<<mprod.M(3,0)<<" "<<mprod.M(3,1)<<" "<<mprod.M(3,2)<<" "<<mprod.M(3,3)<<endl;
// float m_ma[4]={1,2,3,4};
// float m_mb[4][4]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
// Matrix1x4<float> ma1(m_ma);Matrix4x4<float> mb1(m_mb);
// Matrix1x4<float> m_mprod;
// Mat_Mul_1X4_4X4(ma1,mb1,m_mprod);
// cout<<"Matrix_Mul_1x4_4x4"<<" "<<m_mprod.M(0)<<" "<<m_mprod.M(1)<<" "<<m_mprod.M(2)<<" "<<m_mprod.M(3)<<endl;
// float m_v1[3]={1,2,3};
// Vector3<float> va(m_v1);
// Matrix4x4<float> vb(m_m2);
// Vector3<float> vprod;
// Mat_Mul_Vector3_4X4(va,vb,vprod);
// cout<<"Mat_Mul_Vector3_4x4"<<" "<<vprod.X()<<" "<<vprod.Y()<<" "<<vprod.Z()<<endl;
// float m_v2[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
// Matrix4x3<float> vb1(m_v2);
// Vector3<float> vprod1;
// Mat_Mul_Vector3_4X3(va,vb1,vprod1);
// cout<<"Mat_Mul_Vector3_4x3"<<" "<<vprod1.X()<<" "<<vprod1.Y()<<" "<<vprod1.Z()<<endl;
// float m_v3[4]={1,2,3,4};
// Vector4<float> va3(m_v3);
// Vector4<float> vprod3;
// Mat_Mul_Vector4_4X4(va3,vb,vprod3);
// cout<<"Mat_Mul_Vector4_4x4"<<" "<<vprod3.X()<<" "<<vprod3.Y()<<" "<<vprod3.Z()<<" "<<vprod3.W()<<endl;
// Vector4<float> vprod4;
// Mat_Mul_Vector4_4X3(va3,vb,vprod4);
// cout<<"Mat_Mul_Vector4_4x3"<<" "<<vprod4.X()<<" "<<vprod4.Y()<<" "<<vprod4.Z()<<" "<<vprod4.W()<<endl;
// float m=Mat_Det_4X4(ma);
// cout<<"Mat_Det_4x4"<<m<<endl;
// Matrix4x4<float>  mi;
// Mat_Inverse_4X4(ma,mi);
// cout<<"Mat_Inverse_4x4"<<" "<<mi.M(0,0)<<" "<<mi.M(0,1)<<" "<<mi.M(0,2)<<" "<<mi.M(0,3)<<endl;
// cout<<"               "<<" "<<mi.M(1,0)<<" "<<mi.M(1,1)<<" "<<mi.M(1,2)<<" "<<mi.M(1,3)<<endl;
// cout<<"               "<<" "<<mi.M(2,0)<<" "<<mi.M(2,1)<<" "<<mi.M(2,2)<<" "<<mi.M(2,3)<<endl;
// cout<<"               "<<" "<<mi.M(3,0)<<" "<<mi.M(3,1)<<" "<<mi.M(3,2)<<" "<<mi.M(3,3)<<endl;
// 
// 

//   cout<<"*******************************"<<endl;
//   cout<<"2D参数化直线函数"<<endl;
//   Vector2<float> p1(1,2);
//   Vector2<float> p2(3,4);
//   Vector2<float> p3(5,8);
//   Parmline2<float> p;
//   Init_Param_Line2(p1,p2,p);
//   cout<<"InitparmLine2"<<" "<<p.p0().X()<<" "<<p.p0().Y()<<" "<<p.p1().X()<<" "<<p.p1().Y()<<endl;
//   Vector2<float> pt;
//   Compute_Parm_Line2(p,(float)2,pt);
//   cout<<"ComputeParamLine"<<" "<<pt.X()<<" "<<pt.Y()<<endl;
//   Parmline2<float> m_p;
//   Init_Param_Line2(p1,p3,m_p);
//   int i=Intersect_Parm_Lines2(p,m_p,(float)2,(float)3);
//   cout<<"InsersectParamLines2"<<" "<<i<<endl;
//   Point2<float> p_pt;
//  int j= Intersect_Parm_Lines2(p,m_p,p_pt);
//    cout<<"InsersectParamLines2"<<" "<<j<<" "<<p_pt.X()<<" "<<p_pt.Y()<<endl;
 
//  cout<<"*******************************"<<endl;
//  cout<<"3D参数化直线函数"<<endl;
//  float m_m1[3]={1,2,3};
//  float m_m2[3]={4,5,6};
//  Vector3<float> p_init(m_m1);
//  Vector3<float> p_term(m_m2);
//  Parmline3<float> p;
//  Init_Param_Line3(p_init,p_term,p);
//  cout<<"Init_Param_Line3"<<" "<<p.p0().X()<<" "<<p.p0().Y()<<" "<<p.p0().Z()<<endl;
//  cout<<"                "<<" "<<p.p1().X()<<" "<<p.p1().Y()<<" "<<p.p1().Z()<<endl;
//  Vector3<float> pt;
//  Compute_Parm_Line3(p,(float)2,pt);
//  cout<<"ComputeParamLine3"<<" "<<pt.X()<<" "<<pt.Y()<<" "<<pt.Z()<<endl;
 





	



	system("pause");
	return 0;
}