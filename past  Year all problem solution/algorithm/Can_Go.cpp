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
using namespace std;
typedef long long ll;
const int N = 1e3+1;
const ll INF=1e18;
vector<pair<int, int>> v[N];
ll dis[N];
class cmp
{
public:
    bool operator()(pair<int, ll> a, pair<int, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, ll> parent = pq.top();
        pq.pop();
        int node = parent.first;
        ll cost = parent.second;
        if (cost > dis[node]) continue;
        for (pair<int,ll> child : v[node])
        {
            int childNode = child.first;
           ll childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                // path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        //v[b].push_back({a, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    int s,t;
    cin>>s>>t;
   dijkstra(s);
    while(t--)
    {
        int node;
        ll cst;
        cin>>node>>cst;
       if(0<node && node<=N && dis[node]<=cst)
       {
        cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
    }
    return 0;
}