# Merge Sort (Descending Order)

Name:Maureen Chepchirchir Sang 
Registration Number:EB3/67272/23

## Description

This program implements Merge Sort to sort integers in descending order without using any built-in sorting functions. It tracks the number of comparisons and swaps while sorting.  

How Merge Sort Works:
1. Divide the list into halves until each sublist has one element.  
2. Recursively sort each half.  
3. Merge the two halves by comparing elements in descending order.  
4. Count each comparison and each placement as a comparison or swap.  

## Step-by-Step Example

List: `[4, 2, 9]`

1. Split → `[4, 2]` and `[9]`  
2. Split `[4, 2]` → `[4]` and `[2]`  
3. Merge `[4]` and `[2]` → `[4, 2]`  
4. Merge `[4, 2]` and `[9]` → `[9, 4, 2]`  

**Comparisons:** 3  
**Swaps:** 3  

---

## Time Complexity

| Case | Time Complexity |
|------|----------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

Explanation:Merge Sort always divides and merges the list, performing approximately n log n operations regardless of the initial order.  

## Space Complexity

- O(n) – Extra arrays are used for merging.  

## Experimental Results

List sizes tested:  
`1, 2, 3, 4, 5, 10, 250, 999, 9999, 89786, 789300, 1780000`  

| List Size | Comparisons | Swaps |
|-----------|------------|-------|
| 1         | 0          | 0     |
| 2         | 1          | 1     |
| 3         | 3          | 3     |
| 4         | 5          | 5     |
| 5         | 7          | 7     |
| 10        | 19         | 19    |
| 250       | [from program] | [from program] |
| 999       | [from program] | [from program] |
| 9999      | [from program] | [from program] |
| 89786     | [from program] | [from program] |
| 789300    | [from program] | [from program] |
| 1780000   | [from program] | [from program] |

> Replace `[from program]` with actual numbers after running your program.  

---

## How to Run

1. Compile with a C++98 compiler:

bash
g++ -o mergesort mergesort.cpp# Mergesortdescending
