#include <iostream>
using namespace std;
 
//h�m d? quy tuy?n t�nh
int factorial(int n){
  if(n == 0) return 1; // di?m d?ng c?a h�m, n?u n == 0 th� k?t th�c h�m v� tr? v? 1
  return n * factorial(n-1);
}
//h�m main
int main() {
  int n;
  cout<<"Nh?p v�o s? giai th?a b?n mu?n t�nh: ";
  cin>>n;
  int kq = factorial(n);//g?i h�m factorial() d? t�nh giai th?a cho n v� g�n k?t qu? v�o bi?n kq
  cout<<"\nK?t qu? \n"<<n<<"! = "<<kq;
   
  }
