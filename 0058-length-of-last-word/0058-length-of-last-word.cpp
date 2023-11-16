class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,count1=0,i,j,k;
        vector<char>result;
         
        for(i=0;i<s.length();i++)
        {
          if(s[i]==' ')
          {
              result.push_back('@');
          }
            else
            {
                result.push_back(s[i]);
            }
        }
        for(i=result.size()-1;i>=0;i--)
        {
            if(result[i]!='@')
            {
                count++;
                count1=1;
            }
            if(result[i]=='@'&&count1==1)
            {
                break;
            }
        }
        return count;
        
    }
};