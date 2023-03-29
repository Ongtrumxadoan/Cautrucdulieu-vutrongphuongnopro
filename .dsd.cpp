#include<iostream>
using namespace std;

void NhapMang(int a[],int n){
    for(int i=0;i<=n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}

void XuatMang(int a[],int n){
    cout<<"- gia tri cua mang sau day la: ";   
    for(int i=0;i<=n;i++){
        cout<<a[i]<<";";
    }
}
int DemGiaTriDUong(int a[],int n){
    int d=0, s=0;
    for(int i=0;i<=n;i++)
    if(a[i]>0){
        d=1;
        s=s+d;
    }
    if(d==1)
    return s;
    
    return 0;
    
}

int main(){
 int n,a[100],i,kq;
    do{
        cout<<"- nhap so mang n tu ban phim la: ";
        cin>>n;
    }while(n<1||n>100);
    NhapMang(a,n);
    XuatMang(a,n);
    kq=DemGiaTriDUong(a,n);
    cout<<"\n- so luong gia tri duong co trong mang la:"<<kq;
}
