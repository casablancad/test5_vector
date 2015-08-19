#pragma  once
#include <assert.h>
#include "MathConstant.h"
namespace Tool
{
	template<typename Type>
	class Matrix4x3
	{
	public:
		Matrix4x3()
		{

		}
		Matrix4x3(const Type M[4][3])
		{
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<3;j++)
				{
					m_M[i][j]=M[i][j];
				}
			}
		}
		inline const Type* operator[](int row) const
		{
			return m_M[row];
		}
		inline Type* operator[](int row)
		{
			return m_M[row];
		}
		inline Type M(int i, int j) const
		{
			assert(i >= 0 && i <= 3);
			assert(j >= 0 && j <= 2);
			return m_M[i][j];
		}
		inline Type &M(int i, int j)
		{
			assert(i >= 0 && i <= 3);
			assert(j >= 0 && j <= 2);
			return m_M[i][j];
		}
		
	protected:
	private:
		Type m_M[4][3];
	};
}