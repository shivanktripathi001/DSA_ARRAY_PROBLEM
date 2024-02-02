
#include<iostream>
using namespace std;


int largestElementIndex(int array[],int size){
int max=0;
int maxindex=-1;

for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
        maxindex=i;
    }
}


return maxindex;

}





int main(){
int arr[]={2,3,5,7,6,1};

int indexoflargest=largestElementIndex(arr,6);
cout<<arr[indexoflargest];

arr[indexoflargest]=-1;
int indexofsecondlargest=largestElementIndex(arr,6);
cout<<arr[indexofsecondlargest];

return 0;


}
