#pragma once


#ifdef HW_PLATFORM_WINDOWS


extern HelloWorld::Application* HelloWorld::createApplication();


int main(int argc, char** argv) {

	auto app = HelloWorld::createApplication();
	app->run();
	delete app;


}

#endif // HW_PLATFORM_WINDOWS
