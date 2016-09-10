#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <typeinfo>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <list>
#include "person.h"
using namespace std;

bool isShorter(const string &s1, const string &s2){
	return s1.size() < s2.size();
}


void elimDups(vector<string>& words){
	stable_sort(words.begin(),words.end(),isShorter);
	auto end_unique = unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}

int main(){
	vector<string> vec;
	string s;
	while(cin >> s)
		vec.push_back(s);
	elimDups(vec);
	for(auto c : vec)
		cout << c << ' ';
	cout<<endl;
}
