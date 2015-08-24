#pragma once
#include "Point4.h"
namespace Tool
{
	//基于顶点列表的多边形
	template<typename Type>
	class Poly4
	{
	public:
		Poly4()
		{

		}
		Poly4(Type state,Type attr,Type color)
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

		Point4<Type> vlist;
		Type m_vert[3];//顶点列表的索引
	};

}