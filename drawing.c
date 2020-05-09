#include "terrain.h"

void draw_square2D(SDL_Instance instance, int off_x, int off_y, int delta)
{
    SDL_SetRenderDrawColor(instance.renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawLine(instance.renderer, off_x, off_y, off_x + delta, off_y);
    SDL_RenderDrawLine(instance.renderer, off_x + delta, off_y, off_x + delta, off_y + delta);
    SDL_RenderDrawLine(instance.renderer, off_x + delta, off_y + delta, off_x, off_y + delta);
    SDL_RenderDrawLine(instance.renderer, off_x, off_y + delta, off_x, off_y);
}

void draw_square3D(SDL_Instance instance, int off_x, int off_y, int delta, int z)
{
    SDL_SetRenderDrawColor(instance.renderer, 255, 0, 255, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawLine(instance.renderer, off_x + z, off_y, off_x + delta  + z, off_y + z/2);
    SDL_RenderDrawLine(instance.renderer, off_x + delta + z, off_y + z / 2, off_x + delta, off_y + delta);
    SDL_RenderDrawLine(instance.renderer, off_x + delta, off_y + delta, off_x, off_y + delta -z/2);
    SDL_RenderDrawLine(instance.renderer, off_x, off_y + delta - z / 2, off_x + z, off_y);
}