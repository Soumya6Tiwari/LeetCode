class Solution {
public:
    string addStrings(string num1, string num2)
    {
       int n1=num1.size()-1;
       int n2=num2.size()-1;
        vector<char>v;
        char val;
        int carry=0,i,j;
        string res="";
        // ascii value for 0 is 48 , 1- 49, 2-50, 3 -51 and so on....
        while(n1>=0||n2>=0)
        {
            if(n1<0)
            {
                val=(((num2[n2]-48)+carry)%10+48);
                v.push_back(val);
                carry=((num2[n2]-48)+(carry))/10;
                n2--;
                
            }
            else if(n2<0)
            {
                val=(((num1[n1]-48)+carry)%10+48);
                v.push_back(val);
                carry=((num1[n1]-48)+(carry))/10;
                n1--;
            }
            else
            {
                // do -48 so as to convert from char to integer
                // do +48 so as to convert from integer to character
                val=(((num1[n1]-48)+(num2[n2]-48)+carry)%10+48);
                v.push_back(val);
                carry=((num1[n1]-48)+(num2[n2]-48)+carry)/10;
                n1--;
                n2--;
            }
        }
        if(carry!=0)
        {
            carry=carry+48;
            v.push_back(carry);
        }
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            res=res+v[i];
        }
        return res;
    }
};