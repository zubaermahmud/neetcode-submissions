class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>av;
        vector<int>fr(2005,0);
        for(int p:nums)
        {
            fr[p+1000]++;
        }
        for(int i=0;i<fr.size();i++)
        {
            if(fr[i])
                av.push({fr[i],i-1000});
        }
        vector<int>ans;
        while(k--)
        {
            ans.push_back(av.top().second);
            av.pop();
        }
        return ans;
    }
};
