class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>a;
        for(int i=0;i<nums.size();i++)
            a.push_back(make_pair(nums[i],i));
        sort(a.begin(),a.end());
        pair<int,int> ans={a.size(),a.size()};
        for(int i=0;i<a.size()-1;i++)
        {
            int l=i+1,h=a.size()-1;
            while(l<=h)
            {
                int m=(l+h)>>1;
                int v=a[m].first+a[i].first;
                if(v==target)
                {
                    pair<int,int> t={a[i].second,a[m].second};
                    if(t.first>t.second)
                        swap(t.first,t.second);
                    ans=min(ans,t);
                    h=m-1;
                }
                else if(v<target)
                    l=m+1;
                else
                    h=m-1;
            }
        }
        return {ans.first,ans.second};
    }
};
