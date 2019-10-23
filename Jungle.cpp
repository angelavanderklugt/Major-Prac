#include "Jungle.h"
#include "Terrain.h"
#include <string>
#include <iostream>
using namespace std;
//Creating character array containing different animals.
char JanimArr[3][10]={"Snake","Piranha","Cougar"};
int jung_id = 0;
string jung_location;

Jungle::Jungle(string Location):Terrain(Location){
jung_id++;
jung_location = Location;
jterrain = new Terrain(jung_location);
}

//Returning an animal from array depending on rarity.
string Jungle::get_animal(int rarity){
switch (rarity){
case 1: return JanimArr[0];
break;
case 2: return JanimArr[0];
break;
case 3: return JanimArr[0];
break;
case 4: return JanimArr[1];
break;
case 5: return JanimArr[1];
break;
case 6: return JanimArr[2];
}
}

Jungle::~Jungle(){
}