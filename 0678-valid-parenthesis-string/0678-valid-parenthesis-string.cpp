class Solution {
public:
    bool lets_check(string &s,int index,int count)
    {
        if(count<0)
        {
            return false;
        }
        if(index>=s.size())
        {
            if(count==0)
            {
                return true;
            }
            return false;
        }
        if(s[index]=='(')
        {
            
            return lets_check(s,index+1,count+1);
        }
        else if(s[index]==')')
        {
            
            return lets_check(s,index+1,count-1);
        }
        return lets_check(s,index+1,count+1)||lets_check(s,index+1,count-1)||lets_check(s,index+1,count);
        
    }
    bool checkValidString(string s)
    {
        // // brute force approach=recursive approach  == tle as exponential time complexity
        // int index=0,count=0;
        // return lets_check(s,index,count);
        
        
        //  better approach - dp , tc=o(n^2);
        
        // best approach== range approach
        int i,j,k,min=0,max=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                min++;
                max++;
            }
            if(s[i]==')')
            {
                min--;
                max--;
            }
            if(s[i]=='*')
            {
                min=min-1;
                max=max+1;
            }
            if(min<0)
            {
                min=0;
            }
            if(max<0)
            {
                // edge cases  as max is always positive , it can't be negative
                return false;
            }
        }
        if(min==0)
        {
            return true;
        }
        return false;
        
        
    }
};