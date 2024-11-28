//
// Created by Sania Ghori on 25/11/2024.
//

#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include <iostream>
#include <vector>
#include <tuple>

using namespace std;


class person {
    string name; //holds the persons name
    vector<tuple<string, float>> items; //holds the person's items
    float total_price = 0;

public:
    //initialise person info
    person(std::string name);

    //the name of the person
    const std::string &get_name() const { return name; };

    //add an item
    void add_item(const tuple<string, float>& item);

    //the total price of the items
    //can either read it from tuple or take place separately

    //try reading from tuple?
    void add_to_total(float price) {  total_price += price;  }
    float get_total_price() const {return total_price; };

    //check if no items??

};

//return the total price of items?

#endif //PEOPLE_H
