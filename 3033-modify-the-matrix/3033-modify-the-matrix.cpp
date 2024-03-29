class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix)
    {

        
   
        vector<int> val, res;
        int i, j, maxi = INT_MIN;
        vector<vector<int>> answer;
        for (i = 0; i < matrix.size(); i++)
        {
            for (j = 0; j < matrix[0].size(); j++)
            {

                res.push_back(matrix[i][j]); // Fix the indices here

            }
            answer.push_back(res);
            res.clear();
        }
    
        for (j = 0; j < answer[0].size(); j++)
        {
            for (i = 0; i < answer.size(); i++)
            {
                if (answer[i][j] > maxi) // Fix the indices here
                {
                    maxi = answer[i][j]; // Fix the indices here
                }
            }
            val.push_back(maxi);
            maxi = INT_MIN;
        }
        answer.clear();
        for (i = 0; i < matrix.size(); i++)
        {
            for (j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] != -1)
                {
                    res.push_back(matrix[i][j]);
                }
                else
                {
                    matrix[i][j] = val[j];
                    res.push_back(matrix[i][j]);
                }
            }
            answer.push_back(res);
            res.clear();

        }
        return answer;

    
        
    }
};