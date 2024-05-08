class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>result(n);
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[score[i]] =i ;
        }

       sort(score.begin(),score.end(),greater<int>());

        for(int i=0;i<n;i++){
            if(i==0){
                int a =  m[score[i]];
                result[a] ="Gold Medal";
            }
           else  if(i==1){
                int a =  m[score[i]];
                result[a]  = "Silver Medal";
            }
            else  if(i==2){
                int a =  m[score[i]];
                result[a]  = "Bronze Medal";
            }
            else{
                int a =  m[score[i]];
                result[a]  = to_string(i+1);
            }
        }
        return result;
    }
};





