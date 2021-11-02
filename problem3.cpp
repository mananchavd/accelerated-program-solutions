/*Problem 3: Alternate Positive and Negative Numbers*/

#include <assert.h>
#include <iostream>
#include <array>
using namespace std;
 
 
void rotate(int arr[], int n, int outofplace, int cur)
{
    char tmp = arr[cur];
    for (int i = cur; i > outofplace; i--)
        arr[i] = arr[i - 1];
    arr[outofplace] = tmp;
}
 
void rearrange(int arr[], int n)
{
    int outofplace = -1;
 
    for (int index = 0; index < n; index++)
    {
        if (outofplace >= 0)
        {
           
            if (((arr[index] >= 0) && (arr[outofplace] < 0))|| ((arr[index] < 0)&& (arr[outofplace] >= 0)))
            {
                rotate(arr, n, outofplace, index);
                
                if (index - outofplace >= 2)
                    outofplace = outofplace + 2;
                else
                    outofplace = -1;
            }
        }
 
        
        if (outofplace == -1) {
            
            if (((arr[index] >= 0) && (!(index & 0x01))) || ((arr[index] < 0) && (index & 0x01))) {
                outofplace = index;
            }
        }
    }
}
 

void printdata(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 

int main()
{
     
    int a[] = { -5, -2, 5, 2,4, 7, 1, 8, 0, -8 };
    int len = end(a) - begin(a);
 
    cout << "given array is \n";
    printdata(a, len);
 
    rearrange(a, len);
 
    cout << "rearranged array is \n";
    printdata(a, len);
 
    return 0;
}