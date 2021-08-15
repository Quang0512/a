#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int *a, int n, int key){
    int l=0, r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2; 
        if(a[mid]==key) return mid;
        else if(a[mid]<key) l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int main(){
    int n; cin >> n;
    int* a=new int[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int key; cin >> key;
    sort(a,a+n);
    cout << binarySearch(a,n,key) << endl;
    delete [] a;
    return 0;
}