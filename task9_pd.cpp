#include<iostream>
using namespace std;
void tpChecker(int people,int tp);
main()
{
	int people,tp;
	cout << " The number of people in household " << endl;
	cin >> people;
	cout << " The number of tissue rolls" << endl;
	cin >> tp;
	tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
	int total_tissue_rolls=tp*500;
	float sheets_used_per_day=people*57;
	float lasting_days;
	lasting_days= total_tissue_rolls/sheets_used_per_day;

	if(lasting_days>=14)
		cout << " Your TP will last " << lasting_days << " days, No need to panic! " << endl;
	if(lasting_days<14)
{
		cout << " Your TP will only last " << lasting_days << " days, buy more! " << endl;
}
}
