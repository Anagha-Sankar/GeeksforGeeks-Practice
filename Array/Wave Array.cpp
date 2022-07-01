Class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        for(int i = 1;i<=n-1;i+=2){
            if(arr[i]>arr[i-1]){
                int temp = arr[i];
                arr[i]  = arr[i-1];
                arr[i-1] = temp;
            }
            if(arr[i]>arr[i+1] && i<n-2){
                int temp = arr[i];
                arr[i]  = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
};
