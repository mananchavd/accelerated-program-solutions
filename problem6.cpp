/*Problem 6: kth Smallest Element In An Unsorted Array*/

#include<iostream>
#include <array>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int a[]={0,2,5,6,4};
	int len = 0;
	len = end(a)-begin(a); 
	int k=3;
	
	sort(a, a + len);
	
	
	cout<<"kth smallest element: "<<a[k-1];
			
	
	return 0; 
}
