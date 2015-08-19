#pragma once
#include <assert.h>
namespace Tool
{
	template<typename Type>
	class Point2
	{
	public:
		Point2()
		{

		}
		Point2(Type x,Type y)
		{
			m_x=x;
			m_y=y;
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
		inline Type operator[](int i) const
		{
			assert(i==0||i==1);
			if(i==0)
				return m_x;
			else 
				return m_y;
		}
		inline Type& operator[](int i)
		{
			assert(i==0||i==1);
			if(i==0)
				return m_x;
			else 
				return m_y;
		}
	protected:
	private:
		Type m_x;
		Type m_y;

	};
}