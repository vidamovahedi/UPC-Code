#include <iostream>
#include <time.h>
using namespace std;

int main(){
	clock_t t;
	t = clock();
	size_t size = 100000;
	int *pInt = new int[size]; //just for testing
	for(size_t i = 0; i < size; i++) //randomizes an array
		pInt[i] = rand();
		t = clock() - t;
	cout << "time: " << t << " miliseconds" << endl;
	cout << CLOCKS_PER_SEC << " clocks per second" << endl;
	cout << "time: " << t*1.0/CLOCKS_PER_SEC << " seconds" << endl;

	delete [] pInt;
	return 0;
}
