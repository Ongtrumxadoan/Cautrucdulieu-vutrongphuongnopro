//https://blog.luyencode.net/hang-doi-trong-cpp/
#include <iostream>
const int MAX = 1e5; // Kích c? l?n nh?t c?a hàng d?i, bi?n này có th? thay d?i tùy vào b?n
template<typename T> class Queue // Xây d?ng hàng d?i
{
 T base[MAX]; // M?ng base luu tr? thông tin
 T *a = base; // Con tr? c?a m?ng base
 int size = 0;
 public:
 Queue() // Hàm kh?i t?o
 {
 
 }
 void Enqueue(T x) // Thêm 1 ph?n t? vào d?u hàng d?i
 {
 a[size] = x; // Ð?t x vào cu?i hàng d?i
 size++; // Tang kích thu?c hàng d?i lên 1
 }
 void Dequeue() // Lo?i b? ph?n t? ? d?u hàng d?i
 {
 ++a; // Lo?i b? ph?n t? ? d?u hàng d?i
 size--; // Gi?m kích c? hàng d?i di 1
 }
 bool isEmpty() // Ki?m tra hàng d?i có r?ng hay không
 {
 return size > 0; // Ki?m tra kích c? có l?n hon 0 hay không?
 }
 T front() // Tr? v? ph?n t? ? d?u hàng d?i
 {
 return a[0];
 }
};
