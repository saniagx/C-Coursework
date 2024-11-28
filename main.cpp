#include "person.h"
#include <iomanip>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//write code that stores the names in a vector and gets called to check if the name is in people.txt
//would this be necessary

//i think that would not be needed.
//people.txt is only called for outputting the data, right?

vector<person> people;


//would it be easier to read as strings and then store accordingly?

//COMPLEXITY: O(n): Time Complexity directly proportional to number of lines in the input file, o(n).

//store as strings inside read_people
vector<person> read_people(ifstream &in) {
    string line;
    while (getline(in, line)) {
        istringstream line_s(line);
        string name;
        if (line_s>>name) {
            people.push_back(name);
        }
    }
    if (people.size() == 0) {
        cout << "The people.txt file is empty" << endl;
    } else {
        return people;
    }
}

//rewrite the below code to work with the above code






//then the below would not store anything in the vector people yk

//could create an array of strings for names and then a vector of person for the actual objects\
//doesn't that seem long though?

//step through the person vector and then search for the name in the corresponding payments.txt
//for length person vector,
    //if the name is equal to a name inside payments add item
    //name could appear multiple times in payments, need the loop to keep running for all elements
    //just do an if statement inside a while loop

    //if string is found in the line, then process the line
    //else move to next line


vector<person> read_payments(ifstream &in) {
    string line;
    while (getline(in, line)) {
        istringstream line_s(line);
        string name;
        string object;
        float price;
        //need to ensure the price is to 2dp
        if (line_s >> name >> object >> price) {
            cout << "Reading data..." << endl;
            if (count(people.begin(), people.end(), name) > 0) {}
                //if it's in the vector...
                //make a person and their item
                people.push_back(person(name));
                person &p = people.back();
                p.add_item(make_tuple(object, price));
            //already have the names, just need to read the payments file...
            //if name already exists within the vector people, don't make it a new one.
            //if name is in people.txt AND name is not already inside the vector, then make it!!
            }
        }
    return people;
}

//wouldnt it make sense to create the people and then add their items accordingly
//so if name is inside the vector
//add the item to that person inside the vector
//need the index position of the person inside the vector, or some way to reference it
//use find.



int main(){

    ifstream file("people.txt");

    auto people = read_people(file);

    cout << people.size() << endl;

    //need to step through people's file, and output the correct values for each person's totals and etc.

    //for example


    //step through the file of people OR
    //step through the people in the vector, people - which would be easier?
    //maybe step through the vector people.txt

    //If and only if the name is in people.txt, then the name is valid

    //this leads to a lot of if statements.....
    //ok.



}
