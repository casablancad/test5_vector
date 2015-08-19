#pragma once
#include <assert.h>
#include "Matrix1x3.h"
#include "MathConstant.h"
namespace Tool
{
	template <typename Type>
	class Matrix3x3
	{
	public:
		Matrix3x3()
		{

		}
		Matrix3x3(const Type M[3][3])
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
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
			assert(j>=0 && j<=2);
			return m_M[i][j];
		}
		inline Type& M(int i,int j)
		{
			assert(i>=0 && i<=2);
			assert(j>=0 && j<=2);
			return m_M[i][j];

		}
		inline void MakeZero()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					m_M[i][j]=(	Type)0;
				}
			}
			
		}
		inline void MakeIdentity()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					m_M[i][j]=IMAT_3X3()[i][j];
				}
			}
		}
		inline void Copy(const Matrix3x3<Type> &m)
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					m_M[i][j]=m[i][j];
				}
			}
		}
		inline void Transpose(const Matrix3x3<Type> m)
		{
			Matrix3x3 mt;
			mt.M()[0][0]=m.M()[0][0];mt.M()[0][1]=m.M()[1][0];mt.M()[0][2]=m.M()[2][0];
			mt.M()[1][0]=m.M()[0][1];mt.M()[1][1]=m.M()[1][1];mt.M()[1][2]=m.M()[2][1];
			mt.M()[2][0]=m.M()[0][2];mt.M()[2][1]=m.M()[1][2];mt.M()[2][2]=m.M()[2][2];
		}
		inline void Transpose(const Matrix3x3<Type> m,const Matrix3x3<Type> mt)
		{
			mt.M()[0][0]=m.M()[0][0];mt.M()[0][1]=m.M()[1][0];mt.M()[0][2]=m.M()[2][0];
			mt.M()[1][0]=m.M()[0][1];mt.M()[1][1]=m.M()[1][1];mt.M()[1][2]=m.M()[2][1];
			mt.M()[2][0]=m.M()[0][2];mt.M()[2][1]=m.M()[1][2];mt.M()[2][2]=m.M()[2][2];
		}
		inline void COLUMN_SWAP_3X3(const Matrix3x3<Type> m,int c,Matrix1x3<Type> v)
		{
			m_M[0][c]=v.M()[0];
			m_M[1][c]=v.M()[1];
			m_M[2][c]=v.M()[2];

		}
	protected:
	private:
		Type m_M[3][3];
	};
}