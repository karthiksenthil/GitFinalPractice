#include <iostream> // for cin, cout
#include <math.h>
#include <stdio.h> // for printf, scanf

using namespace std;

void add()
{
        int a,b;
        printf("Enter two numbers to be added\n");
        scanf("%d %d\n",&a,&b);
        printf("The sum is: %d",a+b);
}

void subtract()
{
        int a,b;
        printf("Enter two numbers to be subtracted\n");
        scanf("%d %d\n",&a,&b);
        printf("The difference is: %d",a-b);
}

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

void multiply()
{
	int a,b,c;
	cout<<"Enter the two numbers to be multiplied : ";
	cin>>a>>b;
	c=a*b;
	cout<<"Product : "<<c;
}

void trig_sin()
{
	float a,b;
	cout<<"Enter the angle (radians): ";
	cin>>a;
	b=sin(a);
	cout<<"The sine of the angle is : "<<b;
}

void trig_tan ()
{
  float rad, deg, ans;
  printf ("Enter angle in degrees: ");
  scanf ("%f", &deg);
  rad = (deg * PI) / 180.0;
  ans = tan (rad);
  printf ("The tangent of %f degrees is %f.\n", deg, ans);
}

void exponentiation ()
{
  long int base, exponent, result = 1;
  printf ("Enter base and exponent: ");
  scanf ("%ld%ld", &base, &exponent);

  while (exponent)
  {
    if (exponent & 1)
      result *= base;
    exponent >>= 1;
    base *= base;
  }

  printf ("%ld raised to %ld is %ld", base, exponent, result);
}

int main()
{
  cout<<"Welcome to the pro calculator. Choose from foll. :\n";
  cout<<"1.Add\n";
  cout<<"2.Subtract\n";
  cout<<"3.Multiply\n";
  cout<<"4.Divide\n";
  cout<<"5.Exponentiation\n";
  cout<<"6.cos\n";
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
