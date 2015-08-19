#pragma  once
#include "Vector2_class.h"
#include "Point2.h"
namespace Tool
{
	template<typename Type>
	class Parmline2
	{
	public:
		Parmline2()
		{

		}
		Parmline2(Point2<Type> &p0, Point2<Type> &p1)
		{
			m_p0=p0;
			m_p1=p1;
		}
		inline Point2<Type> p0() const
		{
			return m_p0;
		}
		inline Point2<Type> &p0()
		{
			return m_p0;
		}
		inline Point2<Type> p1() const
		{
			return m_p1;
		}
		inline Point2<Type> &p1()
		{
			return m_p1;
		}
		inline Vector2<Type> v() const
		{
			Vector2<Type> temp;
			temp.X()=m_p1.X()-m_p0.X();
			temp.Y()=m_p1.Y()-m_p0.Y();
			return temp;
		}
		inline Vector2<Type> &v()
		{
			Vector2<Type> temp;
			temp.X()=m_p1.X()-m_p0.X();
			temp.Y()=m_p1.Y()-m_p0.Y();
			return temp;
		}
	protected: 
	private:
		Point2<Type> m_p0;
		Point2<Type> m_p1;
	};
}