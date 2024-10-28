#include <iostream>
#include <SFML/Graphics.hpp>
int main() {
const int width = 800;
const int height = 600;
    sf::RenderWindow window(sf::VideoMode(width, height), "SFML works!");
    float circleSize = 50;
    sf::CircleShape shape(circleSize);
    sf::LineShape line(50, 50, 100, 100);
    shape.setFillColor(sf::Color::Blue);
    float offsetY=0.01 , offsetX=0.01;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
        shape.move(offsetX, offsetY);

        if ( shape.getPosition().x > 800 - (circleSize*2) ) { // 800 is the width of the window
            offsetX = -0.01;
        }
        if ( shape.getPosition().y > 600 - (circleSize*2) ) {// 600 is the height of the window
            offsetY = -0.01;
        }
        if ( shape.getPosition().x < 0 + (circleSize*2) ) {
            offsetX = 0.01;
        }
        if ( shape.getPosition().y < 0 + (circleSize*2) ) {
            offsetY = 0.01;
        }




    }


    return 0;
}
