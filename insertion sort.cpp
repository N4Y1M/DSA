#include<bits/stdc++.h>
using namespace std;

void insertion(int a[], int n){
    for(int i=1;i<n;i++){
        int key= a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

}
int main(){
    int a[]={9,4,2,8,4,7};
    for(auto m:a){
        cout<<m<<" ";
    }
    cout<<"\nAfter sort: ";
    int n=sizeof(a)/sizeof(a[0]);
    insertion(a,n);
    for(auto m:a){
        cout<<m<<" ";
    }
}
