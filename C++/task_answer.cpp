//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include <filesystem>
#include<thread>
#include <ctime>
#include <ratio>
#include <chrono>
using namespace std;

using namespace std::chrono;


//******************************************************************************************************************
vector<string> listFiles(std::string path)
{
	vector<string> f ={};
    for (auto& dirEntry: std::filesystem::recursive_directory_iterator(path)) {
        if (!dirEntry.is_regular_file()) {
            //std::cout << "Directory: " << dirEntry.path() << std::endl;
            continue;
        }
        std::filesystem::path file = dirEntry.path();
        f.insert(f.end(),file.filename());
        //std::cout << "Filename: " << file.filename() << " extension: " << file.extension() << std::endl;
    }
    return f;
}
 
//******************************************************************************************************************



vector<string> split(string str, string token){
    vector<string>result;
    while(str.size()){
        int index = str.find(token);
        if(index!=string::npos){
            result.push_back(str.substr(0,index));
            str = str.substr(index+token.size());
            if(str.size()==0)result.push_back(str);
        }else{
            result.push_back(str);
            str = "";
        }
    }

    vector<string> res;
    
    for(auto itr=result.begin();itr!=result.end();itr++){
	    if (*itr != ""){	
	    		res.insert(res.end(),*itr);
	    
	    }    
    }

    return res;
}


//*****************************************************************************************************************

void remove_succ_duplicate(string fi){


	string s;
	string file1="files/";
	file1.append(fi);
	ifstream f(file1);
	string str= "";
	while (f){
		getline(f,s);
				
		str.append(s);
		str.append(" ");
	}
	
	vector <string> vec = split(str," ");
	
	vector <string > new_vec ;
	
	string recent_word = " ";
	for (int i=0 ;i<vec.size();i++){
		//  cout << vec[i]<<"        "<< recent_word<<endl;
		if ( vec[i] != recent_word) {
			
			new_vec.insert(new_vec.end(),vec[i]);
			recent_word=vec[i];
		
		
		}
	}
	
	string ans = "";
	for(auto itr = new_vec.begin();itr!=new_vec.end();itr++){
		ans.append(*itr);
		ans.append(" ");
	}
	
	cout <<ans<<endl;
	cout<<endl<<endl;

	
	
}

//**************************************************************************************************************

int main(){


	high_resolution_clock::time_point start_time = high_resolution_clock::now();
	
	vector <string> files_in_f = listFiles("/home/local/ZOHOCORP/dhaneesh-pt6533/Documents/C++/files");
	
	int no_of_threads;
	if (files_in_f.size() > 10)
		 no_of_threads = 10;	
	else
		no_of_threads = files_in_f.size();
		
	
	
	vector<thread > threads ;
	
	int j=0;
	for(int i=0;i<no_of_threads;i++){
		
		threads.push_back(thread(remove_succ_duplicate,files_in_f[j]));
		j++;

	}

	for (thread &t : threads){
	  	if (t.joinable()){
	  	t.join();
	  	}
	 }
	
	high_resolution_clock::time_point end_time = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(end_time - start_time);
	
	
	cout<< "---------------------------------------------------------------------------"<<endl;
	cout << "finished in "<< time_span.count() << "   seconds " <<endl;
	
	
	return 0;


}
