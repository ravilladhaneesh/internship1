#include<bits/stdc++.h>
#include<sys/resource.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct rusage myusage;
long get_mem_usage(){
	struct rusage myusage;
	
	
	getrusage(RUSAGE_SELF,&myusage);
	return myusage.ru_maxrss;
}  

int main(){
	
	long b = get_mem_usage();
	
	
	for (int i=0;i<10;i++){
	char *p =(char *) malloc(1024*100);
	memset(p,'1',1024*100);
	cout <<b << "  ----   " <<get_mem_usage()-b<<endl;
	
	}

}


