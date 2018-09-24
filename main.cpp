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
if(first[0]=='A'||first[0]=='a'||first[0]=='E'||first[0]=='e'||first[0]=='I'||first[0]=='i'||first[0]=='O'||first[0]=='o'||first[0]=='U'||first[0]=='u')
{
        cout<<"You are destined to be famous!\n";
}
else
{
        cout<<"You should keep a low profile...\n";
}

int index = lucky - 1;
if(last[index]=='A'||last[index]=='a'||last[index]=='E'||last[index]=='e'||last[index]=='I'||last[index]=='i'||last[index]=='O'||last[index]=='o'||last[index]=='U'||last[index]=='u')
{
        cout<<"You have already met your true love...\n ";
}

cout<<"Have a nice day!\n";

  return 0;
  
}
