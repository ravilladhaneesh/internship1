#include <iostream>

using namespace std;

class Numbers{
	 
	 public :
	 	virtual void fun(){  //  ****** virtual keyword for making the fuction virtual i.e --the most derived definition of the function is called when invoked  *****
	 	cout << "no arguments " <<endl;
	 	}
	 	
	 	virtual void fun (int a){
	 	cout << "1 argument "<<endl;
	 	}
	 	
	 	virtual void fun(float a){
	 		cout << "1 argument of float"<< endl;
	 	}
	 	
};


class derivedNumber1: public Numbers{
	public :
		virtual void fun(){
		cout <<" derivedNumber1 class and ----   overriding function is called" <<endl;
		}
			
};


class derivedNumber2 : public Numbers{

	public :
		void fun(){
			cout << "derivedNumbers2 class function" << endl;
		
		}

};







int main(){
	
	Numbers n;
	n.fun();
	n.fun(5);
	n.fun(5.5f);
	
	derivedNumber1 d;
	cout<<"---------" << endl;
	d.fun();
	cout << "________" <<endl;
	
	
	// ***************** Polymorphism ************** 
	derivedNumber1 d1;
	derivedNumber2 d2;
	Numbers* n1 =&d1 ;
	Numbers *n2 = &d2;
	n1->fun();
	n2->fun(4);
	
	return 0;
	
}
