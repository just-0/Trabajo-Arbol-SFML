#include <SFML/Graphics.hpp>
#include "include.h"
struct DrawTree
{
    ArTree Tree;


};




/*
#include <SFML/Graphics.hpp>
#include<iostream>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::CircleShape shape(30.f);
    sf::Text text;
    window.setFramerateLimit(60);
    int x = 200, y = 50;
    text.setPosition(x+8,y);
    text.setString("21");
    text.setCharacterSize(50);
    text.setFillColor(sf::Color::Blue);
    sf::Font font;
    window.setVerticalSyncEnabled(true);
    if (!font.loadFromFile("Bubble Mint.otf"))
    {
        cout<<"Error al cargar la fueente"<<endl;
    }
    shape.setFillColor(sf::Color::Green);
    text.setFont(font); 

    //Modulo, anchura
    sf::RectangleShape line1(sf::Vector2f(70.f, 6.f));
    //angulo respecto a -x
    line1.rotate(45.f);


    sf::RectangleShape line2(sf::Vector2f(70.f, 5.f));
    line2.rotate(45+90.f);



    text.setPosition(x+8,y);
    shape.setPosition(x,y);
    line1.setPosition(x+33,y+58);
    line2.setPosition(x+33,y+58);
    while (window.isOpen())
    {
        
       
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(text);
        window.draw(line1);
        window.draw(line2);
        window.display();
        
    }

    return 0;
}

*/