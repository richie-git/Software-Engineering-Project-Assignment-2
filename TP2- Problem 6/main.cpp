// Problem 6 - Write a program to accept five integer values from keyword.


#include<iostream>
#include<conio.h>

using namespace std;

   int main()
    {
     int arr[5],i;
     int *p=arr;
     cout<<"\nEnter five numbers separated by space:";
     cin >> *p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout <<"\nYour numbers are:\n";
     for(i=0;i<5;i++)
        cout<<arr[i]<<endl;

     getch();
     return 0;

    }

