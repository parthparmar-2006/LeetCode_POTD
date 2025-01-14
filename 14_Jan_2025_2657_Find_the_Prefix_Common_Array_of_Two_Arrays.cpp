#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), cnt = 0;
        vector<int> f(n+1, 0);
        vector<int> res;
        for (int i=0; i<n; i++) {
            f[A[i]]++;
            f[B[i]]++;
            cnt += (f[A[i]]==2);
            if (A[i]!=B[i]) cnt += (f[B[i]]==2);
            res.push_back(cnt);
        } return res;
    }
};