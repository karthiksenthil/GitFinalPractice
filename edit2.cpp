#include<iostream>
#include<math.h>

using namespace std;

void trig_cos()
{
char ch='y';
while(ch=='y')
{
  float n;
  cout<<"\n Please enter the number(in radians) whose cosine you wish to calculate : ";
  cin>>n;
  cout<<"\n The cosine of the above number is "<<cos(n)<<"\n";
  cout<<"\n Do you wish to continue? Yes->y No->n";
  cin>>ch;
}
return;
}  

void divide()
{
char ch='y';
while(ch=='y')
{
  float a,b;
  cout<<"\n Please enter the numbers you wish to divide : ";
  cout<<"\n a = ";
  cin>>a;
  cout<<"\n b = ";
  cin>>b;
  if(b==0)
  {
     cout<<"Please enter a valid denominator \n";
     cout<<"Do you wish to continue? Yes->y No->n";
     cin>>ch;
     if(ch=='y')
     continue;
     else
     return;
  }
  cout<<"The answer is "<<a/b<<" \n";
  cout<<"\n Do you wish to continue? Yes->y No->n";
  cin>>ch;
}
return;
}

int main()
{
  cout<<"Welcome to the pro calculator. Choose from foll. :\n";
  cout<<"1.Add\n";
  cout<<"2.Subtract\n";
  cout<<"3.Multiply\n";
  cout<<"4.Divide\n";
  cout<<"5.Exponentiation\n";
  cout<<"6.cos\n"
  cout<<"7.sin\n";
  cout<<"8.tan\n";

  int ch;
  cin>>ch;

  switch(ch)
  {
	case 1 : add();break;
	case 2 : subtract();break;
	case 3 : multiply();break;
	case 4 : divide();break;
	case 5 : exponentiation();break;	
	case 6 : trig_cos();break;
	case 7 : trig_sin();break;
	case 8 : trig_tan();break;
  }

  return 0;

}