class Solution {
public:
    int findMin(vector<int> &a) {
        int l=0,h=a.size()-1,ans=1001;
        while(l<=h)
        {
            int m=(l+h)>>1;
            if(a[0]<=a[m])
                l=m+1;
            else
            {
                ans=min(ans,a[m]);
                h=m-1;
            }
        }
        if(ans==1001)
            ans=a[0];
        return ans;
    }
};
