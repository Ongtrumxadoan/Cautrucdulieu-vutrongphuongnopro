//https://freetuts.net/de-quy-tuyen-tinh-2946.html
#include <iostream>
using namespace std;
 
//hàm d? quy tuy?n tính
int factorial(int n){
  if(n == 0) return 1; // di?m d?ng c?a hàm, n?u n == 0 thì k?t thúc hàm và tr? v? 1
  return n * factorial(n-1);
}
