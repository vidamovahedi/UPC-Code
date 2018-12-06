#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include "BinarySearchTree.h"

using namespace std;

string BarcodeBSTScanner(string& file, int& key)
{
	BinarySearchTree<int> BST;
	ifstream in_file;//the stream will contain the file contents
	in_file.open(file);
	if (!in_file.is_open()) //check if the file is opened or not
	{
		cout << "Error loading the file. Exiting.";
		return "";
	}
	istringstream ss(file);
	string line;
	getline(in_file, line);
	string UPC;//to hold data from the file
	string fill;
	while (!ss)//read the file while it is not empty
	{
		getline(ss, UPC, ',');
		getline(ss, fill);
		int upc = stoi(UPC);
		BST.insert(upc, fill);
	}
	return BST.search(key);




}


