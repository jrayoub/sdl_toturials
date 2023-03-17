#ifndef DRAW_PIXEL_H
# define DRAW_PIXEL_H
# include <SDL2/SDL.h>
// # include <SDL2/SDL_image.h>
# include <SDL2/SDL_timer.h>
# include <stdio.h>
# include "get_next_line/get_next_line.h"
# include <fcntl.h>

# define WIDTH 1260
# define HEIGHT 660

typedef struct pos
{
    int x;
    int y;
} pos_t;

typedef struct color
{
    int R;
    int G;
    int B;
    int A;
} color_t;

char **get_map();
#endif