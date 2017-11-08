#include "NanoTimer.hpp"
#include <Windows.h>


NanoTimer::NanoTimer()
{

}

NanoTimer::~NanoTimer()
{

}

void NanoTimer::elapseTime()
{
	// pobieranie cykli
	QueryPerformanceFrequency(&frequency);

	// uruchamianie timer'u
	QueryPerformanceCounter(&timer1);
}

double NanoTimer::getElapsedTime()
{
	QueryPerformanceCounter(&timer2);

	// zapisywanie i obliczanie ró¿nicy czasu
	double elapsedTime;
	elapsedTime = (timer2.QuadPart - timer1.QuadPart) * 1000.0 / frequency.QuadPart;
	return elapsedTime;
}