#include <iostream>

using namespace std;

//************* inline function ***************
inline int add(int a, int b){

	return a+b;
}



// ************* default parameters *********

int sub( int a, int b , int c=1, int d=1){
	
	return a-b-c-d;

}


int main(){

	//inline function
	cout << add(5,4) << endl;
	
	
	cout<< sub(22,3,4,5) << endl; 
	// default paramters
	cout << sub(3,3) << endl;
	
	return 0;
}
