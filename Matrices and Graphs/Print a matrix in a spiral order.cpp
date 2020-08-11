#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0)
            return {};
        int n = matrix.size();
        vector<int> v;
        int m = matrix[0].size();
        
        int top = 0;
        int down = n-1;
        int left = 0;
        int right = m-1;
        
        int id = 0;
        //id
        //0   -> left  to right
        //1   -> top   to down
        //2   -> right to left
        //3   -> down  to top
        
        while (top<=down && left<=right)
        {
            if (id == 0)
            {
                for (int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }
                top++;
            }
            
            if (id == 1)
            {
                for (int i=top;i<=down;i++)
                {
                    v.push_back(matrix[i][right]);
                }
                right--;
            }
            
            if (id == 2)
            {
                for (int i=right;i>=left;i--)
                {
                    v.push_back(matrix[down][i]);
                }
                down--;
            }
            
            if (id == 3)
            {
                for (int i=down;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
            
            id = (id+1)%4;
        }
        return v;
    }
    
int main()
{
    vector<vector<int>> mat =  {
                        { 1, 2, 3 },
                        { 4, 5, 6 },
                        { 7, 8, 9 }
                       };

    vector<int> result = spiralOrder(mat);
    for (auto x: result)
    {
        cout << x << " ";
    }
    
    return 0;
}
