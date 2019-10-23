#ifndef HUNTER_H
#define HUNTER_H
#include <iostream>
#include <string>
using namespace std;

//Creating a Hunter class that enables items to be lost or obtained.
class Hunter {

protected:
	string Name;
	string Occup;
	int Count;


public:
//Default contstructor and destructor are also included.
	string * Items;
	int ItemNumber;
	Hunter();
	Hunter(string PlayName, string Job);
	void AddItem(string Item);
	string * getItems();
	int getItemCount();
	string getName();
	string getOccup();
	~Hunter();

};
#endif