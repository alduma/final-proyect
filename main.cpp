#include <SFML/Graphics.hpp>

int main()
{
  sf::RenderWindow ventana(sf::VideoMode(800, 600), " Pac-man");
    sf::CircleShape shape(10.f);
    shape.setFillColor(sf::Color::White);

    while (ventana.isOpen())
    {
        sf::Event event;
        while (ventana.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana.close();
        }

        ventana.clear();
        ventana.draw(shape);
        ventana.display();
    }

    return 0;
}
