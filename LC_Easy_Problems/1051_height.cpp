class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        int count= 0;
        v = heights;
        sort(heights.begin(),heights.end());
        for(int i = 0;i< heights.size();i++){
            if(heights[i] != v[i]){
                count ++;

            }
           
        }
        return count;
        
    }
};
