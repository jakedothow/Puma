#pragma once

#include "Common.h"
#include "EmergencyNotice.h"

namespace Puma::Session
{
	std::string DisplayName;
	Models::Internal::EmergencyNotice EmergencyNotice;

	void* QueryProfileCallback;
}