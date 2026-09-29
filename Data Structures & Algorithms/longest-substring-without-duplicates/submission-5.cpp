class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>bv;
        queue<char>av;
        int ans=0;
        for(char p:s)
        {
            if(bv[p])
            {
                while(!av.empty())
                {
                    char r=av.front();
                    av.pop();
                    if(r==p)
                        break;
                    bv[r]=0;
                }
            }
            av.push(p);
            bv[p]=1;
            ans=max(ans,(int)av.size());
        }   
        return ans;
    }
};
