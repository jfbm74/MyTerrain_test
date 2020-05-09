#ifndef _TERRAIN_H_
#define _TERRAIN_H_

#include <SDL2/SDL.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

#define WINDOW_WIDTH 1260
#define WINDOW_HEIGHT 680
#define X_CENTERED (WINDOW_WIDTH / 2)
#define Y_CENTERED (WINDOW_HEIGTH / 2)
#define OFFSET_X 20
#define OFFSET_Y 0

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer * renderer;
} SDL_Instance;

//Key press surfaces constants                                                                                                                        
enum KeyPressSurfaces
{
        KEY_PRESS_SURFACE_DEFAULT,
        KEY_PRESS_SURFACE_UP,
        KEY_PRESS_SURFACE_DOWN,
        KEY_PRESS_SURFACE_LEFT,
        KEY_PRESS_SURFACE_RIGHT,
        KEY_PRESS_SURFACE_TOTAL
};





int init_instance(SDL_Instance *);
/*DRAWING A 2D SQUARE*/
void draw_square2D(SDL_Instance instance, int off_x, int off_y, int delta);
void draw_square3D(SDL_Instance instance, int off_x, int off_y, int delta, int z);

/*DRAWING A 2D GRID WITH LINES*/
void init_terrain_2d(SDL_Instance instance, int **grid_x, int **grid_y, int rows, int cols);

/*FUNCTION TO CREATE A ARRAY OF CORDINATES*/
int **alloc_grid(int width, int heigth);
void print_grid(int **grid, int width, int height);
int **insert_points(int rows, int cols, char c);

#endif