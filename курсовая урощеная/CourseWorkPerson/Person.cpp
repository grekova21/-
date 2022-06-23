
#include "Person.h"

Person::Person() :
            FullName("Petr Petrov Olegovich"),
            birthdayDate({0, 0, 0}),
            height(0),
            weight(0),
            gender("male") {}

Person::Person(const string &FullName,
               int day, int month, int year,
               int height, int weight,
               const string &gender) :
               FullName(FullName),
               birthdayDate({day, month, year}),
               height(height), weight(weight),
               gender(gender) {}

bool Person::FullNameHasTwoWords() const {
    for(int i = 0; i < FullName.length(); i++){
        if(FullName[i] == ' '){
            return true;
        }
    }
    return false;
}

bool Person::isLegalWeight() const {
    return weight <= 50;
}

void Person::ChangeWeight(int gain) {
    int NewWeight = getWeight()/gain;
    weight += NewWeight;
}

string Person::Info() const {
    string out;

    out = "FullName: " + getFullName() + "\n"
        + "Birthday date: " + to_string(getBirthdayDate().day) + "." + to_string(getBirthdayDate().month) + "." + to_string(getBirthdayDate().year) + "\n"
        + "Height: " + to_string(getHeight()) + "\n"
        + "Weight: " + to_string(getWeight()) + "\n"
        + "Gender: " + getGender() + "\n";

    return out;
}
