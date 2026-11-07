# 100 Days of DSA

A structured log of data structures and algorithms problems solved across LeetCode and competitive programming platforms in C++.

---

## Progress Overview

| Day | Problems Solved | Primary Topics | Notes / Pitfalls Mastered |
| :---: | :--- | :--- | :--- |
| **Day 1** | [LC 2](#day-1---linked-lists-math--binary-search), [LC 35](#day-1---linked-lists-math--binary-search), [LC 66](#day-1---linked-lists-math--binary-search), [LC 69](#day-1---linked-lists-math--binary-search) | Linked Lists, Binary Search, Simulation | Memory deallocation mismatches (`new`/`delete`), 32-bit signed integer overflow |

---

## Detailed Daily Log

### Day 1 - Linked Lists, Math & Binary Search

#### 1. [LeetCode 2 - Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
* **Approach:** Traversed both linked lists simultaneously using a dummy head pointer, tracking carry across columns (`sum % 10` for digit values and `sum / 10` for carry propagation).
* **Key Pitfall:** Resolved AddressSanitizer `alloc-dealloc-mismatch` by instantiating new nodes with `new ListNode(...)` rather than C-style `malloc()`, ensuring compatibility with LeetCode's C++ deallocator.
* **Complexity:** Time $O(\max(N, M))$, Space $O(\max(N, M))$

#### 2. [LeetCode 35 - Search Insert Position](https://leetcode.com/problems/search-insert-position/)
* **Approach:** Implemented binary search using recursion on dynamic window boundaries $[f, l]$. 
* **Key Pitfall:** Calculated midpoints using `f + (l - f) / 2` to avoid integer overflow, and returned $f$ upon boundary crossing ($f > l$) to yield the correct insert position.
* **Complexity:** Time $O(\log N)$, Space $O(\log N)$ stack recursion

#### 3. [LeetCode 66 - Plus One](https://leetcode.com/problems/plus-one/)
* **Approach:** Backwards traversal from the least significant digit with in-place carry propagation. If all digits equal $9$, dynamically prefixed $1$ at the beginning.
* **Key Pitfall:** Avoided out-of-bounds indexing on single-element inputs (`[9]`) by relying on vector resizing/insertion instead of manual index offsets.
* **Complexity:** Time $O(N)$, Space $O(1)$ auxiliary (ignoring result expansion)

#### 4. [LeetCode 69 - Sqrt(x)](https://leetcode.com/problems/sqrtx/)
* **Approach:** Binary search over the integer space $[0, x]$ to pinpoint the rounded-down square root.
* **Key Pitfall:** Fixed Time Limit Exceeded (TLE) caused by integer overflow during $mid \times mid$ on large 32-bit numbers ($x \approx 2 \times 10^9$) by upgrading search bounds and calculation variables to `long long`.
* **Complexity:** Time $O(\log x)$, Space $O(\log x)$ stack recursion

---

## Repository Structure

```text
.
├── Day1/
    ├── LC2.cpp
    ├── LC35.cpp
    ├── LC66.cpp
    └── LC69.cpp
    |__ README.md