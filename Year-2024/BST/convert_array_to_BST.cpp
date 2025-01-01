/****************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said I have a lot of trouble in my life
Allah says, Verily with hardship there is ease [Surah Alam Nasra 94:6]

I said no one is helping me....
Allah says it is my duty to help the believers [Surah Rum 30:47]

I said no one with me.....
Allah says fear not, I am with the believers [Surat al-Ha 20:46]
I said my sins are many.....
Allah says I love those who repent [Surah Baqarah 2:222]

 I said I am always sick......
Allah says: "I have sent the Qur'an as a cure for disease [Surah Bani-Israel 17:82]
I said I don't like this world......
Allah says the Hereafter is better for you than this life [Surah Duha 94:4]

I said victory is far away....
Allah says My help is near [Surah Baqarah 2:214]
I said I am not happy in my life.....
Allah says: Soon your Lord will give you so much that you will be happy [Surah Duha 93:5]

I said I was disappointed all the time.....
Allah says And do not despair and do not grieve [Surah Imran 3:139]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 ****************************************************************************/
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int val;
Node *left;
Node* right;
Node (int val)
{
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}
};
Node* convert(int arr[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node* root= new Node(arr[mid]);
    Node* left_root = convert(arr,n,l,mid-1);
    Node* right_root= convert(arr,n,mid+1,r);
    root->left=left_root;
    root->right=right_root;
    return root;

}
void level_Order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {  // ber kore ana
       Node* f=q.front();
       q.pop();
       // jabotio ja kaj ase
       cout<<f->val<<" ";
    // tar children gulo ke rakha
    if(f->left) q.push(f->left);
    if(f->right) q.push(f->right);

    }
   
}
//-10,-3,0,5,9
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];

     }
   Node* root= convert(arr,n,0,n-1);
   level_Order(root);
return 0;
}