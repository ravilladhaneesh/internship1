#include <iostream>
#include <thread>
using namespace std;
/*
void threadfun(int &a ){
	cout << "this is a thread function" << endl;
	cout << "a is " << a++ << endl;
}

*/

int main(){

	int a=6;
	thread t{[=] () {
		cout << "this is a thread function" << endl;
		cout << "a is " << a << endl;
	
	}};
	
	t.join();
	cout << "main  a is "<< a <<endl; 
	return 0;
}

