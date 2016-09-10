#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <typeinfo>
#include <fstream>
#include <sstream>
#include "person.h"
using namespace std;

void ReadFileToVec(const string &file,vector<string> &vec){
	ifstream ifs(file);
	string line_buff;
	while(getline(ifs,line_buff)){
		istringstream ss(line_buff);
		string string_buff;
		while(ss >> string_buff)
			vec.push_back(string_buff);
	// while(ifs >> buff)
	// 	vec.push_back(buff);
	}
}

int main(){

	const string file("data.txt");
	vector<string> vec;
	ReadFileToVec(file,vec);
	for(auto s : vec)
		cout << s << endl;

}
