class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int l=1,r=1e14,ans=r;
        while(l<=r)
        {
            long long int m=(l+r)>>1;
            int c=0;
            for(int p:piles)
            {
                c+=(p/m)+(bool)(p%m);
            }
            if(c<=h)
            {
                ans=min(ans,m);
                r=m-1;
            }
            else
                l=m+1;
        }
        return ans;
    }
};
