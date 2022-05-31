#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
using namespace System::Drawing;
enum Direcciones(ninguna, abajo, arriba, izquierda, derecha);

class CJugador
{
    int x;
    int y;
    int dx;
    int dy;
    int ancho;
    int alto;
    int indiceX, indiceY;
    Direcciones ultimatecla;
    public:
        CJugador();
        ~CJugador();
        CJugador(int x, int y);
        void dibujar(BufferedGraphics^buffer, Bitmap^bmp);
        void mover(BufferedGraphics^buffer, Bitmap^bmp);
};


#endif // JUGADOR_H_INCLUDED
