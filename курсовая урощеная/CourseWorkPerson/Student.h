
#ifndef COURSEWORKPERSON_STUDENT_H
#define COURSEWORKPERSON_STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int group, course, scholarship;
    string faculty;
    int BestRating, GoodRating, SatisfactoryRating, UnsatisfactoryRating;
public:
    Student();
    Student(const string &FullName,
            int day, int month, int year,
            int height, int weight,
            const string &gender,
            int group, int course,
            const string &faculty,
            int BestRating,
            int GoodRating,
            int SatisfactoryRating,
            int UnsatisfactoryRating);

    int getGroup() const {return group;}
    int getCourse() const {return course;}
    int getScholarship() const {return scholarship;}
    string getFaculty() const {return faculty;}
    int getBestRating() const {return BestRating;}
    int getGoodRating() const {return GoodRating;}
    int getSatisfactoryRating() const {return SatisfactoryRating;}
    int getUnsatisfactoryRating() const {return UnsatisfactoryRating;}

    void setGroup(int Group){group = Group;}
    void setFaculty(const string &Faculty){faculty = Faculty;}
    void setCourse(){course +=1;}
    void setRating(int bestRating,
                   int goodRating,
                   int satisfactoryRating,
                   int unsatisfactoryRating){
        BestRating = bestRating;
        GoodRating = goodRating;
        SatisfactoryRating = satisfactoryRating;
        UnsatisfactoryRating = unsatisfactoryRating;
    }

    int CalculatingAverageRating() const;
    int CalculatingScholarship();

    string Info() const override;
};


#endif //COURSEWORKPERSON_STUDENT_H
