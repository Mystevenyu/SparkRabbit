#pragma once
#include"Core.h"

namespace SparkRabbit
{
	class SR_API Application
	{
	public:
		Application();

		virtual ~Application();

		void Run();
	};

	//To be define in CLIENT
	Application* CreateApplication();
}
