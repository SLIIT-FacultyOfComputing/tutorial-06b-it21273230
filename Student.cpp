#include "Student.h"
#include <iostream>
#include<string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int SID, char S_name[20]) {
   studentID = SID;
   strcpy(name, S_name);
  
}

// Display StudentId and Name
void Student::display() {

  cout << "student ID:" << SID << endl;
  cout << "student name:" << S_name << endl;
}
