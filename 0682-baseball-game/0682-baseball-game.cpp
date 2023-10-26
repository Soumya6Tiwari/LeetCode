class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int>score;
        int i,j,count=0,sum=0,x;
        char ch;
        string str;
        for(i=0;i<operations.size();i++)
        {
            if(operations[i]!="+"&&operations[i]!="C"&&operations[i]!="D")
            {
                str=operations[i];
                x=stoi(str);
                score.push_back(x);
                
            }
            if(operations[i]=="C")
            {
                score.pop_back();
            }
            else if(operations[i]=="D")
            {
                j=(score[score.size()-1])*2;
                score.push_back(j);
            }
            else if(operations[i]=="+")
            {
                sum=score[score.size()-1]+score[score.size()-2];
                score.push_back(sum);
            }
        }
        for(i=0;i<score.size();i++)
        {
            count=count+score[i];
        }
        return count;
    }
};