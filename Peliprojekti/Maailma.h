#pragma once
#ifndef MAAILMA_H
#define MAAILMA_H

#include "Pelihahmo.h"
#include "Pelimoottori.h"
#include "Kamera.h"
#include "Tekstuurit.h"
class Pelimoottori;

class Maailma{
public:
	Maailma(Pelimoottori* pelimoottori);
	//~Maailma(void);
	void render();
	void move(float timestep);
	void setTaustaTexture(Tekstuurit taustaText);
	Pelihahmo* getPelihahmo();
private:
	int SCREEN_WIDTH;
	int SCREEN_HEIGHT;
	int LEVEL_WIDTH;
	int LEVEL_HEIGHT;
	Pelihahmo* pelihahmo;
	Kamera camera;
	Tekstuurit tausta;
};
#endif