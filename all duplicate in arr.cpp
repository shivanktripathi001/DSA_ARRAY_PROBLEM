#include<iostream>

using namespace std;

void print(int arr[],int s,int e){
cout<<"{";
for(int i=s;i<e;i++){

    cout<<arr[i]<<" ";
}
cout<<"},";
}



void printAllSub(int arr[],int n){
for(int i=0;i<=n;i++){
    for(int j=i;j<=n;j++){


        print(arr,i,j);
    }

}

}


int main(){


int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(int);

printAllSub(arr,size);
cout<<endl;

}
