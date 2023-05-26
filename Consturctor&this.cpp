#include <iostream>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:

    Student(){
        cout<<"Default constructor is called"<<endl;
    }
    Student(int a){
        age  = a;
    }
    Student(int a, int r){
        age = a;
        rollNumber = r;
    }
    void display(){
        cout<<"Age is : "<<age<<endl;
        cout<<"Roll Number is : "<<rollNumber<<endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        age = a;
    }

};
// DEFAULT / INBUILT CONSTRUCTOR

// When we initialize the object let say Student s1; the function s1.Student() gets called.
// Then function name is exactly same as the class name. Its work is to initialize the 
// data memeber with garbage value. This special function is called as Constructor / Default
// Constructor. This constructor is called if there is no user defined constructor inside the
// class.
// Note : It does not take any argument
// Note : Constructor is called only once that is during creation of the object.
// PARAMETERIZED CONSTRUCTOR

// Same as default constructor except it can take argument.
// Note : For one object only one constructor will be called. If we create the parameterized 
// constructor then the default constructor will not be availble and if we want we can create 
// it explicitly

// WHAT IF THE ARGUMNET NAME IN THE CONSTRUCTOR IS SAME AS VARIABLE NAME ?
// let say in the above class we create constructor :
// Student(int rollNumber){
//      this->rollNumber  = rollNumber ;
// }
// Note : this holds the address of current object

int main(){
    // Default constructor is called will be printed
    Student s1;
    // age will be set;
    Student s2(20);
    s2.display();
    // age and roll Number will be set
    Student s3(20,102);
    s3.display();
}
