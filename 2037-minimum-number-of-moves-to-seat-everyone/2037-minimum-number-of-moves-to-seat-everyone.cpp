class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students)
    {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i,j,k,sum=0;
        for(i=0;i<seats.size();i++)
        {
            sum=sum+abs(seats[i]-students[i]);
        }
        return sum;
    }
};