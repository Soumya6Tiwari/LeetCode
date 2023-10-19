class Solution {
public:
    string reversePrefix(string word, char ch)
    {
        int i,j,k,temp;
        for(i=0;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                j=i;
                k=0;
                for(k=0;k<=j;k++)
                {
                    temp=word[k];
                    word[k]=word[j];
                    word[j]=temp;
                    j--;
                }
                break;
            }
        }
        return word;
        
    }
};