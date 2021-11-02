/*Problem 5: Buying and Selling of Stock*/

#include <iostream>
#include<array>
using namespace std;
 
int maxProfit(int* prices, int size)
{   
    int maxProfit = 0;
    
   for (int i = 1; i < size; i++)
   {
	if (prices[i] > prices[i - 1]) 
		maxProfit+= prices[i] - prices[i - 1];
   }
   
   if(maxProfit==0)
	   return -1;
   else
    return maxProfit;
}
 

int main()
{
    int prices[] = {3,1,4,8,7,2,5};
    int len = end(prices)-begin(prices);
    cout << maxProfit(prices, len) << endl;
    return 0;
}