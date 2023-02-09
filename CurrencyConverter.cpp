#include<iostream>
using namespace std;
int main()
{
	char startValue;
	char selectAgain;
	float converter(void);
	start:
	cout<<"********Welcome to Currency Converter App********"<<endl;
	cout<<"********Please follow the instructions*********"<<endl;
	cout<<"You have currencies dollar, rupees, euro, pound"<<endl;
	cout<<"You can type a,b,c,d respectively for currencies dollar,rupees,euro,pound"<<endl;
	cout<<"Enter currency 1 which you want to convert:"<<endl;
	cout<<"Enter values for currency 1:"<<endl;
	cout<<"Enter currency in which you want to convert currency 1:"<<endl;
	cout<<"(a) Dollar (b) Rupees (c) Euro (d) Pound"<<endl;
	cout<<"Please press s to start:"<<endl;
	selectChoice:
	cin>>startValue;
	if(startValue=='s'|| startValue=='S')
	{
		float finalValue=converter();
		cout<<"Result is : "<<finalValue<<endl;
		cout<<"Do you want to use the application again? Press y or n: "<<endl;
		typeAgain:
		cin>>selectAgain;
		if(selectAgain=='y'|| selectAgain=='S')
		{
			goto start;
		}
		else if(selectAgain=='n'|| selectAgain=='N')
		{
			cout<<"ThankYou for using our application !"<<endl;
		}
		else
		{
			cout<<"You have entered wrong value , Please type again:"<<endl;
			goto typeAgain;
		}
	}
	
	else
	{
		cout<<"You have entered wrong value , please type s:"<<endl;
		goto selectChoice;
	}
}

	float converter()
	{

		char currName1;
		char currName2;
		float currency1;
		float currency2;
		currLevel:
		cout<<"Enter currency 1 Name:"<<endl;
		cin>>currName1;
		cout<<"Enter currency 1 value:"<<endl;
		cin>>currency1;
		switch(currName1)
		{
		case 'a':
			currLevel1:
			cout<<"Enter currency 2 Name: "<<endl;
			cin>>currName2;
			if(currName2=='a'|| currName2=='A')
			{
				currency2=currency1*1;
			}
			else if(currName2=='b'|| currName2=='B')
			{
				currency2=currency1*80;
			}
			else if(currName2=='c'|| currName2=='C')
			{
				currency2=currency1*0.85;
			}
			else if(currName2=='d'|| currName2=='D')
			{
				currency2=currency1*0.72;
			}
			else
			{
				cout<<"You have entered wrong value, please type again"<<endl;
				goto currLevel1;
			}
			break;
		case 'b':
			currLevel2:
			cout<<"Enter currency 2 Name: "<<endl;
			cin>>currName2;
			if(currName2=='a'|| currName2=='2')
			{
				currency2=currency1*0.01;
			}
			else if(currName2=='b'|| currName2=='B')
			{
				currency2=currency1*1;
			}
			else if(currName2=='c'|| currName2=='C')
			{
				currency2=currency1*0.01;
			}
			else if(currName2=='d'|| currName2=='D')
			{
				currency2=currency1*0.009;
			}
			else
			{
				cout<<"You have entered wrong value, please type again"<<endl;
				goto currLevel2;
			}
			break;
		case 'c':
			currLevel3:
			cout<<"Enter currency 2 Name: "<<endl;
			cin>>currName2;
			if(currName2=='a'|| currName2=='2')
			{
				currency2=currency1*1.16;
			}
			else if(currName2=='b'|| currName2=='B')
			{
				currency2=currency1*86.37;
			}
			else if(currName2=='c'|| currName2=='C')
			{
				currency2=currency1*1;
			}
			else if(currName2=='d'|| currName2=='D')
			{
				currency2=currency1*0.85;
			}
			else
			{
				cout<<"You have entered wrong value, please type again"<<endl;
				goto currLevel3;
			}
			break;
		case 'd':
			currLevel4:
			cout<<"Enter currency 2 Name: "<<endl;
			cin>>currName2;
			if(currName2=='a'|| currName2=='a')
			{
				currency2=currency1*1.37;
			}
			else if(currName2=='b'|| currName2=='B')
			{
				currency2=currency1*1.17;
			}
			else if(currName2=='c'|| currName2=='C')
			{
				currency2=currency1*101.20;
			}
			else if(currName2=='d'|| currName2=='D')
			{
				currency2=currency1*1;
			}
			else
			{
				cout<<"You have entered wrong value, please type again"<<endl;
				goto currLevel4;
			}
			break;
		    default:
			{
				cout<<"You have entered wrong value, please type again"<<endl;
				goto currLevel;
				break;
			
            }
			}
    
	return currency2;
}
