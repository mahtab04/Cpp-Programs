#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  char a[10];
  cin.get(a,10);
  for(int i=0;a[i]!='\0';i++){
    if(a[i]>=65&&a[i]<=90){
        a[i] +=32;
    }
    else if(a[i]>=97&&a[i]<=122){
        a[i] -=32;
    }
  }
  cout<<a;
}
