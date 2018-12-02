#pragma once
#ifndef MOBILE
#define MOBILE
#include <iostream>

class mobile
{
public:
	mobile();
	virtual void showinfo();
	~mobile();
};

class mobilegsm :public mobile
{
public:
	mobilegsm();
	virtual void showinfo();

	~mobilegsm();

};

class mobilecdma : public mobile
{
public:
	mobilecdma();
	
	virtual void showinfo();

	~mobilecdma();

};


#endif	//MOBILE

