#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

string slowo(string s)
{
	int poz= 0, poz1=0;
	string p1, ezz;
while(s.size()>0)
	{


	poz= s.find(" ", poz);
	p1=s.substr(poz1,poz);	


	s=s.erase(poz1, p1.size()+1);
	ezz = s[1];
	cout <<ezz;
	poz=0;
	poz1=0;
}

}








int main()
{
	
	string s="";
	
	ifstream wejscie;
	wejscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\txt1.txt"); 
	while(!wejscie.eof())
	{
		getline(wejscie, s);
			
		//cout <<s;
	}
cout<<slowo(s);

	return 0;
}