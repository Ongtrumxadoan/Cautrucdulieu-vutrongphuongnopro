//https://freetuts.net/de-quy-tuyen-tinh-2946.html
#include <iostream>
using namespace std;
 
//h�m d? quy tuy?n t�nh
int factorial(int n){
  if(n == 0) return 1; // di?m d?ng c?a h�m, n?u n == 0 th� k?t th�c h�m v� tr? v? 1
  return n * factorial(n-1);
}
