#include <iostream>
#include <time.h>
#include "BarcodeBSTScanner.h"
#include "BarcodeArrayScanner.h"
#include "BinarySearchTree.h"

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
	if (BST_result == array_result) {
		cout << BST_result << endl;
	}
	else {
		cout << "Error ";
	}
	cout << "Array time: " << t1 << " miliseconds" << endl;
	cout << "BST time: " << t2 << " miliseconds" << endl;

	/*

	*/



}
