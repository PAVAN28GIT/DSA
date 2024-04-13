
#include<iostream>
#include<algorithm>

using namespace std;
void heapify(int arr[],int i, int n){
    int largest = i;
    int left = 2*i;
    int right = (2*i)+1;

    if(left<n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest,n);    
    }

}


// for 1th index heap 

// left child = 2n
// right child = 3n
// parent = n/2

// leafnode = n/2+1 to n

int main(){
    int arr[] = {-1,54,3,7,9,5,3,678};
    int n = 8;
    // heapify call
    for(int i =n/2;i>0;i--){          because 1 to n/2 lies internal nodes...which shld be heapified
        heapify(arr,i,n);
    }

  
    cout<<"after heapify"<<endl;
    for(int i =1;i<n;i++){
       cout<<arr[i]<<" ";
    }cout<<endl;
  
    return 0;
}
