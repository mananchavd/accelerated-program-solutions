/*Problem 4: Number of Occurrences of Each Character*/

#include <bits/stdc++.h>
#include<iostream>
using namespace std; 

 

void printcharwithfreq(string str)
{
    
    int n = str.size();
    
    vector<pair<int, char>> freq;
	
	for (char i='a';i<='z';i++)
	{
		freq.push_back( make_pair(0,i) );
	}
    
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a'].first++;
	
	sort(freq.rbegin(), freq.rend());
 
    
    for (int i = 0; i < 26; i++) 
	{
       if(freq[i].first!=0)
        cout<<freq[i].second<<"="<<freq[i].first<<" ";
           
    }
}
 
int main()
{
    string str = "manan";
    printcharwithfreq(str);
    return 0;
}