class Solution {
public:
    int maxArea(vector<int>& a) {
        int ans=0,i=0,j=a.size()-1;
        while(i<j)
        {
            int ma=min(a[i],a[j])*(j-i);
            ans=max(ans,ma);
            if(a[i]>a[j])
                j--;
            else
                i++;
        }
        return ans;
    }
};
