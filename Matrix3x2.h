#pragma once
#include <assert.h>
namespace Tool
{
	template <typename Type>
	class Matrix3x2
	{
	public:
		Matrix3x2()
		{

		}
		Matrix3x2(const Type M[3][2])
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<2;j++)
				{
					m_M[i][j]=M[i][j];
				}
			}
		}
		inline Type* operator[](int row) const
		{
			return m_M[row];
		}
		inline Type* operator[](int row)
		{
			return m_M[row];
		}
		inline Type M(int i,int j) const
		{
			assert(i>=0 && i<=2);
			assert(j>=0 && j<=1);
			return m_M[i][j];
		}
		inline Type& M(int i,int j)
		{
			assert(i>=0 && i<=2);
			assert(j>=0 && j<=1);
			return m_M[i][j];

		}
	
	protected:
	private:
		Type m_M[3][2];
	};
}