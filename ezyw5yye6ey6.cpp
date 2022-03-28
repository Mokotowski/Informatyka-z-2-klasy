
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	int i = 1, k = 2;
	
	string s, w= "";
	cin >> s;
	
	int j ; 
	
	while (i<=k )
	{
	
	
	j = i;
	
	while (j<=s.size())
	{
		
	w = w + s[j];
	j = j + k;
//cout<<k;
	}	
	i++;
	}
	cout << w;
}