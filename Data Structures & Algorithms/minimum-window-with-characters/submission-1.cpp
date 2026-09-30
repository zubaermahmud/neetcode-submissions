class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size())
            return "";
        map<char,int>fr,f;
        pair<int,pair<int,int>>ans;
        ans.first=1e5+7;
        int co=0,k=t.size();
        queue<int>av;
        for(int i=0;i<k;i++)
        {
            f[s[i]]++;
            fr[t[i]]++;
            av.push(i);
        }
        k=fr.size();
        for(auto p:fr)
        {
            if(p.second<=f[p.first])
                co++;
        }
        if(co==k)
        {
            ans.first=av.size();
            ans.second={av.front(),av.back()};
        }
        for(int i=t.size();i<s.size();i++)
        {
            av.push(i);
            f[s[i]]++;
            if(fr.count(s[i]))
            {
                if(fr[s[i]]==f[s[i]])
                    co++;
            }
            if(co==k)
            {
                while(!av.empty())
                {
                    char p=s[av.front()];
                    if(fr.count(p))
                    {
                        if(f[p]<=fr[p])
                            break;
                    }
                    f[p]--;
                    av.pop();
                }
                if(ans.first>av.size())
                    ans={av.size(),{av.front(),av.back()}};
            }
            cout<<co<<' '<<s[i]<<'\n';
        }
        string str="";
        if(co==k)
        {
            str=s.substr(ans.second.first,ans.second.second-ans.second.first+1);
        }
        return str;
    }
};
