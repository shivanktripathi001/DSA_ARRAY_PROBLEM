
#include<iostream>
#include<string>
#include<vector>
#include<limits.h>
#include<set>
#include<algorithm>

using namespace std;


void print_sub_util(vector<int> nums,int start,int end){
if(end==nums.size()){
    return ;
}
for(int i=start;i<=end;i++){
    cout<<nums[i]<<" ";
}
cout<<endl;
print_sub_util(nums,start,end+1);

}

void print_sub(vector<int> &nums){

    for(int start=0;start<nums.size();start++){
        int end=start;
        print_sub_util(nums,start,end);
    }
}
int main(){
vector<int> nums{1,2,3,4,5};
print_sub(nums);
return 0;
}
