#include <iostream>
#include "World.h"
#include "Engine.h"

using namespace std;

int main()
{			
	Engine* MyEngine = new Engine();

	MyEngine->Run();

	return 0;
}