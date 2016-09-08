#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <typeinfo>
using namespace std;
typedef vector<string>::iterator Iter;

void print_vector(Iter beg,Iter end){//迭代器返回类型是引用,因此形参这里不能再用引用的引用
	if(beg!=end)
		cout<<(*beg)<<endl;
	else
		return;
	print_vector(++beg,end);//迭代器不能用beg++,而是要用++beg
}

int main(){
	vector<string> v = {"how","now","now","now","brown","cow","cow","cow"};
	// Iter a = v.begin();
	print_vector(v.begin(),v.end());
	
	
}
