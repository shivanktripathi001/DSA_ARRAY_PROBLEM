#include<iostream>
using namespace std;

int main(){
    int a[10],i,smallest;

    cout<<"enter 10 digits"<<endl;
    for(i=0;i<=9;i++)
    {
        cin>>a[i];
        smallest=a[0];

    }
    for(i=1;i<=9;i++)
    {
        if(smallest>a[i]){
            smallest=a[i];

        }

    }

cout<<"smallest num amongest 10 digit is "<<smallest;

return 0;

}

