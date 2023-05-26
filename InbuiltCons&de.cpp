#include <iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    private:
    int age;
    public:
    Student(int a,int r){
        age = a;
        rollNumber =r;
    }
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        age = a;
    }
};

// COPY CONSTRUCTOR

// It is used to create the object with same properties / To create the copy of the object.
// If we want to create create copy of s1 object of Student class we can write Student s2(s1);
// To dynamically create copy of the object we can do
// let Student *s3 = new Student(10,101); to create the copy of s3 we can write
// Student s4(*s3); => create static object copy from dynamic object
// Student *s5 = new Student(*s3); => create dynamic object copy from dynamic object
// Student *s6 = new Student(s1); => create dynamic object copy from static object

// COPY ASSIGNMENT OPERATOR

// If we want to copy one object properties to other after creation then we use CAO
// we just write s1 = s2;

// Note : If we write Student s8 = s1; It will not be copy assignemnt operator insetead
// copy constructor will be called to optimize the task
int main(){

}