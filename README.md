# bitsy
For all integers, x, from [1..1000000] if
	1.  x is a fibonacci number: output "Fibbits" 
	2.  x is a palindrome (e.g. 9009 or 12321): output "BitstiB" 
	3.  x is prime: "BitsForEveryone!" 
	4.  x is a multiple of 3: output "CrowdOfBits" 
	5.  x is a multiple of 5: output "MuchBits" 
    
If a certain number meets multiple criteria, output each that it meets in the order listed above, separated by spaces 
(e.g. "Fibbits BitsForEveryone! CrowdOfBits" for the integer 3).
At the very end, output the sum of all the integers that are divisible by both 3 and 5 (e.g. 15 or 45, neither 20 nor 9).

# compile
make clean
make

# run
time ./bitsy_basic
time ./bitsy_speedup

# lazy way
./run.sh
