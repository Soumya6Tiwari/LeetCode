class Solution {
public:
    string getPermutation(int n, int k)
    {
        // brute force approach uses recursion
        
        // optimal approach
        vector<int>numbers;
        int fact=1;
        
        string ans="";
        for(int i=1;i<n;i++)
        {
            numbers.push_back(i);
            fact=fact*i;
        }
        numbers.push_back(n);
        k=k-1;
        // yaha tak humne apne vector numbers me 1 to n tak ke sare numbers store kara liye , and fact ki 
        // value calculate kara li jisse hum further divide karenge
        while(true)
        {

            ans=ans+to_string(numbers[k/fact]);
            
            numbers.erase(numbers.begin()+k/fact);
            if(numbers.size()==0)
            {
                break;
            }
            k=k%fact;
            fact=fact/numbers.size();
        }
        return ans;
    }
};