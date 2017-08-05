#include <iostream>
#include "clock_time.h"

void main()
{
	clock_time a, b, c;

	a.setDays(10);
	a.setHours(10);
	a.setMinutes(10);
	a.setSeconds(10);

	b.setDays(10);
	b.setHours(10);
	b.setMinutes(10);
	b.setSeconds(10);

	c.setDays(10);
	c.setHours(10);
	c.setMinutes(10);
	c.setSeconds(10);

	cout << a.totalSeconds() + b.totalSeconds + c.totalSeconds();
}