#include<iostream>
using namespace std;
void NhapMang(int a[],int n){
    for(int i=0;i<=n;i++){
        cout<<"a["<<i<<"] =";
        cin>>a[i];
    }
}

void XuatMang(int a[],int n){
    cout<<"- gia tri cua mang sau day la: ";   
    for(int i=0;i<=n;i++){
        cout<<a[i]<<";";
    }
}
int TinhTong(int a[], int n){
     
    int tong =0, d =0,i;
    for( i=0;i<=n;i++)
       
       if(a[i]%2==0)
        {
            d=1;
            tong =tong + a[i];
          
        }
        if(d==1)
            return tong;
         return 0;
  }

 
int main(){
    int n,a[100],i,tong,kq;
    do{
        cout<<"- nhap so mang n tu ban phim la: ";
        cin>>n;
    }while(n<1||n>100);
    
    NhapMang(a,n);
    XuatMang(a,n);
     kq=TinhTong(a,n);
    cout<<"\n- tong cua cac so chan la:"<<kq;
 }
