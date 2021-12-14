#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, rate, pay, interest, total, newBalance;
    int year = 0;
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
    cin >> rate;
	cout << "Enter amount you can pay per year: ";
    cin >> pay;
    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	do{
        year += 1;
        loan = loan;
        interest = loan*(rate/100);
        total = loan + interest;
        if(total > pay){
            newBalance = total - pay;
        }else if(total < pay){
            pay = total;
            newBalance = total - total;
        }

        cout << fixed << setprecision(2);
        cout << setw(13) << left << year;
        cout << setw(13) << left << loan;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << pay;
        cout << setw(13) << left << newBalance;
        cout << "\n";

        if(newBalance > 0){
            loan = newBalance;
        }else if(newBalance == 0){
            break;
        }
    }
    while(1);
    return 0;
}