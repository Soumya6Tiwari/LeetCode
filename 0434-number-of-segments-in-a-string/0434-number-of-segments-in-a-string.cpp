class Solution {
public:
    int countSegments(string s) 
    {
       int i,j,k,flag=0,count=0,count1=0;
        vector<char>result;
        int n=s.size()-1;
        if(s=="")
        {
            return 0;
        }
        
        
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
           
            
                count1++;
            }
        }
        if(count1==s.size())
        {
            return 0;
        }
        count=0;
        while(s[n]==' ')
        {
            s.pop_back();
            n--;
        }
        n=s.size()-1;
        if(s[0]==' ')
        {
            reverse(s.begin(),s.end());
            while(s[n]==' ')
        {
            s.pop_back();
            n--;
            }
            
        }
        reverse(s.begin(),s.end());
       
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                  if(s[i+1]!=' ')
                  {
                     count++;
                  }
                  
            }
        }
       
        return count+1;
     }
};