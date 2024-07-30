class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        stack<char>st;
        int c=0;
        for (int i=0; i<n; i++){
            if(!st.empty() && s[i] == 'a' && st.top() == 'b'){
                st.pop();
                c++;
            }
            else{
                st.push(s[i]);
            }
        }
        return c;
    }
};
