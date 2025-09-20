### Big O (O) – Upper Bound
Meaning: The algorithm will never take more than this much time/space (asymptotically).

Think: Worst case ceiling.

Example: If your algorithm is O(n²), it might run faster on some inputs, but it won’t be slower than proportional to n² growth for large n.

### Omega (Ω) – Lower Bound
Meaning: The algorithm will at least take this much time/space (asymptotically).

Think: Best case floor.

Example: If Ω(n), the algorithm takes at least linear time for large inputs — can’t do better than that.

### Theta (Θ) – Tight Bound
Meaning: The algorithm takes time/space that is both upper and lower bounded by the same function (asymptotically).

Think: Exactly that order of growth.

Example: If Θ(n log n), it’s not faster than n log n in the best case and not slower than n log n in the worst case — it grows at that rate.

| Big-O      | Name         | Description                                |
| ---------- | ------------ | ------------------------------------------ |
| O(1)       | Constant     | Time doesn't change with input size        |
| O(log n)   | Logarithmic  | Time increases slowly as input grows       |
| O(n)       | Linear       | Time grows directly with input size        |
| O(n log n) | Linearithmic | More than linear but better than quadratic |
| O(n²)      | Quadratic    | Time grows with the square of input size   |
| O(2^n)     | Exponential  | Time doubles with each additional input    |
| O(n!)      | Factorial    | Extremely slow growth                      |

How to Calculate Time Complexity?
     
     Identify the input size (n).

     Count the number of basic operations (like comparisons, additions) in the worst-case.

     Focus on the dominant term as n grows large.

     Ignore constants and lower-order terms.