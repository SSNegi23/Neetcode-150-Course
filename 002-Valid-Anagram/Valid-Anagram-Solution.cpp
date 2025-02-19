#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool validAnagram(string& s, string& t) {
        if (s.size() != t.size()) return false;

        vector<int> count(26, 0);

        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int freq : count) {
            if (freq != 0) return false;
        }

        return true;
    }
};

int main() {
    vector<pair<string, string>> test_cases = {
        {"anagram", "nagaram"},  // 1. Valid anagram -> True
        {"rat", "car"},          // 2. Different letters -> False
        {"hello", "ollhe"},      // 3. Same letters shuffled -> True
        {"test", "ttew"},        // 4. One different letter -> False
        {"", ""},                // 5. Empty strings (Edge case) -> True
        {"a", "a"},              // 6. Single same letter (Edge case) -> True
        {"a", "b"},              // 7. Single different letter -> False
        {"abcde", "edcba"},      // 8. Reversed string -> True
        {"abcd", "abcde"},       // 9. Different lengths -> False
        {"aabbcc", "ccbbaa"}     // 10. Valid anagram with repeated letters -> True
    };

    vector<bool> expected_results = {true, false, true, false, true, true, false, true, false, true};
    Solution obj;
    int passed = 0;

    for (int i = 0; i < test_cases.size(); ++i) {
        bool result = obj.validAnagram(test_cases[i].first, test_cases[i].second);
        cout << "Test Case " << i + 1 << " (" << test_cases[i].first << ", " << test_cases[i].second << "): "
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
