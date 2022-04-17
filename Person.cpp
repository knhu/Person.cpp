#include "Person.h"
#include <iostream>
#include <algorithm>
using namespace std;
using std::string;
using std::cout;
using std::endl;

bool Person::operator<(Person &p) {
    return getID() < p.getID();
}

std::ostream& operator<<(std::ostream &Cout, Person &p) {
    Cout << p.getID() << ":" << p.getName() << endl; 
    return Cout; 
}