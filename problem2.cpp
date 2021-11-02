/*Problem 2: Sub-Array With Sum Equal To Zero*/

#include<iostream>
#include<array>
using namespace std;

int main()
{

int a[] = {4,2,-3,1,6};
double s=0;
int f=0;

int len = end(a)-begin(a); 

		for(int i=0; i<len; i++)
		{
			s=0;
			
			for (int j=i;j<len;j++)
			{
				s = s + a[j];
				if(s==0)
				{
					f=1;
					break;
				}
			}
				if(f==1)
				{
				   break;
				}
		}
	
			if(f==1)
			{
				cout<<"yes\n";
			}
			else
			{
				cout<<"no\n";
			}
	
}