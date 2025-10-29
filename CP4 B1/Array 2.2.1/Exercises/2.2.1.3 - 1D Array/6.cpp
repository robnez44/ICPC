#include <bits/stdc++.h>
using namespace std;

int median(int arr[], int n){
    sort(arr, arr+n);
    return arr[(n-1)/2];
}