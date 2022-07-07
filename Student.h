//
// Created by Velasco on 7/7/2022.
//

#ifndef ECLASSSYSTEMPROJECT_STUDENT_H
#define ECLASSSYSTEMPROJECT_STUDENT_H


#include "Person.h"
#include <iostream>
#include <cstring>

class Student : public Person {
private:
    unsigned int semester;
public:
    // constructor
    Student(const string &, const char *, const char *, unsigned int, const string &,
            const list<Course *> &);

    // copy constructor
    Student(const Student &);

    // destructor
    virtual ~Student();

    // setters and getters
    unsigned int getSemester() const;

    void setSemester(unsigned int semester);

    // FIXME 01: virtual print()

};


#endif //ECLASSSYSTEMPROJECT_STUDENT_H
