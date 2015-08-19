#pragma once
#include <assert.h>
namespace Tool
{
	template < typename Type >
	class Matrix1x3
	{
	public:
		Matrix1x3()
		{

		}
		Matrix1x3(const Type M[3])
		{
			m_M[0] = M[0];
			m_M[1] = M[1];
			m_M[2] = M[2];
		}
		inline Type M(int i) const
		{
			assert(i >= 0 && i <= 2);
			return m_M[i];
		}
		inline Type &M(int i)
		{
			assert(i >= 0 && i <= 2);
			return m_M[i];
		}
		inline Type operator[](int i) const
		{
			assert(i >= 0 && i <= 2);
			return m_M[i];
		}
		inline Type &operator[](int i)
		{
			assert(i >= 0 && i <= 2);
			return m_M[i];
		}
	private:
		Type m_M[3];
	};
	
}