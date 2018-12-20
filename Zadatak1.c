double pov;
#include <stdio.h>
#define txt1 "\n Površina kruga radijusa 10 je %f"
#define PI 3.14
#define KVADRAT(x)  (x) * (x)

void povrsina (int r)
{
	pov = KVADRAT(r) * PI;
}
void main (void)
{
	int radijus = 10;
	
	povrsina (radijus);
	printf (txt1, pov);
}
