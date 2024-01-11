#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    
    merge(arr1, arr1 + size1, arr2, arr2 + size2, merged);
}

void Common(int arr1[], int size1, int arr2[], int size2) {
    cout << "Common elements: ";
    for (int i = 0; i < size1; i++) {
        if (binary_search(arr2, arr2 + size2, arr1[i])) {
            cout << arr1[i] << " ";
        }
    }
    cout << endl;
}

bool palindrome(string str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i++] != str[j--]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[5], arr2[7];
    int merged[12];

   
    cout << "Enter 5 integers for array 1: \n";
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 7 integers for array 2: \n";
    for (int i = 0; i < 7; i++) {
        cin >> arr2[i];
    }
   
    sort(arr1, arr1 + 5);
    sort(arr2, arr2 + 7);

    mergeArrays(arr1, 5, arr2, 7, merged);

    cout << "Merged Array in ascending order: ";
    for (int i = 0; i < 12; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    Common(arr1, 5, arr2, 7);

    string sentence;
    cout << "Enter a sentence: ";
    cin.ignore(); 
    getline(cin, sentence);

    if (palindrome(sentence)) {
        cout << "The sentence is a palindrome.\n";
    }
    else {
        cout << "The sentence is not a palindrome.\n";
    }

    return 0;
}