/**************************
* Paulus Linna
* IIA14SB
* Teht‰v‰kuvaus:
*
*	Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa
*	olevan raham‰‰r‰n ja lihapiirakan hinnan.
*
*	Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka. Jos on, ohjelma
*	ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa. Muuten ohjelma kehottaa
*	k‰ytt‰j‰‰ paastoamaan.
*
*	K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi ostaa lihapiirakkaa.
*
* P‰iv‰m‰‰r‰: 25.9.2014
* Versio 1.0
*
******************************/


#include <iostream>
using namespace std;

int massit;
int lihis;
int summa;
const int nolla = 0;
void lasku(int, int);

void main()
{
	cout << "Paljonko sinulla on rahaa? ";
	cin >> massit;

	cout << "Paljonko lihis maksaa? ";
	cin >> lihis;

	lasku(massit, lihis);
	if (summa < nolla)
		cout << "Suosittelen paastoamaan ja k‰ym‰‰n tˆiss‰";
	if (summa >= nolla)
		cout << "Voit ostaa lihapiirakan, rahaa sinulle j‰‰: " << summa;

}

void lasku(int massit, int lihis)
{
	summa = massit - lihis;

}