//
// Created by Sania Ghori on 25/11/2024.
//

#include "person.h"
#include <string>
#include <utility>
#include <vector>

using namespace std;


//initialise person info

person::person(string name) :
    name(std::move(name)){}

//add an item to the vector of items
void person::add_item(const tuple<string, float>& item) {
    items.push_back(item);
}








//initialising person information


