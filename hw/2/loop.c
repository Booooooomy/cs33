/*
 *** USING SECOND EDITION ***
 * A. Which registers hold program values x, n, result, and mask?
 *    x in %rdi, n in %esi, mask in %rdx, result in %eax.
 * B. What are the initial values of result and mask?
 *    mask initial value: 1
 *    result initial value: 0
 * C. What is the test condition for mask?
 *    mask != 0
 * D. How does mask get updated?
      The mask gets shifted left by n on each iteration of the loop
 * E. How does result get updated?
      it is XOR'd with the union (AND) of mask and x in the body of each
      iteration of the llop
 * F. Fill in all the missing parts of the C code.
 */

long loop(long x, long n) {
    long result = 0;
    long mask;
    for (mask = 1; mask != 0; mask <<= n) { ;
        result ^= (mask & x);
    }
    return result;
}
