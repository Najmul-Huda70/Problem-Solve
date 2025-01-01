#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}


void push_left(Node* root,vector<int>&v)
{     Node* tmp=root;
    if(tmp->left){
        push_left(tmp->left,v);
        v.push_back(tmp->left->val);
    }
   else if(tmp->right)
    {
        
        v.push_back(tmp->right->val);
     push_left(tmp->right,v);
    }
    
    
}
void push_right(Node* root,vector<int>&v)
{
    
 if(root->right)
    {
        
        v.push_back(root->right->val);
     push_right(root->right,v);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        push_right(root->left,v);
    }
}
int main()
{
    Node *root = input_tree();
    vector<int>v;
    if(root)
    {
        push_left(root,v);
       v.push_back(root->val); 
         push_right(root,v);
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}