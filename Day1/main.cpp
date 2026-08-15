#include <iostream>
#include "Student.hpp"
#include "Course.hpp"

using namespace std;

int main() {

    // Create courses
    Course c1("CS101", "Data Structures", 4, 0);
    Course c2("CS102", "Computer Organization", 4, 0);
    Course c3("MA101", "Discrete Mathematics", 3, 0);
    Course c4("EC101", "Digital Electronics", 3, 0);

    // Create students
    Student s1("S001", "Alice", 19);
    Student s2("S002", "Bob", 20);
    Student s3("S003", "Charlie", 19);

    // Enroll students
    s1.enrollStudent(c1);
    s1.enrollStudent(c2);
    s1.enrollStudent(c3);

    s2.enrollStudent(c1);
    s2.enrollStudent(c4);

    s3.enrollStudent(c1);
    s3.enrollStudent(c2);
    s3.enrollStudent(c4);

    // Try duplicate enrollment
    s1.enrollStudent(c1);

    cout << "\n===== STUDENTS =====\n";

    s1.studentDetails();
    s2.studentDetails();
    s3.studentDetails();

    cout << "\n===== COURSES =====\n";

    c1.displayCourseInfo();
    c2.displayCourseInfo();
    c3.displayCourseInfo();
    c4.displayCourseInfo();

    cout << "\n===== COUNTS =====\n";

    cout << "Total students: " << Student::count << endl;
    cout << "Total courses: " << Course::count << endl;

    return 0;
}