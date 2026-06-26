int tri(int n, int* arr) {
    if (arr[n] != -1) return arr[n];
    else arr[n] = tri(n-1, arr) + tri(n-2, arr) + tri(n-3, arr);
    return arr[n];
}
int tribonacci(int n) {
  if (n==0) return 0;
  else if (n==1 || n==2) return 1;
  int arr[n+1];
  for (int i=3; i<=n; i++) {
    arr[i]=-1;
  }
  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 1;
  return tri(n, arr);
}
