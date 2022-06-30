class Solution{

public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int, int> mp;
	    int sum = 0;
	    int maxi = 0;
	    for (int i=0; i<n; i++){
	        sum += arr[i];
	        int rem = sum%k;
	        if(rem == 0){
	            maxi = max(i+1, maxi);
	        }
	        if (rem<0)
	            rem+=k;
	        if (mp.find(rem)==mp.end()){
	            mp[rem]=i;
	        }
	        else{
	            int len = i-mp[rem];
	            maxi = max(maxi,len);
	        }
	    }
	    return maxi;
	}
};
