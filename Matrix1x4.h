#pragma once
#include <assert.h>

namespace Tool
{
	template < typename Type >
	class Matrix1x4
	{
	public:
		Matrix1x4()
		{

		}
		Matrix1x4(const Type m_t[4])
		{
			for (int i = 0; i < 4; i++)
				m_M[i] = m_t[i];
		}
		inline Type operator[](int i) const
		{
			assert(i >= 0 && i <= 3);
			return m_M[i];
		}
		inline Type &operator[](int i)
		{
			assert(i >= 0 && i <= 3);
			return m_M[i];
		}
		inline Type M(int i) const
		{
			assert(i >= 0 && i <= 3);
			return m_M[i];
		}
		inline Type &M(int i)
		{
			assert(i >= 0 && i <= 3);
			return m_M[i];
		}
	private:
		Type m_M[4];
	};
}