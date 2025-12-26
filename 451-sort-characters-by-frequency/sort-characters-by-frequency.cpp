class Solution {
public:
    string frequencySort(string s) {
        string result = "";
        int n = s.length();
        int maxCount = INT_MIN;
        bool visited[256] = {false};
        vector<pair<int, char>> v;
        for (int i = 0; i < n; i++) {
            char current_char = s[i];
            int current = (int)current_char;
            int count = 0;

            // If element is already visited
            if (visited[current]) {
                continue;
            }

            for (int j = i; j < n; j++) {
                if (s[j] == current_char) {
                    count++;
                }
            }
            // cout<<current_char<<" ----> "<<count<<endl;
            visited[current] = true;
            v.push_back({count, current_char});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        auto it = v.begin();
        while (it != v.end()) {
            result.append(it->first,it->second);
            it++;
        }
        return result;
    }
};