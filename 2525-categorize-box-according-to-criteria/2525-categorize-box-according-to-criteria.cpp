class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) 
    {
        string ans="hi",ans1="hi";
        long long volume=0;
        volume=(long long)length * (long long) width * (long long) height;
        if(length>=pow(10,4)||width>=pow(10,4)||height>=pow(10,4)||volume>=pow(10,9))
        {
            ans="Bulky";
            ans1="Bulky";
        }
        if( mass>=100)
        {
             ans1="Heavy";
        }
        if(ans=="Bulky"&& ans1=="Heavy")
        {
             ans="Both";
        }
        else if( ans=="hi"&&ans1=="hi")
        {
              ans="Neither";
        }
        else if( ans=="Bulky"&& ans1!="Heavy")
        {
              ans="Bulky";
        }
        else
        {
              ans="Heavy";
        }
        return ans;
    }
};