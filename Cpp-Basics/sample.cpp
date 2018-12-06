#include<iostream>
using namespace std;

void remove(int arr[],int n){

int j=0;
for(int i=1;i<n;i++){
    if(arr[j]!=arr[i]){
        j++;
        arr[j]=arr[i];
    }
}
j++;
}

int main(){
int a[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];

}
remove(a,n);
for(int i =0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;

}
