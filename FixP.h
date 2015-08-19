#pragma once

namespace Tool
{
	template<typename Type>
	class FitP
	{
	public:
		FitP()
		{

		}
		FitP(const Type m)
		{
			m_Fixp16=m;
		}
	protected:
	private:
		Type m_Fixp16;

	};
}
