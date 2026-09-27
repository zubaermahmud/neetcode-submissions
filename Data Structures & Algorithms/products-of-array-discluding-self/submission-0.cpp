class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long pr=1,sf=1;
        int i=0,j=nums.size()-1;
        deque<long long>p,s;
        while(i<nums.size())
        {
            pr*=nums[i];
            i++;
            sf*=nums[j];
            j--;
            p.push_back(pr);
            s.push_front(sf);
        }
        vector<int>ans;
        for(int k=0;k<nums.size();k++)
        {
            long long prev=1,fut=1;
            if(k)
                prev=p[k-1];
            if(k+1<nums.size())
                fut=s[k+1];
            ans.push_back(prev*fut);
        }
        return ans;
    }
};
