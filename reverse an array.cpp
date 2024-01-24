#include<iostream>
using namespace std;


   //REVERSING AN ARRAY

int main(){
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"enter "<<n<<" elementes "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int pos;
cout<<"enter the pos"<<endl;
cin>>pos;

   int start =pos+1;
   int ends=n-1;
   while(start<=ends){
        swap(arr[start],arr[ends]);
        start++;
        ends--;
   }
  cout<<"after reversing array"<<endl;
   for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }


}
