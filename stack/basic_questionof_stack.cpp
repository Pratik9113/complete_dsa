#include<iostream>
#include<stack>
using namespace std;
void delete_middle(stack<int>& s, int size , int count){
    if(count == size/2){
        s.pop();
        return;
    }
    int ch = s.top();
    s.pop();
    delete_middle(s,size,count+1);
    s.push(ch);
}
void insertAtBottom(stack<int> &s, int num){
    if(s.empty()){
        s.push(num);
        return;
    }
    int a = s.top();
    s.pop();
    insertAtBottom(s,num);
    s.push(a);
}
void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int a = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,a);
    s.push(a);
}
void sortingway(stack<int> &str, int num){
    if(str.empty() || (str.top()< num)){
        str.push(num);
        return;
    }
    int n = str.top();
    str.pop();
    sortingway(str,n);
    str.push(n);
}
void sorting(stack<int> &str){
    if(str.empty()){
        return;
    }
    int a = str.top();
    str.pop();
    sorting(str);
    sortingway(str,a);
    str.push(a);
}
void display(stack<int> &s){
    stack<int> temp = s;  

    while (!temp.empty()) {
        int ch = temp.top();
        cout << ch << " ";
        temp.pop();
    }

    cout << endl;
}
int main(){
    // stack<int>s;
    // s.push(5);
    // s.push(4);
    // s.push(3);
    // s.push(2);
    // s.push(1);
    // int n = s.size();
    // delete_middle(s,n,0);
    // display(s);
    // insertAtBottom(s,6); delete_middle(s,n,0);
    // display(s);
    // insertAtBottom(s,6);
    // display(s);
    // reverseStack(s);
    // display(s);
    stack<int>str;
    str.push(-7);
    str.push(-2);
    str.push(3);
    str.push(5);
    str.push(9);
    sorting(str);
    display(str);
}