#include <stdio.h>

int main()
{
	/* The Daily Spark */

	// Line 1
	printf("Welcome to the Daily Spark!\n");

	// Line 2
	int number = 5;
	printf("Today's number of the day is %d\n", number);
	
	// Line 3
	int factorial;
	factorial = number;
	
	// Line 4
	int i;
	for(i = number - 1; i > 0; i--)
		factorial *= i;
	printf("The factorial of %d is %d\n", number, factorial);

	// Line 5
	int n;
	printf("Choose a number from 1 to 10: ");
	scanf("%d", &n);

	// Line 6
	int sum = 0;
	for(i = 1; i <= n; i++)
		sum += i;
	printf("The sum of the first %d integers is %d\n", n, sum);

	// Line 7
	int num_1, num_2;
	printf("Choose two numbers: ");
	scanf("%d %d", &num_1, &num_2);

	// Line 8
	int max = (num_1 > num_2)? num_1 : num_2;
	printf("The maximum of %d and %d is %d\n", num_1, num_2, max);

	// Line 9
	int divisor;
	printf("Enter a divisor: ");
	scanf("%d", &divisor);

	// Line 10
	int result = number % divisor;
	printf("The remainder of %d divided by %d is %d\n", number, divisor, result);

	// Line 11
	char character;
	printf("Enter a letter: ");
	scanf(" %c", &character);

	// Line 12
	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
		printf("You entered an alphabetic character.\n");
	else
		printf("You did not enter an alphabetic character.\n");

	// Line 13
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// Line 14
	int count = 0;
	printf("\nThe even numbers are: \n");
	for(i = 0; i < 10; i++)
	{
		if(array[i] % 2 == 0)
		{
			printf("%d ", array[i]);
			count++;
		}	
	}
	printf("\nNumber of even numbers: %d\n", count);

	// Line 15
	int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	// Line 16
	int pos;
	printf("\nEnter a position in the array: ");
	scanf("%d", &pos);

	// Line 17
	arr[pos] = 1;
	
	// Line 18
	printf("\nThe array is now: \n");
	for(i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	// Line 19
	int num_row, num_col;
	printf("\n\nEnter the number of rows and columns of a matrix: ");
	scanf("%d %d", &num_row, &num_col);

	// Line 20
	int matrix[num_row][num_col];
	printf("\nEnter the elements of the matrix:\n");
	for(i = 0; i < num_row; i++)
	{
		for(int j = 0; j < num_col; j++)
			scanf("%d", &matrix[i][j]);
	}

	// Line 21
	printf("\nThe matrix entered is:\n");
	for(i = 0; i < num_row; i++)
	{
		for(int j = 0; j < num_col; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}

	// Line 22
	int x;
	printf("\nEnter a number: ");
	scanf("%d", &x);

	// Line 23
	int prime = 0;
	for(i = 2; i < x; i++)
	{
		if(x % i == 0)
			prime = 1;
	}
	if(prime == 0)
		printf("\n%d is a prime number.\n", x);
	else
		printf("\n%d is not a prime number.\n", x);

	// Line 24
	int num_string;
	printf("\nEnter the number of strings to be sorted: ");
	scanf("%d", &num_string);

	// Line 25
	char strings[num_string][20];
	printf("\nEnter the strings:\n");
	for(i = 0; i < num_string; i++)
		scanf("%s", strings[i]);

	// Line 26
	printf("\nThe strings in alphabetical order are:\n");
	for(i = 0; i < num_string; i++)
	{
		for(int j = i + 1; j < num_string; j++)
		{
			if(strcmp(strings[i], strings[j]) > 0)
			{
				char temp[20];
				strcpy(temp, strings[i]);
				strcpy(strings[i], strings[j]);
				strcpy(strings[j], temp);
			}
		}
	}

	// Line 27
	for(i = 0; i < num_string; i++)
		printf("%s\n", strings[i]);

	// Line 28
	int size;
	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &size);

	// Line 29
	int nums[size];
	printf("\nEnter the elements of the array:\n");
	for(i = 0; i < size; i++)
		scanf("%d", &nums[i]);

	// Line 30
	int max_num = nums[0];
	int min_num = nums[0];
	for(i = 0; i < size; i++)
	{
		if(nums[i] > max_num)
			max_num = nums[i];
		if(nums[i] < min_num)
			min_num = nums[i];
	}

	// Line 31
	printf("\nThe maximum number is %d and the minimum number is %d\n", max_num, min_num);

	// Line 32
	int fact;
	printf("\nEnter a number to find its factorial: ");
	scanf("%d", &fact);

	// Line 33
	int factorial_result = fact;
	for(i = fact - 1; i > 0; i--)
		factorial_result *= i;
	printf("The factorial of %d is %d\n", fact, factorial_result);

	// Line 34
	int elem;
	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &elem);

	// Line 35
	int array_new[elem];
	printf("\nEnter the elements of the array: \n");
	for(i = 0; i < elem; i++)
		scanf("%d", &array_new[i]);

	// Line 36
	int sum_arr = 0;
	for(i = 0; i < elem; i++)
		sum_arr += array_new[i];
	printf("The sum of the elements in the array is %d\n", sum_arr);

	// Line 37
	int x_1, x_2;
	printf("\nEnter two numbers: ");
	scanf("%d %d", &x_1, &x_2);

	// Line 38
	int gcd, k;
	for(k = 1; k <= x_1 && k <= x_2; k++)
	{
		if(x_1 % k == 0 && x_2 % k == 0)
			gcd = k;
	}
	printf("The greatest common divisor of %d and %d is %d\n", x_1, x_2, gcd);

	// Line 39
	int n_1;
	printf("\nEnter a number: ");
	scanf("%d", &n_1);

	// Line 40
	int r;
	int rev = 0;
	while(n_1 != 0)
	{
		r = n_1 % 10;
		rev = (rev * 10) + r;
		n_1 = n_1 / 10;
	}
	printf("The reverse of %d is %d", n_1, rev);

	// Line 41
	int a, b, c;
	printf("\nEnter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	// Line 42
	int min = (a < b)? ((a < c)? a : c) : ((b < c)? b : c);
	printf("The minimum of %d, %d and %d is %d\n", a, b, c, min);

	// Line 43
	int num_2;
	printf("\nEnter a number: ");
	scanf("%d", &num_2);

	// Line 44
	int num_3 = 0;
	while(num_2 != 0)
	{
		num_3 = num_3 * 10;
		num_3 = num_3 + (num_2 % 10);
		num_2 = num_2 / 10;
	}
	printf("The reverse of %d is %d\n", num_2, num_3);

	// Line 45
	int num_4, num_5;
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num_4, &num_5);

	// Line 46
	int max_2 = (num_4 > num_5)? num_4 : num_5;
	printf("The maximum of %d and %d is %d\n", num_4, num_5, max_2);

	// Line 47
	int size_1;
	printf("\nEnter the size of the array: ");
	scanf("%d", &size_1);

	// Line 48
	int arr_1[size_1];
	printf("\nEnter the elements of the array:\n");
	for(i = 0; i < size_1; i++)
		scanf("%d", &arr_1[i]);

	// Line 49
	int odd_count = 0;
	printf("\nThe odd numbers in the array are: ");
	for(i = 0; i < size_1; i++)
	{
		if(arr_1[i] % 2 != 0)
		{
			printf("%d ", arr_1[i]);
			odd_count++;
		}
	}
	printf("\nNumber of odd numbers: %d\n", odd_count);

	// Line 50
	int num_6;
	printf("\nEnter a number: ");
	scanf("%d", &num_6);

	// Line 51
	int prime_1 = 0;
	for(i = 2; i < num_6; i++)
	{
		if(num_6 % i == 0)
			prime_1 = 1;
	}
	if(prime_1 == 0)
		printf("\n%d is a prime number.\n", num_6);
	else
		printf("\n%d is not a prime number.\n", num_6);
	
	// Line 52
	int num_7;
	printf("\nEnter a number: ");
	scanf("%d", &num_7);

	// Line 53
	int fac = num_7;
	for(i = num_7 - 1; i > 0; i--)
		fac *= i;
	printf("The factorial of %d is %d", num_7, fac);

	// Line 54
	int num_8, num_9;
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num_8, &num_9);

	// Line 55
	int k_1 = 1;
	for(i = 0; i < num_9; i++)
		k_1 *= num_8;
	printf("%d raised to the power %d is %d\n", num_8, num_9, k_1);

	// Line 56
	int num_10;
	printf("\nEnter a number: ");
	scanf("%d", &num_10);

	// Line 57
	int sum_1 = 0;
	for(i = 1; i <= num_10; i++)
		sum_1 += i;
	printf("The sum of the first %d integers is %d\n", num_10, sum_1);

	// Line 58
	int num_11;
	printf("\nEnter the size of the array: ");
	scanf("%d", &num_11);

	// Line 59
	int arr_2[num_11];
	printf("\nEnter the elements of the array: \n");
	for(i = 0; i < num_11; i++)
		scanf("%d", &arr_2[i]);

	// Line 60
	int max_3 = arr_2[0];
	int min_1 = arr_2[0];
	for(i = 0; i < num_11; i++)
	{
		if(arr_2[i] > max_3)
			max_3 = arr_2[i];
		if(arr_2[i] < min_1)
			min_1 = arr_2[i];