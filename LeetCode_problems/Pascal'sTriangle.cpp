// problem link
// https://leetcode.com/problems/pascals-triangle/description/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        if(numRows == 2){
            res.push_back({1,1});
        }
        else if(numRows > 2){
            res.push_back({1,1});

            for(int i = 1;i < numRows-1;i++){
                vector<int> v;
                v.push_back(1);
                for(int j = 0;j < i;j++){
                    v.push_back(res[i][j] + res[i][j+1]);
                }
                v.push_back(1);
                res.push_back(v);
            }

        }
        return res;
    }
};
