#include <iostream>
#include "mobile.h"

int main()
{
	std::cout << "welcome to the text!" << '\n';
	mobile m, *p;
	mobilecdma cdma;
	mobilegsm gsm;

	m = gsm;
	m.showinfo();		//1
	m = cdma;
	m.showinfo();		//2
	p = &gsm;
	p->showinfo();		//3
	p = &cdma;
	p->showinfo();		//4
	mobile &p4 = gsm;	
	p4.showinfo();		//5
	mobile &p5 = cdma;
	p5.showinfo();		//6
	
	
	system("pause");
	return 0;

}
