class Solution {
public:
    typedef long long l1;
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {

        l1 sum=0;
        int c=0;
        int minless = INT_MAX;
        for(l1 num:nums){
            if((num^k) >num){
                c++;
                sum += (num^k);
            }
            else{
                sum+=num;
            }

            minless = min((long long)minless,abs(num-(num^k)));
        }

        if(c%2==0){
            return sum;
        }
        return sum-minless;
    }
};


//T.C : O(nlogn)
//S.C : O(n)
class Solution {
public:
    typedef long long ll;
    ll maximumValueSum(vector<int>& nums, int k,
                              vector<vector<int>>& edges) {
        vector<int> fayda;
        ll normalSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            fayda.push_back((nums[i] ^ k) - nums[i]);
            normalSum += 1ll * nums[i];
        }
        
        sort(fayda.begin(), fayda.end(), greater<int>());
        
        for (int i = 0; i < fayda.size()-1; i += 2) {

            ll pairSum = fayda[i] + fayda[i + 1];
            
            if (pairSum > 0) {
                normalSum += pairSum;
            }
        }
        return normalSum;
    }
};



//T.C : O(nlogn)
//S.C : O(n)
class Solution {
public:
    typedef long long ll;
    ll maximumValueSum(vector<int>& nums, int k,
                              vector<vector<int>>& edges) {
        vector<int> fayda;
        ll normalSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            fayda.push_back((nums[i] ^ k) - nums[i]);
            normalSum += 1ll * nums[i];
        }
        
        sort(fayda.begin(), fayda.end(), greater<int>());
        
        for (int i = 0; i < fayda.size()-1; i += 2) {

            ll pairSum = fayda[i] + fayda[i + 1];
            
            if (pairSum > 0) {
                normalSum += pairSum;
            }
        }
        return normalSum;
    }
};



//T.C : O(nlogn)
//S.C : O(n)
class Solution {
public:
    typedef long long ll;
    ll maximumValueSum(vector<int>& nums, int k,
                              vector<vector<int>>& edges) {
        vector<int> fayda;
        ll normalSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            fayda.push_back((nums[i] ^ k) - nums[i]);
            normalSum += 1ll * nums[i];
        }
        
        sort(fayda.begin(), fayda.end(), greater<int>());
        
        for (int i = 0; i < fayda.size()-1; i += 2) {

            ll pairSum = fayda[i] + fayda[i + 1];
            
            if (pairSum > 0) {
                normalSum += pairSum;
            }
        }
        return normalSum;
    }
};
