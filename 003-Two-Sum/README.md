# Two Sum

Problem Link :- [LeetCode 1 - Two Sum](https://leetcode.com/problems/two-sum/)  
Difficulty :- `Easy`

## 1. Two Sum

### Problem Statement
Given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add up to* `target`.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.  
You can return the answer in **any order**.

<hr>

### Examples 

**Example 1:**
```cpp
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: nums[0] + nums[1] == 9, so we return [0, 1].
```

<br>

**Example 2**:

    Input: nums = [3,2,4], target = 6
    Output: [1,2]

<br>

**Example 3**:

    Input: nums = [3,3], target = 6
    Output: [0,1]

<hr>

### Constraints

- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists.

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

---

## 🛠**Approach (HashMap)**
1. Initialize an unordered_map to store the value -> index mapping.
2. Iterate through the array:
    - Compute the complement `(target - nums[i])`.
    - If the complement exists in the map, return its index along with the current index.
    - Otherwise, store the current number with its index in the map.
3. Return an empty list if no solution exists (though it's guaranteed one does).

---

## **Complexity Analysis**
- **Time Complexity:** `O(N)`, since we traverse the list once.
- **Space Complexity:** `O(N)`, for storing elements in the hashmap.

---

## **Edge Cases Considered**
- An empty array (`[]`)  
- A single-element array (`[5]`)  
- Arrays with very large values (`[INT_MAX, INT_MIN, 0, INT_MAX]`)  
- Arrays where all elements are the same (`[2, 2, 2, 2, 2]`)  
- A strictly increasing sequence (`[1, 2, 3, 4, 5]`)  

---

## **How to Run the Code**

1. Clone this repository:  
   ```bash
   git clone https://github.com/SSNegi23/Neetcode-150-Course.git
   ```

2. Navigate to the directory:
    ```bash
    cd Neetcode-150-Course/003-Two-Sum
    ```

3. Compile and run the program:  
    BASH Command
    ```bash
    g++ Two-Sum-Solution.cpp -o Two-Sum-Solution && ./Two-Sum-Solution
    ```
    CMD Command
    ```cmd
    g++ Two-Sum-Solution.cpp -o Two-Sum-Solution && Two-Sum-Solution
    ```

