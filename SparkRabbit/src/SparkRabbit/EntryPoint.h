#pragma once
#include<iostream>

#ifdef SR_PLATFORM_WINDOWS
extern SparkRabbit::Application* SparkRabbit::CreateApplication();

int main(int argc,char** argv)
{
	std::cout << "Spark Engine" << std::endl;
	auto app = SparkRabbit::CreateApplication();
	app->Run();
	delete app;
}

#endif // SR_PLATFORM_WINDOWS
