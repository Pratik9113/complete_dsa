#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>ans;
   for(int i =0;i<5 ;i++){
    int t;
    cin >> t;
    ans.push_back(t);
   }
   ans.push_back(43);
   cout << "the vector is : ";
   for(int i =0;i<ans.size();i++){
    cout << ans[i] <<" ";
   }
   ans.pop_back();
   vector<int>::iterator i;
    i = ans.begin();
   ans.erase(i);

    for(int i =0;i<ans.size();i++){
    cout << ans[i] <<" ";
   }
}