class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k)
    {
       int i,j,num1,val,val1;
        int len=num.size()-1;
        for(i=len;i>=0;i--)
        {
            val=num[i]+k;
            num[i]=val%10;
            k=val/10;
        } 
        while(k>0)
        {
            num1=k%10;
            num.insert(num.begin(),num1);
            k=k/10;
        }
        return num;
        
        
    }
};