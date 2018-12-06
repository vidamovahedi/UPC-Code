#include <iostream>
#include <time.h>
#include "BarcodeBSTScanner.h"
#include "BarcodeArrayScanner.h"
#include "BinarySearchTree.h"
#include "Hash.h"

using namespace std;
const int SIZE = 10460;

int main() {
	string filename = "upc_corpus.txt";
	int key;
	cout << "UPC Code:";
	cin >> key;
	clock_t t1;
	t1 = clock();

	//code goes here for array
	int UPC[SIZE];
	string filler[SIZE];

	string array_result = BarcodeArrayScanner(filename, UPC, filler, key);
	t1 = clock() - t1;

	clock_t t2;
	t2 = clock();

	//code goes here for BST
	string BST_result = BarcodeBSTScanner(filename, key);

	t2 = clock() - t2;

	//code goes here for Hash
	clock_t t3 = clock();
	Hash* h = new Hash();
	h->value();//calling the value function
	h->search(key);//calling the key function
	t3 = clock() - t3;

	cout << BST_result << "-" << array_result;
	if (BST_result == array_result) {
		cout << BST_result << endl;
	}
	else {
		cout << "Error ";
	}
	cout << "Array time: " << t1 << " miliseconds" << endl;
	cout << "BST time: " << t2 << " miliseconds" << endl;
	cout << "Hash time: " << t3 << " miliseconds" << endl;

	/*

	*/
	system("pause");


}

