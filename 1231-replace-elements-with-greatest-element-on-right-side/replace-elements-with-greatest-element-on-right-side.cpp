class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while(i<n-1){
            int max_val = INT_MIN;
            for(int j = i+1;j<n;j++){
                max_val = max(max_val,arr[j]);
            }
            arr[i]=max_val;
            i++;
        }
        arr[n-1]=-1;
        return arr;
    }
};