#include<bits/stdc++.h> 
#include <windows.h>
using namespace std; 

 

void dlugosci_wyrazow(string s); 

 
 

int main() 

{ 

string s=""; 

//cout<<"podaj lancuch znakow ---- "; 

//getline(cin,s); 
SetConsoleCP(852);
setlocale(LC_ALL,"");
ifstream wejscie;
	wejscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\txt1.txt"); 
	while(!wejscie.eof())
	{
		getline(wejscie, s);
				dlugosci_wyrazow(s); 

		//cout <<s;
	}
		string  alf="ABCĆDEFGHIJKLŁMNOÓPRSŚTUWZŹŻ";

cout<<alf;


	

 

return 0; 

} 




//--------------------------------------------------------- 

void dlugosci_wyrazow(string s) 

{ 

int T[26]={0}; 

int poz=0, poz1=0; 

string p1; 

char znak; 

 

while(s.size()>0) 

{ 

poz=s.find(" ",poz); 

p1=s.substr(poz1,poz);  

znak=toupper(p1[0]); 

T[znak-'A']++; 

s=s.erase(poz1,p1.size()+1); 

 

poz=0; 

poz1=0; 

 

} 

cout<<"\n"; 

for(int i=0; i<26;i++) 

{ 

if(T[i]>0) cout<<"slowa na "<<char(i+'A')<<"--->"<<T[i]<<endl; 

} 

 

} 