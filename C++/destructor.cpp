#include<iostream>
using namespace std;
int count=0;
class Test
{
    public:
        Test()
        {
            count++;
            cout<<"No. of Object created:   "<<count<<endl;
        }
         
         
        void print(){
        	
        	cout << "print function"<< endl;
        
        
        }
        ~Test()
        {
            cout<<"No. of Object destroyed:\t"<<count<<endl;
            --count;
        }
};
 
int main()
{
    Test t,t1,t2,t3;
    t.print();
    return 0;
}
