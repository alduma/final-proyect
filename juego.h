#include <SFML/Graphics.hpp>
using namespace sf;



class juego
{
    public:
        juego(int x, int y, std::string titulo);
        void dibujar();
        void gameloop();

    private:
    RenderWindow * ventana1;
    int fps;

};

