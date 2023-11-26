#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void convert(string &s){
    for(int i=0;i<s.length();i++){
        int n = s[i];
        if(n>=65 && n<=90){
            s[i] = s[i] + 'a' +1;
        }
    }
}
int main(){
    string s = "aA";
    int j =0;
    for (int i = 1; i < 2; i++)
    {
        if(((s[i] == 'a' || s[i] =='A') || (s[i] == 'e' || s[i] =='E') || (s[i] == 'i' || s[i] =='I') || (s[i] == 'o' || s[i] =='O') || (s[i] == 'u' || s[i] =='U')) && ((s[j] == 'a' || s[j] =='A') || (s[j] == 'e' || s[j] =='E') || (s[j] == 'i' || s[j] =='I') || (s[j] == 'o' || s[j] =='O') || (s[j] == 'u' || s[j] =='U')) ){
				swap(s[i],s[j]);
				j = i;
				
        }else if ((s[i] == 'a' || s[i] =='A') || (s[i] == 'e' || s[i] =='E') || (s[i] == 'i' || s[i] =='I') || (s[i] == 'o' || s[i] =='O') || (s[i] == 'u' || s[i] =='U')) {
        	 j++;
		}else{
			
		}
    }
    for(int i=0;i<2;i++){
    	cout << s[i] << " ";
	}
    
}