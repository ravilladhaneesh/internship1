#include<iostream>
using namespace std;
int c=0;

class Person {
public:
    //Person(int x)  { c++; cout << "Person::Person(int ) called  "<<c << endl;   }
    Person()     {c++; cout << "Person::Person() called "<< c<< endl;   }
     void print(){ cout << "hello person"<<endl;}
};
 
class Faculty : virtual public Person {
public:
    Faculty(int x) { c++;
       cout<<"Faculty::Faculty(int ) called "<< c<< endl;
    }
     void print(){ cout << "hello faculty"<<endl;}
};


class Student :virtual  public Person {
public:
    Student(int x) { c++;
        cout<<"Student::Student(int ) called "<< c<< endl;
    }
     void print(){ cout << "hello student"<<endl;}
};


class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   { c++;
        cout<<"TA::TA(int ) called "<< c<< endl;
    }
  void print(){ cout << "hello Ta"<<endl;}
};
 
int main()  {

    TA ta1(30);
    ta1.print();

}

/*

class A
{
  int x;
public:
	  A(int i) 
	  {
	  	 x = i; 
	  }
	  void print() { 
	  	cout << x; 
	  }
};

 
class B: virtual public A
{
	public:
 	 B():A(10) {  }
};
 
class C:  virtual public A
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
	public:
	D(){}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
*/
