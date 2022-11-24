#include <iostream>
#include <string>
#include <filesystem>
#include<vector>
using namespace std;

int main(){
	string ans="";
	vector <string> v = {"dhaneesh","dhaneesh","i" ,"i" ,"i" ,"am","the"};
	string m="";
	for (int i =0 ; i<v.size();i++){
	
		if (m != v[i]){
			ans.append(v[i]);
			m=v[i];
			ans.append(" ");
		}	
	}
	
	cout<<ans<<endl;

};
