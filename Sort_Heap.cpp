#include<iostream>
using namespace std;
//small error find later by dry run
void maxHeap(int a[], int n, int i){
    int largest = i;
    int l = (2 * i);
    int r = ((2 * i) + 1);
    while (l<=n && a[l]>a[largest]){
        largest = l;
    }
    while(r<=n && a[r]>a[largest]){
        largest = r;
    }
    if(largest != i){
        swap(a[largest], a[i]);
        maxHeap(a, n, largest);
    }
}

void heapSort(int a[], int n){
    for (int i = (n / 2); i >= 1; i--){
        maxHeap(a, n, i);
    }
    for (int i = n; i >= 1; i--){
        swap(a[1], a[i]);
        maxHeap(a, n, 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i<=n; i++){
        cin >> a[i];
    }

    heapSort(a, n);
    for (int i = 1; i<=n; i++){
        cout << a[i] << " ";
    }
        return 0;
}