class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
//         // Edge case: If the string is empty, return 0
        if(s.empty())
            return 0;

//         // Edge case: If the string has only one character, return 1
        if(s.size() == 1)
            return 1;

        int r=0,l=0,max_length=0;
        int hash[256];    // initially none of the element is seen
        for(int i=0;i<256;i++)
        {
            hash[i]=-1;
        }
        int n=s.size(),len;
        while(r<n)
        {
            //agar element hamare hash me present ho
            if(hash[s[r]]!=-1)
            {
                // very important condition to update l
                if(hash[s[r]]>=l)
                {
                    l=hash[s[r]]+1;
                    
                }
            }
            
            
            
            
            len=r-l+1;
            max_length=max(max_length,len);
            
            // very important condition often bhul jate hai
            hash[s[r]]=r;
            r++;
            
        }
        return max_length;
    
        
    }
};