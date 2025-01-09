# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error that occurs when removing elements from a `std::vector` while iterating through it using an index-based loop. The error arises because removing an element shifts the subsequent elements, thus invalidating the indices used in the loop.

The `bug.cpp` file contains the erroneous code. The `bugSolution.cpp` file provides a corrected version using iterators to avoid this issue.

## How to Reproduce

1. Clone the repository.
2. Compile and run `bug.cpp`.
3. Observe the incorrect output.
4. Compile and run `bugSolution.cpp`.
5. Observe the correct output.