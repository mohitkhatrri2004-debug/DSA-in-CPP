class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;

        int m = accounts.size();
        int n = accounts[0].size();
        vector<int> ans(m);

        for(int i=0;i<m;i++){
            sum = 0;
            for(int j=0;j<n;j++){
                sum = sum + accounts[i][j];
                ans[i] = sum;
            }
        }
        int largest = ans[0];
        for(int i=0;i<ans.size();i++){
            if(ans[i] > largest){
                largest = ans[i];
            }
        }
        return largest;
    }
};