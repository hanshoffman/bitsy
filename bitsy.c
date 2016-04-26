#include <stdio.h>
#include <math.h>

#define MAX_NUM 1000000
const int FIBS[30] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040};

//http://stackoverflow.com/questions/199184/how-do-i-check-if-a-number-is-a-palindrome
int isPalindrome(int n) {
    int rev = 0, digit = 0, _n = n;
    //while (_n > 0 && n > 10) {
    while (_n > 0) {
        digit = _n % 10;
        rev = rev * 10 + digit;
        _n = _n / 10;
    }
    return rev == n ? 1 : 0;
}

//https://en.wikipedia.org/wiki/Primality_test
int isPrime(int n) {
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i*i <= n; i+=6) {
	if (n % i == 0 || n % (i+2) == 0) return 0;
    }
    return 1;
}

int main(int argc, const char* argv[]) { 
    long j = 0, mod3, mod5;
    int k = 0, nextFib = FIBS[k];
    
    for (int i = 1; i <= MAX_NUM; i++) {
        printf("\n%d -> ", i);
	if (i == nextFib) { printf("Fibbits "); k++; nextFib = FIBS[k]; }
        if (isPalindrome(i)) printf("BitstiB ");
        if (isPrime(i)) printf("BitsForEveryone! ");
        if (i % 3 == 0 ? 1 : 0) { printf("CrowdOfBits "); }
        if (i % 5 == 0 ? 1 : 0) { printf("MuchBits "); }
	if (i % 15 == 0) { j += i; }
    } 
    printf("\n%ld\n", j);
}
