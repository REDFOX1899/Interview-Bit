// TIME LIMMIT EXCEDED
int Solution::solve(vector<int> &A) {
    int n = A.size(), p, count =0, j;
    for(int i =0; i<n;i++){
        p = A[i];
        j =0;
        while(j<n){
            
            if(A[j] >p)
                {count++;}
            j++;
        }
        if(count == p)
            return 1;
        else
            count =0;
        
    }
    return -1;
}

// OPTIMAL SOLUTION

int Solution::solve(vector<int> &A) {
	sort(A.begin(), A.end()) ;
	int size = A.size();
	for(int i=0;i<size;i++){
		while(i+1<size && A[i]==A[i+1])
			i++;
		if(A[i]==size-1-i)
			return 1;
	}
	return -1;
}
