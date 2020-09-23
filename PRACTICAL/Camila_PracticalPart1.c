#include <math.h>
#include <stdio.h>

int main(){
	double base, expo, res;
	printf("---- CAMILA, DEXTER B. PRACTICAL PART 1 ----\n");
	printf("Enter Base number: ");
	scanf("%lf", &base);
	printf("Enter Exponent: ");
	scanf("%lf", &expo);
	
	res = pow(base, expo);
	printf("%.1lf ^ %.1lf = %.2lf", base, expo, res);
	return 0;
}
