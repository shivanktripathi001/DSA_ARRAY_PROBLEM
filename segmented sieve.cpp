#include<iostream>
#include<vector>
using namespace std;

vector<bool> Sieve(int n){

vector<bool> sieve(n+1,true);
sieve[0]=sieve[1]=false;

for(int i=2;i*i<=n;i++){

    if(sieve[i]){
        //optimised j=i*2 hota
        for(int j=i*i;j<=n;j+=i){

            sieve[j]=false;
        }
    }
}
return sieve;
}

vector<bool> segsieve(int l,int r){

vector<bool> sieve=Sieve(sqrt(r));
vector<int> baseprime;


for(int i=0;i<n;i++){


    if(sieve[i]){
            baseprime.push_back(i);

}
}


vector<bool> segsieve(r-l+1.true){

    if(l==0 || l==1){
        segsieve[l]=false;
    }
    for(auto prime:baseprime){

        int first_mul=(l/prime)*prime;
        if(first_mul<l){
            first_mul+=prime;
        }


        int j=max(first_mul,prime*prime);
        while(j<=r){
            segsieve[j]=false;
            j+=prime;
        }


    }
}
}




int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

vector<bool> sieve=Sieve(n);
int ans=0;

for(int i=0;i<=n ;i++){
    if(sieve[i]){
       cout<<i<<" ";
    }
}
cout<<ans;

}

