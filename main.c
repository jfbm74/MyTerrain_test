#include "terrain.h"

int main(void)
{
    int **grid_x;
    int **grid_y;
    int rows, cols = 0;
    SDL_Instance instance;

	if (init_instance(&instance) != 0)
		return (1);

	bool quit = false;
	SDL_Event e;

    rows = 2;
    cols = 2;

    grid_x = insert_points(rows, cols, 'x');
    grid_y = insert_points(rows, cols, 'y');

    printf("Coord en X\n");
    print_grid(grid_x, rows, cols);
    printf("\n");
    printf("Coord en Y\n");
    print_grid(grid_y, rows, cols);

	while (!quit)
	{
		 //Handle events on queue                                                                                              
		while( SDL_PollEvent( &e ) != 0 )
		{
			//User requests quit                                                                                          
			if( e.type == SDL_QUIT )
			{
				printf("Bye!!!\n");
				quit = true;
			}
		}
		 //Select surfaces based on key press                                                                  
		switch( e.key.keysym.sym )
		{
			case SDLK_LEFT:
				printf("LEFT\n");
				break;
			case SDLK_RIGHT:
				printf("RIGTH\n");
				break;
			default:
				break;
		}
		
		//Clear screen 
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		//DIBUJAMOS ALGO EN EL LIENZO DEBAJO DE ESTA LINEA
		
		init_terrain_2d(instance, grid_x, grid_y, rows, cols);

		SDL_RenderPresent(instance.renderer);

	}
	SDL_DestroyWindow(instance.window);
	SDL_Quit();
 
	return (0);
}
