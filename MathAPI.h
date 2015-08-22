#pragma once
#include "MathConstant.h"
#include "triangle_dis_look.h"
#include "Point2.h"
#include "Point3.h"
#include "Polar2_class.h"
#include "Cylindrical3_class.h"
#include "Spherical3_class.h"
#include "Matrix3x2.h"
#include "Matrix4x3.h"
#include "Parmline3_class.h"
#include "Vector2_class.h"
#include "Plane3.h"

namespace Tool
{
	//坐标系支持函数
	template<typename Type>
	void Polar2_To_Point2(const Polar2<Type> &polar,Point2<Type> &rect)
	{
		rect.X()=polar.r()*sin(polar.theta());
		rect.Y()=polar.r()*cos(polar.theta());

	}
	template<typename Type>
	void Point2_To_Polar2(const Point2<Type> &rect,Polar2<Type> &polar)
	{
		polar.r()=sqrt(pow(rect.X(),2)+pow(rect.Y(),2));
		polar.theta()=arctan(rect.Y()/rect.X());
	}
	template<typename Type>
	void Polar2_To_RectXY(const Polar2<Type> &polar,Type &x,Type &y)
	{
		x=polar.r()*sin(polar.theta());
		y=polar.r()*cos(polar.theta());
	}
	template<typename Type>
	void Point2_To_PolarRTh(const Point2<Type> &rect,Type &r,Type &theta)
	{
		r=sqrt(pow(rect.X(),2)+pow(rect.Y(),2));
		theta=arctan(rect.Y()/rect.X());
	}
	template<typename Type>
	void Cylindrical3_To_Point3(const Cylindrical3<Type> &cy1,Point3<Type> &rect)
	{
		rect.X()=(cy1.r())*(cos(cy1.theta()));
		rect.Y()=(cy1.r())*(sin(cy1.theta()));
		rect.Z()=cy1.z();
	}
	template<typename Type>
	void Cylindrical3_To_RectXYZ(const Cylindrical3<Type> &cy1,Type &x,Type &y,Type &z)
	{
		x=(cy1.r())*(cos(cy1.theta()));
		y=(cy1.r())*(sin(cy1.theta()));
		z=cy1.z();
	}
	template<typename Type>
	void Point3_To_Cylindrical3(const Point3<Type> &rect,Cylindrical3<Type> &cy1)
	{
		cy1.r()=sqrt(pow(rect.X(),2)+pow(rect.Y(),2)+pow(rect.Z(),2));
		cy1.theta()=arctan(rect.Y()/rect.X());
		cy1.z()=rect.Z();
	}
	template<typename Type>
	void Point3_To_CylindricalRThZ(const Point3<Type> &rect,Type &r,Type &theta,Type &z)
	{
		r=sqrt(pow(rect.X(),2)+pow(rect.Y(),2)+pow(rect.Z(),2));
		theta=arctan(rect.Y()/rect.X());
		z=rect.Z();
	}
	template<typename Type>
	void Spherical3_To_Point3(const Spherical3<Type> &sph,Point3<Type> &rect)
	{
		rect.X()=sph.p()*sin(sph.theta())*cos(sph.phi());
		rect.Y()=sph.p()*sin(sph.theta())*sin(sph.phi());
		rect.Z()=sph.p()*cos(sph.theta());
	}
	template<typename Type>
	void Spherical3_To_RectXYZ(const Spherical3<Type> &sph,Type &x,Type &y,Type &z)
	{
		x=sph.p()*sin(sph.theta())*cos(sph.phi());
		y=sph.p()*sin(sph.theta())*sin(sph.phi());
		z=sph.p()*cos(sph.theta());
	}
	template<typename Type>
	Spherical3<Type> Point3_To_Spherical3(const Point3<Type> &rect,Spherical3<Type> &sph)
	{
		sph.p()=sqrt(pow(rect.X(),2)+pow(rect.Y(),2)+pow(rect.Z(),2));
		sph.theta()=arctan(sqrt(pow(rect.X(),2)+pow(rect.Y(),2)/pow(rect.Z(),2)));
		sph.phi()=arctan(rect.Y()/rect.X());
		return sph;
	}
	template<typename Type>
	void Point3_To_SphericalPThPh(const Point3<Type> &rect,Type &p,Type &theta,Type &phi)
	{
		p=sqrt(pow(rect.X(),2)+pow(rect.Y(),2)+pow(rect.Z(),2));
		theta=arctan(sqrt(pow(rect.X(),2)+pow(rect.Y(),2)/pow(rect.Z(),2)));
		phi=arctan(rect.Y()/rect.X());
	}


	//2D向量支持函数
	template<typename Type>
	void Vector2__Add(const Vector2<Type> &va,const Vector2<Type> &vb,Vector2<Type> &vsum)
	{
		vsum.X()=va.X()+vb.X();
		vsum.Y()=va.Y()+vb.Y();
	}
	template<typename Type>
	Vector2<Type> Vector2_Add(const Vector2<Type> &va,const Vector2<Type> &vb)
	{
		Vector2<Type> vsum;
		vsum.X()=va.X()+vb.X();
		vsum.Y()=va.Y()+vb.Y();
		return vsum;
	}
	template<typename Type>
	void Vector2_Sub(const Vector2<Type> &va,const Vector2<Type> &vb,Vector2<Type> &vdiff)
	{
		vdiff.X()=va.X()-vb.X();
		vdiff.Y()=va.Y()-vb.Y();
	}
	template<typename Type>
	Vector2<Type> Vector2_Sub(const Vector2<Type> &va,const Vector2<Type> &vb)
	{
		Vector2<Type> vdiff;
		vdiff.X()=va.X()-vb.X();
		vdiff.Y()=va.Y()-vb.Y();
		return vdiff;
	}
	template<typename Type>
	void Vector2_Scale(const Type &k,const Vector2<Type> &va,Vector2<Type> &vscaled)
	{
		vscaled.X()=k*va.X();
		vscaled.Y()=k*va.Y();
	}
	template<typename Type>
	void Vector2_Scale(const Type &k, Vector2<Type> &va)
	{
		va.X()*=k;
		va.Y()*=k;
	}
	template<typename Type>
	Type Vector2_Dot(const Vector2<Type> &va,const Vector2<Type> &vb)
	{
		Type vc=va.X()*vb.X()+va.Y()*vb.Y();
		return vc;
	}
	template<typename Type>
	Type Vector2_Length(const Vector2<Type> &va)
	{
		Type len=sqrtf(pow(va.X(),2)+pow(va.Y(),2));
		return len;
	}
	template<typename Type>
	Type Vector2_Lenght_Fast(Vector2<Type> &va)
	{

		Type vn=Fast_Distance_2D(va.X(),va.Y());
		return vn;
	}
	template<typename Type>
	void Vector2_Normalize(Vector2<Type> &va)
	{
		Type len=Vector2_Length(va);
		if(len<EPSILON_E5)
			return;
		Type len_inv=1/len;
		va.X()=va.X()*len_inv;
		va.Y()=va.Y()*len_inv;
	}
	template<typename Type>
	void Vector2_Normalize(const Vector2<Type> &va,Vector2<Type> &vn)
	{
		vn.MakeZero();
		Type len=Vector2Length(va);
		if(len<EPSILON_E5)
			return;
		Type len_inv=1/len;
		vn.X()=va.X()*len_inv;
		vn.Y()=va.Y()*len_inv;
	}
	template<typename Type>
	void Vector2_Build(const Vector2<Type> &init,const Vector2<Type> &term,Vector2<Type> &result)
	{
		result.X()=term.X()-init.X();
		result.Y()=term.Y()-init.Y();
	}
	template<typename Type>
	void Vector2_Print(Vector2<Type> &va,char *name="v")
	{
		Write_Error("\n%s=[",name);
		for(int index=0;index<2;index++)
			Write_Error("%f, ",va[index]);
		Write_Error("]");
	}



	//3D向量支持函数

	template<typename Type>
	void Vector3_Add(const Vector3<Type> &va,const Vector3<Type> &vb,Vector3<Type> &vsum)
	{
		vsum.X()=va.X()+vb.X();
		vsum.Y()=va.Y()+vb.Y();
		vsum.Z()=va.Z()+vb.Z();
	}
	template<typename Type>
	Vector3<Type> Vector3_Add(const Vector3<Type> &va,const Vector3<Type> &vb)
	{
		Vector3<Type> vsum;
		vsum.X()=va.X()+vb.X();
		vsum.Y()=va.Y()+vb.Y();
		vsum.Z()=va.Z()+vb.Z();
		return vsum;
	}
	template<typename Type>
	void Vector3_Sub(const Vector3<Type> &va,const Vector3<Type> &vb,Vector3<Type> &vdiff)
	{
		vdiff.X()=va.X()-vb.X();
		vdiff.Y()=va.Y()-vb.Y();
		vdiff.Z()=va.Z()-vb.Z();
	}
	template<typename Type>
	Vector3<Type> Vector3_Sub(const Vector3<Type> &va,const Vector3<Type> &vb)
	{
		Vector3<Type> vdiff;
		vdiff.X()=va.X()-vb.X();
		vdiff.Y()=va.Y()-vb.Y();
		vdiff.Z()=va.Z()-vb.Z();
		return vdiff;
	}
	template<typename Type>
	void Vector3_Scale(const Type &k,const Vector3<Type> &va,Vector3<Type> &vscaled)
	{
		vscaled.X()=k*va.X();
		vscaled.Y()=k*va.Y();
		vscaled.Z()=k*va.Z();
	}
	template<typename Type>
	void Vector3_Scale(const Type &k,Vector3<Type> &va)
	{
		va.X()*=k;
		va.Y()*=k;
		va.Z()*=k;
	}
	template<typename Type>
	Type Vector3_Dot(const Vector3<Type> &va,const Vector3<Type> &vb)
	{
		Type vc=va.X()*vb.X()+va.Y()*vb.Y()+va.Z()*vb.Z();
		return vc;
	}
	template<typename Type>
	void Vector3_Cross(const Vector3<Type> &va,const Vector3<Type> &vb,Vector3<Type> &vn)
	{
		vn.X()=va.Y()*vb.Z()-va.Z()*vb.Y();
		vn.Y()=vb.X()*va.Z()-va.X()*vb.Z();
		vn.Z()=va.X()*vb.Y()-vb.X()*va.Y();
	}
	template<typename Type>
	Vector3<Type> Vector3_Cross(const Vector3<Type> &va,const Vector3<Type> &vb)
	{
		Vector3<Type> vn;
		vn.X()=va.Y()*vb.Z()-va.Z()*vb.Y();
		vn.Y()=vb.X()*va.Z()-va.X()*vb.Z();
		vn.Z()=va.X()*vb.Y()-vb.X()*va.Y();
		return vn;
	}
	template<typename Type>
	Type Vector3_Length(const Vector3<Type> &va)
	{
		Type len=sqrtf(pow(va.X(),2)+pow(va.Y(),2)+pow(va.Z(),2));
		return len;
	}

	template<typename Type>
	Type Vector3_Lenght_Fast(Vector3<Type> &va)
	{

		Type vn=Fast_Distance_3D(va.X(),va.Y(),va.Z());
		return vn;
	}
	template<typename Type>
	void Vector3_Normalize( Vector3<Type> &va)
	{
		Type len=Vector3_Length(va);
		if(len<EPSILON_E5)
			return;
		Type len_inv=1/len;
		va.X()=va.X()*len_inv;
		va.Y()=va.Y()*len_inv;
		va.Z()=va.Z()*len_inv;
	}
	template<typename Type>
	void Vector3_Normalize(const Vector3<Type> &va,Vector3<Type> &vn)
	{
		vn.MakeZero();
		Type len=Vector3Length(va);
		if(len<EPSILON_E5)
			return;
		Type len_inv=1/len;
		vn.X()=va.X()*len_inv;
		vn.Y()=va.Y()*len_inv;
		vn.Z()=va.Z()*len_inv;
	}
	template<typename Type>
	void Vector3_Build(const Vector3<Type> &init,const Vector3<Type> &term,Vector3<Type> &result)
	{
		result.X()=term.X()-init.X();
		result.Y()=term.Y()-init.Y();
		result.Z()=term.Z()-init.Z();
	}
	template<typename Type>
	Type Vector3_CosTh(const Vector3<Type> &va,const Vector3<Type> &vb)
	{
		Type vc=Vector3_Dot(va,vb)/(Vector3_Length(va)*Vector3_Length(vb));
		return vc;
	}
	template<typename Type>
	void Vector3_Print(Vector3<Type> &va,char *name="v")
	{
		Write_Error("\n%s=[",name);
		for(int index=0;index<3;index++)
			Write_Error("%f, ",va[index]);
		Write_Error("]");
	}


	//4D向量支持函数

	template<typename Type>
	void Vector4_Add(const Vector4<Type> &va,const Vector4<Type> &vb,Vector4<Type> &vsum)
	{
		vsum.X()=va.X()+vb.X();
		vsum.Y()=va.Y()+vb.Y();
		vsum.Z()=va.Z()+vb.Z();
		vsum.W()=va.W()+vb.W();
	}
	template<typename Type>
	Vector4<Type> Vector4_Add(const Vector4<Type> &va,const Vector4<Type> &vb)
	{
		Vector4<Type> vsum;
		vsum.X()=va.X()+vb.X();
		vsum.Y()=va.Y()+vb.Y();
		vsum.Z()=va.Z()+vb.Z();
		vsum.W()=va.W()+vb.W();
		return vsum;
	}
	
	template<typename Type>
	void Vector4_Sub(const Vector4<Type> va,const Vector4<Type> vb,Vector4<Type> vdiff)
	{
		vdiff.X()=va.X()-vb.X();
		vdiff.Y()=va.Y()-vb.Y();
		vdiff.Z()=va.Z()-vb.Z();
		vdiff.W()=va.W()-vb.W();
	}
	template<typename Type>
	Vector4<Type> Vector4_Sub(const Vector4<Type> &va,const Vector4<Type> &vb)
	{
		Vector4<Type> vdiff;
		vdiff.X()=va.X()-vb.X();
		vdiff.Y()=va.Y()-vb.Y();
		vdiff.Z()=va.Z()-vb.Z();
		vdiff.W()=va.W()-vb.W();
		return vdiff;
	}
	
	
	template<typename Type>
	void Vector4_Scale(const Type &k,const Vector4<Type> &va,Vector4<Type> &vscaled)
	{
		vscaled.X()=k*va.X();
		vscaled.Y()=k*va.Y();
		vscaled.Z()=k*va.Z();
		vscaled.W()=1;
	
	}
	template<typename Type>
	void Vector4_Scale(const Type &k,Vector4<Type> &va)
	{
		va.X()*=k;
		va.Y()*=k;
		va.Z()*=k;
		va.W()=1;
	}
	
	
	template<typename Type>
	Type Vector4_Dot(const Vector4<Type> &va,const Vector4<Type> &vb)
	{
		Type vc=va.X()*vb.X()+va.Y()*vb.Y()+va.Z()*vb.Z();
		return vc;
	}
	
	
	template<typename Type>
	void Vector4_Cross(const Vector4<Type> &va,const Vector4<Type> &vb)
	{
		Vector4<Type> vn;
		vn.X()=va.Y()*vb.Z()-va.Z()*vb.Y();
		vn.Y()=vb.X()*va.Z()-va.X()*vb.Z();
		vn.Z()=va.X()*vb.Y()-vb.X()*va.Y();
		vn.W()=1;
	}
	template<typename Type>
	void Vector4_Cross(const Vector4<Type> &va,const Vector4<Type> &vb,Vector4<Type> &vn)
	{
		vn.X()=va.Y()*vb.Z()-va.Z()*vb.Y();
		vn.Y()=vb.X()*va.Z()-va.X()*vb.Z();
		vn.Z()=va.X()*vb.Y()-vb.X()*va.Y();
		vn.W()=1;
	}
	template<typename Type>
	Vector4<Type> Vector4_Cross(const Vector4<Type> &va,const Vector4<Type> &vb)
	{
		Vector4<Type> vn;
		vn.X()=va.Y()*vb.Z()-va.Z()*vb.Y();
		vn.Y()=vb.X()*va.Z()-va.X()*vb.Z();
		vn.Z()=va.X()*vb.Y()-vb.X()*va.Y();
		vn.W()=1;
		return vn;
	}
	
	
	template<typename Type>
	Type Vector4_Length(const Vector4<Type> &va)
	{
		Type len=sqrtf(pow(va.X(),2)+pow(va.Y(),2)+pow(va.Z(),2)+pow(va.W(),2));
		return len;
	}

	template<typename Type>
	Type Vector4_Lenght_Fast(Vector4<Type> &va)
	{

		Type vn=Fast_Distance_3D(va.X(),va.Y(),va.Z());
		return vn;
	}
	
	
	template<typename Type>
	void Vector4_Normalize( Vector4<Type> &va)
	{
		Type len=Vector4_Length(va);
		if(len<EPSILON_E5)
			return;
		Type len_inv=1/len;
		va.X()=va.X()*len_inv;
		va.Y()=va.Y()*len_inv;
		va.Z()=va.Z()*len_inv;
		va.W()=1;
	}
	template<typename Type>
	void Vector4_Normalize(const Vector4<Type> &va,Vector4<Type> &vn)
	{
		vn.MakeZero();
		Type len=Vector4_Length(va);
		if(len<EPSILON_E5)
			return;
		Type len_inv=1/len;
		vn.X()=va.X()*len_inv;
		vn.Y()=va.Y()*len_inv;
		vn.Z()=va.Z()*len_inv;
		vn.W()=1;
	}
	

	
	template<typename Type>
	void Vector4_Build(const Vector4<Type> &init,const Vector4<Type> &term,Vector4<Type> &result)
	{
		result.X()=term.X()-init.X();
		result.Y()=term.Y()-init.Y();
		result.Z()=term.Z()-init.Z();
		result.W()=1;
	}
	
	template<typename Type>
	Type Vector4_CosTh(const Vector4<Type> &va,const Vector4<Type> &vb)
	{
		Type vc=Vector4_Dot(va,vb)/(Vector4_Length(va)*Vector4_Length(vb));
		return vc;
	}
	
	template<typename Type>
	void Vector4_Print(Vector4<Type> &va,char *name="v")
	{
		Write_Error("\n%s[",name);
		for(int index=0;index<4;index++)
			Write_Error("%f, ",va[index]);
		Write_Error("]");
	}


	//2x2矩阵函数

	template<typename Type>
	void Mat_Init_2X2(Matrix2x2<Type> &ma,Type m00,Type m01,Type m10,Type m11)
	{
		ma.M(0,0)=m00;ma.M(0,1)=m01;
		ma.M(1,0)=m10;ma.M(1,1)=m11;
	}
	template<typename Type>
	void Mat_Add_2X2(Matrix2x2<Type> &ma,Matrix2x2<Type> &mb,Matrix2x2<Type> &msum)
	{
		msum.M(0,0)=ma.M(0,0)+mb.M(0,0);
		msum.M(0,1)=ma.M(0,1)+mb.M(0,1);
		msum.M(1,0)=ma.M(1,0)+mb.M(1,0);
		msum.M(1,1)=ma.M(1,1)+mb.M(1,1);
	}
	template<typename Type>
	void Mat_Mul_2X2(const Matrix2x2<Type> &ma,const Matrix2x2<Type> &mb,Matrix2x2<Type> &mprod)
	{
		mprod.M(0,0)=ma.M(0,0)*mb.M(0,0)+ma.M(0,1)*mb.M(1,0);
		mprod.M(0,1)=ma.M(0,0)*mb.M(0,1)+ma.M(0,1)*mb.M(1,1);
		mprod.M(1,0)=ma.M(1,0)*mb.M(0,0)+ma.M(1,1)*mb.M(1,0);
		mprod.M(1,1)=ma.M(1,0)*mb.M(1,0)+ma.M(1,1)*mb.M(1,1);
	}
	template<typename Type>
	Type Mat_Det_2X2(const Matrix2x2<Type> &m)
	{
		Type result=m.M(0,0)*m.M(1,1)-m.M(0,1)*m.M(1,0);
		return result;
	}
	template<typename Type>
	int Mat_Inverse_2X2(const Matrix2x2<Type> &m,Matrix2x2<Type> &mi)
	{
		float det=Mat_Det_2X2(m);
		if(fabs(det)<EPSILON_E5)
			return 0;
		else{
			float det_inv=1.0/det;
			mi.M(0,0)=det_inv*(m.M(1,1));
			mi.M(0,1)=det_inv*((-1)*m.M(0,1));
			mi.M(1,0)=det_inv*((-1)*m.M(1,0));
			mi.M(1,1)=det_inv*(m.M(1,1));
			return 1;
		}
	}


	//3x3矩阵函数

	template<typename Type>
	void Mat_Init_3X2(Matrix3x2<Type> &ma, Type m00,Type m01,
		                                  Type m10,Type m11,
										  Type m20,Type m21)
	{
		ma.M(0,0)=m00;ma.M(0,1)=m01;
		ma.M(1,0)=m10;ma.M(1,1)=m11;
		ma.M(2,0)=m20;ma.M(2,1)=m21;
	}
	template<typename Type>
	void Mat_Init_3X3(Matrix3x3<Type> &ma,Type m00,Type m01,Type m02,
		                                 Type m10,Type m11,Type m12,
		                                 Type m20,Type m21,Type m22)
	{
		ma.M(0,0)=m00;ma.M(0,1)=m01;ma.M(0,2)=m02;
		ma.M(1,0)=m10;ma.M(1,1)=m11;ma.M(1,2)=m12;
		ma.M(2,0)=m20;ma.M(2,1)=m21;ma.M(2,2)=m22;
	}
	template<typename Type>
	void Mat_Add_3X3(Matrix3x3<Type> &ma,Matrix3x3<Type> &mb,Matrix3x3<Type> &msum)
	{
		for(int row=0;row<3;row++)
			for(int col=0;col<3;col++)
			{
				msum.M(row,col)=ma.M(row,col)+mb.M(row,col);
			}
	}
	template<typename Type>
	void Mat_Mul_1X3_3X3(const Matrix1x3<Type> &ma,const Matrix3x3<Type> &mb,Matrix1x3<Type> &mprod)
	{
		for(int col=0;col<3;col++)
		{
			float sum=0;
			for(int row=0;row<3;row++)
			{
				sum+=(ma.M(row)*mb.M(row,col));
			}
			mprod.M(col)=sum;
		}
	}
	template<typename Type>
	void Mat_Mul_3X3(const Matrix3x3<Type> &ma,const Matrix3x3<Type> &mb,Matrix3x3<Type> &mprod)
	{
		for(int row=0;row<3;row++)
		{
			for(int col=0;col<3;col++)
			{
				float sum=0;
				for(int index=0;index<3;index++)
				{
					sum+=(ma.M(row,index)*mb.M(index,col));
				}
				mprod.M(row,col)=sum;
			}
		}
	}
	template<typename Type>
	Type Mat_Det_3X3(const Matrix3x3<Type> &m)
	{
		Type result=(m.M(0,0)*(m.M(1,1)*m.M(2,2)-m.M(1,2)*m.M(2,1))-
			m.M(0,1)*(m.M(1,0)*m.M(2,2)-m.M(2,0)*m.M(1,2))+
			m.M(0,2)*(m.M(1,0)*m.M(2,1)-m.M(2,0)*m.M(1,1)));
		return result;
	}
	template<typename Type>
	int Mat_Inverse_3X3(const Matrix3x3<Type> &m,Matrix3x3<Type> &mi)
	{
		float det=Mat_Det_3X3(m);
		if(fabs(det)<EPSILON_E5)
			return 0;
		else
		{
			float det_inv=1.0/det;
			mi.M(0,0)=det_inv*(m.M(1,1)*m.M(2,2)-m.M(2,1)*m.M(1,2));
			mi.M(1,0)=-det_inv*(m.M(1,0)*m.M(2,2)-m.M(2,0)*m.M(1,2));
			mi.M(2,0)=det_inv*(m.M(1,0)*m.M(2,1)-m.M(2,0)*m.M(1,1));

			mi.M(0,1)=-det_inv*(m.M(0,1)*m.M(2,2)-m.M(2,1)*m.M(0,2));
			mi.M(1,1)=det_inv*(m.M(0,0)*m.M(2,2)-m.M(2,0)*m.M(0,2));
			mi.M(2,1)=-det_inv*(m.M(0,0)*m.M(2,1)-m.M(2,0)*m.M(0,1));

			mi.M(0,2)=det_inv*(m.M(0,1)*m.M(1,2)-m.M(1,1)*m.M(0,2));
			mi.M(1,2)=-det_inv*(m.M(0,0)*m.M(1,2)-m.M(1,0)*m.M(0,2));
			mi.M(2,2)=det_inv*(m.M(0,0)*m.M(1,1)-m.M(1,0)*m.M(0,1));
			return 1;
		}
	}
	template<typename Type>
	void Mat_Mul_Vector3_3X3(const Vector3<Type> &va,const Matrix3x3<Type> &mb,Vector3<Type> &vprod)
	{
		for(int col=0;col<3;col++)
		{
			float sum=0;
			for(int row=0;row<3;row++)
			{
				sum+=(va.M(row)*mb.M(row,col));
			}
			vprod.M(col)=sum;
		}
	}


	//4x4矩阵函数

	template<typename Type>
	void Mat_Init_4X4(Matrix4x4<Type> &ma, Type &m00, Type &m01, Type &m02, Type &m03, 
		                                Type &m10, Type &m11, Type &m12, Type &m13, 
		                                Type &m20, Type &m21, Type &m22, Type &m23, 
		                                Type &m30, Type &m31, Type &m32, Type &m33)
	{
		ma.M(0,0)=m00;ma.M(0,1)=m01;ma.M(0,2)=m02;ma.M(0,3)=m03;
		ma.M(1,0)=m10;ma.M(1,1)=m11;ma.M(1,2)=m12;ma.M(1,3)=m13;
		ma.M(2,0)=m20;ma.M(2,1)=m21;ma.M(2,2)=m22;ma.M(2,3)=m23;
		ma.M(3,0)=m30,ma.M(3,1)=m31;ma.M(3,2)=m32,ma.M(3,3)=m33;
	}
	
	
	template<typename Type>
	void Mat_Add_4X4(Matrix4x4<Type> &ma,Matrix4x4<Type> &mb,Matrix4x4<Type> &msum)
	{
		for(int row=0;row<4;row++)
			for(int col=0;col<4;col++)
			{
				msum.M(row,col)=ma.M(row,col)+mb.M(row,col);
			}
	}
	
	
	template<typename Type>
	void Mat_Mul_4X4(const Matrix4x4<Type> &ma,const Matrix4x4<Type> &mb,Matrix4x4<Type> &mprod)
	{
		for(int row=0;row<4;row++)
		{
			for(int col=0;col<4;col++)
			{
				float sum=0;
				for(int index=0;index<4;index++)
				{
					sum+=(ma.M(row,index)*mb.M(index,col));
				}
				mprod.M(row,col)=sum;
			}
		}
	}
 
	
	template<typename Type>
	void Mat_Mul_1X4_4X4(const Matrix1x4<Type> &ma,const Matrix4x4<Type> &mb,Matrix1x4<Type> &mprod)
	{
		for(int col=0;col<4;col++)
		{
			float sum=0;
			for(int row=0;row<4;row++)
			{
				sum+=(ma.M(row)*mb.M(row,col));
			}
			mprod.M(col)=sum;
		}
	}
	
	template<typename Type>
	void Mat_Mul_Vector3_4X4(const Vector3<Type> &va,Matrix4x4<Type> &mb,Vector3<Type> &vprod)
	{
		for(int col=0;col<3;col++)
		{
			float sum=0;
			for(int row=0;row<3;row++)
			{
				sum+=(va.M(row)*mb.M(row,col));
			}
			vprod.M(col)=sum;
		}
	}
	template<typename Type>
	void Mat_Mul_Vector3_4X3(const Vector3<Type> &va,Matrix4x3<Type> &mb,Vector3<Type> &vprod)
	{
		for(int col=0;col<3;col++)
		{
			float sum=0;
			for(int row=0;row<3;row++)
			{
				sum+=(va.M(row)*mb.M(row,col));
			}
			vprod.M(col)=sum;
		}
	}
	template<typename Type>
	void Mat_Mul_Vector4_4X4(const Vector4<Type> &va,Matrix4x4<Type> &mb,Vector4<Type> &vprod)
	{
		for(int col=0;col<4;col++)
		{
			float sum=0;
			for(int row=0;row<4;row++)
			{
				sum+=(va.M(row)*mb.M(row,col));
			}
			vprod.M(col)=sum;
		}

	}
	template<typename Type>
	void Mat_Mul_Vector4_4X3(const Vector4<Type> &va,Matrix4x4<Type> &mb,Vector4<Type> &vprod)
	{
		for(int col=0;col<3;col++)
		{
			float sum=0;
			for(int row=0;row<4;row++)
			{
				sum+=(va.M(row)*mb.M(row,col));
			}
			vprod.M(col)=sum;
		}
		vprod.M(3)=va.M(3);
	}
	
	
	template<typename Type>
	Type Mat_Det_4X4(const Matrix4x4<Type> &m)
	{
		Type result=(m.M(0,0)*(m.M(1,1)*m.M(2,2)-m.M(1,2)*m.M(2,1))-
			m.M(0,1)*(m.M(1,0)*m.M(2,2)-m.M(2,0)*m.M(1,2))+
			m.M(0,2)*(m.M(1,0)*m.M(2,1)-m.M(2,0)*m.M(1,1)));
		return result;
	}
	

	template<typename Type>
	int Mat_Inverse_4X4(const Matrix4x4<Type> &m,Matrix4x4<Type> &mi)
	{
		float det=Mat_Det_4X4(m);
		if(fabs(det)<EPSILON_E5)
			return 0;
		float det_inv=1.0f/det;
		mi.M(0,0)=det_inv*(m.M(1,1)*m.M(2,2)-m.M(1,2)*m.M(2,1));
		mi.M(0,1)=-det_inv*(m.M(0,1)*m.M(2,2)-m.M(0,2)*m.M(2,1));
		mi.M(0,2)=det_inv*(m.M(0,1)*m.M(1,2)-m.M(0,2)*m.M(1,1));
		mi.M(0,3)=0.0f;

		mi.M(1,0)=-det_inv*(m.M(1,0)*m.M(2,2)-m.M(1,2)*m.M(2,0));
		mi.M(1,1)=det_inv*(m.M(0,0)*m.M(2,2)-m.M(0,2)*m.M(2,0));
		mi.M(1,2)=-det_inv*(m.M(0,0)*m.M(1,2)-m.M(0,2)*m.M(1,0));
		mi.M(1,3)=0.0f;

		mi.M(2,0)=det_inv*(m.M(1,0)*m.M(2,1)-m.M(1,1)*m.M(2,0));
		mi.M(2,1)=-det_inv*(m.M(0,0)*m.M(2,1)-m.M(0,1)*m.M(2,0));
		mi.M(2,2)=det_inv*(m.M(0,0)*m.M(1,1)-m.M(0,1)*m.M(1,0));
		mi.M(2,3)=0.0f;

		mi.M(3,0)=-(m.M(3,0)*m.M(0,0)+m.M(3,1)*m.M(1,0)+m.M(3,2)*m.M(2,0));
		mi.M(3,1)=-(m.M(3,0)*m.M(0,1)+m.M(3,1)*m.M(1,1)+m.M(3,2)*m.M(2,1));
		mi.M(3,2)=-(m.M(3,0)*m.M(0,2)+m.M(3,1)*m.M(1,2)+m.M(3,2)*m.M(2,2));
		mi.M(3,3)=1.0f;

		return 1;
	}

	//2D参数化直线函数

	template<typename Type>
	void Init_Param_Line2( Vector2<Type> p_init,Vector2<Type> p_term,Parmline2<float> &p)
	{
		Vector2_Init(p.p0(),p_init);
		Vector2_Init(p.p1(),p_term);
		Vector2_Build(p_init,p_term,p.v());
	}
	template<typename Type>
	void Compute_Parm_Line2(const Parmline2<Type> &p,const Type t,Vector2<Type> &pt)
	{
		pt.X()=p.p0().X()+p.v().X()*t;
		pt.Y()=p.p0().Y()+p.v().Y()*t;
	}
	template<typename Type>
	int Intersect_Parm_Lines2(const Parmline2<Type> &p1,const Parmline2<Type> &p2,Type t1,Type t2)
	{
		float det_p1p2=(p1.v().X()*p2.v().Y()-p1.v().Y()*p2.v().X());
		if(fabs(det_p1p2)<=EPSILON_E5)
		{
			return PARM_LINE_NO_INTERSECT;
		}

		t1=(p2.v().X()*(p1.p0().Y()-p2.p0().Y())-p2.v().Y()*(p1.p0().X()-p2.p0().X()))/det_p1p2;
		t2=(p1.v().X()*(p1.p0().Y()-p2.p0().Y())-p1.v().Y()*(p1.p0().X()-p2.p0().X()))/det_p1p2;

		if((t1>=0)&&(t1<1)&&(t2>=0)&&(t2<=1))
			return PARM_LINE_INTERSECT_IN_SEGMENT;
		else
			return PARM_LINE_INTERSECT_OUT_SEGMENT;
	}
	template<typename Type>
	int Intersect_Parm_Lines2(const Parmline2<Type> &p1,const Parmline2<Type> &p2,Point2<Type> &pt)
	{
		float t1,t2,det_p1p2=(p1.v().X()*p2.v().Y()-p1.v().Y()*p2.v().X());
		if(fabs(det_p1p2)<=EPSILON_E5)
		{
			return PARM_LINE_NO_INTERSECT;
		}

		t1=(p2.v().X()*(p1.p0().Y()-p2.p0().Y())-p2.v().Y()*(p1.p0().X()-p2.p0().X()))/det_p1p2;
		t2=(p1.v().X()*(p1.p0().Y()-p2.p0().Y())-p1.v().Y()*(p1.p0().X()-p2.p0().X()))/det_p1p2;

		pt.X()=p1.p0().X()+p1.v().X()*t1;
		pt.Y()=p1.p0().Y()+p1.v().Y()*t2;
		if((t1>=0)&&(t1<1)&&(t2>=0)&&(t2<=1))
			return PARM_LINE_INTERSECT_IN_SEGMENT;
		else
			return PARM_LINE_INTERSECT_OUT_SEGMENT;
	}


	//3D参数化直线函数


	template<typename Type>
	void Init_Param_Line3(Vector3<Type> &p_init,Vector3<Type> &p_term,Parmline3<Type> &p)
	{
		Vector3_Init(p.p0(),p_init);
		Vector3_Init(p.p1(),p_term);
		Vector3_Build(p_init,p_term,p.v());
	}
	template<typename Type>
	void Compute_Parm_Line3(const Parmline3<Type> &p,const Type t,Vector3<Type> &pt)
	{
		pt.X()=p.p0().X()+p.v().X()*t;
		pt.Y()=p.p0().Y()+p.v().Y()*t;
		pt.Z()=p.p0().Z()+p.v().Z()*t;
	}

	//3D平面函数
	template<typename Type>
	void Plane3_Init(Plane3<Type> &plane,Vector3<Type> &p0,Vector3<Type> &normal,int normalize=0)
	{
		Vector3_Copy(plane.n(),p0);
		if(!normalize)
			Vector3_Copy(plane.n(),normal);
		else
		{
			Vector3_Normalize(normal,plane.n());
		}

	}
	template<typename Type>
	Type Compute_Point_In_Plane3(Vector3<Type> &pt,Plane3<Type> &plane)
	{
		Type hs=plane.n().X()*(pt.X()-plane.p0().X())+plane.n.Y()*(pt.Y()-plane.p0().Y())+
			    plane.n().Z()*(pt.Z()-plane.p0().Z());
		return hs;
	}
	template<typename Type>
	int Intersect_Param_Line3_Plane3(Parmline3<Type> &pline,Plane3<Type> &plane,Type t,Vector3<Type> &pt)
	{

	}


	//四元数支持函数
	template<typename Type>
	void Quat_Add(const Quat<Type> &q1,const Quat<Type> &q2,Quat<Type> &qsum)
	{
		qsum.X()=q1.X()+q2.X();
		qsum.Y()=q1.Y()+q2.Y();
		qsum.Z()=q1.Z()+q2.Z();
		qsum.W()=q1.W()+q2.W();
	}

	template<typename Type>
	void Quat_Sub(const Quat<Type> &q1,const Quat<Type> &q2,Quat<Type> &qsub)
	{
		qsub.X()=q1.X()-q2.X();
		qsub.Y()=q1.Y()-q2.Y();
		qsub.Z()=q1.Z()-q2.Z();
		qsub.W()=q1.W()-q2.W();
	}
	template<typename Type>
	void Quat_Conjugate(const Quat<Type> &q,Quat<Type> &qconj)
	{
		qconj.X()=-q.X();
		qconj.Y()=-q.Y();
		qconj.Z()=-q.Z();
		qconj.W()=q.W();
	}
	template<typename Type>
	void Quat_Scale(Quat<Type> &q,Type k)
	{
		q.X()*=k;q.Y()*=k;
		q.Z()*=k;q.W()*=k;
	}
	template<typename Type>
	Type Quat_Norm(const Quat<Type> &q)
	{
		Type temp;
		temp=sqrt(pow(q.W(),2)+pow(q.X(),2)+pow(q.Y(),2)+pow(q.Z(),2));
		return temp;
	}
	template<typename Type>
	Type Quat_Norm2(const Quat<Type> &q)
	{
		Type temp;
		temp=pow(q.W(),2)+pow(q.X(),2)+pow(q.Y(),2)+pow(q.Z(),2);
		return temp;
	}
	template<typename Type>
	void Quat_Normalize(const Quat<Type> &q,Quat<Type> &qn)
	{
		Type temp=Quat_Norm(q);
		Type temp_inv=1/temp;
		qn.W()=q.W()*temp_inv;
		qn.X()=q.X()*temp_inv;
		qn.Y()=q.Y()*temp_inv;
		qn.Z()=q.Z()*temp_inv;
		
	}
	template<typename Type>
	void Quat_Unit_Inverse(const Quat<Type> &q,Quat<Type> &qi)
	{
		qi.W()=q.W();
		qi.X()=-qi.X();
		qi.Y()=-qi.Y();
		qi.Z()=-qi.Z();
	}
	template<typename Type>
	void Quat_Inverse(const Quat<Type> &q,Quat<Type> &qi)
	{
		Type temp=Quat_Norm2(q);
		Type temp_inv=1.0/temp;
		qi.W()=q.W()*temp_inv;
		qi.X()=-q.X()*temp_inv;
		qi.Y()=-q.Y()*temp_inv;
		qi.Z()=-q.Z()*temp_inv;
	}
	template<typename Type>
	void Quat_Mul(const Quat<Type> &q1,const Quat<Type> &q2,Quat<Type> &qprod)
	{
		qprod.W()=q1.W()*q2.W()-(q1.X()*q2.X()+q1.Y()*q2.Y()+q1.Z()*q2.Z());
		qprod.X()=q1.W()*q2.X()+q1.X()*q2.W()+q1.Y()*q2.Z()-q1.Z()*q2.Y();
		qprod.Y()=q1.W()*q2.Y()-q1.X()*q2.Z()+q1.Y()*q2.W()-q1.Z()*q2.X();
		qprod.Z()=q1.W()*q2.Z()+q1.X()*q2.Y()-q1.Y()*q2.X()+q1.Z()*q2.W();
	}
	template<typename Type>
	void Quat_Triple_Product(const Quat<Type> &q1,const Quat<Type> &q2,const Quat<Type> &q3,Quat<Type> &qprod)
	{
		Quat<Type> temp;
		Quat_Mul(q1,q2,temp);
		Quat_Mul(temp,q3,qprod);
	}
	template<typename Type>
	void Vector3_Theta_Quat(Quat<Type> &q,const Vector3<Type> &v,const Type theta)
	{
		Type theta_div=theta/2.0;
		q.X()=sin(theta_div)*v.X();
		q.Y()=sin(theta_div)*v.Y();
		q.Z()=sin(theta_div)*v.Z();
		q.W()=cos(theta_div);
	}
	template<typename Type>
	void Vector4_Theta_Quat(Quat<Type> &q,const Vector4<Type> &v,const Type theta)
	{
		Type theta_div=theta/2.0;
		q.X()=sin(theta_div)*v.X();
		q.Y()=sin(theta_div)*v.Y();
		q.Z()=sin(theta_div)*v.Z();
		q.W()=cos(theta_div);
	}

}