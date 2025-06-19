/*
//Problem 1: Check if Number is Armstrong
#include <bits/stdc++.h> 
#include <cmath>
bool isArmstrong(int num) {
    // Write your code here
    int temp=num, arm=0, reminder, size=0;
    while (temp){
        size++;
        temp=temp/10;
    }
    temp=num;
    while (temp){
        reminder = temp%10;
        arm = arm + pow(reminder, size);
        temp = temp/10;
    }

    if(arm==num){
        return true;
    }else{
        return false;   
    }
}

/*
//Problem 2: Factorial using Loop
void factorial(int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << fact << endl;
}

/*
//Problem 3: Factorial using Recursion
#include<stdio.h>
int factorial(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else if(num == 1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}

/*
//Problem 4: Check if Number is Palindrome
class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0){
                return false;
            }
    
            long long temp = x, reminder;
            long long palindrome = 0;
            while(temp){
                reminder=temp%10;
                palindrome=palindrome*10+reminder;
                temp=temp/10;
            }
    
            if(x==palindrome){
                return true;
            }else{
                return false;
            }
        }
    };

/*
//Problem 5: Half Pyramid using Numbers
#include<stdio.h>
int main()
{
    int num;

    printf("Enter the  number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*
//Problem 6: Half Pyramid using Stars
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of raws of stars: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
//Problem 7: Fibonacci Series using Recursion
#include<stdio.h>
int fibonacci(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(int i=0; i<num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
*/