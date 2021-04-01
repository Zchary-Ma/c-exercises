/**
 * Reference: http://https://github.com/jamesroutley/write-a-hash-table
*/

/*
The hash function we choose should:
1. Take a string as its input and return a number between 0 and m, our desired bucket array length.
2. Return an even distribution of bucket indexes for an average set of inputs.
    If our hash function is unevenly distributed, it will put more items in some buckets than others.
    This will lead to a higher rate of collisions. Collisions reduce the efficiency of our hash table. 
 */
static int hash();