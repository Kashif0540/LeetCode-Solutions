class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        // HashMap stores each number and its index.
        // This allows us to quickly check if a required number exists.
        unordered_map<int, int> m;

        // Go through the array one element at a time.
        for(int i = 0; i < arr.size(); i++) {

            // Current number
            int first = arr[i];

            // We need: first + second = target
            // Therefore: second = target - first
            int second = target - first;

            // Check if the required number was already seen.
            if(m.find(second) != m.end()) {

                // Required number found.
                // m[second] = index of the previous number
                // i = index of the current number
                return {i, m[second]};
            }

            // Required number was not found.
            // Store the current number and its index
            // for checking with future elements.
            m[first] = i;
        }

        // Problem guarantees that a solution exists.
        return {};
    }
};