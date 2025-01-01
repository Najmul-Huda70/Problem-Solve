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
    Node* left;
    Node* right;
    Node (int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
        
    }
};
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
int main()
{
 /*  
                root (10)
                    /    \
               a= 20     30 =b
                /   \       \
            c= 40  h=90     d=50
               \      \     /   \
            e=60   i=100  f=70   80=g
         
         */
Node* root = new Node(10);
Node* a = new Node(20);
Node* b = new Node(30);
Node* c = new Node(40);
Node* d = new Node(50);
Node* e = new Node(60);
Node* f = new Node(70);
Node* g = new Node(80);
Node* h = new Node(90);
Node* i = new Node(100);

// connection
root->left=a;
root->right=b;
a->left=c;
a->right=h;
c->right=e;
b->right=d;
d->left=f;
d->right=g;
h->right=i;

 level_Order(root);
return 0;
}