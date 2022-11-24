/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

*/
/*

//                                                                cout

#include <iostream>

using namespace std;

int main()
{


    int a = 10;
    cout << a  << endl;
    cout << "a  " <<  a <<' b'<<endl;
    cout<<'a '<<'b';

    return 0;
}

*/





// // //                                                        String functions
/*

#include <iostream>

using namespace std;

int main()
{

    string s = "abcdefghij";

    char c = s[0];

    cout << c <<endl;


    cout <<s.length()<<endl;

    cout << s.find("d",0) <<endl;

    cout << s.substr(0,4);


    return 0;

}
*/



//                                                          math operations


/*
#include <iostream>

#include <cmath>

using namespace std;

int main(){

    double a=10.0;

    cout << a / 3 <<endl;


    cout << round(a) <<endl;

    cout << pow(2,2.09762) << endl;

    cout << sqrt(4.4) << endl;

    cout << fmax(4,10) << endl;

    cout << fmin (4,3) << endl;

    cout << round(4.5);
}




*/


//                  console _____________________  input

/*


#include <iostream>

using namespace std;

int main()
{

    int age ;
    string name ;
    char grade ;

    cout << "Enter name of user : " ;
    getline(cin , name);

    cout << "Enter grade of user " ;
    cin >> grade;

    cout << "Enter age of user ; " ;
    cin >> age ;

    cout << "HIII " << name <<endl;
    cout << name << "'s grade is "<< grade << endl;
    cout << "age of " << name << "is " << age <<endl;


}


*/



//                                                              Arrays


/*

#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3 , 4, 5};

    cout << arr[2] <<endl ;


    char c [] = { 'a' , 'b' , 'c' };

    cout << c[1] << endl;


    string s[12] = { "dhaneesh" , "ravilla" , "nee" } ;

    cout << s[1];

}

*/



//                              functions

/*

#include<iostream>

using namespace std;




int twoage(int age);


void  sayhello(string name,int age ){
    cout << "hello "  << name << " --is " << age <<endl;

}




int main(){

    sayhello("dhaneesh", 21);

    int t = twoage(21);

    cout << t<< endl;
    return 0;


}

int twoage(int age){

    return 2*age;

}

*/



//                                                      OOPS ------class and inheritence and access modifiers

/*
#include <iostream>

using namespace std;


class Car{

    private:
        string engine;
    public:
        string name;
        string color;
        int price;

        Car(string n ,string c , int p,string e){
        name = n;
        color = c;
        price = p;
        setEngine(e);

        }

        void setEngine(string e){
        engine =e;

        }

        string getEngine(){
        return engine;
        }


        void Speed(){
            cout << name << " is 100 m speed " << endl;
        }
};


class Sumo :public Car {
    public:
        int capacity;
        Sumo(string n,string c,int p, string e, int cap): Car(n,c,p,e){
            capacity = cap;
        }

        void Speed(){
            cout << "Sumo " <<name << " is 150 m speed " << endl;

        }
};

class Jeep : public Car{
public :
    string type;
    Jeep(string n,string c,int p, string e, string t): Car (n,c,p,e){
        type = t;

    }

    void Speed(){
        cout <<  "Jeep "<< name << "is " << getEngine() << "powers speed " << endl;
    }

};





int main()
{


    Car c ("tata", "black" , 200000,"fca");

    //c.name="tata";
    //c.color = "red";
    //c.price = 10000;
    // cout << c.getEngine();

    Sumo s("ta", "red", 3000, "and", 4);
    cout << s.capacity << endl;
    cout << s.getEngine()<< endl;
    s.setEngine("tataEngine -- 3");
    cout << s.getEngine()<< endl;

    s.Speed();



}

*/



//              POinters

/*

#include <iostream>

using namespace std;





int main(){


    int a = 5;
    int *p   = &a;
    //p = &a;
    cout << *p;

}




*/


//                 ********** Strucutres **************

/*

#include<iostream>

using namespace std;

struct Person{
    string name;
    int age;
    int sal;
};


int main(){

    Person p[5];

    for (int i=0 ;i< 2;i++)
    {

        cout << "enter person " <<(i+1) << " name , age , salary " <<endl;

        //getline(cin , p[i].name);
        cin >> p[i].name;
        cin >> p[i].age ;
        cin >> p[i].sal ;
    }

    for (int i=0;i<2;i++){
        cout << "person " <<(i+1) << " name , age , salary " <<endl;
        cout << p[i].name<< endl;
        cout << p[i].age << endl;
        cout <<p[i].sal << endl;
    }
}
*/




//          *********** type casting *************

#include <iostream>

using namespace std;

int main(){
    char c = 'a';
    int a=45;
    float b=45.3;
    double d = 45.3;
    long  l = 45.45;
    cout << "size of c is " << c << " " << sizeof (c) << endl;
    cout << "size of a is " << a << " "<< sizeof(a)<<endl;
    cout << "size of b is "<< b   << " "<< sizeof(b) <<endl;
    cout << "size of d is "<< d << " " << sizeof(d) <<endl;
    cout << "size of l is "<<  l << " " << sizeof(l) <<endl;


    cout << " sum is " << a+b << endl;
    cout << " sum is " << int(a)+b  << endl;
    cout << " sum is " << a+int(b ) << endl;
    cout << " sum is " << double(a) << endl; // prints 45
    cout << " sum is " << (double)a+b << endl;




    return 0;


}









