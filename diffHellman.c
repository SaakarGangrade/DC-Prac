#include<stdio.h>
#include<math.h>

long long int power(long long int a, long long int b, long long int P)
{
	if (b == 1)
		return a;

	else
		return (((long long int)pow(a, b)) % P);
}

int main()
{
	long long int P, G, x, a, y, b, ka, kb;

	P = 23;
	printf("The value of P : %lld\n", P);

	G = 9;
	printf("The value of G : %lld\n\n", G);

	a = 4;
	printf("The private key a for User 1 : %lld\n", a);
	x = power(G, a, P);

	b = 3;
	printf("The private key b for User 2 : %lld\n\n", b);
	y = power(G, b, P);

	ka = power(y, a, P);
	kb = power(x, b, P);

	printf("Secret key for the User 1 is : %lld\n", ka);
	printf("Secret Key for the User 2 is : %lld\n", kb);

	return 0;
}
