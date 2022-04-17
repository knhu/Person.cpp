#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string> 
using namespace std; 
using std::string; 

class Person {
private: 
    int id;
    string name; 
public:
    Person(int id, string name) {
        this->id = id; 
        this->name = name; 
    }
    // destructor
    ~Person(){

    }
    void setName(string name) {
        this->name = name;
    }
    void setID(int id) {
        this->id = id;
    }
    string getName() {
        return this->name;
    }
    int getID() {
        return this->id; 
    }

    // prototypes
    bool operator<(Person&);
    friend std::ostream& operator<<(std::ostream&, Person&);


};
#endif // !PERSON_H
