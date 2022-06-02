#ifndef _CONTROLADORA_H_
#define _CONTROLADORA_H_
#include"Escenario.h"

class CControladora
{
	public:
		CControladora() {
			oEscenario = new CEscenario();
		}
		~CControladora() {}

		void cambiarNivel()
		{
			oEscenario->generarMatriz();
		}

		void dibujar(Graphics^ g, Bitmap^bmpBase, Bitmap^ bmpSolido, Bitmap^ bmpDestruible) 
		{
			oEscenario->pintarBase(g,bmpBase);
			oEscenario->pintarMatriz(g, bmpSolido, bmpDestruible);
		}
	private:
		CEscenario* oEscenario;
};

#endif
