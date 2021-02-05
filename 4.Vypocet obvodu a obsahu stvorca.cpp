#include<iostream>
using namespace std;

int main()
{
	 int strana, obsah, obvod;
	 cout<<"Zadaj velkost strany stvorca:";
	 cin>>strana;
	 
	 obvod = 4*strana;
	 obsah = strana*strana;
	 cout<<"Obvod stvorca je:\t"<<obvod<<endl;
	 cout<<"Obsah stvorca je:\t"<<obsah<<endl;
	 if (obsah>obvod){
	 	cout<<"Obsah je urcite vacsi, lebo pc povedalo!";
	 } else {
	 	cout<<"Obsah neni vacsi";
	 }
	 char reakcia;
	 cin>>reakcia;
	 return 0;
}
