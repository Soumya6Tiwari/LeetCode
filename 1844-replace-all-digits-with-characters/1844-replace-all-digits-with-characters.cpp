class Solution {
public:
    string replaceDigits(string s) 
    {
        int i,j,k,val;
        char ch;
        string ch1;
        for(i=1;i<s.length();i=i+2)
        {
             ch1=s[i];
            k=stoi(ch1);
            val=int(s[i-1])+k;
            ch=(char)(val);
            s[i]=ch;
        }
        return s;
    }
};