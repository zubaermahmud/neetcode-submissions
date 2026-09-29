class Solution {
public:
    int cnv(char p)
    {
        return p-'a';
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return 0;
        int k=s1.size(),co=26;
        vector<int>fr(26,0),f(26,0);
        queue<char>av;
        for(int i=0;i<k;i++)
        {
            fr[cnv(s1[i])]++;

            f[cnv(s2[i])]++;
            av.push(s2[i]);
        }
        for(int i=0;i<26;i++)
            co-=(fr[i]!=f[i]);
        if(co==26)
            return 1;
        for(int i=k;i<s2.size();i++)
        {
            char p=av.front();
            av.pop();
            p=cnv(p);
            if(f[p]-1==fr[p])
                co++;
            else if(f[p]==fr[p])
                co--;
            f[p]--;

            av.push(s2[i]);
            p=cnv(s2[i]);
            if(fr[p]==f[p])
                co--;
            else if(fr[p]==f[p]+1)
                co++;
            f[p]++;
            if(co==26)
                return 1;   
        }
        return 0;        
    }
};
