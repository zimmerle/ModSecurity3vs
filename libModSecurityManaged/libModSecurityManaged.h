#pragma once

#include "modsecurity/modsecurity.h"

using namespace System;

namespace libModSecurityManaged {
	public ref class ModSecurityManaged
	{
	public:
		ModSecurityManaged();
	private:
		modsecurity::ModSecurity *m_ms;
	};
}
