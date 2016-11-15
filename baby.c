#include "stdafx.h"
#include <iostream>

#include <atltime.h>

using namespace std;

int main()
{

	CTimeSpan time;
	CTime t1(2016,9,27,0,0,0);
	SYSTEMTIME tt;
	GetLocalTime(&tt);
	CTime t2(tt);

	time = t2 - t1;

	cout << "Dear Bao, our Little baby grow " << time.GetDays() << "days; " << time.GetDays()/7<< "weeks!!!" << endl;

	system("pause");
}