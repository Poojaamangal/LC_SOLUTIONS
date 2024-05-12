class Solution {
public:
   int  findlocalmax(vector<vector<int>> &grid,int i,int j){
         int max_v= INT_MIN;
         for(int x =i;x<=i+2;x++){
            for(int y = j;y<=j+2;y++){
                max_v = max(max_v,grid[x][y]);
            }
         }

         return max_v;

   }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>maxlocal(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j =0;j<n-2;j++){
                maxlocal[i][j] = findlocalmax(grid,i,j);
            }
        }

         return maxlocal;


    }
};
