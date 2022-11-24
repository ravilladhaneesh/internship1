#include <iostream>


using namespace std;

class ComplexNum{
	public :
		ComplexNum(){
			real = 0;
			img = 0;
		}
		int real;
		int img;
		ComplexNum(int r, int i){
			
			real = r;
			img = i;
	
		}
		
		void print(){
			cout <<  "real part is " << real << ", imag part is " << img << endl ;
			cout <<"complex num is "<< real << " + " << img << "i" <<endl;
			
		}
		
		// Binary Operator
		ComplexNum operator +(ComplexNum c){
			ComplexNum t;
			t.real = real + c.real;
			t.img  = img + c.img;
			
			return t;
		}
		// Unary operator 
		ComplexNum operator +(){
			ComplexNum t;
			t.real = real + 1;
			t.img = img + 1;
			return t;
		}
};

int main()
{
	ComplexNum c1(5,4);
	ComplexNum c2(3,2);
	ComplexNum c3;
	
	c3 = c1 + c2;
	c3.print();
	
	ComplexNum c4;
	c4 = +c1;
	c4.print();
	
	
}


