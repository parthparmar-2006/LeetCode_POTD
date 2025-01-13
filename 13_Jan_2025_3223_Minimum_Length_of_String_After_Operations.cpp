#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumLength(string s) {
        vector<int> f(26, 0);
        for (char ch: s) f[ch-'a']++;
        int cnt = 0;
        for (int i: f) {
            if (i<=2) continue;
            if (i%2==0) cnt-=2; 
            cnt += ((i/2)*2);
        } return s.size()-cnt;
    }
};