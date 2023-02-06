#pragma once

#ifdef SR_PLATFORM_WINDOWS
	#ifdef SR_BUILD_DLL
		#define SR_API __declspec(dllexport)
	#else
		#define SR_API __declspec(dllimport)	
	#endif
#else
	#error SparkRabbit only support Windows!
#endif // SR_PLATFORM_WINDOWS
