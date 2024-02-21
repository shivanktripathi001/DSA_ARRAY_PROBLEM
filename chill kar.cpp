#include<iostream>
using namespace std;

int main(){



int arr[]={4,1,26,578,2,98,0};

int size=7;

for(int i=0;i<size;i++){

        int idx=i;
    for(int j=i+1;j<size;j++){

        if(arr[j]<arr[idx]){
            idx=j;
        }
    }

    swap(arr[i],arr[idx]);

}


for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}




}
