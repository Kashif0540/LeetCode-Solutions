class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> m;
      

        for(int i=0; i<arr.size(); i++){
            int first = arr[i];
            int second = target - first;

            if(m.find(second) != m.end()) {
                return {i, m[second]};
            }

            m[first]=i;
        }

        return {};
    }
};