class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int l1=0,h1=a.size()-1;
        while(l1<=h1)
        {
            int m1=(l1+h1)>>1;
            if(target<a[m1][0])
            {
                h1=m1-1;
                continue;
            }
            else if(a[m1].back()<target)
            {
                l1=m1+1;
                continue;
            }
            else if(target==a[m1][0])
                return 1;
            int l2=0,h2=a[0].size()-1;
            while(l2<=h2)
            {
                int m2=(l2+h2)>>1;
                if(a[m1][m2]==target)
                    return 1;
                else if(a[m1][m2]<target)
                    l2=m2+1;
                else
                    h2=m2-1;
            }
            break;
        }
        return 0;
    }
};
