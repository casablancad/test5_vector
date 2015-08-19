#pragma once
#include"MathConstant.h"
#include <assert.h>
#include "Matrix1x2.h"

namespace Tool
{
	template <typename Type>
	class Matrix2x2
	{
	public:
		Matrix2x2()
		{

		}
		Matrix2x2(const Type M[2][2])
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					m_M[i][j]=M[i][j];
				}
			}
		}
		Matrix2x2(const Type m00,Type m01,Type m10,Type m11)
		{
			m_M[0][0]=m00;
			m_M[0][1]=m01;
			m_M[1][0]=m10;
			m_M[1][1]=m11;
		}
		inline Type M(int i, int j) const
		{
			assert(i == 0 || i == 1);
			assert(j == 0 || j == 1);
			return m_M[i][j];
		}
		inline Type &M(int i, int j)
		{
			assert(i == 0 || i == 1);
			assert(j == 0 || j == 1);
			return m_M[i][j];
		}
	inline const Type* operator[](int row) const
	{
		return m_M[row];
	}
	inline Type* operator[](int row)
	{
		return m_M[row];
	}
	inline void MakeZero()
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				m_M[i][j]=(Type)0;
			}
		}
	}
	inline void MakeIndentity()
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				m_M[i][j]=IMAT_2X2()[i][j];
			}
		}
	}
	inline void Copy(const Matrix2x2<Type> m)
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				m_M[i][j]=m[i][j];
			}
		}
	}
	inline void MAT_COLUMN_SWAP_2X2(const Matrix2x2<Type> m,int c,Matrix1x2<Type> v)
	{
		m_M[0][c]=v.M()[0];
		m_M[1][c]=v.M()[1];
	}
	protected:
	private:
		Type m_M[2][2];
		
	};
}