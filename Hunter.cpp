#include <iostream>
#include <string>
#include "Hunter.h"
using namespace std;

Hunter::Hunter() {
	Name = "?";
	Count = 0;
	ItemNumber = 0;
	Occup = "Classified";
}

Hunter::Hunter(string PlayName, string Job) {
	Name = PlayName;
	Count = 0;
	ItemNumber = 0;
	Occup = Job;
}

void Hunter::AddItem(string Item) {
	
	string * PlaceHolder = new string[Count+1];
	for (int i=0; i<Count; i++){
		PlaceHolder[i]=Items[i];
	}
	delete[] Items;
	Count++;
	Items = new string[Count];
	for (int i=0; i<Count; i++){
		Items[i]=PlaceHolder[i];
	}
	delete[] PlaceHolder;
	Items[Count-1]= Item;
	ItemNumber++;
}

string * Hunter::getItems() {
	return Items;
}

int Hunter::getItemCount() {
	return ItemNumber;
}

string Hunter::getName() {
	return Name;
}

string Hunter::getOccup() {
	return Occup;
}

Hunter::~Hunter() {
}