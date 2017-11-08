#include <Windows.h>

#ifndef NANOTIMER_HPP
#define NANOTIMER_HPP

#ifdef NANOTIMER_EXPORTS  
#define NANOTIMER_API __declspec(dllexport)   
#else  
#define NANOTIMER_API __declspec(dllimport)   
#endif  


class __declspec(dllexport) NanoTimer
{
public:
	NanoTimer();
	virtual ~NanoTimer(void);

	void elapseTime();//funkcja zapisuj�ca pocz�tkowy czas

	double getElapsedTime();//funkcja zwaracj�ca r�nice mi�dzy pocz�tkowym czasem a czasem ko�cowym
private:
	LARGE_INTEGER timer1, timer2;//zmienne przchowuj�ce zapisany czas
	LARGE_INTEGER frequency;
};


#endif