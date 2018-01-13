
#include <stdio.h>

#include "memswap.h"

int main(int argc, char** argv)
{
	// mem %, swap %, mem total, mem used, swap total, swap used
	
	unsigned long memPercent, swapPercent, memTotal, memUsed, swapTotal, swapUsed;
	
	int error = read_memswap(&memPercent, &swapPercent, &memTotal, &memUsed, &swapTotal, &swapUsed);
	
	if (error==-1)
	{
		printf("ERROR: failed to get ram info");
	}
	else if (0)
	{
		printf("memPercent: %d\n", memPercent);
		printf("swapPercent: %d\n", swapPercent);
		printf("memTotal: %d\n", memTotal);
		printf("memUsed: %d\n", memUsed);
		printf("swapTotal: %d\n", swapTotal);
		printf("swapUsed: %d\n", swapUsed);
	}
	else
	{
		printf("%d%%\n", memPercent);
	}
	
	return 0;
}

/*
#include <iostream>
using std::cout;
using std::endl;

#include "memswap.h"

int main(int argc, char** argv)
{
	// mem %, swap %, mem total, mem used, swap total, swap used
	
	unsigned long memPercent, swapPercent, memTotal, memUsed, swapTotal, swapUsed;
	
	int error = read_memswap(&memPercent, &swapPercent, &memTotal, &memUsed, &swapTotal, &swapUsed);
	
	if (error==-1)
	{
		cout << "ERROR: failed to get ram info" << endl;
	}
	else if (false)
	{
		cout	<< "memPercent: " << memPercent
		<< endl	<< "swapPercent: " << swapPercent
		<< endl	<< "memTotal: " << memTotal
		<< endl	<< "memUsed: " << memUsed
		<< endl << "swapTotal: " << swapTotal
		<< endl	<< "swapUsed: " << swapUsed
		<< endl;
	}
	else
	{
		cout << memPercent << "%" << endl;
	}
	
	return 0;
}
*/
