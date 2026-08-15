#ifndef COURSE_H
#define COURSE_H
class Student;
#include <string>
#include <set> 
using namespace std;
class Course{
private:
  string courseCode;
  string courseName;
  int credits;
  int countStudents;
  set <Student *> students;
public:
  static int count;
  Course(string courseCode, string cName, int cred, int cntStudent);
  void displayCourseInfo();
  void enrollStudent(Student &);
  void addStudent(Student & s);
};
#endif
