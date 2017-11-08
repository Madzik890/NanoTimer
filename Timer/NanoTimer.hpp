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

	void elapseTime();//funkcja zapisuj¹ca pocz¹tkowy czas

	double getElapsedTime();//funkcja zwaracj¹ca ró¿nice miêdzy pocz¹tkowym czasem a czasem koñcowym
private:
	LARGE_INTEGER timer1, timer2;//zmienne przchowuj¹ce zapisany czas
	LARGE_INTEGER frequency;
};


#endif