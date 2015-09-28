// Submitted by:Christenson Henry
// Submitted to: Edper Castro
// Mini Project 1

# include <iostream>
using namespace std;
int main()
{
	int month;
	double demand;
	double total;
	const double pd = 27.25; // previous prediction
	const double p = 0.2; //p is for prediction 0.2

	cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);

    cout<<"";
	cout<<"Please enter the month number?"<<endl;
	cin>>month;
	cout<<endl;
	cout<<"Please enter the DEMAND number:"<< demand <<endl;
	cin>>demand;
	cout<<endl;

	if (month == 1)
	{
		
	cout<<"The month is: "<<month", which is January."<<endl;
		cout<<"the demand number is:" << demand<< endl;
		cout<< "the prediction for 0.2 is: "<<pd<<endl;
	
	}
	else if (month == 2)
	{
			
		
		total=p*demand+(1-p)*pd;
		cout<<"The number of the month is: "<<month<<"which is February."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for 0.2 is: "<<total<<endl;
	}		


} Return 0;
