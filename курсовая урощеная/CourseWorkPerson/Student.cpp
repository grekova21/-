
#include "Student.h"

Student::Student() : group(0),
                     course(0),
                     faculty("default"),
                     BestRating(0),
                     GoodRating(0),
                     SatisfactoryRating(0),
                     UnsatisfactoryRating(0) {}

Student::Student(const string &FullName,
                 int day, int month, int year,
                 int height, int weight,
                 const string &gender,
                 int group, int course,
                 const string &faculty,
                 int BestRating,
                 int GoodRating,
                 int SatisfactoryRating,
                 int UnsatisfactoryRating) :
                 Person(FullName, day, month, year, height, weight, gender),
                 group(group), course(course),
                 faculty(faculty),
                 BestRating(BestRating),
                 GoodRating(GoodRating),
                 SatisfactoryRating(SatisfactoryRating),
                 UnsatisfactoryRating(UnsatisfactoryRating) {}

int Student::CalculatingAverageRating() const {
    return ((BestRating * 5) + (GoodRating * 4) +
            (SatisfactoryRating * 3) + (UnsatisfactoryRating * 2)/
            (BestRating + GoodRating + SatisfactoryRating + UnsatisfactoryRating));
}

int Student::CalculatingScholarship() {
    if (BestRating > 0 && GoodRating == 0 && SatisfactoryRating == 0 && UnsatisfactoryRating == 0){
        setCourse();
        return 2900;
    } else if (Student::CalculatingAverageRating() >= 4 && UnsatisfactoryRating == 0){
        setCourse();
        return 2000;
    } else {
        return 0;
    }
    return 0;
}

string Student::Info() const {
    string out;

    out = Person::Info() +
        + "Group: " + to_string(getGroup()) + "\n"
        + "Course: " + to_string(getCourse()) + "\n"
        + "Faculty: " + getFaculty() + "\n"
        + "Best rating: " + to_string(getBestRating()) + "\n"
        + "Good rating: " + to_string(getGoodRating()) + "\n"
        + "Satisfactory rating: " + to_string(getSatisfactoryRating()) + "\n"
        + "Unsatisfactory rating: " + to_string(getUnsatisfactoryRating()) + "\n";

    return out;
}