#ifndef NODE_H
#define NODE_H

#include "courseinfo.h"
#include <string>

class Node {
private:
    int rollNo;           // Primary key, immutable
    std::string name;     // Mutable
    float cgpa;           // Mutable
    int numSubjects;      // Mutable
    CourseInfo* courses;  // Array of CourseInfo objects
    Node* right;          // Right child pointer
    Node* left;           // Left child pointer
    int height;           // Height of the node
    bool isRollNoKey;     // Flag to indicate key type

public:
    // Constructors
    Node(int rollNo, const std::string& name, float cgpa, int numSubjects, CourseInfo* courses, bool isRollNoKey);
    Node();

    // Key Type Getter
    bool isRollNumberKey() const;

    // Getters
    int getRollNo() const;
    std::string getName() const;
    float getCGPA() const;
    CourseInfo* getCourses() const;
    int getNumSubjects() const;
    int getHeight() const;
    Node* getRight() const;
    Node* getLeft() const;

    // Setters
    void setRollNo(int rollNo);
    void setName(std::string name);
    void setCGPA(float newCGPA);
    void setNumSubjects(int newNumSubjects);
    void setCourses(CourseInfo* newCourses); // New setter for courses
    void setCourseId(int index, int newCourseId);
    void setCourseMarks(int index, float newMarks); // New setter for course marks
    void setHeight(int h);
    void setRight(Node* right);
    void setLeft(Node* left);
};

#endif
