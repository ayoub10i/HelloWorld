#pragma once

#ifdef HW_PLATFORM_WINDOWS

#ifdef HW_BUILD_DLL

#define HELLOWORLD_API __declspec(dllexport)

#else

#define HELLOWORLD_API __declspec(dllimport)

#endif // HW_BUILD_DLL
#else

#error HelloWorld only supports windows 

#endif // HW_PLATFORM_WINDOWS

