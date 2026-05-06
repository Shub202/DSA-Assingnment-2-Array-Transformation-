# Problem 2: Array Transformation Cost Minimization

## Problem Statement

You are given an integer array `A` of size `N`. You can perform the following operation any number of times:

* Choose any index `i` and replace:

```text
A[i] = A[i] + K
or
A[i] = A[i] - K
```

where `K` is a fixed integer.

## Goal

* Transform the array such that all elements become equal.
* Return the minimum total number of operations required.
* If it is not possible, return `-1`.

---

# Input Format

* First line: Integer `N`
* Second line: `N` space-separated integers (Array `A`)
* Third line: Integer `K`

---

# Output Format

* Print the minimum number of operations or `-1`.

---

# Constraints

```text
1 ≤ N ≤ 10^5
1 ≤ A[i], K ≤ 10^9
```

---

# Example

## Input

```text
5
2 4 6 8 10
2
```

## Output

```text
6
```

---

# Explanation

Convert all elements to `6`:

```text
2  -> 6  = 2 steps
4  -> 6  = 1 step
6  -> 6  = 0 step
8  -> 6  = 1 step
10 -> 6  = 2 steps
```

Total Operations:

```text
6
```

---

# Approach Used

## Step 1: Input Array and K

Read:

* Size of array `N`
* Array elements
* Integer `K`

---

## Step 2: Check Possibility

To make all elements equal:

* The difference between every element and the target must be divisible by `K`.

### Condition

```c
(A[i] - A[0]) % K == 0
```

If any element fails this condition:

```text
Output = -1
```

### Reason

We can only increase or decrease numbers in multiples of `K`.

---

## Step 3: Sort the Array

Sort the array using:

```c
qsort()
```

### Why Sorting?

The median minimizes the total number of operations.

---

## Step 4: Choose Median as Target

### Target Element

```c
target = a[n/2]
```

### Reason

The minimum total absolute difference is achieved at the median.

---

## Step 5: Count Operations

For every element:

```c
operations += abs(A[i] - target) / K;
```

This calculates:

* Number of operations required to convert each element into the target.

---

# Working Example

## Input

```text
5
2 4 6 8 10
2
```

## Sorted Array

```text
2 4 6 8 10
```

## Median

```text
6
```

## Operations

```text
2  -> 6  = 2 steps
4  -> 6  = 1 step
6  -> 6  = 0 step
8  -> 6  = 1 step
10 -> 6  = 2 steps
```

## Total

```text
6
```

## Output

```text
Minimum Operations: 6
```

---

# Time Complexity

## Sorting

```text
O(N log N)
```

## Array Traversal

```text
O(N)
```

## Overall Time Complexity

```text
O(N log N)
```

Efficient for:

```text
N ≤ 100000
```

---

# Space Complexity

```text
O(1)
```

(Excluding input array storage)

---

# Techniques Used

* Sorting
* Median Optimization
* Greedy Approach
* Mathematical Divisibility Check

---

# Sample Input and Output

## Valid Case

```text
PS E:\Advance Coding 2> gcc main.c -o main
PS E:\Advance Coding 2> ./main

Enter size: 5
Enter array elements: 2 4 6 8 10
Enter K: 2

Minimum Operations: 6
```

---

## Invalid Case

```text
PS E:\Advance Coding 2> ./main

Enter size: 10
Enter array elements: 8 7 3 6 23 5 9 10 4 0
Enter K: 4

-1
```

### Reason

Elements cannot become equal using only `±4` operations.

---

# Another Invalid Example

```text
Enter size: 3
Enter array elements: 1 2 3
Enter K: 2

-1
```

### Reason

All elements cannot be converted into the same value using only `±2`.

---

# Author

## Shubham Kumar

## LinkedIn

```text
https://www.linkedin.com/in/shubham-kumar-b21037295/
```
