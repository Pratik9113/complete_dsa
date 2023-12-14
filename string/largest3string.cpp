#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

int main() {
    string num = "6777133339";
    int n = 10;
    vector<char> str;
    int count = 1;
    
    for(int i = 1; i < n; i++) {
        char s = num[i];
        char start = num[i-1];
        
        if(start == s) {
            count++;
        } else {
            count = 1;
        }

        if(count >= 3) {
            str.push_back(s);
            count = 1;
        }
    }

    for(int i = 0; i < str.size(); i++) {
        cout <<  str[i] << " ";
    }
    string maxValue= "";
    string ans = "";
    auto maxElement = max_element(str.begin(), str.end());
    if (maxElement != str.end()) {
         maxValue = *maxElement;
    }
    for(int i =0;i<3;i++){
        ans+=maxValue;
    }
    cout << ans << " ";
}
