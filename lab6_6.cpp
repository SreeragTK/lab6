#include<iostream>
using namespace std;
int oddsum(int a,int b,int x,int i=0){
           
           if(a%2==0){
                     for(x=a+1;x<b;x+=2)
                
           i=i+x;
           cout<<"sum of odd numbers="<<i;}
           else{
                for(x=a+2;x<b;x+=2)
           i=i+x;
           cout<<"sum of odd numbers="<<i;}
           
           cin>>a;
           cin>>b;
return i;}
           
int evensum(int a,int b, int x,int y=0)
           {if(a%2==0){
                     for(x=a+2;x<b;x+=2)
                     
                
           y=y+x;
           cout<<"sum of even numbers="<<y;}
           else{
                for(x=a+1;x<b;x+=2)
           y=y+x;
           cout<<"sum of even numbers="<<y;}
return y;}
int sumsquireeven(int a,int b, int x,int j=0)
          { if(a%2==0){
                     
                                         for(x=a+2;x<b;x+=2)
                
           j=j+(x*x);
           cout<<"sum of squire of even numbers="<<j;}
           else{
                for(x=a+1;x<b;x+=2)
           j=j+(x*x);
           cout<<"sum of squire of even numbers="<<j;}
return j;}
int sumsquireodd(int a,int b, int x,int l=0)
           {if(a%2==0){
                     
                                         for(x=a+1;x<b;x+=2)
                
           l=l+(x*x);
           cout<<"sum of squire of odd numbers is="<<l;}
           else{
                for(x=a+2;x<b;x+=2)
           l=l+(x*x);
           cout<<"sum of squire of odd numbers is="<<l;}
return l;}
int main(){
          int a,b,x,y,z,k;
          cout<<"Here we have for functions namely"<<"\n";
          cout<<"sumeven,sumodd,sumsquireeven,sumsquireodd"<<"\n";
          cout<<"these programms runs between two values fixed by user"<<"\n";
          cout<<"Which fuction do you want to use?"<<"\n";
          cout<<"for sumeven press:1"<<"\n"<<"for sumodd press:2"<<"\n"<<"for sumsquireeven press:3"<<"\n"<<"for sumsquireodd press:4";
          cin>>z;
          cout<<"your lower limit=";
          cin>>a;
          cout<<"your upper limit=";
          cin>>b;cout<<"\n";
          if(z==1)
          k=evensum(a,b,x,y);
          if(z==2)
          k=oddsum(a,b,x,y);
          
          if(z==3)
          k=sumsquireeven(a,b,x,y);
          
          if(z==4)
          k=sumsquireodd(a,b,x,y);
          
return 0;
}
           
          
