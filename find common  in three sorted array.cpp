#include <bits/stdc++.h> 
vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    // Write your code here

    int i=0;
    int j=0;
    int k=0;

    vector<int> ans;

    while(i<a.size() && j<b.size() && k<c.size()){

        if(a[i]==b[j]==c[k]){
            ans.push_back(a[i]);

        }
       else if( a[i]<b[j] ){

            i++;
        }

        else if(b[j]<c[k] ]){

            j++;
        }

        else{

            k++;
        }



    }

    return ans;
}