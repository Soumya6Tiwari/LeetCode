class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int i,j,k;
        vector<char>result;
        char ch='a',ch1;
        for(i=0;i<letters.size();i++)
        {
            if(letters[i]>target)
            {
                ch=letters[i];
                break;
            }
        }
        if(ch=='a')
        {
            return letters[0];
        }
         return ch;
        
    }
};