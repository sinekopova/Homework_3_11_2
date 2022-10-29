#pragma once
#include <iostream>

#ifdef LEAVER_DLL_EXPORTS
#define LEAVER_DLL_API __declspec(dllexport)
#else
#define LEAVER_DLL_API __declspec(dllimport)
#endif // LEAVER_DLL_EXPORTS


LEAVER_DLL_API class Leaver {
public:
	LEAVER_DLL_API std::string leave(std::string name);
};