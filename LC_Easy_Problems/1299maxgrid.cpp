//DFS 
class Solution {
public:
 int m,n;
 vector<vector<int>> direction{{-1,0},{1,0},{0,1},{0,-1}};
  int dfs(vector<vector<int>>&grid,int i,int j){
    if( i>=m  || i<0 || j>=n || j<0 || grid[i][j] == 0){
        return 0;
    }
    int originalgoldenvalue = grid[i][j];
     grid[i][j] =0;
     int maxgold=0;

     for(vector<int>&dir : direction){
        int new_i = i+dir[0];
        int new_j = j+dir[1];

        maxgold = max(maxgold,dfs(grid,new_i,new_j));
     }



      grid[i][j] = originalgoldenvalue ;

     return originalgoldenvalue + maxgold;

  }
    int getMaximumGold(vector<vector<int>>& grid) {
         m=grid.size();
       n= grid[0].size();
          int maxgold=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] != 0){
                   maxgold = max(maxgold,dfs(grid,i,j));
                }
            }
        }

         return maxgold;
    }
};
