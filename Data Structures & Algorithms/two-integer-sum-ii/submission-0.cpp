class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int i=0,j=a.size()-1;
        vector<int>ans;
        while(i<j)
        {
            int r=target-a[i];
            while(i<j)
            {
                if(r==a[j])
                {
                    ans={i+1,j+1};
                    break;
                }
                else if(r<a[j])
                    j--;
                else
                    break;
            }
            i++;
        }
        return ans;
    }
};
