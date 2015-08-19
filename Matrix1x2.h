#pragma once
#include <assert.h>

namespace Tool
{
	template <typename Type>
	class Matrix1x2
	{
	public:
		Matrix1x2()
		{

		}
		Matrix1x2(const Type M[2])
		{
			m_M[0]=M[0];
			m_M[1]=M[1];
		}
		inline Type M(int i) const
		{
			assert(i==0||i==1);
			return m_M[i];
		}
		inline Type &M(int i)
		{
			assert(i == 0 || i == 1);
			return m_M[i];
		}
		inline Type operator[](int i) const
		{
			assert(i == 0 || i == 1);
			return m_M[i];
		}
		inline Type &operator[](int i)
		{
			assert(i == 0 || i == 1);
			return m_M[i];
		}

	protected:
	private:
		Type m_M[2];
	};
}