#include <iostream>
#include <string>
#include "Hunter.h"
using namespace std;
//Default hunter class
Hunter::Hunter() {
	Name = "?";
	Count = 0;
	ItemNumber = 0;
	Occup = "Classified";
}
//Hunter that takes name and job.
Hunter::Hunter(string PlayName, string Job) {
	Name = PlayName;
	Count = 0;
	ItemNumber = 0;
	Occup = Job;
}
//Will keep item in placeholder when an item is obtained. Uses dynamic arrays.
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
//Uses pointer, returning the item/items.
string * Hunter::getItems() {
	return Items;
}
//Returns the number of items.
int Hunter::getItemCount() {
	return ItemNumber;
}
//Returns player name.
string Hunter::getName() {
	return Name;
}
//Returns you job.
string Hunter::getOccup() {
	return Occup;
}

Hunter::~Hunter() {
}
