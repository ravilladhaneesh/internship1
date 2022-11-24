#include<iostream>
#include<fstream>
#include<vector>
using namespace std;


int main(){

    vector <string> v;

    v.insert(v.begin(),"dhaneesh");
    v.insert(v.begin(),"ravilla");

    for(auto itr=v.begin() ; itr!= v.end();itr++){


        cout << *itr << endl;
    }
}

