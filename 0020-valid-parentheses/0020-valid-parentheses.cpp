class Solution {
public:
    bool isValid(string s) 
    {
        stack<char>st;
        int i,j,k;
        char ch;
        for(i=0;i<s.size();i++)
        {
            ch=s[i];
            if(ch=='('||ch=='{'||ch=='[')
            {
                st.push(ch);
            }
            if(!st.empty())
            {
             if(ch==')'&&st.top()=='(')
            {
                st.pop();
            }
             else if(ch=='}'&&st.top()=='{')
            {
                st.pop();
            }
             else if(ch==']'&&st.top()=='[')
            {
                st.pop();
            }
            else if(ch!=st.top())
            {
                return false;
            }
            }
            else
            {
                return false;
            }
        }
        if(st.size()==0)
        {
        return true;
        }
        return false;
    }
};