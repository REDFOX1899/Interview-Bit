/*
Reverse bits of an 32 bit unsigned integer

Example 1:

x = 0,

          00000000000000000000000000000000  
=>        00000000000000000000000000000000
return 0

Example 2:

x = 3,

          00000000000000000000000000000011 
=>        11000000000000000000000000000000

*/

unsigned int Solution::reverse(unsigned int A) {
    vector<int> B(32,0);

    
    int n = 0, count =0;
    while(A!=0){
        count++;
        B[n++] = A%2;
        A = A/2;
    }
    
    unsigned int ans = 0;
    n =31;
    for(int i =0; i<=count; i++){
        ans = ans + pow(2,n--)*B[i];
    }
    return ans;
    
}
