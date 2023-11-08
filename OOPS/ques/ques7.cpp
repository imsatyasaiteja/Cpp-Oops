/*
Write a program to create a generic function using 
function template for searching an item in a sorted 
array. Invoke the function for array of int, float 
and char.
*/

#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
int binary_search(T arr[], int size, T key)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 5;
    int result1 = binary_search(arr1, size1, key1);
    if (result1 != -1)
    {
        cout << "Element found at index " << result1 << " in integer array." << endl;
    }
    else
    {
        cout << "Element not found in integer array." << endl;
    }

    float arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    float key2 = 5.5;
    int result2 = binary_search(arr2, size2, key2);
    if (result2 != -1)
    {
        cout << "Element found at index " << result2 << " in float array." << endl;
    }
    else
    {
        cout << "Element not found in float array." << endl;
    }

    char arr3[] = "abcdefghij";
    int size3 = strlen(arr3);
    char key3 = 'c';
    int result3 = binary_search(arr3, size3, key3);
    if (result3 != -1)
    {
        cout << "Element found at index " << result3 << " in char array." << endl;
    }
    else
    {
        cout << "Element not found in char array." << endl;
    }

    return 0;
}
