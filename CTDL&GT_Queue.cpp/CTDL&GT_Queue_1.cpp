//https://blog.luyencode.net/hang-doi-trong-cpp/
#include <iostream>
const int MAX = 1e5; // K�ch c? l?n nh?t c?a h�ng d?i, bi?n n�y c� th? thay d?i t�y v�o b?n
template<typename T> class Queue // X�y d?ng h�ng d?i
{
 T base[MAX]; // M?ng base luu tr? th�ng tin
 T *a = base; // Con tr? c?a m?ng base
 int size = 0;
 public:
 Queue() // H�m kh?i t?o
 {
 
 }
 void Enqueue(T x) // Th�m 1 ph?n t? v�o d?u h�ng d?i
 {
 a[size] = x; // �?t x v�o cu?i h�ng d?i
 size++; // Tang k�ch thu?c h�ng d?i l�n 1
 }
 void Dequeue() // Lo?i b? ph?n t? ? d?u h�ng d?i
 {
 ++a; // Lo?i b? ph?n t? ? d?u h�ng d?i
 size--; // Gi?m k�ch c? h�ng d?i di 1
 }
 bool isEmpty() // Ki?m tra h�ng d?i c� r?ng hay kh�ng
 {
 return size > 0; // Ki?m tra k�ch c? c� l?n hon 0 hay kh�ng?
 }
 T front() // Tr? v? ph?n t? ? d?u h�ng d?i
 {
 return a[0];
 }
};
