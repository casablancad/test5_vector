#pragma  once
#include "Vector3_class.h"
namespace Tool
{
	template<typename Type>
	class Parmline3
	{
	public:
		Parmline3()
		{

		}
		Parmline3(Vector3<Type> &p0, Vector3<Type> &p1)
		{
			m_p0=p0;
			m_p1=p1;
		}
		inline Vector3<Type> p0() const
		{
			return m_p0;
		}
		inline Vector3<Type> &p0()
		{
			return m_p0;
		}
		inline Vector3<Type> p1() const
		{
			return m_p1;
		}
		inline Vector3<Type> &p1()
		{
			return m_p1;
		}
		inline Vector3<Type> v() const
		{
			Vector3<Type> temp;
			temp.X()=m_p1.X()-m_p0.X();
			temp.Y()=m_p1.Y()-m_p0.Y();
			temp.Z()=m_p1.Z()-m_p0.Z();
			return temp;
		}
		inline Vector3<Type> &v()
		{
			Vector3<Type> temp;
			temp.X()=m_p1.X()-m_p0.X();
			temp.Y()=m_p1.Y()-m_p0.Y();
			temp.Z()=m_p1.Z()-m_p0.Z();
			return temp;
		}
	protected: 
	private:
		Vector3<Type> m_p0;
		Vector3<Type> m_p1;
	};
}