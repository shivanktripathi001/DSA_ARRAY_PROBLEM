#include<iostream>
using namespace std;
/*
    PRONIC NUMBER IS A PRODUCT OF TWO COSECUTIVE NUMBER--->


    3*4=12----->>>>>>>>>>

*/
int main(){
int n,i,f=0;

cout<<"enter the number ";
cin>>n;

for(i=1;i<n;i++){

    if(n==i*(i+1))
    {
        f=1;
        break;

    }
}
    if(f==1)
        cout<<"number is pronic"<<endl;
    else
        cout<<"number is not pronic"<<endl;

return 0;

}
