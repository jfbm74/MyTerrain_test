#include "terrain.h"

void init_terrain_2d(SDL_Instance instance)
{
	int i = 0;

	//update screen*/
	SDL_SetRenderDrawColor(instance.renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	int k = 0;
	/* Draw horizontal lines*/
	for (i = 0; i < 10; i++)
	{
		SDL_RenderDrawLine(instance.renderer, OFFSET_X,(OFFSET_Y + k),1000,(OFFSET_Y + k));
		k += 80;
	}
	/* Draw vertical lines */
	for (i = 0, k = 0; i < 9; i++)
	{
		SDL_RenderDrawLine(instance.renderer, (OFFSET_X + k),OFFSET_Y,(OFFSET_X + k),660);
		k += 80;
	}
}