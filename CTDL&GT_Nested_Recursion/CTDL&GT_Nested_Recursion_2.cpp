//https://freetuts.net/de-quy-long-nested-recursion-2959.html
#include <iostream>
using namespace std;
 
int A(int m, int n){
  if(m == 0) // n?u m == 0 th� return n + 1
    return n + 1;
  else if(n == 0) // n?u n == 0 th� return d? quy A(m - 1, 1)
    return A(m - 1, 1);
  else // n?u m > 0 v� n > 0 th� return d? quy l?ng A(m-1, A(m, n-1))
    return A(m-1, A(m, n-1));
}
int main() {
  int kq = A(2,1); // truy?n tham s? d?u v�o cho A() l� m = 2 v� n = 1
  cout<<"\nK?t qu?: "<<kq;
 
  cout<<"\n---------------------------\n";
  cout<<"Chuong tr�nh n�y du?c dang t?i Freetuts.net";
}
