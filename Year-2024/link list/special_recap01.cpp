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
Node *prev;
Node *next;
Node(int val)
{
    this->val=val;
    this->prev=NULL;
    this->next=NULL;
}
};
void insertTail(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=tail=newNode;
        return;
    }
tail->next=newNode;
newNode->prev=tail;
tail=newNode;
}
void insertHead(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    {
        if(head==NULL)
        {
            head=newNode;
            return;
        }
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
    }
}
void insertAny(Node *&head,Node *&tail,int pos,int val)
{
    Node *newNode=new Node(val);

    if(pos==0)
    {
     insertHead(head,tail,val);
    }
    else
    {
        Node *temp=head;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }

        newNode->next=temp->next;
        temp->next=newNode;
        newNode->next->prev=newNode;
        
  }
}
void printList(Node *head)
{    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteHead(Node *&head,Node *&tail)
{
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
   if(head==NULL)
   {
    tail=NULL;
    return;
   }
   head->prev=NULL;
    
}
void print_reverse(Node *tail)
{
       Node *temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    } 
cout<<endl;
}
int main()
{
 Node *head=NULL;
 Node *tail=NULL;
while(true)
{
    int val;
cin>>val;
if(val==-1) break;
 insertTail(head,tail,val);
}
// insertHead(head,tail,300);
deleteHead(head,tail);
 printList(head);
 print_reverse(tail);
return 0;
}