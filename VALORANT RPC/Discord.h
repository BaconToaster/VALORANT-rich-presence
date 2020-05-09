#pragma once
#include <discord_register.h>
#include <discord_rpc.h>
#include <Windows.h>

class Discord
{
public:
	void Init();
	void Update(const char* mode, int64_t eptime, const char* idkVar);
};