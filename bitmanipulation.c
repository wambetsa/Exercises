#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimal_right_shift(int a, int shifter)
{
	int result;

	result = a >> shifter;
	printf("%d shifted %d times right is : %d\n", a, shifter, result);
	result = a << shifter;
	printf("%d shifted %d times left is : %d\n", a, shifter, result);
}

void decimal_to_binary(int x)
{
	int binary[32];//array to keep binary numbers
	int i, j, result;

	i = 0;//initialize i to 0

	if (x == 0)//check if num is 0
	{
		printf("0\n");//print 0 if input number is 0
		return;
	}

	while (x > 0)//for any number greater than 0
	{
		binary[i] = (x % 2);//store remainder at index i
		x = (x / 2);//divide the number by 2
		i++;//increment i
	}

	for (j = i - 1; j >= 0; j--)//loop array in reverse order
	{
		result = binary[j];//set value to result
		printf("%d", result);//print result
	}
	printf("\n");
}

int binary_to_decimal(const char* binary)
{
	int i, len, result, position;//variable declarations
	
	len = strlen(binary);//get the length of the string
	int res = 0;//set result to 0
	for (i = len - 1, position = 0; i >= 0; i--, position++)
	{
		if (binary[i] == '1')
		{
			result += (1 << position);//result equals 2 ^ position
		}
	}
	return result;
}

int main()
{
	char binary[8];
	strcpy(binary, "11111010");

	decimal_right_shift(10, 1);
	decimal_right_shift(10, 2);

	decimal_to_binary(250);
	decimal_to_binary(256);

	int res = binary_to_decimal(binary);
	printf("%d\n", res);

	return (0);
}