Program Documentation: Building Min Heap and Max Heap

Program Name: Min Heap and Max Heap Construction
Language: C
Author: Siddharth Thapa
Course: COMP202

(a) Explanation of Data Structures

The program uses arrays to represent binary heaps.

A heap is a complete binary tree, and arrays are used for efficient storage.

Heap Representation in Array

For any element at index i:

Left Child → 2*i + 1

Right Child → 2*i + 2

Parent → (i - 1) / 2

Two separate arrays are used:

Min Heap Array – stores elements arranged so that
Parent ≤ Children

Max Heap Array – stores elements arranged so that
Parent ≥ Children

Both heaps follow the Binary Tree structure and array indexing rules.

(b) Description of Functions
**1. swap(int a, int b)

Purpose:
Exchanges values of two variables.
Used during heap construction when elements need to be rearranged.

2. minHeapify(int arr[], int n, int i)

Purpose:
Ensures the subtree rooted at index i satisfies the Min Heap property.

Logic:

Compare node with left and right children.

Find the smallest element.

If child is smaller than parent, swap.

Recursively apply heapify to affected subtree.

3. buildMinHeap(int arr[], int n)

Purpose:
Converts an unsorted array into a Min Heap.

Logic:

Start from last non-leaf node (n/2 - 1)

Call minHeapify() for each node moving upwards to root.

4. maxHeapify(int arr[], int n, int i)

Purpose:
Ensures subtree rooted at index i follows Max Heap property.

Logic:

Compare parent with children.

Find largest element.

Swap if needed.

Recursively heapify affected subtree.

5. buildMaxHeap(int arr[], int n)

Purpose:
Converts unsorted array into a Max Heap.

Logic:

Start from last non-leaf node.

Call maxHeapify() for each internal node.

(c) Overview of main() Function

The main() function performs the following steps:

Accepts number of elements from user.

Reads array elements.

Copies the original array:

One for Min Heap

One for Max Heap

Calls:

buildMinHeap()

buildMaxHeap()

Displays both heaps in array form.

The main function demonstrates heap construction clearly.

(d) Sample Output
Input
Enter number of elements: 7
Enter elements:
10 3 5 30 2 8 15

Output
Min Heap array representation:
2 3 5 30 10 8 15

Max Heap array representation:
30 10 15 3 2 8 5

Conclusion

This program demonstrates:

Heap implementation using arrays

Construction of Min Heap and Max Heap

Use of Heapify algorithm

Tree-to-array index mapping

Time Complexity

Heapify → O(log n)

Build Heap → O(n)

Heaps are widely used in priority queues, scheduling, and sorting algorithms like Heap Sort.