#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

string BarcodeArrayScanner(string file, int UPC_arr[], string filler_arr[], int& key) {

	ifstream in_file;//the stream will contain the file contents
	in_file.open(file);
	if (!in_file.is_open()) //check if the file is opened or not
	{
		cout << "Error loading the file. Exiting.";
		return"";
	}
	string line;
	getline(in_file, line);
	string UPC;//to hold data from the file
	string fill;//~~
	int count = 0;
	while (in_file)//read the file while it is not empty
	{
		getline(in_file, fill);

	}

	//searching
	for (int i = 0; i < count; i++) {
		if (UPC_arr[i] == key) {
			return filler_arr[i];
		}

	}
	return "";


}


