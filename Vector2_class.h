#pragma once
#include <assert.h>
namespace Tool
{
	template<typename Type>
	class Vector2
	{
	public:
		Vector2()
		{

		}
		Vector2(Type x,Type y)
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
		inline void Vector2_MakeZero()
		{
			m_x=(Type)0;
			m_y=(Type)0;
		}
		inline void Vector2_InitXY(const Vector2<Type> v,Type x,Type y)
		{
			v.X()=x;
			v.Y()=y;
		}
		inline void Vector2_Init(const Vector2<Type> vdst,const Vector2<Type> vsrc)
		{
			vdst.X()=vsrc.X();
			vdst.Y()=vsrc.Y();
		}
		inline void Vector2_Copy(const Vector2<Type> v)
		{
			m_x=v.X();
			m_y=v.Y();
		}
		
		
	protected:
	private:
		Type m_x;
		Type m_y;
		
	};
}