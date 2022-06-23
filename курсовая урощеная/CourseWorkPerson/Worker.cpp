
#include "Worker.h"

Worker::Worker() : factory("default"),
                   post("default"),
                   wage(0) {}

Worker::Worker(const string &FullName,
               int day, int month, int year,
               int height, int weight,
               const string &gender,
               const string &factory,
               const string &post,
               int wage) :
               Person(FullName, day, month, year, height, weight, gender),
               factory(factory),
               post(post),
               wage(wage) {}

void Worker::CountWorker() {
    if(post == "cleaner"){
        wage = 100;
    } else if(post == "electrician"){
        wage += (10 * wage) / 100;
    } else if(post == "main electrician"){
        wage += (20 * wage) / 100;
    } else if(post == "director"){
        wage += (50 * wage) / 100;
    }
}

void Worker::ChangePost(const string &NewPost) {
    this->post = NewPost;
}

string Worker::Info() const {
    string out;

    out = Person::Info() +
        + "Factory: " + getFactory() + "\n"
        + "Post: " + getPost() + "\n"
        + "Wage: " + to_string(getWage()) + "\n";

    return out;

}