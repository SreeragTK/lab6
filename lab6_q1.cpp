//tax rate calculation
//including library
#include<iostream>
using namespace std;
//we are going to declare a function that obtains from the user returns value in calling variable
	void functionA(int &unit,int &unitCost,int &taxRate){
	    cout<<"enter the unit rate:"<<"\n";
     	cin>>unit;
        cout<<"enter the unit coast"<<"\n";
	    cin>>unitCost;
	    cout<<"enter the tax rate:"<<"\n";
	    cin>>taxRate;
}
//we are going to declare a function that recieves the unit,taxrate,unitcoast,salestax,totaldue
    void functionB(int unit,int taxRate,int unitCost,int &salestax,int &totaldue){
	
	//we are going to calculate salestax and total due
	salestax=(unitCoast*taxRate/100);
	totaldue=(unit*(unitCoast+salestax));
}
	void functionC(int unitcoast,int units,int taxrate,int salestax,int totaldue){
	//now we are going to show the output of the function
	cout<<"The unitcoast="<<unitcoast<<"\n";
	cout<<"the units purchased="<<units<<"\n";
	cout<<"The taxrate ="<<taxrate<<"\n";
	cout<<"The salestax ="<<salestax<<"\n";
	cout<<"The totaldue ="<<totaldue<<"\n";
	
}
    //Driver function in which we are going to use these defined functions                        int main(){
	  //declaring all the variable
	  int unit,unitCost,taxrate,salesTax,totaldue;
          //cal the function
     	  functionA(unit,unitCoast,taxrate);
          functionB(unit,taxrate,unitcoast,salestax,totaldue);
	  functionC(unitcoast,unit,taxrate,salestax,totaldue);
//closing the function
return 0;
}
