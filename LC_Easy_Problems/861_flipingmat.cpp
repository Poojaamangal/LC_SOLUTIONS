class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0] == 0){

            
            for(int j=0;j<n;j++){
                grid[i][j] = 1-grid[i][j];
            }
        }
        }
        for(int j=1;j<n;j++){
            int cz=0;
             for(int i=0;i<m;i++){
                if(grid[i][j] == 0){
                    cz++;
                }
             }

              int c1 =  m-cz;
         if(c1 < cz){
        for(int i=0;i<m;i++){
            grid[i][j] = 1-grid[i][j];
        }
        }
        }
        int score = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int value = grid[i][j] * pow(2,n-j-1);
                score += value;
            }
        }

         return score;
    }
};

//Approach-2 (Without Modifying the input)
//T.C : O(m*n)
//S.C : O(1)
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        //MSB -> 2^n-1
        int score = pow(2, n-1) * m;

        for(int j = 1; j < n; j++) {

            int countSameBits = 0; //count of 1s
            for(int i = 0; i < m; i++) {
                if(grid[i][j] == grid[i][0]) {
                    countSameBits++;
                }
            }

            int countOnes  = countSameBits;
            int countZeros = m - countOnes;

            int ones = max(countOnes, countZeros);

            score += (pow(2, n-j-1) * ones);            

            

        }

        return score;
        
    }
};


