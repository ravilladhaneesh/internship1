#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

int c = 0;

std::mutex m;

void inc(){

	for(int i =0 ;i < 1000;++i){
		if (m.try_lock()){
		++c;
		m.unlock();
		}
	}
}



int main(){

	thread t1 (inc);
	thread t2 (inc);

	t1.join();
	t2.join();

	cout << "c is " << c << endl;

	return 0;
}
