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



class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>r(n);
        priority_queue<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push({score[i],i});
        }
        int rank=1;
        while(!p.empty()){
            int ind = p.top().second;
            p.pop();

            if(rank==1){
                r[ind]="Gold Medal";
            }
            
            else if(rank==2){
                r[ind]="Silver Medal";
            }
            
            else if(rank==3){
                r[ind]="Bronze Medal";
            }
            else{
                r[ind] = to_string(rank);
            }
            rank++;
          
        }

        return r;
    }
};


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>r(n);
       int me = *max_element(score.begin(),score.end());
       vector<int> m(me+1,-1);
       for(int i =0;i<n;i++){
          m[score[i]] = i;
       }
       int rank=1;
       for(int k=me;k>=0;k--){
        if(m[k] != -1){
            int a = m[k];
            if(rank ==1){
                r[a] = "Gold Medal";
            }
            else if(rank ==2){
                r[a] = "Silver Medal";
            }
            else if(rank ==3){
                r[a] = "Bronze Medal";
            }
            else {
                r[a] = to_string(rank);
            }
            rank++;
        }
       }
       return r;
    }
};

