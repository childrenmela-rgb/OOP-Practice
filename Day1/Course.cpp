#include <iostream>
#include <set>
#include <string>
#include "Course.hpp"
#include "Student.hpp"
int Course :: count = 0;
  Course :: Course(string cCode, string cName, int cred, int cntStudent){
    courseCode = cCode;
    courseName = cName;
    credits = cred;
    countStudents = cntStudent;
    count++;
  }
  void Course :: displayCourseInfo(){
    cout << "Course Code: " << courseCode << '\n';
    cout << "Course Name: " << courseName << '\n';
    cout << "Course Credits: " << credits << '\n';
    cout << "Number of Students Enrolled: " << countStudents << '\n';
  }
  void Course :: enrollStudent(Student & s){
    if(students.find(&s) == students.end()){
      countStudents++;
      s.enrollStudent(*this);
    }
  }

  void Course :: addStudent(Student & s){
    if(students.find(&s) == students.end()){
      countStudents++;
      students.insert(&s);
    }
  }