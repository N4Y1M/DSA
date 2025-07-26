#include<bits/stdc++.h>
using namespace std;
void movedisk(stack<int>&from,stack<int>&to,char f,char t){

    int disk=from.top();
    from.pop();
    to.push(disk);
    cout<<"move disk "<<disk<<" from "<<f<<" to "<<t<<endl;

}
void hanoi(int n,stack<int>&A,stack<int>&B,stack<int>&C,char a,char b,char c){

    if(n==1){
            movedisk(A,C,a,c);
        return;
    }
    hanoi(n-1,A,C,B,a,c,b);
    movedisk(A,C,a,c);
    hanoi(n-1,B,A,C,b,a,c);



}

int main(){
    int n=4;
    stack<int>A,B,C;
    for(int i=n;i>=1;i--){
        A.push(i);
    }
    hanoi(n,A,B,C,'a','b','c');



}
