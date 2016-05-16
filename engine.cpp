#include "engine.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

Engine::Engine(){};
Engine::~Engine(){};

void Engine::start()
{
	if (!init())
		throw "Could not initialize the engine.";
	mainLoop();

};

bool Engine::init()
{
	window = new sf::RenderWindow(sf::VideoMode(500,500,32), "Adventures of Hue");
	window->setFramerateLimit(60);
	xpos = 50;
	ypos = 50;
	if(!window)
		return false;
	return true;
	
};

void Engine::mainLoop()
{
	sf::Clock clock;
	while(window->isOpen())
	{
		sf::Time elapsedTime = clock.getElapsedTime();
		clock.restart();
		sf::Event event;
		while(window->pollEvent(event))
		{
			switch(event.type)
			{
				case sf::Event::Closed:
					window->close();
					break;
				//case
				default:
					break;
			}
		}
		//get input type 
		// pass the event to process input // do functions 
		//updatew
		processInput();
		//float x = 0.5;
		//if(elapsedTime.asSeconds() > x * .5)
			update();
		renderFrame();
	}

};

void Engine::renderFrame()
{
	sf::Vector2f pos(xpos,ypos);
	sf::Vector2f size(20,20);
	sf::RectangleShape te(size);
	te.setPosition(pos);
	te.setFillColor(sf::Color(100,250,250));
	window->clear();
	window->draw(te);
	window->display();
};
void Engine::update()
{
	xpos = xpos + 5;
	ypos = ypos + 5;


};

void Engine::processInput()
{

};