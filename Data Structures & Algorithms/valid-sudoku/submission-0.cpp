class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        for(int i=0;i<9;i++)
        {
            vector<bool>p(10,1);
            for(int j=0;j<9;j++)
            {
                int id=a[i][j]-'0';
                if(id<0)
                    continue;
                else if(!p[id])
                    return 0;
                p[id]=0;
            }
        }
        for(int j=0;j<9;j++)
        {
            vector<bool>p(10,1);
            for(int i=0;i<9;i++)
            {
                int id=a[i][j]-'0';
                if(id<0)
                    continue;
                else if(!p[id])
                    return 0;
                p[id]=0;
            }
        }
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                int l=i+3,r=j+3;
                vector<bool>mark(10,1);
                for(int k=i;k<l;k++)
                {
                    for(int m=j;m<r;m++)
                    {
                        int id=a[k][m]-'0';
                        if(id<0)
                            continue;
                        else if(!mark[id])
                            return 0;
                        mark[id]=0;
                    }
                }
            }
        }
        return 1;
    }
};
