# This program serves as the driver program to test the header file Person.cpp
# Author: Kevin Nhu
# Date Last Modified: December 14, 2021
#include "Person.h"
#include <algorithm>
#include <vector>
using namespace std;
using std::cout;
using std::endl; 
using std::sort; 

int main() {
std::vector<Person> people;

people.push_back(Person(107, "Romeo"));
people.push_back(Person(303, "Sampson"));
people.push_back(Person(510, "Pualani"));
people.push_back(Person(210, "Anton"));

#if defined _WIN32 || defined __linux__
    cout << "Original Person list (1)" << std::endl;
    for (Person p : people) {
        cout << p; 
    }
    std::sort(people.begin(), people.end());
    cout << "Sorted Person list using ID (2)" << std::endl;
    for (Person p : people) {
        cout << p; 
    }
    people.erase(people.begin());
    cout << "Popping off top item of vector Person (3)" << std::endl;
    for (Person p : people) {
        cout << p; 
    }
    people.push_back(Person(101, "Juliet"));
    Person *ptr = &people[0];
    cout << "After inserting new item onto vector Person, output person list using vector pointers (4)" << std::endl;
    for (int x = 0; x < people.size(); x++) { 
        cout << *ptr;
        ptr++;  
#else 
    cout << "Original Person list (1)" << std::endl;
    for (Person p : people) {
        cout << p; 
    }
    auto less = [](Person x, Person y){return x.getID() < y.getID();};
    // sort(people.begin(), people.end());
    sort(people.begin(), people.end(), less);
    cout << "Sorted Person list using ID (2)" << std::endl;
    for (Person p : people) {
        cout << p;
    }
    people.erase(people.begin());
    cout << "Popping off top item of vector Person (3)" << std::endl;
    for (Person p : people) {
        cout << p; 
    }
    people.push_back(Person(101, "Juliet"));
    Person *ptr = &people[0];
    cout << "After inserting new item onto vector Person, output person list using vector pointers (4)" << std::endl;
    for (int x = 0; x < people.size(); x++) { 
        cout << *ptr;
        ptr++;  
    }
    return 0; 
#endif
}
