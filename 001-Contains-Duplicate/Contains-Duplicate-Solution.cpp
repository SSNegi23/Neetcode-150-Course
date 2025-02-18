#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;

        for (const int& num : nums) {
            if (hashset.find(num) != hashset.end()) return true;
            hashset.insert(num);
        }

        return false;
    }
};

int main() {
    vector<vector<int>> test_cases = {
        {1, 2, 3, 1},                   // 1. Duplicate exists -> True
        {1, 2, 3, 4},                   // 2. No duplicates -> False
        {},                              // 3. Empty list (Edge case) -> False
        {5},                             // 4. Single element (Edge case) -> False
        {INT_MAX, INT_MIN, 0, INT_MAX},  // 5. Contains INT_MAX twice -> True
        {1000000, -1000000, 500, 500},   // 6. Large range with a duplicate -> True
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, // 7. Sequential numbers (No duplicates) -> False
        {2, 2, 2, 2, 2},                 // 8. All elements are the same -> True
        {999999, 1000000, 1000001, 999999}, // 9. Large numbers with a duplicate -> True
        {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 1} // 10. Duplicate at the end -> True
    };

    vector<bool> expected_results = {true, false, false, false, true, true, false, true, true, true};
    Solution obj;
    int passed = 0;

    for (int i = 0; i < test_cases.size(); ++i) {
        bool result = obj.containsDuplicate(test_cases[i]);
        cout << "Test Case " << i + 1 << ": " 
             << (result ? "True" : "False") 
             << " (Expected: " << (expected_results[i] ? "True" : "False") << ")"
             << (result == expected_results[i] ? " ✅ Passed" : " ❌ Failed") 
             << endl;
        if (result == expected_results[i]) {
            passed++;
        }
    }

    cout << "\nTotal Passed: " << passed << " / " << test_cases.size() << endl;

    return 0;
}
