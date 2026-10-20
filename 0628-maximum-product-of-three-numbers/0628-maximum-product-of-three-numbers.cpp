class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int largest = INT_MIN ;
        int second_largest = INT_MIN ;
        int third_largest = INT_MIN ;
         
        int smallest = INT_MAX ;
        int second_smallest = INT_MAX ;
         
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > largest){
                third_largest = second_largest ;  
                second_largest = largest ;
                largest = nums[i] ;
            }
            else if(nums[i] > second_largest){
                third_largest = second_largest ;
                second_largest = nums[i] ; 
            }
            else if(nums[i] > third_largest){
                third_largest = nums[i] ;
            }
             
            if(nums[i] < smallest){
                second_smallest = smallest ;
                smallest = nums[i] ;
            }
            else if(nums[i] < second_smallest){
                second_smallest = nums[i] ;
            }
        }
        int product1 = largest*second_largest*third_largest ;
        int product2 = largest*smallest*second_smallest ;
         
        return max(product1,product2) ; 
    }
};