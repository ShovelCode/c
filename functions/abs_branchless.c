int abs_branchless(int x) {
    return (x + (x >> 31)) ^ (x >> 31);
}
