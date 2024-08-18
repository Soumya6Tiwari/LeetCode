class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
//         // Edge case: If the string is empty, return 0
//         if(s.empty())
//             return 0;

//         // Edge case: If the string has only one character, return 1
//         if(s.size() == 1)
//             return 1;

//         int r=0,l=0,max_length=0;
//         int hash[256]={-1};    // initially none of the element is seen
//         int n=s.size(),len;
//         while(r<n)
//         {
//             //agar element hamare hash me present ho
//             if(hash[s[r]]!=-1)
//             {
//                 // very important condition to update l
//                 if(hash[s[r]]>=l)
//                 {
//                     l=hash[s[r]]+1;
                    
//                 }
//             }
            
            
            
            
//             len=r-l+1;
//             max_length=max(max_length,len);
            
//             // very important condition often bhul jate hai
//             hash[s[r]]=r;
//             r++;
            
//         }
//         return max_length;
        
        
         // Edge case: If the string is empty, return 0
        if(s.empty())
            return 0;

        // Edge case: If the string has only one character, return 1
        if(s.size() == 1)
            return 1;

        int r = 0, l = 0, max_length = 0;
        int hash[256];          // Use an array of size 256 to store last index
        fill(hash, hash + 256, -1); // Initialize the array with -1

        int n = s.size(), len;
        while(r < n)
        {
            if(hash[s[r]] != -1)
            {
                // Update the left pointer to the right of the last occurrence
                if(hash[s[r]] >= l)
                {
                    l = hash[s[r]] + 1;
                }
            }
            
            len = r - l + 1;
            max_length = max(max_length, len);
            
            // Update the last seen index of the character
            hash[s[r]] = r;
            r++;
        }

        return max_length;
    }
};