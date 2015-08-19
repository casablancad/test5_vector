#pragma once

#include <assert.h>
namespace Tool
{
	template<typename Type>
	class Vector3
	{
	public:
		 Vector3()
		 {

		 }
		 Vector3(Type M[3])
		 {
			 m_M[0]=M[0];
			 m_M[1]=M[1];
			 m_M[2]=M[2];
		 }
		 inline Type X() const
		 {
			 return m_M[0];
		 }
		 inline Type& X()
		 {
			 return m_M[0];
		 }
		 inline Type Y() const
		 {
			 return m_M[1];
		 }
		 inline Type& Y()
		 {
			 return m_M[1];
		 }
		 inline Type Z() const
		 {
			 return m_M[2];
		 }
		 inline Type& Z()
		 {
			 return m_M[2];
		 }
		 inline Type M(int i) const
		 {
			 assert(i>=0 && i<=2);
			 return m_M[i];
		 }
		 inline Type &M(int i) const
		 {
			 assert(i>=0 && i<=2);
			 return m_M[i];
		 }
		 inline Type operator[](int i) const
		 {
			 assert(i==0||i==1||i==2);
			 if(i==0)
				 return m_M[0];
			 else if(i==1)
				 return m_M[1];
			 else 
				 return m_M[2];
		 }
		 inline Type& operator[](int i)
		 {
			 assert(i==0||i==1||i==2);
			 if(i==0)
				 return m_M[0];
			 else if(i==1)
				 return m_M[1];
			 else 
				 return m_M[2];
		 }

		 inline void Vector3_MakeZero()
		 {
			 m_M[0]=(Type)0;
			 m_M[1]=(Type)0;
			 m_M[2]=(Type)0;

		 }
		 inline void Vector3_InitXYZ(const Vector3<Type> v,Type x,Type y,Type z)
		 {
			 v.X()=x;
			 v.Y()=y;
			 v.Z()=z;
		 }
		 inline void Vector3_Init(const Vector3<Type> vdst,const Vector3<Type> vsrc)
		 {
			 vdst.X()=vsrc.X();
			 vdst.Y()=vsrc.Y();
			 vdst.Z()=vsrc.Z();
		 }
		 inline void Vector3_Copy(const Vector3<Type> v)
		 {
			 m_M[0]=v.X();
			 m_M[1]=v.Y();
			 m_M[2]=v.Z();
		 }
	
	protected:
	private:
		Type m_M[3];

	};
}