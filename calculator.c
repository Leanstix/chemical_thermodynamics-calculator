#include <stdio.h>
#include <math.h>

int main(void)
{
	char a[] = "Gas Law";
	char b[] = "Enthalpy";
	char c[] = "Gibbs Free Energy";
	char d[] = "vant hoff Equation";
	char e[] = "Nerst Equation";
	char f[] = "pressure given only volume(1&2)";
	char g[] = "volume given only pressure(1&2)";
	char h[] = "Entropy";
	char s;
	char y[3];
	double A;
	double B;
	double C;
	double D;
	double E;
	double F;
	double G;
	double H;

	printf("what Thermodynamic operation would you like to perform? ");
	printf(" \na = %s \nb = %s \nc = %s \nd = %s \ne = %s \nf = %s \ng = %s \nh = %s\n", a, b, c, d, e, f, g, h);
	scanf("%c", &s);
	if(s =='a')
	{
		printf("\nthe chosen operation is \" Gas Law \" ");
		fgets("",3 ,stdin);
		if ()
	}
	else if (s =='b')
	{
		printf("The chosen operation to be performed is \" Enthalpy \"");
	}
	else if (s == 'c')
	{
		printf("The chosen operation to be performed is \"Gibbs free energy\"")
	}
	else if (s == 'd')
	 {
		printf("The chosen operation to be performed is \"vant hoff equation\"")
	 }
	else
	{
		printf("go and eat");
	}

	return 0;
}
