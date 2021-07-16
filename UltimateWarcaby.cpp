// UltimateWarcaby.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>


int main()
{
    //Window
    sf::RenderWindow window(sf::VideoMode(640, 480), "Checkers");
    sf::Event ev;

    
    //Game loop
    while (window.isOpen())
    {
        //Event polling
        while(window.pollEvent(ev))
        {
            switch (ev.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:
                if (ev.key.code == sf::Keyboard::Escape)
                    window.close();
                break;
            }
        }

        //Update

        //Render
        window.clear(); //Clear old frame

        //Draw your game 
        window.display(); //Tell app that window is done drawing
    }
    

    std::cout << "Hello World!\n";
}
