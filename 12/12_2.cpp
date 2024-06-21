#include <iostream>
using namespace std;

void selectionSort(int a[], int b){
    //4,5,1,9,0
    //9,5,1,4,0
    for(int i=b-1; i>=0; i--){
        int maxIndex = i;
        for(int j=i-1; j>=0; j--){
            if(a[i]<a[j]){
                maxIndex = j;
            }
        }
        if(a[i]!=a[maxIndex]){
            swap(a[i],a[maxIndex]);
        }
    }
}

void arrPrint(int a[], int b){
    for(int i=0; i<b; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arrSize = 5;
    int a[] = {4,5,1,9,0};
    arrPrint(a,arrSize);
    selectionSort(a,arrSize);
    cout<<endl;
    arrPrint(a,arrSize);
}
