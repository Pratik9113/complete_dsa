#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<char>s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	while(!s.empty()){
		char ch = s.top();
		cout << ch << " ";
		s.pop();
	}
	cout<<endl;
}