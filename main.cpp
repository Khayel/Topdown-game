#include "engine.h"  
#include <iostream>

int main()
{
	Engine* engine = new Engine();
	try
	{
		engine->start();
	}
	catch(char* e )
	{
		std::cout<<"Could not start the engine.";
	}




	return 0;
}