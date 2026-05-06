# Problem 2: Array Transformation Cost Minimization 

You are given an integer array A of size N. You can perform the following operation any 
number of times: 
• Choose any index i and replace A[i] with A[i] + K or A[i] - K, where K is a fixed 
integer.  
# Your goal is to: 
• Transform the array such that all elements become equal.  
• Return the minimum total number of operations required, or -1 if it is not possible.  
 # Input Format: 
• First line: Integer N  
• Second line: N space-separated integers (array A)  
• Third line: Integer K  
  Output Format: 
• Print minimum number of operations or -1  
  Constraints: 
• 1≤N≤105 
• 1≤A[i],K≤109  
  Example: 
# Input: 
5 
2 4 6 8 10 
2 
# Output: 
6 
# Explanation: 
# Convert all elements to 6: 
• 2 → 6 (2 steps)  
• 4 → 6 (1 step)  
• 6 → 6 (0 steps)  
• 8 → 6 (1 step)  
• 10 → 6 (2 steps)  
Total operations = 6

# Approach Used :

# Step 1: Input Array and K
Read:
Size of array N
Array elements
Integer K

# Step 2: Check Possibility
To make all numbers equal:
Difference between every element and the target must be divisible by K
# Condition:
#(A[i] - A[0]) % K == 0
#If any element fails this condition:
#Output = -1

Reason:

We can only move numbers in multiples of K
Step 3: Sort the Array
Sort the array using qsort()

Why sorting?

The median minimizes the total number of operations
Step 4: Choose Median as Target

Target element:

target = a[n/2]

Reason:

Minimum total absolute difference occurs at the median
Step 5: Count Operations

For every element:

operations += abs(A[i] - target) / K

This gives:

Number of steps needed to convert each element into target
Example

Input:

5
2 4 6 8 10
2

Sorted Array:

2 4 6 8 10

Median:

6

Operations:

2 -> 6 = 2 steps
4 -> 6 = 1 step
6 -> 6 = 0 step
8 -> 6 = 1 step
10 -> 6 = 2 steps

Total:

6

Output:

Minimum Operations: 6
Time Complexity
Sorting:
O(N log N)
Traversing Array:
O(N)
Overall Complexity:
O(N log N)

# Efficient for:
#N ≤ 100000
#Space Complexity
#O(1)
#(Excluding input array storage)

# Techniques Used
#Sorting
#Median Optimization
#Greedy Approach
#Mathematical Divisibility Check

# Program Execution Example
#• PS E:\Advance Coding 1> gcc main.c -o main
#• PS E:\Advance Coding 1> ./main

#• Enter size: 5
#• Enter array elements: 2 4 6 8 10
#• Enter K: 2
#• Minimum Operations: 6

# Invalid Case:

#• Enter size: 3
#• Enter array elements: 1 2 3
#• Enter K: 2
#• -1

# Reason:

#Elements cannot become equal using only ±2 operations.
