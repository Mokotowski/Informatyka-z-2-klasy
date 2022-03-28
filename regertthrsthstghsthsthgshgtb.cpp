
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void zliczanie(string s, int licznik []) 
{
char znak;
for (int i=0; i<s.size();i++)
{
	znak = s[i];
	if (znak>= 'A' && znak <= 'Z');
	{
	licznik[znak-'A']++; 	
	}
}	
	
}

string wyswietl(int licznik[])
{
	for (int i =0; i<26; i++)
	{
		if(licznik[i]>0) cout<< char(i+'A')<<"   "<<licznik[i]<<endl;
	}
}



int main()
{
	int licznik[26]={0}, i=1;
	string s;
	ifstream wejscie;
	ofstream wyjscie; 

	wejscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\jawny.txt"); 
	wyjscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\txt1.txt");







while(!wejscie.eof())
{


	getline (wejscie, s);
	cout<<s;
	zliczanie(s, licznik);
	while (licznik[i]<27)
	{                
	wyjscie << licznik[i] <<endl;
	
	i++;
	wyjscie << wyswietl(licznik) <<endl;
	wejscie<<endl;
}

}





	wejscie.close();
	wyjscie.close();

	return 0;
}











