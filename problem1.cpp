/*Problem 1: Find Duplicates In A Given Array*/

#include<iostream>
#include<array>
using namespace std;

//using namespace std;

void solve(){

    int a[]={1,4,3,3,4,3};
	
	int len = end(a)-begin(a);
	
    for(int i=0;i<len;i++)
	{
        a[a[i]%len] = a[a[i]%len] + len;
    }
	
	cout<<" repeating value: ";
    for (int i=0;i<len;i++) {
        
        if(a[i]/len > 1)
        {
            cout<<i;
        }
		cout<<" ";
    }

}

int main() {

solve();
return 0;
}