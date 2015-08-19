#pragma once
#include "Vector3_class.h"
#include "Vector4_class.h"
namespace Tool
{
	template<typename Type>
	class Quat
	{
	public:
		Quat()
		{

		}
		Quat(Type w,Type x,Type y,Type z)
		{
			m_M[0]=w;
			m_M[1]=x;
			m_M[2]=y;
			m_M[3]=z;
		}
		inline Type W() const
		{
			return m_M[0];
		}
		inline Type& W()
		{
			return m_M[0];
		}
		inline Type X() const
		{
			return m_M[1];
		}
		inline Type& X()
		{
			return m_M[1];
		}
		inline Type Y() const
		{
			return m_M[2];
		}

		inline Type& Y()
		{
			return m_M[2];
		}

		inline Type Z() const
		{
			return m_M[3];
		}
		inline Type& Z()
		{
			return m_M[3];
		}

		inline Type q0() const 
		{
			return m_M[0];
		}
		inline Type& q0() 
		{
			return m_M[0];
		}
		inline Vector3<Type> qv() const
		{
			Vector3<Type> test_qv(m_M[1],m_M[2],m_M[3]);
			return test_qv;
		}
		inline void qv(Vector3<Type> test)
		{
			m_M[1]=test[0];
			m_M[2]=test[1];
			m_M[3]=test[2];
			
		}
		inline Vector4<Type> M() const
		{
			Vector4<Type> test_M(m_M[0],m_M[1],m_M[2],m_M[3]);
			return test_M;
		}
		inline void M(Vector4<Type> test)
		{
			m_M[0]=test[0];
			m_M[1]=test[1];
			m_M[2]=test[2];
			m_M[3]=test[3];
			
		}
		inline void QuatZero(Quat<Type> q)
		{
			q.X()=(Type)0;
			q.Y()=(Type)0;
			q.Z()=(Type)0;
			q.W()=(Type)0;
		}
		inline void QuatInitXYZ(Quat<Type> q,Type w,Type x,Type y,Type z)
		{
			q.W()=w;
			q.X()=x;
			q.Y()=y;
			q.Z()=z;
		}
		inline void QuatInitVector3(Quat<Type> q,Vector3<Type> v)
		{
			q.W()=(Type)0;
			q.X()=v.X();
			q.Y()=v.Y();
			q.Z()=v.Z();
		}
		inline void QuatInit(Quat<Type> qdst,Quat<Type> qsrc)
		{
			qdst.W()=qsrc.W();
			qdst.X()=qsrc.X();
			qdst.Y()=qsrc.Y();
			qdst.Z()=qsrc.Z();
		}
		inline void QuatCopy(Quat<Type> qdst,Quat<Type> qsrc)
		{
			qdst.X()=qsrc.X();
			qdst.Y()=qsrc.Y();
			qdst.Z()=qsrc.Z();
			qdst.W()=qsrc.W();
		}
	protected:
	private:
		
		Type m_M[4];
	};
}