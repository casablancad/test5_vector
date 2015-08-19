#pragma  once
#include <assert.h>
#include "MathConstant.h"
#include "Matrix1x4.h"
namespace Tool
{
	template<typename Type>
	class Matrix4x4
		{
		public:
			Matrix4x4()
			{

			}
			Matrix4x4(const Type M[4][4])
			{
				for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
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
				assert(j >= 0 && j <= 3);
				return m_M[i][j];
			}
			inline Type &M(int i, int j)
			{
				assert(i >= 0 && i <= 3);
				assert(j >= 0 && j <= 3);
				return m_M[i][j];
			}
			inline void MakeZero()
			{
				for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						m_M[i][j]=(Type)0;
					}
				}
			}
			inline void MakeIndentity()
			{
				for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						m_M[i][j]=IMAT_4X4()[i][j]
					}
				}
			}
			inline void Copy(const Matrix4x4<Type> m)
			{
				for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						m_M[i][j]=m[i][j];
					}
				}
			}
			inline void Transpose(const Matrix4x4<Type> m)
			{
				Matrix4x4<Type> mt;
				mt.M()[0][0]=m.M()[0][0];mt.M()[0][1]=m.M()[1][0];mt.M()[0][2]=m.M()[2][0];mt.M()[0][3]=m.M()[3][0];
			    mt.M()[1][0]=m.M()[0][1];mt.M()[1][1]=m.M()[1][1];mt.M()[1][2]=m.M()[2][1];mt.M()[1][3]=m.M()[3][1];
				mt.M()[2][0]=m.M()[0][2];mt.M()[2][1]=m.M()[1][2];mt.M()[2][2]=m.M()[2][2];mt.M()[2][3]=m.M()[3][2];
				mt.M()[3][0]=m.M()[0][3];mt.M()[3][1]=m.M()[1][3];mt.M()[3][2]=m.M()[2][3];mt.M()[3][3]=m.M()[3][3];

			} 
			inline void Transpose(const Matrix4x4<Type> m ,const Matrix4x4<Type> mt)
			{
				mt.M()[0][0]=m.M()[0][0];mt.M()[0][1]=m.M()[1][0];mt.M()[0][2]=m.M()[2][0];mt.M()[0][3]=m.M()[3][0];
				mt.M()[1][0]=m.M()[0][1];mt.M()[1][1]=m.M()[1][1];mt.M()[1][2]=m.M()[2][1];mt.M()[1][3]=m.M()[3][1];
				mt.M()[2][0]=m.M()[0][2];mt.M()[2][1]=m.M()[1][2];mt.M()[2][2]=m.M()[2][2];mt.M()[2][3]=m.M()[3][2];
				mt.M()[3][0]=m.M()[0][3];mt.M()[3][1]=m.M()[1][3];mt.M()[3][2]=m.M()[2][3];mt.M()[3][3]=m.M()[3][3];
			}
			inline void COLUMN_SWAP_4X4(Matrix4x4<Type> m,int c,Matrix1x4<Type> v)
			{
				m.M()[0][c]=v.M()[0];
				m.M()[1][c]=v.M()[1];
				m.M()[2][c]=v.M()[2];
			}
		protected:
		private:
			Type m_M[4][4];
		};
}