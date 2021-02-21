#include <iostream>
#include <string>
using namespace std;

int main(){
	int tden, tmesiac, trok, uden, umesiac, urok, dnido;
	string udalost;
	cout<<"Odpocet dni"<<endl;
	cout<<"Zadaj den\t";
	cin>> tden;
	cout<<"Zadaj mesiac\t";
	cin>> tmesiac;
	cout<<"Zadaj rok\t";
	cin>> trok;
	cout<<"Dnesny datum je\t"<<tden;
	cout<<"."<<tmesiac;
	cout<<"."<<trok<<endl;
	cout<<"Zadaj nazov udalosti:\t";
	cin>>udalost;
	cout<<"Den udalosti:\t";
	cin>>uden;
	cout<<"Mesiac udalosti:\t";
	cin>>umesiac;
	cout<<"Rok udalosti:\t";
	cin>>urok;
	cout<<"Datum udalosti - "<<udalost<<endl;
	dnido = trok * 365 - urok * 365 + 1 * 30 - 1 * 30 + tden - uden;
	cout<<"Do"<<udalost;
	cout<<" zostava"<<dnido;
	cout<<" dni."
	return 0;
}
