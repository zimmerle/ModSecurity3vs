#include "stdafx.h"



#include "libModSecurityManaged.h"


libModSecurityManaged::ModSecurityManaged::ModSecurityManaged()
{
	m_ms = new modsecurity::ModSecurity();
};

