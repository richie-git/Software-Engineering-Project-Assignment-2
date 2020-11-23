// Problem 3 -  A C++ program (using function) to sort 10 integer values
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

// Driver code
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    // size of the array
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "The array before sorting is : \n";

    // print the array
    show(a, asize);

      // sort the array
    sort(a, a + asize);

    cout << "\n\nThe array after sorting is :\n";

    // print the array after sorting
    show(a, asize);

    return 0;
}
