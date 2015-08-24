#pragma once
#include "Point4.h"
namespace Tool
{
	//自包含的多边形数据结构，供渲染列表使用
	template<typename Type>
	class Polyf4
	{
	public:
		Polyf4()
		{

		}
		Polyf4(Type state,Type attr,Type color)
		{
			m_state=state;
			m_attr=attr;
			m_color=color;
		}

	protected:
	private:
		Type m_state;
		Type m_attr;
		Type m_color;
		Point4<Type> vlist[3];
		Point4<Type> tvlist[3];
		Polyf4<Type> *next;
		Polyf4<Type> *prev;
		
	};
}