class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) 
    {
        string val,ans;
        char val1,val2;
        int i,j,k,count=0;
        for(i=left;i<=right;i++)
        {
            val=words[i];
            val1=val[0];
            val2=val[val.length()-1];
            if((val1=='a'||val1=='e'||val1=='i'||val1=='o'||val1=='u')&&                            (val2=='a'||val2=='e'||val2=='i'||val2=='o'||val2=='u'))
         {
             count++;
         }
            
        }
                                                                                                     
         return count;
        
    }
};