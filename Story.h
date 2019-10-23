#ifndef STORY_H
#define STORY_H
using namespace std;
#include <iostream>
//creating story class which will be the base class to events
class Story{
public:
//abstract class as the following are purely virtual
	virtual void Events()=0;
	virtual int getScore()=0;
	
	void getTerrain(string terrain){
		biome=terrain;
	}
	void getAnimal(string animal){
		anim=animal;
	}
protected:
	string biome;
	string anim;
	int score=0;
};

#endif //STORY_H