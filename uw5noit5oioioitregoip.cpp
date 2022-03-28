#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;





void dlugosci_wyrazow(string s)
{
	
	int T[10]={};
	int poz= 0, poz1=0;
	string p1;
	
	while(s.size()>0)
	{
	poz= s.find(" ", poz);
	p1=s.substr(poz1,poz);	
	cout<<p1<<" "<< p1.size()<<endl;
	if(p1.size()>10)
	{
		cout<<"error zaLozenia";
		exit(1);
	}
	T[p1.size()]++;
	s=s.erase(poz1, p1.size()+1);
	poz=0;
	poz1=0;
}
	cout<<"\n";
	for(int i  = 1; i<10; i++)
	{
		if(T[i]>0) cout<<i<<"-------------literowe------->"<<T[i]<<endl;
	}
	
}



int main()
{
	
	string s="";
	
	ifstream wejscie;
	wejscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\txt.txt"); 
	while(!wejscie.eof())
	{
		getline(wejscie, s);
	dlugosci_wyrazow(s);
	
	
	}
	

	return 0;
}

	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
		
