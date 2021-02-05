#include<iostream>
using namespace std;

int main()
{
 	int roknarodenia, rokterajsi, tvojvek, odpoved;
  	cout<<"V ktorom roku si sa narodil?\t";
 	cin>>roknarodenia;
 	cout<<"V ktorom roku zijes?\t";
 	cin>>rokterajsi;
 	tvojvek = rokterajsi - roknarodenia;
 	cout<<"Mas "<<tvojvek<<" rokov"<<endl;
 	cout<<"Chces pit alkohol?"<<endl;
 	cout<<"1 = ano , 2 = nie"<<endl;
 	cin>>odpoved;	 
	 if (odpoved==2)
    {
		cout<<"zla odpoved!\n";
	}
 	if (tvojvek>=18){
	 cout<<"Neni co riesit napi sa!";
     } else {
     cout<<"Nemal by si, tak sa nenehaj chytit :)";
	 }			
 	char reakcia;
	cin>>reakcia;
 	return 0;
}
