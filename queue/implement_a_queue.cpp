#include<iostream>
#include<queue>
#include<map>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
     
    node(int data){
        this->data = data;
        this->left =NULL;
        this->right = NULL;
    }
};
node* buildtree(node* root){
     cout << "eneter the data : "  << endl;
     int data;
     cin >> data;
     root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout <<  "enter the data in left  " << data << endl;
    root->left = buildtree(root->left);
    cout <<  "enter the data in right  " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void levelordertransversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp ==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void inorder(node* root){
    if(root ==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node* root){
    if(root ==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root ==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data  <<" ";
}
void buildfromlevelorder(node* &root){
    queue<node*>q;
    cout << "enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "enter left node : " << temp->data << endl;
        int left;
        cin >> left;

        if(left!=-1){
            temp->left= new node(left);
            q.push(temp->left);
        }

        cout << "enter right node : " << temp->data << endl;
        int right;
        cin >> right;

        if(right!=-1){
            temp->right= new node(right);
            q.push(temp->right);
        }
    }
}
// traversal
vector<int> verticalorder(node* root){
    map<int,map<int,vector<int>>>nodes;
    queue<pair<node*, pair<int,int>>>q;
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty()){
        pair<node*, pair<int,int>> temp = q.front();
        q.pop();
        node* frontnode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontnode->data);
        if(frontnode->left){
            q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
        }
        if(frontnode->right){
            q.push(make_pair(frontnode->right,make_pair(hd+1,lvl-1)));
        }
    }
    for(auto i : nodes){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }
    for(int i =0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}
int main(){
      node* root = NULL;
      buildfromlevelorder(root);
      /*root = buildtree(root);
      levelordertransversal(root);
      cout << endl;
      preorder(root);
      cout << endl;
      postorder(root);
      cout << endl;
      inorder(root);*/
}