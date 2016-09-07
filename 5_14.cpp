#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <typeinfo>
using namespace std;
//输出连续单词的问题
int main(){
	string s;
	// vector<string> v;
	vector<string> v = {"how","now","now","now","brown","cow","cow","cow"};
	// while(cin >> s)
	// 	v.push_back(s);
	if(v.empty()){
		cout<<"v is empty! exiting..."<<endl;
		exit(0);
	}
	if(v.size()==1){
		cout<<"cannot find such words!"<<endl;
		exit(0);		
	}
	string candidate_word;
	unsigned candidate_count = 1;
	int i=0;
	for(auto t=v.begin();t!=v.end();){
		// cout<<(*t)<<endl;//这个语句放这,没问题,因为上面一句t!=v.end()就已经有了t是否有效的判断了
		string word = (*t);
		unsigned count = 0;

		while(t!=v.end() && (*t)==word){	
			count++;
			t++; 
		}
		if(count>candidate_count){
			candidate_word = word;
			candidate_count = count;
		}
		// cout<<(*t)<<endl;//这个语句放这,出错,因为在此之前t有可能执行了t++操作,而这里又没有对t是否有效做出判断就意图cout出来,编译器不允许
		if(t!=v.end())//因此,在对t做了t++操作后,若要访问t,需要先判断一下t是否有效!!!,这样来显示t的值,没问题!!!
			cout<<(*t)<<endl;
	}
	if(candidate_count>1)
		cout<<candidate_word<<" "<<candidate_count<<" times"<<endl;
	else
		cout<<"cannot find such words!"<<endl;
	
}
