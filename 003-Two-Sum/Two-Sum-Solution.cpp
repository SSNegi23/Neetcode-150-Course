#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp; // val -> index

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};

int main() {
    vector<pair<vector<int>, int>> test_cases = {
        {{2, 7, 11, 15}, 9},       // 1. Normal case -> {0, 1}
        {{3, 2, 4}, 6},            // 2. Multiple solutions possible -> {1, 2}
        {{3, 3}, 6},               // 3. Same element twice -> {0, 1}
        {{1, 2, 3, 4, 5}, 10},     // 4. No valid pair -> {}
        {{-1, -2, -3, -4, -5}, -8},// 5. Negative numbers -> {2, 4}
        {{5, 75, 25}, 100},        // 6. Large numbers -> {1, 2}
        {{1, 3, 5, 7, 9}, 12},     // 7. Pair at end -> {3, 4}
        {{0, 4, 3, 0}, 0},         // 8. Pair of zeros -> {0, 3}
        {{1000000, 500, 500000, 999500}, 1000000}, // 9. Large numbers -> {1, 3}
        {{1, 5, 1, 5}, 10}         // 10. Duplicate numbers -> {1, 3}
    };

    vector<vector<int>> expected_results = {
        {0, 1}, {1, 2}, {0, 1}, {}, {2, 4}, {1, 2}, {3, 4}, {0, 3}, {1, 3}, {1, 3}
    };

    Solution obj;
    int passed = 0;

    for (int i = 0; i < test_cases.size(); ++i) {
        vector<int> result = obj.twoSum(test_cases[i].first, test_cases[i].second);
        sort(result.begin(), result.end()); // Sorting to avoid order issues in comparison
        sort(expected_results[i].begin(), expected_results[i].end());

        cout << "Test Case " << i + 1 << " (nums = {";
        for (int num : test_cases[i].first) cout << num << " ";
        cout << "}, target = " << test_cases[i].second << "): ";

        if (result == expected_results[i]) {
            cout << "✅ Passed" << endl;
            passed++;
        } else {
            cout << "❌ Failed (Expected: {";
            for (int num : expected_results[i]) cout << num << " ";
            cout << "}, Got: {";
            for (int num : result) cout << num << " ";
            cout << "})" << endl;
        }
    }

    cout << "\nTotal Passed: " << passed << " / " << test_cases.size() << endl;

    return 0;
}
