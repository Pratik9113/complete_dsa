#include<iostream>
using namespace std;
void convert(string &s){
    for(int i=0;i<s.length();i++){
        int n = s[i];
        if(n>=65 && n<=90){
            s[i] = s[i] - 'a' +1;
        }
    }
}
int main(){
    string s ="AbCGFd";

}