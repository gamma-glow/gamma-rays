#include <iostream>
#include <algorithm>
#include <numeric>

int main(){

    int arr[] = {1,2,3,4,3,2,34,1};

    std::reverse(arr,arr+8);
    std::sort(arr,arr+8);
    int cnt = std::count(arr,arr+8,2);
    int sum = std::accumulate(arr,arr+2,0);
    for(int i:arr){
        std::cout << i <<"\n";
    }
    
    return 0;
}