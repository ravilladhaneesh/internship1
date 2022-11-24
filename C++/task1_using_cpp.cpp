#include<iostream>
#include<fstream>
#include<vector>
using namespace std;


int main()
{

    string s;
    vector <string > v;
    ifstream myfile("test1.txt");

    while (myfile){
        getline(myfile,s);
        v.insert(v.end(),s);
        v.insert(v.end()," ");
    }
    string ss = "";

   for (auto itr =v.begin() ;itr!=v.end();itr++){
        ss.append(*itr);
    }

    cout << ss<<endl;



}
