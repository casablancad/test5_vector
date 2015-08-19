#pragma once

#include <assert.h>
namespace Tool
{
	template<typename Type>
	class Point3
	{
	public:
		Point3()
		{

		}
		Point3(Type x,Type y,Type z)
		{
			m_x=x;
			m_y=y;
			m_z=z;
		}
		inline Type X() const
		{
			return m_x;
		}
		inline Type& X()
		{
			return m_x;
		}
		inline Type Y() const
		{
			return m_y;
		}
		inline Type& Y()
		{
			return m_y;
		}
		inline Type Z() const
		{
			return m_z;
		}
		inline Type& Z()
		{
			return m_z;
		}
		inline Type operator[](int i) const
		{
			assert(i==0||i==1||i==2);
			if(i==0)
				return m_x;
			else if(i==1)
				return m_y;
			else 
				return m_z;
		}
		inline Type& operator[](int i)
		{
			assert(i==0||i==1||i==2);
			if(i==0)
				return m_x;
			else if(i==1)
				return m_y;
			else 
				return m_z;
		}
	protected:
	private:
		Type m_x;
		Type m_y;
		Type m_z;
	};
}