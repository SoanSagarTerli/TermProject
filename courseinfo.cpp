#include "courseinfo.h"
#include <iostream>
using namespace std;
CourseInfo::CourseInfo(int courseId, float marks) : courseId(courseId), marks(marks) {
}
int CourseInfo::getCourseId() const {
    return courseId;
}

float CourseInfo::getMarks() const {
    return marks;
}

void CourseInfo::setCourseId(int newCourseId) {
    courseId = newCourseId;
}

void CourseInfo::setMarks(float newMarks) {
    if (newMarks >= 0.0 && newMarks <= 100.0) {
        marks = newMarks;
    } else {
        cerr << "Error: Marks must be between 0.0 and 100.0" << endl;
    }
}
