#pragma once
#include "Point4.h"
namespace Tool
{
	//���ڶ����б�Ķ����
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
		Type m_vert[3];//�����б������
	};

}