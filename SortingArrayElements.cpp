#include<iostream>
#define size 10
using namespace std;


int main(){
    int array[size];
    cout << "Enter " << size <<" numbers : ";
    for(int i=0 ; i<size ; i++){
        cin >> array[i];
    }

    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(array[j] < array[i]){
                int a = array[j];
                array[j] = array[i];
                array[i] = a;
            }
        }
    }

    cout << "\n";
    for(int i=0 ; i<size ; i++){
        cout << array[i] << " ";
    }
    cout << "\n---------------Program Ended---------------\n";
    return 0;
}