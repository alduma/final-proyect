#include "juego.h"



juego::juego( int x, int y, std::string titulo){
    fps=60;
    ventana1 = new RenderWindow(VideoMode(x, y ), titulo);
    ventana1 ->setFramerateLimit(fps);

}

void juego::dibujar(){
    ventana1 -> clear();
    ventana1 -> display();

}

void juego::gameloop(){
    while(ventana1 -> isOpen())
    dibujar();

}
