/*
Write a function that takes an unsigned integer and returns the number of 1 bits it has.

Example:

The 32-bit integer 11 has binary representation

00000000000000000000000000001011
so the function should return 3.

*/

int Solution::numSetBits(unsigned int A) {
    int count =0;
    vector<int> bits (32, 0);
    int n = 31;
    while(A!=0){
        bits[n--] = A%2;
        A = A/2;
    }
    
    for(int i =0; i<32; i++){
        if(bits[i] ==1 )
            count++;
    }
    return count;
}
