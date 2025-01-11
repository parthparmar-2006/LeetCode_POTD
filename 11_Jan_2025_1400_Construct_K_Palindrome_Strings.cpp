#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;
        if (s.size() == k) return true;
        vector<int> f(26, 0);
        for (char c: s) f[c-'a']++;
        int odd=0;
        for (int i: f) odd += (i%2==1);
        return (odd>=k);
    }
};