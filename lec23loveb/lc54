class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row=matrix.size();
        int col=matrix[0].size();

        int count=0;
        int totalElements=row*col;

        // index initialisation
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        while(count < totalElements){
            //print starting row
            for(int index=startingCol; index<=endingCol && count < totalElements; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            // print ending col
            for(int index=startingRow; index<=endingRow && count < totalElements; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // print ending row
            for(int index=endingCol; index>=startingCol && count < totalElements; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // print starting col

            for(int index=endingRow; index>=startingRow && count < totalElements; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};