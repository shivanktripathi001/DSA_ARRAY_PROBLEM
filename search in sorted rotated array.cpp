#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {

int s = 0;
int e = nums.size()-1;
int ans = -1;
while(s<=e){

    int mid = s+(e-s)/2;
    if(nums[mid] == target){

        return mid;
    }

    if(nums[mid] >= nums[s]){
        if(target >= nums[s] && target<=nums[mid]){

            e=mid-1;
        }
        else{

            s = mid+1;
        }
    }
    else{

        if(target>= nums[mid] && target<=nums[e]){
            s=mid+1;
        }
        else{

            e = mid-1;
        }
    }
}
return ans;


    }
int main(){


vector<int> nums={4,5,6,7,0,1,2};
int target = 0;


int ans = search(nums,target);
cout<<ans;
}
