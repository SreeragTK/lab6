//include library
#include<iostream>
using namespace std;
//creating function
void maximum(int&,int&,int&);
int main(){
int i,j,k;
  //getting input for the function
cout<<"enter the first no:";
cin>>i;
cout<<"enter the second no:";
cin>>j;
maximum(i,j,k);
  //showing output of the function
cout<<"maximum of your numbers is:"<<k;
return 0;
}
void maximum(int& i,int& j,int& k){
if (i>j)
k=i;
else
k=j;

}



