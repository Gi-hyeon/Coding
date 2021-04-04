#include <stdio.h>

int main()
{
	char min;
	signed char max;
	unsigned char max1;
	short min1;
	short int max2;
	unsigned short max3;
	unsigned short int max4;
    int min2;
	signed int max5;
	unsigned min3;
	unsigned int max6;
	long min4;
	long int max7;
	signed long min5;
	signed long int max8;
	unsigned long min6;
	unsigned long int max9;
	long long min7;
	long long int max10;
	signed long long min8;
	signed long long int max11;
	unsigned long long min9;
	unsigned long long int max12;


	min = -128;
	max = 127;
	max1 = 255;
	min1 = -32768;
	max2 = 32767;
	max3 = 65535;	
	max4 = 65535;
	min2 = -2147483648;
	max5 = 2147483647;
	min3 = 0;
	max6 = 4294967295;
	min4 = -2147483648;
	max7 = 2147483647;
	min5 = -2147483648;
	max8 = 2147483647;
	min6 = 0;
    max9 = 4294967295;
	min7 = -9223372036854775808;
	max10 = 9223372036854775807;
	min8 = -9223372036854775808;
	max11 = 9223372036854775807;
	min9 = 0;
	max12 = 18446744073709551615;
	
	printf("min char min : %d\n", min);
	printf("max signed char max : %d\n", max);
	printf("max unsigned char max : %d\n", max1);
	printf("min short min : %d\n", min1);
	printf("max short int max : %d\n", max2);
	printf("max unsigned short max : %d\n", max3);
	printf("max unsigned short int max : %d\n", max4);
	printf("min int min : %d\n", min2);
	printf("max signed int max : %d\n", max5);
	printf("min unsigned min : %d\n", min3);
	printf("max unsigned int max : %u\n", max6);
	printf("min long min : %ld\n", min4);
	printf("max long int max : %ld\n", max7);
	printf("min signed long min : %ld\n", min5);
	printf("max signed long int max : %ld\n", max8);
	printf("min unsigned long min : %ld\n", min6);
	printf("max unsigned long int max : %u\n", max9);
	printf("min long long min : %lld\n", min7);
	printf("max long long int max : %lld\n", max10);
	printf("min signed long long min : %lld\n", min8);
	printf("max signed long long int max : %lld\n", max11);
	printf("min unsigned long long min : %lld\n", min9);
	printf("max unsigned long long int max : %llu\n", max12);

	return 0;
}