#include <iostream>
#include <queue>
#include <stack>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelorderbyforloop(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        cout << endl;
    }
}
int countleafnode(node *root)
{
    int a = 0;
    if (root == NULL)
    {
        // cout << count << " ";
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int left = countleafnode(root->left);
    int right = countleafnode(root->right);
    return left + right;
}
void levelreverseordertransversal(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    stack<node *> s;
    q.push(root);
    s.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        // s.push(temp);
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
            s.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
            s.push(temp->right);
        }
    }
    while (!s.empty())
    {

        node *curr = s.top();

        cout << curr->data << " ";
        s.pop();
    }
}

void levelordertransveral(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void reverseleveltransversal(node *root)
{
    if (root == NULL)
        return;
    if (root)
    {
        reverseleveltransversal(root->right);
        reverseleveltransversal(root->left);
        cout << root->data << " ";
    }
}

node *buildTree(node *root)
{
    int data;
    cout << "enter the data : ";
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the left root data - > " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter the right  root data - > " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
int maximumheight(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = maximumheight(root->left);
    int h2 = maximumheight(root->right);
    int ans = max(h1, h2) + 1;
    return ans;
}
void levelordertraversalwithheight(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        node *temp = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
        }
    }
}
bool isperfect(node *root)
{
    if (root == NULL)
    {
        return false;
    }
    int h = maximumheight(root);
    int n = pow(2, h) - 1;
    queue<node *> q;
    int cnt = 0;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        int a = q.size();
        for (int i = 0; i < a; i++)
        {
            if (temp->left)
            {
                q.push(temp->left);
                cnt++;
            }
            if (temp->right)
            {
                q.push(temp->right);
                cnt++;
            }
        }
    }
    if (cnt == n)
    {
        return true;
    }
    return false;
}
// bool sumtree(node* root){
//     if(root==NULL){
//         return false;
//     }

//     stack<node*>s;
//     while(!q.empty()){
//         int n = q.size();
//         node* curr = s.top();
//         s.pop();
//         if(curr->left){
//             s.push(curr->left);
//         }
//         if(curr->right){
//             s.push(curr->right);
//         }

//     }
//     if(sum == root->data){
//         return true;
//     }
//     return false;
// }
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = maximumheight(root->left) + maximumheight(root->right) + 1;
    int ans = max(opt1, max(opt2, opt3));
    return ans;
}
pair<int, int> fastdiameter(node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = fastdiameter(root->left);
    pair<int, int> right = fastdiameter(root->right);

    int opt1 = left.first;
    int opt2 = right.first;
    int opt3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(opt1, max(opt2, opt3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
int fdiameter(node *root)
{
    return (fastdiameter(root).first);
}

bool isbalanced(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    bool left = isbalanced(root->left);
    bool right = isbalanced(root->right);
    bool diff = abs(maximumheight(root->left) - maximumheight(root->right)) <= 1;
    if (left && right && diff)
    {
        return true;
    }
    return false;
}
int sumofaverticesfromitsroot(node *root, int d)
{
    int sum = 0;
    if (root == NULL)
    {
        return 0;
    }
    int currsum = root->data;
    if (root->data == d)
    {
        sum += currsum;
    }
    sumofaverticesfromitsroot(root->left, d);
    sumofaverticesfromitsroot(root->right, d);
    return sum;
}

// sum of the logest bloddline from root to leaf node
/***********************************************************************************/
void sumOfLongestBloodline(node *root, int length, int &maxLength, int sum, int &maxSum)
{
    if (root == NULL)
    {
        if (length > maxLength)
        {
            maxLength = length;
            maxSum = sum;
        }
        else if (length == maxLength)
        {
            maxSum = max(sum, maxSum);
        }
        return;
    }
    sum += root->data;
    sumOfLongestBloodline(root->left, length + 1, maxLength, sum, maxSum);
    sumOfLongestBloodline(root->right, length + 1, maxLength, sum, maxSum);
}

node *lowestAncestor(node *root, node *p, node *q)
{
}
/* construct a binary tree from inorder and preorder traversal */
int findposition(int inorder[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (inorder[i] == x)
        {
            return i;
        }
    }
    return -1;
}
void createMap(int inorder[], int n, map<int, int> &nodeto)
{
    for (int i = 0; i < n; i++)
    {
        nodeto[inorder[i]] = i;
    }
}
node *mapsolve(int inorder[], int preorder[], int n, int start, int end, int &pre, map<int, int> &nodeto)
{
    // base condition
    if (pre >= n || start > end)
    {
        return NULL;
    }
    int index = preorder[pre++];
    node *root = new node(index);
    int position = nodeto[index];
    // left call
    root->left = mapsolve(inorder, preorder, n, start, position - 1, pre, nodeto);
    // right call
    root->right = mapsolve(inorder, preorder, n, position + 1, end, pre, nodeto);
    return root;
}
node *solve(int inorder[], int preorder[], int n, int start, int end, int &pre)
{
    // base condition
    if (pre >= n || start > end)
    {
        return NULL;
    }
    int index = preorder[pre++];
    node *root = new node(index);
    int position = findposition(inorder, n, index);
    // left call
    root->left = solve(inorder, preorder, n, start, position - 1, pre);
    // right call
    root->right = solve(inorder, preorder, n, position + 1, end, pre);
    return root;
}
//
int main()
{
    node *root = NULL;
    // root = buildTree(root);
    /* //levelordertransveral(root);
    //levelorderbyforloop(root);
    //reverseleveltransversal(root);
    levelreverseordertransversal(root);
    cout << endl;
    cout << "inorder" << endl;
    inorder(root);
    cout << "preorder" << endl;
    preorder(root);
    cout << "postorder" << endl;
    postorder(root);
    cout <<  endl;
    //int a =0;
    //cout <<  countleafnode(root);
    // cout << "count leaf node  :  " << a;
    cout << maximumheight(root);
    cout << endl << "diameter of the binary treee :  ";
    cout << diameter(root);
    cout << endl << "fastest way to find diameter  : " << fdiameter(root);
    cout << endl << "the tree is balnced or not : " << isbalanced(root);*/
    //   int maxo =-1;
    //   vector<int>ans;
    //  // levelorder(root, ans,maxo);
    //   for(int i=0;i<ans.size();i++){
    //     cout << ans[i] << " ";
    //   }
    // cout << " sumtree : " << sumtree(root);
    // cout <<"maxheight : " << maximumheight(root) << endl;;
    // cout <<"isperfect : " << isperfect(root) << endl;
    // cout << "sumofaverticesfromitsroot" << sumofaverticesfromitsroot(root,3) << endl;
    // int maxLength =0 ;
    // int maxSum = 0;
    // sumOfLongestBloodline(root,0,maxLength,0,maxSum);
    // cout << "maximum sum in leaf node to root node : " ;
    // cout << maxSum << endl;
    int n = 6;
    int inorder[n] = {3, 1, 4, 0, 5, 2};
    int preorder[n] = {0, 1, 3, 4, 2, 5};
    int pre = 0;
    // this is using iterative way
    // node *ans = solve(inorder, preorder, n, 0, 5, pre);
    // postorder(ans);
    // this reducing time compleity
    map<int, int> nodeto;
    createMap(inorder, n, nodeto);
    node *ans = mapsolve(inorder, preorder, n, 0, 5, pre, nodeto);
    postorder(ans);
}