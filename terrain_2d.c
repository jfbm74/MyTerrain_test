#include "terrain.h"

void init_terrain_2d(SDL_Instance instance, int **grid_x, int **grid_y, int rows, int cols)
{
	int i, j = 0;
    int C = 80;
    int Z = 80;
    int k = 0;
    int number = 7;
    int delta_x = 0;
    int delta_y = 0;
    int projection = 20;


    //select color of pencil*/
	SDL_SetRenderDrawColor(instance.renderer, 255, 0, 255, SDL_ALPHA_OPAQUE);
	    /* join points from grids vertical*/
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < (cols - 1); j++)
        {
            SDL_RenderDrawLine(instance.renderer, grid_x[i][j], grid_y[i][j], grid_x[i][j+1], grid_y[i][j+1]);
            SDL_RenderDrawLine(instance.renderer, grid_x[j][i], grid_y[j][i], grid_x[j+1][i], grid_y[j+1][i]);
        }
    }


    /*
    for (i = 0; i < number; i++)
    {
        draw_square3D(instance, OFFSET_X + delta_x, OFFSET_Y + delta_y, C, Z);
        delta_x = delta_x + Z;
        delta_y = delta_y + Z/2;
    }
    */
    //draw_square2D(instance, OFFSET_X, OFFSET_Y, C);
    //draw_square3D(instance, OFFSET_X, OFFSET_Y, C, Z);

    /* Axis x y*/
    SDL_SetRenderDrawColor(instance.renderer, 255, 255, 0, 0);
    SDL_RenderDrawLine(instance.renderer, WINDOW_WIDTH / 2, 0, WINDOW_WIDTH / 2, WINDOW_HEIGHT);
    SDL_RenderDrawLine(instance.renderer, 0, WINDOW_HEIGHT / 2, WINDOW_WIDTH, WINDOW_HEIGHT / 2);





    /*3D square*/
    //SDL_SetRenderDrawColor(instance.renderer, 255, 0, 0, 0);
    //SDL_RenderDrawLine(instance.renderer, OFFSET_X + Z, OFFSET_Y, OFFSET_X + C + Z, OFFSET_Y + Z / 2);
    //SDL_RenderDrawLine(instance.renderer, OFFSET_X + C + Z, OFFSET_Y + Z / 2, OFFSET_X + C, OFFSET_Y + C);
    //SDL_RenderDrawLine(instance.renderer, OFFSET_X + C, OFFSET_Y + C, OFFSET_X, OFFSET_Y + C - Z/2);
    //SDL_RenderDrawLine(instance.renderer, OFFSET_X, OFFSET_Y + C - Z / 2, OFFSET_X + Z, OFFSET_Y);

    /*
	/* Draw horizontal lines
	for (i = 0; i < 10; i++)
	{
		SDL_RenderDrawLine(instance.renderer, OFFSET_X,(OFFSET_Y + k),1000,(OFFSET_Y + k));
		k += 80;
	}
	/* Draw vertical lines
	for (i = 0, k = 0; i < 9; i++)
	{
		SDL_RenderDrawLine(instance.renderer, (OFFSET_X + k),OFFSET_Y,(OFFSET_X + k),660);
		k += 80;
	}
    */
}
