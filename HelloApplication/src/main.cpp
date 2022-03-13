#include <HelloWorld.h>

class Ayoub : public HelloWorld::Application
{

public:

	Ayoub() {


}

	~Ayoub() {

	}

	 
	
};


HelloWorld::Application* HelloWorld::createApplication() {

	return new Ayoub();
}