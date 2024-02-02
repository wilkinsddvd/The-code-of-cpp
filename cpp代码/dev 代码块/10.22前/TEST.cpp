#include<SDL2/SDL.h>
#include<bits/stdc++.h>
using namespace std;

SDL_Window* window = NULL;
SDL_Surface* surface = NULL;

void init()
{
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("SDL",100,100,640,480,SDL_WINDOW_SHOWN);
	surface = SDL_GetWindowSurface(window);
}

int main(int argc,char* args[])
{
	init();
	SDL_UnlockSurface(surface);
	SDL_UpdateWindowSurface(window);
	SDL_Delay(5*1000);
	
	SDL_FreeSurface(surface);
	SDL_Quit();
	return 0;
}
