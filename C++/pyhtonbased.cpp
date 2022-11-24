#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<filesystem>
#include<thread>

using namespace std;


string remove_dup(string mfile){

	string s ;
	string str="";
	ifstream myfile(mfile);
	while (myfile){
        getline(myfile,s); 
        str.append(s);
    	}
    	
    	
	string ans="";
	string m="";
	for (int i =0 ; i<v.size();i++){
	
		if (m != v[i]){
			ans.append(v[i]);
			m=v[i];
			ans.append(" ");
		}	
	}
	
	//cout<<ans<<endl;

	return ans;
}

