void zlicz(int Licznik[], string tekst)
{
	char znak;
	for (int i = 0; i < tekst.size(); i++)
		{
			znak = toupper(tekst[i]);
			if (znak >= 'A' && znak <= '?')
				{
					Licznik[znak - 'A']++;
				}
		}
}

void wyswietl(int Licznik[])
{
	ofstream outputfile("C:\\Users\\uczen_11\\Desktop\\ez\\txt.txt");
	int pom = max_znak(Licznik), i1;
	for (int i = 0; i < 35; i++)
		{
			if (Licznik[i] >= 0)
				{
					outputfile << alfabet_pl_d[i] << " - " << Licznik[i] << endl;
					cout<< alfabet_pl_d[i] << " - " << Licznik[i] << endl;
				}
			if (Licznik[i] == pom)
			{
				i1 = i;
			}
		}
	outputfile << "Najwiecej razy wystapila litera " << alfabet_pl_d[i1] << " stalo sie to az " << pom << " razy" << endl;
	cout<<"Najwiecej razy wystapila litera " << alfabet_pl_d[i1] << " stalo sie to az " << pom << " razy" << endl;
	outputfile.close();
}

#include <bits/stdc++.h>
#include <windows.h>

using namespace std;



const string alfabet_m = "aąbcćdeęfghijklłmnńoóprsśtuvwxyzźż";
const string alfabet_w = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUVWXYZŹŻ";



int max_liczba_wys(int Liczniki[])
{
	int i_max = 0, pom;
	for (int i = 0; i < 35; i++)
		{
			if (Liczniki[i] > Liczniki[i_max])
				{
					i_max = i;
				}
		}
	pom = Liczniki[i_max];
	for (int i=0; i<35;i++)
	{
		if (Liczniki[i]==pom)
		{
			cout<<"max----->"<<alfabet_w[i]<<endl;
		}
	}
}



int main()
{
	SetConsoleCP(852);
	setlocale(LC_ALL,"");

	int Liczniki[35] = {0};
	string napis;
	int i, j;
	for (i = 0; i < 35; i++)
			Liczniki[i] = 0;
	
	ifstream wejscie ("C:\\Users\\uczen_11\\Desktop\\ez\\tajne.txt");
	while (!wejscie.eof())
		{
			getline(wejscie, napis);
			for (i = 0; i < napis.size(); i++)
				{
					j = alfabet_m.find(napis[i]);
					if (j >= 0 && j < 35)
						{
							Liczniki[j]++;
						}
					j = alfabet_w.find(napis[i]);
					if (j >= 0 && j < 35)
						{
							Liczniki[j]++;
						}
				}
		}
	max_liczba_wys(Liczniki);
	wejscie.close();
	return 0;
}