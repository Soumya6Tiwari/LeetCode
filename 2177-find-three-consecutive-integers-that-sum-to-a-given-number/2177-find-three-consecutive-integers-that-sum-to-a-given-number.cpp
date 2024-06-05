class Solution {
public:
    vector<long long> sumOfThree(long long num)
    {
     vector<long long>ans;
        long long val,a,b,c;
        val=(num-3)/3;
        a=val;
        b=val+1;
        c=val+2;
        if(val<num&&(a+b+c)==num)
        {
            ans.push_back(val);
            ans.push_back(val+1);
            ans.push_back(val+2);
        }
        return ans;
    }
    
};