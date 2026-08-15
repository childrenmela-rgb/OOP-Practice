#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <set>
class Course;
using namespace std;
class Student{
private:
  string studentId;
  string name;
  int age;
  set <Course *> courses;
public:
  static int count;
  Student(string sId, string sName, int sAge);
  void enrollStudent(Course & c);
  void studentDetails();
};
#endif