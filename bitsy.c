#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_NUM 1000000

//http://www.geeksforgeeks.org/check-number-fibonacci-number/
//https://www.quora.com/What-is-the-most-efficient-algorithm-to-check-if-a-number-is-a-Fibonacci-Number
int isPerfectSquare(double n) {
    int s = (int)sqrt(n);
    return s*s == n ? 1 : 0;
}
int isFibonacci(int n) { return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4); }

//http://stackoverflow.com/questions/199184/how-do-i-check-if-a-number-is-a-palindrome
int isPalindrome(int n) {
    int rev = 0, digit = 0, _n = n;
    while (_n > 0 && n > 10) {
        digit = _n % 10;
        rev = rev * 10 + digit;
        _n = _n / 10;
    }
    return rev == n ? 1 : 0;
}

//https://en.wikipedia.org/wiki/Primality_test
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i*i <= n; i+=6) {
	if (n % i == 0 || n % (i+2) == 0) return 0;
    }
    return 1;
}

int main(int argc, const char* argv[]) { 
    int j = 0, mod3 = 0, mod5 = 0;
    for (int i = 1; i <= MAX_NUM; i++) {
        printf("\n%d -> ", i);
	if (isFibonacci(i)) printf("Fibbits ");
        if (isPalindrome(i)) printf("BitstiB ");
        if (isPrime(i)) printf("BitsForEveryone! ");
        if (i % 3 == 0 ? 1 : 0) { printf("CrowdOfBits "); mod3 = 1; }
        if (i % 5 == 0 ? 1 : 0) { printf("MuchBits "); mod5 = 1; }
	if (mod3 && mod5) { j += i; }
    } 
    printf("\n%d\n", j);
}
