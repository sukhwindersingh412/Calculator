float powers(float base, int N) {
    // base^N = result
    float result = 1; //default to 1 if N = 0 
    
    //use N as a integer counter
    while (N > 0) { 
        
        if (N & 1) { //checks for N = 1, true
            result = result * base; //this should only activate once 
        }
        
        base = base * base; //accumulate bases 
        N = N >> 1; //bit shift n so that N is decremented 
    }
    printf("The base was %f, the power was %d, The result was %f. \n", base, N, result);
    return result;
    
}
