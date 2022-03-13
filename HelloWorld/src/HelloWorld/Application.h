#pragma once
#include "Core.h"
namespace HelloWorld {


	class HELLOWORLD_API Application
	{
	public:

		Application();

		~Application();


		void run();

	};


	Application* creatApplication();



}