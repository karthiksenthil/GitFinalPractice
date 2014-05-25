#include<iostream>
#include<math.h>

using namespace std;

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
