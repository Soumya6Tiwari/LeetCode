class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers)
    {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i,j,k,count=0;
        i=0;j=0;
//         jhjhi
        while(i<players.size()&&j<trainers.size())
        {
            if(players[i]>trainers[j])
            {
                j++;
            }
            else if(players[i]==trainers[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {
                count++;
                i++;
                j++;
            }
        }
        return count;
       
    }
};