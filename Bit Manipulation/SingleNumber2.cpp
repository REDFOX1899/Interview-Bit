/*
Given an array of integers, every element appears thrice except for one which occurs once.

Find that element which does not appear thrice.

Note: Your algorithm should have a linear runtime complexity.

Could you implement it without using extra memory?

Example :

Input : [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Output : 4
*/


answer is simple 
add all the  number after converting themm in there bit wise form in a vector 
the %3 all the elements of the vector 
convert all the non non zero number to 1  -> this will be the solution
