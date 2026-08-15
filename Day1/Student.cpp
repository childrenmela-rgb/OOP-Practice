#include <iostream>
#include <set>
#include <string>
#include "Student.hpp"
#include "Course.hpp"
int Student :: count = 0;
  Student :: Student(string sId, string sName, int sAge){
    studentId = sId;
    name = sName;
    age = sAge;
    count++;
  }
  void Student :: studentDetails(){
    cout << "Student ID: " << studentId << '\n';
    cout << "Student Name: " << name << '\n';
    cout << "Student Age: " << age << '\n';
  }
  void Student :: enrollStudent(Course & c){
    if(courses.find(&c) == courses.end()){
      c.addStudent(*this);
      courses.insert(&c);
    }
  }

