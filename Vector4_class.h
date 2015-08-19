#pragma once
#include <assert.h>
namespace Tool
{
	template <typename Type>
	class Vector4
	{
	public:
		Vector4()
		{

		}
		Vector4(Type M[4])
		{
			m_M[0]=M[0];
			m_M[1]=M[1];
			m_M[2]=M[2];
			m_M[3]=M[3];
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
		inline Type W() const
		{
			return m_M[3];
		}
		inline Type& W()
		{
			return m_M[3];
		}
		inline Type M(int i) const
		{
			assert(i>=0&&i<=3);
			return m_M[i];
		}
		inline Type &M(int i)
		{
			assert(i>=0&&i<=3);
			return m_M[i];
		}
		inline Type operator[](int i) const
		{
			assert(i==0||i==1||i==2||i==3);
			if(i==0)
				return m_M[0];
			else if(i==1)
				return m_M[1];
			else if(i==2)
				return m_M[2];
			else
				return m_M[3];
		}
		inline Type& operator[](int i)
		{
			assert(i==0||i==1||i==2||i==3);
			if(i==0)
				return m_M[0];
			else if(i==1)
				return m_M[1];
			else if(i==2)
				return m_M[2];
			else 
				return m_M[3];
		}
		inline void Vector4_MakeZero()
		{
			m_M[0]=(Type)0;
			m_M[1]=(Type)0;
			m_M[2]=(Type)0;
		}
		inline void Vector4_InitXYZ(const Vector4<Type> v,Type x,Type y,Type z)
		{
			v.X()=x;
			v.Y()=y;
			v.Z()=z;
			v.W()=1.0;
		}
		inline void Vector4_Init(const Vector4<Type> vdst,const Vector4<Type> vsrc)
		{
			vdst.X()=vsrc.X();
			vdst.Y()=vsrc.Y();
			vdst.Z()=vsrc.Z();
			vdst.W()=vsrc.W();
		}
		inline void Vector4_Copy(const Vector4<Type> v)
		{
			m_M[0]=v.X();
			m_M[1]=v.Y();
			m_M[2]=v.Z();
			m_M[3]=v.W();
		}
	protected:
	private:
		Type m_M[4];
	};
}