#include<iostream>
using namespace std;

int pow(int p,int d){



if(d==0){
    return 1;
}

else{

   int ans = p * pow(p,(d-1));
   return ans;
}
}
int arm(int n,int d){


if(n==0){
    return 0;
}
return pow(n%10,d)+arm(n/10,d);


}

int main(){

int n;
cout<<"enter the no ";
cin>>n;
int temp=n;

int d=0;
while(temp>0){
    temp=temp/10;
    d++;
}


int result = arm(n,d);
if(result == n){
    cout<<"yes";
}
else{
    cout<<"no";
}

}
