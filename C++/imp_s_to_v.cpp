#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<filesystem>
#include<thread>

using namespace std;


vector<string> StringToVector(string str);
void threadfun(string mfile);
vector<string> listFiles(std::string path);
string remove_dup(vector<string> v);

//**********************************************************************
vector<string> StringToVector(string str)
{
	string s;
	vector<string> vec={};
    string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
        	
            //cout << word << endl;
            vec.insert(vec.end(),word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    vec.insert(vec.end(),word);
    //cout << word << endl;
    return vec;
}

//**********************************************************************
void threadfun(string mfile){
    string s;
    vector<string> v={};
    ifstream myfile(mfile);

    while (myfile){
        getline(myfile,s); ///**********************error hear
        v.insert(v.end(),s);
        v.insert(v.end()," ");
    }
    cout << v[0]<<endl;
    string ss = "";
	//cout<<ss<<endl;
   for (auto itr =v.begin() ;itr!=v.end();itr++){
        ss.append(*itr);
    }
    cout << ss<<endl;
    

    vector<string> vec = StringToVector(ss);
    
    string ans = remove_dup(vec);
    
    cout <<ans<<endl;
    
    
    

}

//**********************************************************************
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



//**********************************************************************
string remove_dup(vector<string> v){
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



int main()
{

	
   vector <string> files_in_f = listFiles("/home/local/ZOHOCORP/dhaneesh-pt6533/Documents/C++/files");
   
   //cout<<"__________"<<endl<< files_in_f[0] <<endl<<"______________"<<endl;
   
   int no_of_threads ,j;
   if (files_in_f.size() <10)
   	no_of_threads = files_in_f.size();
   else
   	no_of_threads = 10;
   
   
   //cout<<no_of_threads<<endl;
   
   vector<thread> threads;
   
   
   j=0;
   for(int i=0;i<no_of_threads;i++){
	
	threads.push_back(thread(threadfun,files_in_f[j]));
	j++;

	}

  for (thread &t : threads){
  if (t.joinable()){
  t.join();
  }
  }
  
}


/*
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

	    vector<string> vec = removeDupWord(ss);
	    */

