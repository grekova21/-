
#ifndef COURSEWORKPERSON_PERSON_H
#define COURSEWORKPERSON_PERSON_H

#include <string>
using namespace std;

struct Date
{
    int day, month, year;
};

class Person {
private:
    string FullName;
    Date birthdayDate;
    int height;
    int weight;
    string gender;
public:
    Person();
    Person(const string &FullName,
           int day, int month, int year,
           int height, int weight,
           const string &gender);

    string getFullName() const {return FullName;}
    Date getBirthdayDate() const {return birthdayDate;}
    int getHeight() const {return height;}
    int getWeight() const {return weight;}
    string getGender() const {return gender;}

    bool FullNameHasTwoWords() const;
    bool isLegalWeight() const;

    void ChangeWeight(int gain);

    virtual string Info() const;
};


#endif //COURSEWORKPERSON_PERSON_H
