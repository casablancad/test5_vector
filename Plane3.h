#pragma once
#include "Vector3_class.h"
namespace Tool
{
	template<typename Type>
	class Plane3
	{
	public:
		
		Plane3()
		{

		}
		Plane3(Vector3<Type> &p0,Vector3<Type> &n)
		{
			m_p0=p0;
			m_n=n;
		}
		inline Vector3<Type> p0() const
		{
			return m_p0;
		}
		inline Vector3<Type> &p0()
		{
			return m_p0;
		}
		inline Vector3<Type> n() const
		{
			return m_n;
		}
		inline Vector3<Type> &n()
		{
			return m_n;
		}
	protected:
	private:
		Vector3<Type> m_p0;
		Vector3<Type> m_n;
	};

}