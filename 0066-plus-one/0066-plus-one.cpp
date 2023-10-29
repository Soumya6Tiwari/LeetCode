class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int i,j,k=1,ans,num,val;
        int len=digits.size()-1;
        for(i=len;i>=0;i--)
        {
           val=digits[i]+k;
            digits[i]=val%10;
            k=val/10;
        }
        while(k>0)
        {
            num=k%10;
            digits.insert(digits.begin(),num);
            k=k/10;
        }
        return digits;
        
        
    }
};