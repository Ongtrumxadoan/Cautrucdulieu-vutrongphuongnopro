//https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan
#include <stdio.h>

 
int search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      // Tr? v? ch? s? khi t�m th?y
      return i;
  // N?u kh�ng t�m th?y tr? v? -1. V� ch? s? m?ng >= 0
  return -1;
}
 
int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = search(arr, n, x);
  if (result != -1) {
    printf("%d xuat hien tai chi so %d", x, result);
  } else {
    printf("%d khong co trong mang", x);
  }
  return 0;
}



