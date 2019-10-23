ifndef JUNGLE_H
#define JUNGLE_H
#include <string>
#include <iostream>
#include "Terrain.h"
using namespace std;

//Creating Jungle class that inherits from Terrain class.
class Jungle: public Terrain{

private:
	int jung_id;

protected:
	Terrain* jterrain;

public:
//Default constructor and destuctor are included.
	Jungle();
	Jungle(string Location);
	std::string jAnim;
	string get_animal(int rarity);
	int randNum;
	~Jungle();
};

#endif