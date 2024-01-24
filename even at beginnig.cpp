#include<iostream>
#include<vector>
using namespace std;

// even no all at the begining --->

void sort_by_parity(vector<int> &v){
int s=0;
int e=v.size()-1;
while(s<e){
    if(v[s]%2==1&&v[e]%2==0){
        swap(v[s],v[e]);
        s++;
        e--;
        }

    if(v[s]%2==0){
        s++;
    }
    if(v[e]%2==1){
        e--;
    }

}

}

int main(){

int n;
cout<<"enter the size of an array "<<endl;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){

    int ele;
    cin>>ele;
    v.push_back(ele);


}



  sort_by_parity(v);
  cout<<"array after arrangin a/q --->"<<endl;
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
cout<<endl;


}

