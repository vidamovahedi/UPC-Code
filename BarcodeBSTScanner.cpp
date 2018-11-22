#include <iostream>
#include <fstream>
#include <sstream>
#include "BinarySearchTree.h"

using namespace std;

void BST_search(string& file, BinarySearchTree& BST)
{

    ifstream in_file;//the stream will contain the file contents
    in_file.open("upc_corpus.txt");
    if(!in_file.is_open()) //check if the file is opened or not
    {
        cout<<"Error loading the file. Exiting.";
        return;
    }
    file = to_str(in_file);
    istringstream ss(file);
    getline(in_file,line);
    string UPC;//to hold data from the file
    string fill;
    while(!ss)//read the file while it is not empty
    {
        getline(ss,UPC,',');
        getline>>fill;
        BinarySearchTree.insert(UPC,fill);
    }





}
