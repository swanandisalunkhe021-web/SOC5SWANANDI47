#include<iostream>
using namespace std;

class Person
{
 public:
 int age;
 string name;
 
  void getdata()
  {
    cout<<"enter age:";
    cin>>age;
    cout<<"enter name:";
    cin>>name;
  }
  void display()
  {
    cout<<"the name is:"<<name;
    cout<<"age is:"<<age;
  }
};
  class Student: public Person
{
  public:
   int roll_no;
   float marks;

  void input()
  {
    cout<<"enter roll number:";
    cin>>roll_no;
    cout<<"enter marks:";
    cin>>marks;
  }
  void display1()
  {
    cout<<"\n---student details---"<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"roll number:"<<roll_no<<endl;
  }
};
  int main()
 {
   Student s;
   s.getdata();
   s.display();
   s.input();
   s.display1();
   return 0;
 }
