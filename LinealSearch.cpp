#include <iostream>
#include <string>

  // Linearly search x in arr[].  If x is present then return its 
// location,  otherwise return -1
int main (int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}
