#include<iostream>
#include<fstream>
#include<vector>
using namespace std;


vector<string> removeDupWord(string str)
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


threadfun(string mfile){
    vector <string > v;
    ifstream myfile(mfile);

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

}


vector<string> listFiles(std::string path)
{

	vector<string > f ={}:
    for (auto& dirEntry: std::filesystem::recursive_directory_iterator(path)) {
        if (!dirEntry.is_regular_file()) {
            std::cout << "Directory: " << dirEntry.path() << std::endl;
            continue;
        }
        std::filesystem::path file = dirEntry.path();
        f.insert(f.end(),file.filename);
        std::cout << "Filename: " << file.filename() << " extension: " << file.extension() << std::endl;

    }
    
    return f;
}


int main()
{

	
   vector <string> files_in_f = listFiles("/home/local/ZOHOCORP/dhaneesh-pt6533/Documents/Python/task1/files");
   
   for (auto itr =files_in_f.begin() ;itr!= files_in_f.end();itr++){
   	threadfun(*itr)
   
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
	
	

}

