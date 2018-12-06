#include <iostream>
#include <fstream>
#include <string>
#include <utility>
using namespace std;
struct LLNode
{
int count=0;//count of elements in each hash position in table
pair<int,string> arr[100];//max number to be added per hash entry
};

class Hash
{
LLNode* table = new LLNode[1000];
public:
Hash(){}
void value();
string search(int key);
};

void Hash::value()
{
ifstream in_file;//the stream will contain the file contents
in_file.open("upc_corpus.txt");
if (!in_file.is_open())
{
cout << "Error loading the file. Exiting.";
return;
}
string line;
getline(in_file, line);
string UPC;//to hold data from the file
string fill;//~~
while (in_file)//read the file while it is not empty
{
getline(in_file, UPC,',');
int upc = stoi(UPC);
int index = upc % 1000;//hash position in table
getline(in_file, line);
pair<int, string> p;//make them pair
p.first = upc;
p.second = fill;//fill the pair
int i = table[index].count;
table[index].arr[i] = p;//put the p in current position
table[index].count++;
}


}

string Hash::search(int key)
{
for (int i = 0; i < table[key % 1000].count; i++)
{
if (table[key % 1000].arr[i].first == key) return table[key % 1000].arr[i].second;//search for the pair first value or key to return the second value, string
}
//if not found return empty string
return "";
}
