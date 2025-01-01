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
void insert(vector<int>& v,int x)
{
v.push_back(x);
int cur_idx=v.size()-1;

while(cur_idx != 0)
{
    int parent_idx=(cur_idx-1)/2;
    if(v[parent_idx] > v[cur_idx])
    {
        swap(v[parent_idx],v[cur_idx]);
    }
    cur_idx=parent_idx;
}
cout<<v[0]<<endl;
 }
 void  delete_MIN_index(vector<int>& v)
 {
    //base case
   if (v.empty()) return;
    // -20 -10 -5 10
    v[0]=v.back();
    //v[0]=10
     v.pop_back();// v[v.size()-1] delete korlam
     //v={10,-10,-5}
    int cur_idx=0;
   
   while(true)
   {
     int left_idx=cur_idx*2 + 1;//left_idx =1; 
    int right_idx=cur_idx*2 + 2;//right_idx=2; 
    if(left_idx<v.size() && right_idx<v.size())
    {
  if(v[cur_idx]>v[left_idx] && v[right_idx]>v[left_idx])
    {    //v[0]=10
        swap(v[cur_idx],v[left_idx]); //v={-10,10,-5}
        cur_idx=left_idx; //1
    }
    else if(v[cur_idx]>v[right_idx] && v[right_idx]<v[left_idx])
    {
       swap(v[cur_idx],v[right_idx]);
        cur_idx=right_idx;  
    }
    else break;
    }
    
      else  if(left_idx<v.size())
        {
            if(v[cur_idx]>v[left_idx] )
            {
                swap(v[cur_idx],v[left_idx]); 
        cur_idx=left_idx; 
            }
            else break;
        }
        else if(right_idx<v.size()){
            if(v[cur_idx]>v[right_idx])
            {
                swap(v[cur_idx],v[right_idx]);
        cur_idx=right_idx;  
            }
            else break;
        }
        else break;
    }
   
   }
   
 

int main()
{
 int n;
    cin>>n;
vector<int>v;
//cout<<v.size()<<endl;
for(int i=0;i<n;i++)
{
 int x;
cin>>x;
v.push_back(x);
int cur_idx=v.size()-1;

while(cur_idx != 0)
{
    int parent_idx=(cur_idx-1)/2;
    if(v[parent_idx] > v[cur_idx])
    {
        swap(v[parent_idx],v[cur_idx]);
    }
    cur_idx=parent_idx;
}
 }
 int t;cin>>t;
 while(t--)
 {
    
     int op;
     cin>>op;
     if(op==0)
     {
       int x;
       cin>>x;
       insert(v,x);
     }
     else if(op==1)
     {
           cout<<v[0]<<endl;
     }
     else if(op==2)
     {
        delete_MIN_index(v);
        if(!v.empty())
        cout<<v[0]<<endl;
        else cout<<"Empty"<<endl;
     }
 }
return 0;
}