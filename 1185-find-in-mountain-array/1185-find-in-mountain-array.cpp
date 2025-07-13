/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int binarysearch2(int target, MountainArray &mountainArr,int i,int j){
        while(i<=j){
            int mid=(i+j)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid) > target) i=mid+1;
            else j=mid-1;
        }
        return -1;
    }
    int binarysearch1(int target, MountainArray &mountainArr,int i,int j){
        while(i<=j){
            int mid=(i+j)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid) > target) j=mid-1;
            else i=mid+1;
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int i=0;
        int j=n-1;
        int idx=-1;
        while(i<j){
            int mid=(i+j)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                i=mid+1;
            }
            else j = mid;
        }
        idx = i;
        cout<<idx<<" ";
        if(idx==-1) return -1;
        int i1= binarysearch1(target,mountainArr,0,idx);
        if(i1==-1) i1=binarysearch2(target,mountainArr,idx+1,n-1);
        return i1;
    }
};