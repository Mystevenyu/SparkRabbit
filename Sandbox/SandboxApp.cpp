#include<SparkRabbit.h>
class Sandbox :public SparkRabbit::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

SparkRabbit::Application* SparkRabbit::CreateApplication()
{
	return new Sandbox();
}

