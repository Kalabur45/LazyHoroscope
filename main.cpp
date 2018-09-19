//Authors:Jerm Deeezy (Rhodes)
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
int lucky;
  //get user input
cout<<"Please enter your first name: ";
cin>>first;
cout<<"Please enter your last name: ";
cin>>last;
  //tell fortune
  lucky = first.length();
cout<<"Welcome, "<< first[0] << last[0] << " here is your fortune...\n";
cout<<"Your lucky number is..."<<lucky<<"\n";
  return 0;
  
}
