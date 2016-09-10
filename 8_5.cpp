#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <typeinfo>
#include <fstream>
#include "person.h"
using namespace std;

void ReadFileToVec(const string &file,vector<string> &vec){
	ifstream ifs(file);
	string buff;
	// while(getline(ifs,buff))
	// 	vec.push_back(buff);
	while(ifs >> buff)
		vec.push_back(buff);
}

int main(){

	const string file("data.txt");
	vector<string> vec;
	ReadFileToVec(file,vec);
	for(auto s : vec)
		cout << s << endl;

}
