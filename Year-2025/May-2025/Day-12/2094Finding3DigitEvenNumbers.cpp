class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        map<int,int>mp;
        vector<int>ans;
        for(auto dgt:digits) mp[dgt]++;
        vector<int>even;
        for(auto [dgt,cnt]:mp)
        if(dgt%2==0) even.push_back(dgt);
        for(auto [dgt,cnt]:mp)
        {
          
            if(dgt==0) continue;
              
            for(auto [dgt2,cnt2]:mp)
            {
                if(dgt==dgt2 && mp[dgt]<2) continue;
    
                for(auto ev:even)
                {
        if((dgt==ev && mp[dgt]<2) || (dgt2==ev && mp[dgt2]<2) || (dgt==dgt2 && dgt2==ev && mp[dgt]<3)) continue;
                    int num = dgt;
                    num*=10;
                    num+=dgt2;
                    num*=10;
                    num+=ev;
                    ans.push_back(num);

                }
            }
        }
        return ans;
    }
};
