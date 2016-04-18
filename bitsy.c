#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <omp.h>

//#define MAX_NUM 1000000
#define MAX_NUM 100

int isPerfectSquare(double n) {
    int s = (int)sqrt(n);
    return if s*s == n ? 1 : 0;
}

//http://www.geeksforgeeks.org/check-number-fibonacci-number/
//https://www.quora.com/What-is-the-most-efficient-algorithm-to-check-if-a-number-is-a-Fibonacci-Number
int isFibonacci(int n) { return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4); }

//http://stackoverflow.com/questions/199184/how-do-i-check-if-a-number-is-a-palindrome
int isPalindrome(int n) {
    int rev = 0, digit = 0;
    while (n > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return if (n == rev ? 1 : 0);
}

//https://en.wikipedia.org/wiki/Primality_test
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i+2) == 0) return 0;
        i += 6;
    }
}

int main(int argc, const char* argv[]) { 
    //http://bisqwit.iki.fi/story/howto/openmp/
    //#pragma omp parallel for private(i) schedule(dynamic)
    for (int i = 0, j = 0; i <= MAX_NUM; i++) {
        if (isFibonacci(i)) printf("Fibbits ");
        if (isPalindrome(i)) printf("BitstiB ");
        if (isPrime(i)) printf("BitsForEveryone! ");
        if (if i % 3 == 0 ? 1 : 0) { printf("CrowdOfBits "); j+=i; }
        if (if n % 5 == 0 ? 1 : 0) { printf("MuchBits "); j+=i; }
    } printf("\n%d", j);
}
