class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>av;
        for(int i=0;i+2<nums.size();i++)
        {
            int j=i+1,k=nums.size()-1;
            if(i)
            {
                if(nums[i]==nums[i-1])
                    continue;
            }
            while(j<k)
            {
                int v=nums[i]+nums[j]+nums[k];
                if(!v)
                {
                    vector<int>p={nums[i],nums[j],nums[k]};
                    if(!av.count(p))
                    {
                        ans.push_back(p);
                        av.insert(p);
                    }
                    j++;
                }
                else if(0<v)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};
