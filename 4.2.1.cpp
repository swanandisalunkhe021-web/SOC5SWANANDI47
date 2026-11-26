#include<iostream>
using namespace std;

 class Person
 {
  private:
  int age;

  public:
  void eat()
  {
   cout<<"the person is eating"<<endl;
  }
 };

   class Doctor:public Person
   {
    public:
    void eat()
    {
     cout<<"the doctor is eating apple"<<endl;
    }
  };
   
    int main()
    {
     Person p;
     p.eat();
     Doctor d;
     d.eat();

     return 0;
    }
