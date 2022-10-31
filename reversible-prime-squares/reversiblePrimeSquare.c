/****************************************************
* Author: MPHO LEROTHOLI						    *
* Student Number: 202000705						    *
* email: mpholerotholi8@gamil.com				    *			
*									                *
* 			Reversable Prime Squares 				*
****************************************************/

#include <stdio.h>

// 1 is for true value, 0 is for false

int squareRoot (int u);
int isPerfect(int w);
int reverse(int x);
int isPrime(int y);
int isPalindrome(int z);

int main()
{
	int i=0, num=10, rootNum, revers, rootReverse;

	while(num>=10)
	{
		
		revers = reverse(num);

        if(isPerfect(num) == 1 && isPerfect(revers) == 1)
        {
            rootNum = squareRoot(num);
            rootReverse = squareRoot(revers);

            if(isPrime(rootNum) == 1 && isPrime(rootReverse) == 1)
            {
                if(isPalindrome(num) == 0)
                {
                    printf("%d \n",num);
                    i++;
                    if(i==10)
                    {
                    	break;
					}
                }

            }
        }
        num++;
			
	}

	
	return 0;
}
//Function that reverses the prime number
int reverse(int num)
{
	int remainder, reverse = 0;
	while(num!=0)
	{
		remainder = num%10;
		reverse = reverse*10 + remainder;
		num=num/10;
	}
	return reverse;
}

//function that finds prime numbers
int isPrime(int num)
{
	int isPrime=1;
	
	int i=2;
	while(i<=(num)/2)
	{
		if(num%i == 0)
		{
			isPrime=0;
			break;
		}
		i++;
	}
	return isPrime;
}

//function that checks whether the num is a palindrome
int isPalindrome(int num)
{
	int isPalindrome =0;
	if(reverse(num)==num)
	{
		isPalindrome =1;
    }
	return isPalindrome;
}

//function that checks that a number is a square(perfect)
int isPerfect(int num)
{
	int i=1;
    while( i * i <= num )
    {
        if((num % i == 0) && (num / i == i))
        {
            return 1;
        }
        i++;
    }
    return 0;
}

//function that calculates the square root of a number
int squareRoot (int num)
{
	int root = 1;
	while(root * root < num){
		root += 1;
	}
	return root;
}

/************************** the end :).******************/ 