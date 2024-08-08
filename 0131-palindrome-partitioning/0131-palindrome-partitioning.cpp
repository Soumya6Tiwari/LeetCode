class Solution {
public:
    bool is_palindrome(int start,int end,string s)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {
                return false;
            }
        }
        return true;
    }
    void calculate(string s,int index, vector<string>&path,vector<vector<string>>&res)
    {
        if(index==s.size())
        {
            res.push_back(path);
            return ;
        }
        for(int i=index;i<s.size();i++)
        {
            if(is_palindrome(index,i,s))
            {
                path.push_back(s.substr(index,i-index+1));
                
                // call rescursion
                calculate(s,i+1,path,res);
                
                //backtrack
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>>res;
        vector<string>path;
        int index=0;
        calculate(s,index,path,res);
        return res;
        
    }
};