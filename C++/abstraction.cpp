#include<iostream>

using namespace std;


class base{
	public:
	virtual void fun() =0;
	virtual void see() =0;
	
};

class derived1: public base{
	public:
	void fun(){
	
		cout << " derived class 1 fun" << endl;
	}
	
	void see(){
		cout << "derived class 1 see function " << endl;
	}
};

class derived2 : public base{
	public:
		void fun(){
			cout << "derived class 2 fun" << endl;
		}
		
		void see(){
			cout << "derived class 2 see"<< endl;
		}
		
		
};


int main(){
	
	base *b1;
	derived1 d1;
	b1 = &d1;
	b1->see();
	
	derived2 d2;
	b1 = &d2;
	
	b1->see();


}
