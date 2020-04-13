// Richard Dangereux.c : définit le point d'entrée de l'application.
//

#include "../include/Tilengine.h"
#include "Richard Dangereux.h"

#define WIDTH	400
#define HEIGHT	240
#define MAX_LAYER 1

int main()
{
	TLN_Init(WIDTH, HEIGHT, MAX_LAYER, 1, 3);
	TLN_SetBGColor(0, 96, 184);
	return 0;
}
