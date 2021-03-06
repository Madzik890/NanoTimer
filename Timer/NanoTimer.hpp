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

	void elapseTime();//funkcja zapisująca początkowy czas

	double getElapsedTime();//funkcja zwaracjąca różnice między początkowym czasem a czasem końcowym
private:
	LARGE_INTEGER timer1, timer2;//zmienne przchowujące zapisany czas
	LARGE_INTEGER frequency;
};


#endif