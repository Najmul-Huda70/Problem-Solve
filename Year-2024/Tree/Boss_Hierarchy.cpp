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
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Node 
{
    public:
    ll val;
    Node* left;
    Node* right;
    Node (ll val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
        
    }
};

Node* Tree(vector<ll>& employees, int left, int right) {
    if (left > right) return NULL;
    
   int mid = (left + right) / 2;
    
    Node* root = new Node(employees[mid]);
    
    root->left = Tree(employees, left, mid - 1);
   root->right = Tree(employees, mid + 1, right);
    
    return root;
}

void printLevelOrder(Node* root) {
    if (!root) return;
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        
        
        cout << node->val << " ";
        
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    ll size = (1 << n) - 1;  
        vector<ll> employees(size);
    
    for (int i = 0; i < size; i++) {
        cin >> employees[i];
    }
    // if(n==1) {cout<<employees[0];return 0;}
Node* root = Tree(employees, 0, size - 1);
    
    
    printLevelOrder(root);
    
    return 0;
}
