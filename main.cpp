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



//would it be easier to read as strings and then store accordingly?

//COMPLEXITY: O(n): Time Complexity directly proportional to number of lines in the input file, o(n).

//store as strings inside read_people
//use this later, for outputting
vector<person> read_people(ifstream &in) {
    vector<person> people_names;
    string line;
    while (getline(in, line)) {
        istringstream line_s(line);
        string name;
        if (line_s>>name) {
            people_names.push_back(name);
        }
    }
    if (people_names.empty()) {
        cout << "The people.txt file is empty" << endl;
    } else {
        return people_names;
    }
}


//read payments
vector<person> read_payments(ifstream &in) {
    vector<person> people;
    string line;
    while (getline(in, line)) {
        istringstream line_s(line);
        string name;
        string item;
        float price;
        if (line_s >> name >> item >> price) {
            cout << "Reading data..." << endl;
            for (auto P : people){
                if (P.get_name() == name) {
                    P.add_item(make_tuple(item, price));
                    P.add_to_total(price);
                    cout << P.get_total_price() << endl;
                }
                else {
                    people.push_back(person(name));
                    person p = people.back();
                    p.add_item(make_tuple(item, price));
                    p.add_to_total(price);
                    cout << p.get_total_price() << endl;
                }
        }
    }
}
    return people;
}



int main(){

    ifstream filePeople("people.txt");
    ifstream filePayments("payments.txt");

    auto people = read_people(filePeople);
    auto payments = read_payments(filePayments);


    for(int i = 0; i < people.size(); i++) {
        //call the name and output their details
        cout << people[i].get_name() + "\n";
        cout << people[i].get_total_price() << "\n";
    }
    //it seems like the people elements inside the vector people
    //are not connected to the people elements inside the vector payments

    //could assign to the objects in the people vector but that doesn't seem right

    //ORORR USE GET NAME AND SEE IF THE NAMES ARE EQUAL THEN DO OUTPUT!!


    //could cut the people who are not in the vector and print the others?
    //somehow...



    //while payments and run
    cout << people.size() << endl;

    cout << payments[0].get_total_price() << endl;

}
