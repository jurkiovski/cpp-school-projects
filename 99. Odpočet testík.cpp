#include <iostream>
using namespace std;

int main(){
	int tdatum, udatum, n8, n7, n6, n5, n4, n3, n2, n1, nden, nmesiac, nrok,
	un8, un7, un6, un5, un4, un3, un2, un1, uden, umesiac, urok, odpocet;
	string udalost;
	cout<<"Odpocet dni"<<endl;
	cout<<"Zadaj dnesny datum vo formate ddmmyyyy\t";
	cin>>tdatum;
	//rozdelenie cisla do viacerých integerov
	n1=tdatum/10000000%10;    //prve cislo datumu
	n2=tdatum/1000000%10;    // druhe cislo datumu atd...
	n3=tdatum/100000%10;
	n4=tdatum/10000%10;
	n5=tdatum/1000%10;
	n6=tdatum/100%10;
	n7=tdatum/10%10;
	n8=tdatum%10;
	nrok=(n5*1000)+(n6*100)+(n7*10)+n8; //spojenie viacerých integerov (vedla seba)
	nmesiac=(n3*10)+n4;
	nden =(n1*10)+n2;
	cout<<"Dnesny datum je "<<nden;cout<<"."<<nmesiac;cout<<"."<<nrok<<endl;
	cout<<"Zadaj nazov udalosti (jednym slovom): ";
	cin>>udalost;
	cout<<"Zadaj datum udalosti vo formate ddmmyyyy\t";
	cin>>udatum;
	un1=udatum/10000000%10;
	un2=udatum/1000000%10;
	un3=udatum/100000%10;
	un4=udatum/10000%10;
	un5=udatum/1000%10;
	un6=udatum/100%10;
	un7=udatum/10%10;
	un8=udatum%10;
	urok=(un5*1000)+(un6*100)+(un7*10)+un8;
	umesiac=(un3*10)+un4;
	uden=(un1*10)+un2;
	cout<<"Datum udalosti je "<<uden;cout<<"."<<umesiac;cout<<"."<<urok<<endl;
	odpocet= ((urok*365)+(umesiac*30)+uden)-((nrok*365)+(nmesiac*30)+nden);
	cout<<"Do udalosti ostava "<<odpocet;cout<<" dni";
	return 0;
}
