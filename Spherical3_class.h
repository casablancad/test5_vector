#pragma once
namespace Tool
{
	template <typename Type>
	class Spherical3
	{
	public:
		Spherical3()
		{

		}
		Spherical3(Type test_p,Type test_theta,Type test_phi)
		{
			m_p=test_p;
			m_theta=test_theta;
			m_phi=test_phi;
		}
		inline Type p() const
		{
			return m_p;
		}
		inline Type& p()
		{
			return m_p;
		}
		inline Type theta() const
		{
			return m_theta;
		}
		inline Type& theta()
		{
			return m_theta;
		}
		inline Type phi() const
		{
			return m_phi;
		}
		inline Type& phi()
		{
			return m_phi;
		}

	protected:
	private:
		Type m_p;
		Type m_theta;
		Type m_phi;

	};
}