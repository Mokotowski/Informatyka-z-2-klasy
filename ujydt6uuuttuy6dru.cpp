#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;


int max(int max, int liczba)
{
	if (max < liczba) 	max=liczba;
	return max;
}




int main()
{
	int i,  maxx, oper, operrr;
	string napis;
	char ch;
	int licznik[26];
	for (i=0; i<26;i++) licznik[i]=0;
	ifstream wejscie;
	wejscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\txt.txt"); 
	while(!wejscie.eof())
	{
		getline(wejscie, napis);
		for (i=0; i<napis.size(); i++)
		{
			ch=toupper(napis[i]);
			if (ch>='A'&& ch<='Z') licznik[ch-'A']++;
			
		}
	}
	wejscie.close();
	maxx =0;
	for(i=0;i<26;i++)
	if (licznik[i]>0)
	{
		oper=licznik[i];
			

			
 		cout<<char(i+'A') <<" - "<<licznik[i]<<endl; 
 
 
 		if (maxx < oper) 
			{
 			maxx=oper; operrr=i;  
			}
	else
	{
	}			
		//	cout<<char(operrr+'A')<<" --"<< max(maxx, oper)<<endl<<endl;
	}
	
	
	cout<<endl<<endl<<char(operrr+'A')<<" -- "<< maxx<<endl<<endl;

		
		
		
	return 0;
	
}