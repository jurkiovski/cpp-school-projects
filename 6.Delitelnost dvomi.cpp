#include<iostream>
using namespace std;
int main ()
{
  	int cislo;
 	cout<<"Zadaj cele cislo"<<endl;
  	cin>>cislo;
 	
 	if (cislo%2==0)
 	{
	cout<<"Cislo je delitelne dvojkou"<<endl;
 	} else {
	 cout<<"Cislo neni delitelne dvoma"<<endl;
    }
    	
  	char reakcia;
   	cin>>reakcia;
     return 0;
}
