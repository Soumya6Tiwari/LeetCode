class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string>result;
        int i,j,k,ans;
        string val;
        for(i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                result.push_back("FizzBuzz");
            }
            else if( i%3==0)
            {
                result.push_back("Fizz");
            }
            else if( i%5==0)
            {
                 result.push_back("Buzz");
            }
            else
            {
                val= to_string(i);
                result.push_back(val);
            }
        }
        return result;
    }
};