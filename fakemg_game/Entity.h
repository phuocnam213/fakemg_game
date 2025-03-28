#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

using namespace std;

class Entity {
protected:
	float x, y;
	SDL_Rect currentFrame;
	SDL_Texture* tex = NULL;
	SDL_RendererFlip flipType = SDL_FLIP_NONE;
public:
	Entity(float p_x, float p_y, SDL_Texture* p_tex);
	float getX();
	float getY();
	SDL_Rect getCurrentFrame();
	SDL_Texture* getTex();
	SDL_RendererFlip getFlipType();
};