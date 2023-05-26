#include <iostream>
using namespace std;


// class Student{
//     int rollNumber;
//     int age;
// };
// STATIC ALLOCATION FOR OBJECT
// To create object of class student we just write : Student s1;
// to access the property use : s1.age = 24;

// DYNAMIC CREATION OF OBJET
// we create integer dynamically by : int * a = new int;
// to create object we use : Student * s2 = new Student;
// To access the property use : (*s2).age = 24 or use s2->age = 24

// Note : By default the property inside the class is set to private. If you want to 
// make it public use public : 

// FUNCTION IN CLASS
// Note : Private property can be only accessed inside the class
// To change private property of the class we call give a function value that we want to se
// and then we can change it in the function;
// Note : If you print void function it will give error
class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:
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

int main(){
    // STATICALLY CREATION OF OBJECT
    Student s1;
    s1.rollNumber = 101;
    cout<<"s1 age(garbage value) : "<<s1.getAge()<<endl;
    cout<<"s1 Roll Number : "<<s1.rollNumber<<endl;
    // Do not cout<<s1.display(); since it is not returning anything;
    // s1.display();
    s1.setAge(20);
    cout<<"s1 new age : "<<s1.getAge()<<endl;

    
    // DYNAMIC CREATION OF THE OBJECT

    Student* s2 = new Student;
    s2->rollNumber = 103;
    cout<<"s2 age(garbage value) : "<<s2->getAge()<<endl;
    cout<<"s2 Roll Number : "<<s2->rollNumber<<endl;
    s2->setAge(30);
    cout<<"s2 new age : "<<s2->getAge();
}
