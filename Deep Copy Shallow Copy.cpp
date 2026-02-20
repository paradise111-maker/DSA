#include<iostream>
using namespace std;

class Student{
    public:
    int* marks;
    Student(int m){
        marks = new int(m);
    }
    //deep copy
    // Student(const Student &other){
    //     marks = new int(*other.marks);
    // }
    Student operator=(Student &s){
        
        marks = s.marks;
    }
    //shallow copy
    Student(const Student &s){
        marks = s.marks;
    }

    ~Student(){
        delete marks;
        cout<<"Destructor Called"<<endl;
    }
};

int main(){
    Student s1(90);
    Student s2 = s1;
    *s2.marks = 80; 
    cout<<*s1.marks<<endl;
    cout<<*s2.marks<<endl;
}
