#ifndef MOUNTAIN_H
#define MOUNTAIN_H
#include <string>
#include <iostream>
#include "Terrain.h"
using namespace std;

//Creating Mountain class that inherits from Terrain class.
class Mountain: public Terrain{

private:
	int mount_id;

protected:
	Terrain* mterrain;

public:
//Default constructor and destuctor are included.
	Mountain();
	Mountain(string Location);
	string mAnim;
	string get_animal(int rarity);
	int randNum;
	~Mountain();
};

#endif