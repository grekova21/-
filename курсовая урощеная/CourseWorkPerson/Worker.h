
#ifndef COURSEWORKPERSON_WORKER_H
#define COURSEWORKPERSON_WORKER_H

#include "Person.h"

class Worker : public Person {
private:
    string factory, post;
    int wage;
public:
    Worker();
    Worker(const string &FullName,
           int day, int month, int year,
           int height, int weight,
           const string &gender,
           const string &factory,
           const string &post,
           int wage);

    string getFactory() const {return factory;}
    string getPost() const {return post;}
    int getWage() const {return wage;}

    void CountWorker();
    void ChangePost(const string &NewPost);

    string Info() const override;

};


#endif //COURSEWORKPERSON_WORKER_H
