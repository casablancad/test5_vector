#pragma once

#include <assert.h>
namespace Tool
{
	template<typename Type>
	class Point4
	{
	public:
		Point4()
		{

		}
		Point4(Type x,Type y,Type z,Type w)
		{
			m_x=x;
			m_y=y;
			m_z=z;
			m_w=w;
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
		inline Type W() const
		{
			return m_w;
		}
		inline Type& W()
		{
			return m_w;
		}
		inline Type operator[](int i) const
		{
			assert(i==0||i==1||i==2||i=3);
			if(i==0)
				return m_x;
			else if(i==1)
				return m_y;
			else if(i==2)
				return m_z;
			else
				return m_w;
		}
		inline Type& operator[](int i)
		{
			assert(i==0||i==1||i==2||i==3);
			if(i==0)
				return m_x;
			else if(i==1)
				return m_y;
			else if(i==2)
				return m_z;
			else (i==3)
				return m_w;
		}
	protected:
	private:
		Type m_x;
		Type m_y;
		Type m_z;
		Type m_w;
	};
}