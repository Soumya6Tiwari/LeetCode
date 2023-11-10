class Solution {
public:
    string reverseWords(string s) 
    {
        int i,j;
       vector<string>str;
       vector<string>str1;

        string val="",val1;
        s=s+" ";
        for(i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                val1=s[i];
                str.push_back(val1);
            }
            else
             {
            
                
                reverse(str.begin(),str.end());
                for(j=0;j<str.size();j++)
                {
                    val=val+str[j];
                }
                str1.push_back(val);
                str1.push_back(" ");
                str.clear();
                val="";
            }
        }
        val="";
        for(i=0;i<str1.size()-1;i++)
        {
            val=val+str1[i];
        }
         return val;              
        
    }
};