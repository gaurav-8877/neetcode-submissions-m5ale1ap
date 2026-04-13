class Solution {
public:
   int n;
   int binarySearch(int l,int r,vector<int>& arr,int target){
    int idx = -1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid]==target){
            idx = mid;
            break;
        }
        else if(arr[mid]<target){
            l = mid + 1;
        }
        else{
            r = mid-1;
        }
    }
    return idx;
   }
   int pivot(vector<int>&arr,int n){
    int l = 0;
    int r = n-1;
    while(l<r){
        int mid = l + (r-l)/2;
        if(arr[mid]>arr[r]){
            l = mid + 1;
        }
        else {
            r = mid;
        }
    }
    return r;
   }
    int search(vector<int>& nums, int target) {
        n = nums.size();
        int pivote = pivot(nums,n);
        int idx = binarySearch(0,pivote,nums,target);
        if(idx!=-1){
            return idx;
        }
        idx = binarySearch(pivote,n-1,nums,target);
        return idx;


    }
};
