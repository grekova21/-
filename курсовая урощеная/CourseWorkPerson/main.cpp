#include <iostream>
#include "Person.h"
#include "Worker.h"
#include "Student.h"

int main() {
    Person person("Petr Petrov", 12, 04, 2004, 170, 50, "male");
    cout << person.Info() << endl;
    cout << "Weight less than 50 kg? " << (person.isLegalWeight() ? "Yes" : "No") << endl;
    cout << "Is there a space between the first and last name? " << (person.FullNameHasTwoWords() ? "Yes" : "No") << endl;
    person.ChangeWeight(10);
    cout << endl;
    cout << person.Info();
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Worker worker("Aleksandr Vlasov", 15, 8, 1980, 185, 90, "male", "TOB", "electrician", 50);
    cout << worker.Info() << endl;
    cout << "Weight less than 50 kg? " << (worker.isLegalWeight() ? "Yes" : "No") << endl;
    cout << "Is there a space between the first and last name? " << (worker.FullNameHasTwoWords() ? "Yes" : "No") << endl;
    worker.ChangeWeight(15);
    cout << endl;
    worker.CountWorker();
    cout << worker.Info() << endl;
    worker.ChangePost("director");
    worker.CountWorker();
    cout << worker.Info();
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Student student1("Vlad Likov", 15, 10, 2004, 180, 67, "male", 1, 1, "MPHIT", 8, 0, 0, 0);
    cout << student1.Info();
    cout << endl;
    cout << "Weight less than 50 kg? " << (student1.isLegalWeight() ? "Yes" : "No") << endl;
    cout << "Is there a space between the first and last name? " << (student1.FullNameHasTwoWords() ? "Yes" : "No") << endl;
    student1.ChangeWeight(10);
    cout << endl;
    student1.CalculatingAverageRating();
    student1.CalculatingScholarship();
    cout << student1.Info();
    cout << "Scholarship amount: " << student1.CalculatingScholarship() << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Student student2("Inna Novikova", 22, 3, 2003, 180, 44, "female", 3, 2, "MPHIT", 2, 6, 2, 0);
    cout << student2.Info();
    cout << endl;
    cout << "Weight less than 50 kg? " << (student2.isLegalWeight() ? "Yes" : "No") << endl;
    cout << "Is there a space between the first and last name? " << (student2.FullNameHasTwoWords() ? "Yes" : "No") << endl;
    student2.ChangeWeight(10);
    cout << endl;
    student2.CalculatingAverageRating();
    student2.CalculatingScholarship();
    cout << student2.Info();
    cout << "Scholarship amount: " << student2.CalculatingScholarship() << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Student student3("IgorBodrov", 18, 04, 2002, 190, 75, "male", 4, 3, "MPHIT", 3, 4, 0, 1);
    cout << student3.Info();
    cout << endl;
    cout << "Weight less than 50 kg? " << (student3.isLegalWeight() ? "Yes" : "No") << endl;
    cout << "Is there a space between the first and last name? " << (student3.FullNameHasTwoWords() ? "Yes" : "No") << endl;
    student3.ChangeWeight(10);
    cout << endl;
    student3.CalculatingAverageRating();
    student3.CalculatingScholarship();
    cout << student3.Info();
    cout << "Scholarship amount: " << student3.CalculatingScholarship() << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;

    return 0;
}
