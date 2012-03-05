// marshal.h

#include "string.h"

#include <vcclr.h>

namespace marshal {
	template <typename T>
	static T to(System::String^ str)
	{
	}

	template<>
	static wchar_t* to(System::String^ str)
	{
		pin_ptr<const wchar_t> cpwc = PtrToStringChars(str);
		int len = str->Length + 1;
		wchar_t* pwc = new wchar_t[len];
		wcscpy_s(pwc, len, cpwc);
		return pwc;
	}
}

