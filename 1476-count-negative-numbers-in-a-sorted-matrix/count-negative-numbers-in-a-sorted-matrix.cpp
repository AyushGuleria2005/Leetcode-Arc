class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negatives = 0;
        //Iterate through outer vector to get access to each vector in it
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    negatives++;
                }
            }
        }
        return negatives;
    }
};