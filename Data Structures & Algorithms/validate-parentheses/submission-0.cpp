class Solution {
public:
    bool isValid(string s) {
        stack<char>av;
        for(char p:s)
        {
            if(p=='(' || p=='['||p=='{')
                av.push(p);
            else
            {
                if(av.empty())
                    return 0;
                else if(p==')')
                {
                    if(av.top()=='(')
                        av.pop();
                    else
                        return 0;
                }
                else if(p=='}')
                {
                    if(av.top()=='{')
                        av.pop();
                    else
                        return 0;
                }
                else
                {
                    if(av.top()=='[')
                        av.pop();
                    else
                        return 0;
                }
            }
        }
        return av.empty();
    }
};
