#include <iostream>
#include <stdio.h>
using namespace std;

struct Student{
    char id[9];
    float gpa;
    int age;
    char name[30];

    Student(){              // constructor function
        id[0] = '\0';
        gpa = -99;
        age = -99;
        name[0] = '\0';
    }
}; //kuy
main (){
    Student s1;
    cout << "id =" << s1.id <<", gpa" << s1.gpa << endl; // Test constructor function
    cout << "Hello" << endl;
}
