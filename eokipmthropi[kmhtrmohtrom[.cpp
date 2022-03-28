
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
 int i = 1;
 string  w= "", s;
 cin >> s;
 
 while (i<s.size())
{
 
	w = s[i -1 ];   	
	w = s[i -2];
	  
	
	
	i = i +1; 
	if (i == s.size()) w = w;
	cout<<w;
}



}
