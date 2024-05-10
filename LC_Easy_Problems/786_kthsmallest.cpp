//T.C : O(n^2 * log(k))
//S.C : O(k)
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<vector<double>> p;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                double div = (double) arr[i] / arr[j];
                p.push(vector<double>{div, (double)arr[i], (double)arr[j]});
                if(p.size() > k)
                    p.pop();
            }
        }

        auto v  = p.top();
        vector<int> result(2);
        result[0] = v[1];
        result[1] = v[2];
        return result;
    }
};

