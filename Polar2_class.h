#pragma once;
namespace Tool
{
	template<typename Type>
	class Polar2
	{
	public:
		Polar2()
		{

		}
		Polar2(Type test_r,Type test_theta)
		{
			m_r=test_r;
			m_theta=test_theta;
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
	protected:
	private:
		Type m_r;
		Type m_theta;
	};
}