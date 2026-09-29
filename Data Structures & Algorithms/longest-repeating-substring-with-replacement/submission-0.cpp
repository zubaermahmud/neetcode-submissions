class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        for(char i='A';i<='Z';i++){
            queue<char>av;
            int val=0;
            for(int j=0;j<s.size();j++)
            {
                val+=(s[j]!=i);
                av.push(s[j]);
                while(val>k)
                {
                    char t=av.front();
                    av.pop();
                    val-=(t!=i);
                }
                ans=max(ans,(int)av.size());
            }
        }
        return ans;
    }
};
