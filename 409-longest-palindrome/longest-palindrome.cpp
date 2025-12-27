class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> visited;
        int len = 0;
        // a->1;
        // b->1
        // c->4
        // d-> 2
        int n = s.length();
        bool oddNumberCounted = false; // Hamne nhi kiya count
        bool oneCounted = false;       // Abhi tak nhi hua count
        for (int i = 0; i < n; i++) {
            char current_char = s[i];
            int count = 0;
            if (visited.count(current_char)) {
                continue;
            }
            for (int j = i; j < n; j++) {
                if (s[j] == current_char) {
                    count++;
                }
            }
            visited.insert(current_char);
            // cout<<current_char<<" -> "<<count<<endl;
            if (count % 2 == 0) {
                // Agar mera count even hai
                len = len + count;
                // pura "Count" consider hoga
            } else if (count % 2 != 0 && count > 1 && !oddNumberCounted) {
                // Agar mera count aya odd greater than 1
                len = len + count; // first odd count
                // wale char ko i will fully consider
                oddNumberCounted = true;
            } else if (oddNumberCounted) {
                // Baki odds ke liye ye condition chale bhai
                len = len + (count - 1);
            } else if (count == 1 && !oneCounted) {
                len = len + count;
                // Baki count ie 1 ko i wont allow to be counted
                oneCounted = true; // Hogya bhai count
                oddNumberCounted=true;
            } else if (oneCounted) {
                // Ek kam consider kro => count 1 will automatically become zero
                // and so no contribution from his side
                len = len + (count - 1);
            }
        }
        return len;
    }
};