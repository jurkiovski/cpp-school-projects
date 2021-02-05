#include <iostream>
using namespace std;
int main()
{
	int kury, zajace, hlavy, nohy,rohy;
	cout<<"Zadaj pocet kur"<<endl;
	cin>>kury;
	cout<<"Zadaj pocet zajacov"<<endl;
	cin>>zajace;
	hlavy=kury+zajace;
	nohy=kury*2+zajace*4;
	rohy=kury*0+zajace*0;
	cout<<"Dokopy hlav:\t"<<hlavy<<endl;
	cout<<"Dokopy noh:\t"<<nohy<<endl;
	cout<<"Dokopy rohov:\t"<<rohy<<endl;
	return 0;
}
