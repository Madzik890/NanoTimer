using System;
using System.Collections.Generic;
using System.Diagnostics;

namespace CTimer
{
    public class NanoTimer
    {
        private Stopwatch stopwatch;// tworzenie timer'u

        public Stopwatch getStopwatch()
        {
            return stopwatch;//zwracanie referencji do obiektu
        }

        public void elapseTime()
        {
            stopwatch = new Stopwatch();
            stopwatch.Start();//ropoczynanie liczenia czasu
        }

        public double getElapsedTime()
        {
            stopwatch.Stop();//zatrzymanie timer'u
            return stopwatch.Elapsed.TotalMilliseconds;//zwaracanie czasu
        }

    }
}
