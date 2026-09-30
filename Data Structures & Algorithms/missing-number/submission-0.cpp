class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int p=0;
        for(int i=1;i<=nums.size();i++)
        {
            p^=i;
            p^=nums[i-1];
        }
        return p;
    }
};
