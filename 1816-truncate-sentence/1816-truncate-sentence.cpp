class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        int i,j,count=0;
        vector<string>ans;
        string str,str1="";
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                count++;
                
            }
            if(count==k)
            {
                break;
            }
            str=s[i];
            ans.push_back(str);
            
        }
        for(i=0;i<ans.size();i++)
        {
           str1=str1+ans[i];   
        }
        return str1;
        
    }
};