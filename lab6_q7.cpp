//include library
#include<iostream>
using namespace std;
//define the function for uppercase and lowercase letters assigning numarical value
//define first function for uppercase letters
char toupper(char lowercase,char uppercase)
            {uppercase=lowercase-32;
return uppercase;}
//we have closed the first function definition
//define the second function for lowercase letters
char tolower(char uppercase,char lowercase)
            {lowercase=uppercase+32;
return lowercase;}
//we have closed the second function
//now we are going to the application of the defined functions
//define main function
int main(){
char ch,alph,result;
cout<<"enter any alphabet"<<endl;
cin>>ch;
if(ch>='a' &&ch<='z')
{result=toupper(ch,alph);
cout<<"uppercase character is"<<result<<"\n";}
else
{result= tolower(ch,alph);
cout<<"lowercase character is"<<result<<"\n";}
//closing the main function
return 0;}
