#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>

class Engine
{
public:
	Engine();
	~Engine();
	//start game engine
	void start();
private:
	void processInput();
	sf::RenderWindow* window; // main window
	bool init();// initialize engine
	void mainLoop(); // the main game loop
	void renderFrame(); // draw objects for the frame
	void update();
	int xpos;
	int ypos;
};






#endif