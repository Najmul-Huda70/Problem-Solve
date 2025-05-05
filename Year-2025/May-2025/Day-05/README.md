# Problem: Scoring Subsequences
## Problem Statement
Given a non-decreasing sequence [a1, a2, ..., an], we need to compute for each prefix [a1, ..., ak] (for k from 1 to n):

The maximum score among all its subsequences

The length of the longest subsequence achieving this maximum score

The score of a subsequence [s1, s2, ..., sd] is defined as:

score= |s1⋅s2⋅...⋅sd|/d
 
## Key Insights
Non-decreasing Sequence Property: Since the sequence is sorted, the largest elements are at the end.

Optimal Subsequence: For maximum score, we should consider subsequences of the largest elements.

Score Calculation: The score can be rewritten as:

### summation si/(d+i-1)
​
This suggests we should select elements where s_i ≥ d+1-i.

## Solution Approach
### Sliding Window Technique: Maintain a window of elements where a[i] ≥ window_size.

Deque Data Structure: Use a deque to efficiently maintain the current valid window:

Add new elements to the front

Remove elements from the back that don't satisfy a[i] ≥ window_size
