#pragma once
namespace Tool
{
	template<typename Type>
	class Cylindrical3
	{
	public:
		Cylindrical3()
		{

		}
		Cylindrical3(Type test_r,Type test_theta,Type test_z)
		{
			m_r=test_r;
			m_theta=test_theta;
			m_z=test_z;

		}
		inline Type r() const
		{
			return m_r;
		}
		inline Type& r()
		{
			return m_r;
		}
		inline Type theta() const
		{
			return m_theta;
		}
		inline Type& theta()
		{
			return m_theta;
		}
		inline Type z() const
		{
			return m_z;
		}
		inline Type& z()
		{
			return m_z;
		}

	protected:
	private:
		Type m_r;
		Type m_theta;
		Type m_z;
	};
}