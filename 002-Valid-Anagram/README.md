# Valid Anagram

**Problem Link:** [LeetCode 242 - Valid Anagram](https://leetcode.com/problems/valid-anagram/description/)  
**Difficulty:** `Easy`  
**Tags:** `String`, `Hash Table`, `Sorting`

---

## **Problem Statement**
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.  
An **anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters **exactly once**.

---

## **Examples** 

### **Example 1:**

    Input: s = "anagram", t = "nagaram"
    Output: true

<br>

Example 2:

    Input: s = "rat", t = "car"
    Output: false

<br>

Example 3:

    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true

<hr>

### Constraints

- 1 <= s.length, t.length <= 5 * 10^4
- -10^9 <= nums[i] <= 10^9

---

## **Approach**
We use a **character frequency count** to check if two strings are anagrams:

1. If the lengths of `s` and `t` are **not equal**, return `false`.
2. Create a **vector of size 26** to store the frequency of each letter.
3. **Iterate through both strings**:
   - **Increment** the count for each character in `s`
   - **Decrement** the count for each character in `t`
4. If all values in the frequency array are **zero**, `s` and `t` are anagrams.

This approach works efficiently using **O(N) time and O(1) space**.

---

## **Complexity Analysis**
- **Time Complexity:** `O(N)`, where `N` is the length of `s` (or `t`), as we traverse both strings once.
- **Space Complexity:** `O(1)`, as we only use a fixed 26-element array.

---

## **Edge Cases Considered**
- Two empty strings (`""`, `""`)
- Strings of different lengths (`"abcd"`, `"abcde"`)
- Single-character strings (`"a"`, `"b"`)
- Large inputs (length = `50,000`)
- Anagrams with repeated letters (`"aabbcc"`, `"ccbbaa"`)

---

## **How to Run the Code**

1. Clone this repository:  
   ```bash
   git clone https://github.com/SSNegi23/Neetcode-150-Course.git
   ```

2. Navigate to the directory:
    ```bash
    cd 002-Valid-Anagram
    ```

1. Compile and run the program:  
    BASH Command
    ```bash
    g++ Valid-Anagram-Solution.cpp -o Valid-Anagram-Solution && ./Valid-Anagram-Solution
    ```
    CMD Command
    ```cmd
    g++ Valid-Anagram-Solution.cpp -o Valid-Anagram-Solution && Valid-Anagram-Solution
    ```
