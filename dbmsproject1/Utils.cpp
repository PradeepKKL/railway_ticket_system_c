#include "Utils.h"
#include <cstdio>
#include <ctime>
Utils::Utils()
{
}

int Utils::SEAT_CLASS_3RD=0;
int Utils::SEAT_CLASS_2ND=1;
int Utils::SEAT_CLASS_1ST=2;

String^ Utils::getDate()
{
	std::time_t rawtime;
	std::tm* timeinfo;
	char buffer[80];

	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "%Y-%m-%d", timeinfo);
	//std::strftime(buffer, 80, "%Y-%m-%d-%H-%M-%S", timeinfo);

	return gcnew String(buffer);
	// TODO: insert return statement here
}
