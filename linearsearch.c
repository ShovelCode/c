int for_search(const int *vec, int size, int x) {
  for (int i=0;i<size;i++)
    if (vec[i] == x)
      return 1;
  return 0;
}
