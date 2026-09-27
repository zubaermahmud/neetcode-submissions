class Solution {
public:
    char cnv(char p)
    {
        if('0'<=p and p<='9')
            return p;
        else if('a'<=p and p<='z')
            return p;
        else
            return p+32;
    }
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            int v=abs(s[i]-s[j]);
            if(!isalpha(s[i]) and !isdigit(s[i]))
            {
                i++;
                continue;
            }
            else if(!isalpha(s[j]) and !isdigit(s[j]))
            {
                j--;
                continue;
            }
            else if(cnv(s[i])==cnv(s[j]))
            {
                i++;
                j--;
            }
            else
                return 0;
        }
        return 1;
    }
};
