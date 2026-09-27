class Solution {
public:
    int cnv(string p)
    {
        int s=0;
        int i;
        if(p[0]=='-')
            i=1;
        else
            i=0;
        while(i<p.size())
        {
            auto q=p[i++];
            s=(s*10)+(q-'0');
        }
        if(p[0]=='-')
            s*=-1;
        return s;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>a;
        for(auto p:tokens)
        {
            if(p=="+")
            {
                int v=a.top();
                a.pop();
                int u=a.top();
                a.pop();
                a.push(u+v);
            }
            else if(p=="-")
            {
                int v=a.top();
                a.pop();
                int u=a.top();
                a.pop();
                a.push(u-v);
            }
            else if(p=="*")
            {
                int v=a.top();
                a.pop();
                int u=a.top();
                a.pop();
                a.push(u*v);
            }
            else if(p=="/")
            {
                int v=a.top();
                a.pop();
                int u=a.top();
                a.pop();
                a.push(u/v);
            }
            else
                a.push(cnv(p));
        }
        return a.top();
    }
};
