class Solution {
public:
        int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
    vector<int> strip;
    for (auto point: points) {
        auto now = max(abs(point.front()), abs(point.back()));
        strip.push_back(now);
    }
    
    unordered_map<char, int> track;
    int discard = INT_MAX;
    for (auto i = 0; i < strip.size(); i++) 
        if (track.count(s[i])) {
            auto now = track[s[i]];
            if (now > strip[i]) discard = min(now, discard), track[s[i]] = strip[i];
            else discard = min(strip[i], discard);
        } else track[s[i]] = strip[i];
    
    int res = 0;
    for (auto i: strip) if (i < discard) res++;
    return res;
    }
    
};