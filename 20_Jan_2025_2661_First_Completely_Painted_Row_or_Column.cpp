#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        vector<pair<int, int>> mp(arr.size()+1);
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++){
                mp[mat[i][j]] = {i, j};
            }
        }
        for (int i=0; i<arr.size(); i++) {
            row[mp[arr[i]].first]++;
            col[mp[arr[i]].second]++;
            if (row[mp[arr[i]].first] == m || col[mp[arr[i]].second] == n) return i; 
        } return -1;
    }
}; 