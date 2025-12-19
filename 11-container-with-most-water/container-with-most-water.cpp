class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int h = n-1;
        int max_cap = 0;
        // int ans = maxArea(v);
        while(l<h){
            int cap = 0;
            cap = min(height[h],height[l])*(h-l);
            max_cap = max(max_cap,cap);
            if(height[l]<height[h]){
                l++;
            }
            else if(height[h]<=height[l]){
                h--;
            }
        }
        return max_cap;
    }
};