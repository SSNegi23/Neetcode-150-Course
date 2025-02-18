# Contains Duplicate

**Problem Link:** [LeetCode 217 - Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)  
**Difficulty:** `Easy`  
**Tags:** `Array`, `Hash Table`, `Sorting`

## 217. Contains Duplicate

### Problem Statement
Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is **distinct**.

<hr>

### Examples 

**Example 1**:

    Input: nums = [1,2,3,1]
    Output: true
    Explanation: The element 1 occurs at the indices 0 and 3.

<br>

**Example 2**:

    Input: nums = [1,2,3,4]
    Output: false
    Explanation: All elements are distinct.

<br>

**Example 3**:

    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true

<hr>

### Constraints

- 1 <= nums.length <= 10^5
- -10^9 <= nums[i] <= 10^9

---

## **Approach**
We use an **unordered set** to efficiently check for duplicates:

1. **Iterate through the array**  
2. **Insert elements into the set**  
3. **If an element already exists in the set, return `true`**  
4. **If no duplicates are found, return `false`**

This approach works efficiently because hash set operations (insertion & lookup) take **O(1)** time on average.

---

## **Complexity Analysis**
- **Time Complexity:** `O(N)`, where `N` is the length of `nums`, since we iterate through the array once.
- **Space Complexity:** `O(N)`, in the worst case, when all elements are unique and stored in the set.

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
    cd Neetcode-150-Course/001-Contains-Duplicate
    ```

1. Compile and run the program:  
    ```bash
    g++ Contains-Duplicate-Solution.cpp -o Contains-Duplicate-Solution && Contains-Duplicate-Solution
    ```

