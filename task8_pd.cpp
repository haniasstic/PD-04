#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holidays;
	cout << " hoidays" << endl;
	cin >> holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int working_days,game_time,difference;
	working_days=365-holidays;
	game_time=(working_days*63) + (holidays*127);
	
	if(game_time<30000)
{
	int hours,minutes;
	difference= 30000 - game_time;
	hours= difference/60;
	minutes= difference%60;
	
	{
		cout << endl << "Tom sleeps well. "<<endl;
		cout << hours << " hours and  " <<  minutes << " minutes less play" << endl;
	}
}
	if(game_time>30000)
{
	int hours,minutes;
	difference= game_time-30,000;
	hours= difference/60;
	minutes= difference%60;
	{
		cout << " Tom will run away." << endl;
		cout << hours << " hours and " <<  minutes << "  minutes for play" << endl;
	}
}
}
