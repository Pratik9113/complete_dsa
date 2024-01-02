#include <iostream>
#include <queue>
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
void levelorderTraversal(node *root)
{
  queue<node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty())
  {
    node *front = q.front();
    q.pop();
    if (front == NULL)
    {
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << front->data << " ";
      if (front->left)
      {
        q.push(front->left);
      }
      if (front->right)
      {
        q.push(front->right);
      }
    }
  }
}
node *maxvalue(node *root)
{
  node *temp = root;
  while (temp->right != NULL)
  {
    temp = temp->right;
  }
  return temp;
}
node *deletefromBST(node *root, int val)
{
  if (root == NULL)
  {
    return root;
  }
  if (root->data == val)
  {
    // 0 child
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }
    // 1 child
    // left child
    if (root->left == NULL && root->right != NULL)
    {
      node *temp = root->right;
      delete root;
      return temp;
    }
    if (root->left != NULL && root->right == NULL)
    {
      node *temp = root->left;
      delete root;
      return temp;
    }

    // 2 child
    if (root->left != NULL && root->right != NULL)
    {
      int mini = maxvalue(root->left)->data;
      // data saved in root
      root->data = mini;
      root->left = deletefromBST(root->left, mini);
      return root;
    }
  }
  else if (root->data > val)
  {
    root->left = deletefromBST(root->left, val);
  }
  else
  {
    root->right = deletefromBST(root->right, val);
  }
}
node *insertintoBST(node *&root, int data)
{
  if (root == NULL)
  {
    root = new node(data);
    return root;
  }
  if (data > root->data)
  {
    // right part
    root->right = insertintoBST(root->right, data);
  }
  else
  {
    root->left = insertintoBST(root->left, data);
  }
  return root;
}
void takeinput(node *&root)
{
  int data;
  cin >> data;
  while (data != -1)
  {
    root = insertintoBST(root, data);
    cin >> data;
  }
}

bool validBST(node *root)
{
  if (root == NULL)
  {
    return true;
  }
  if (root->left)
  {
    if (root->left->data > root->data)
    {
      return false;
    }
  }
  if (root->right)
  {
    if (root->right->data < root->data)
    {
      return false;
    }
  }
}
int main()
{
  node *root = NULL;
  cout << " Enter data to create BST" << endl;
  takeinput(root);
  levelorderTraversal(root);
  // cout << " min val is : " << minvalue(root)->data;

  cout << endl;
  cout << "delete from bst : " << endl;
  deletefromBST(root, 50);
  levelorderTraversal(root);
}