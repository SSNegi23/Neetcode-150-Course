#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strMap;
        
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());  // Sorting as a key
            strMap[key].push_back(s);
        }

        vector<vector<string>> result;
        for (const auto& group : strMap) {
            result.push_back(group.second);
        }

        return result;
    }
};

void printResult(const vector<vector<string>>& result) {
    cout << "{ ";
    for (const auto& group : result) {
        cout << "{ ";
        for (const string& s : group) {
            cout << "\"" << s << "\", ";
        }
        cout << "}, ";
    }
    cout << "}\n";
}

int main() {
    Solution obj;
    
    vector<vector<string>> test_cases = {
        {"eat", "tea", "tan", "ate", "nat", "bat"},
        {"abc", "bca", "cab", "xyz", "zyx"},
        {"", "b", "bb", "", "bbb", "b"},
        {"listen", "silent", "enlist", "inlets", "netsil"},
        {"a", "b", "c", "a", "c", "b"},
        {"aaa", "a", "aa", "aaaa"},
        {"rat", "tar", "art", "car"},
        {"dog", "god", "odg", "gdo"},
        {"test", "sett", "tets", "stet"},
        {"one", "neo", "eon", "two", "owt"}
    };

    vector<vector<vector<string>>> expected_results = {
        {{"eat", "tea", "ate"}, {"tan", "nat"}, {"bat"}},
        {{"abc", "bca", "cab"}, {"xyz", "zyx"}},
        {{"", ""}, {"b", "b"}, {"bb"}, {"bbb"}},
        {{"listen", "silent", "enlist", "inlets", "netsil"}},
        {{"a", "a"}, {"b", "b"}, {"c", "c"}},
        {{"aaa"}, {"a"}, {"aa"}, {"aaaa"}},
        {{"rat", "tar", "art"}, {"car"}},
        {{"dog", "god", "odg", "gdo"}},
        {{"test", "sett", "tets", "stet"}},
        {{"one", "neo", "eon"}, {"two", "owt"}}
    };

    int passed = 0;

    for (size_t i = 0; i < test_cases.size(); i++) {
        vector<vector<string>> result = obj.groupAnagrams(test_cases[i]);

        cout << "Test Case " << i + 1 << ": ";
        printResult(result);
        
        set<vector<string>> res_set, exp_set;
        
        for (auto& group : result) {
            sort(group.begin(), group.end()); // Sort each group
            res_set.insert(group);
        }

        for (auto& group : expected_results[i]) {
            sort(group.begin(), group.end()); // Sort expected group
            exp_set.insert(group);
        }

        if (res_set == exp_set) {
            cout << "✅ Passed\n";
            passed++;
        } else {
            cout << "❌ Failed\n";
        }
    }

    cout << "\nTotal Passed: " << passed << "/10\n";
    return 0;
}
