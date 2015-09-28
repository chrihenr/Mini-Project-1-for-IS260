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
	const double pd = 21.00; // previous prediction
	const double p = 0.1; //p is for forecast for prediction 0.1

	cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);

    
	cout<<"Please enter the month number: "<<endl;
	cin>>month;
	cout<<endl;
	cout<<"Please enter the DEMAND number: " <<endl;
	cin>>demand;
	cout<<endl;

	if (month == 1)
	{
		
	cout<<"The month is: "<<month <<", which is January."<<endl;
		cout<<"the demand number is:" << demand<< endl;
		cout<< "the prediction for this demand is: "<<pd<<endl;
	
	}
	else if (month == 2)
	{
			
		
		total=p*demand+(1-p)*pd;
		cout<<"The number of the month is: "<<month<<", which is February."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the forecast for this demand is: "<<total<<endl;
	}		

	else if (month == 3)
	{
			
		
		total=p*demand+(1-p)*20.70;
		cout<<"The number of the month is: "<<month<<", which is March."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
else if (month == 4)
	{
			
		
		total=p*demand+(1-p)*22.13;
		cout<<"The number of the month is: "<<month<<", which is April."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
	else if (month == 5)
	{
			
		
		total=p*demand+(1-p)*22.52;
		cout<<"The number of the month is: "<<month<<", which is May."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
else if (month == 6)
	{
			
		
		total=p*demand+(1-p)*23.57;
		cout<<"The number of the month is: "<<month<<", which is June."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
	else if (month == 7)
	{
			
		
		total=p*demand+(1-p)*23.51;
		cout<<"The number of the month is: "<<month<<", which is July."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
else if (month == 8)
	{
			
		
		total=p*demand+(1-p)*25.46;
		cout<<"The number of the month is: "<<month<<", which is August."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
	else if (month == 9)
	{
			
		
		total=p*demand+(1-p)*25.11;
		cout<<"The number of the month is: "<<month<<", which is September."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
else if (month == 10)
	{
			
		
		total=p*demand+(1-p)*25.90;
		cout<<"The number of the month is: "<<month<<", which is October."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
	else if (month == 11)
	{
			
		
		total=p*demand+(1-p)*25.61;
		cout<<"The number of the month is: "<<month<<", which is November."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
	}
else if (month == 12)
	{
			
		
		total=p*demand+(1-p)*27.25;
		cout<<"The number of the month is: "<<month<<", which is December."<<endl;
		cout<<"the demand number is: " <<demand<< endl;
		cout<<"the prediction for demand is: "<<total<<endl;
}
	else
		cout<<"Please enter the correct month number?"<<endl;
		return 0;
}
