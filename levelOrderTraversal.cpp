#include <iostream>
#include<bits/stdc++.h>
#define myfor for(auto i : arr) cout<<i<<"\t"
#define name "Gojo Satoru" 
using namespace std;

class Node
{
    public: 
        int data;
        Node* left;
        Node* right;

        Node(int data1)
        {
            data = data1;
            left = nullptr;
            right = nullptr;
        }
};

vector<vector<int>> levelOrder(Node* root)
{
    vector<vector<int>> ans;
    if(root == nullptr) ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++)
        {
            Node* node = q.front();
            q.pop();
            if(node->left != nullptr)
                q.push(node->left);
            if(node->right != nullptr)
                q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->right->left = new Node(100);
    /*
        1
       / \
      2   3
     / \   \
    4   5   7
    kevel order: 1 2 3 4 5 
    */
   vector<vector<int>> vec = levelOrder(root);
   for(int i=0; i<vec.size(); i++)
   {
        for(int j=0; j<vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
   }
    return 0;
}

