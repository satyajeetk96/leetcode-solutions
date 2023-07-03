//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int>pre(n),pos(n),ans(n);//arrays to store prefix, postfix product and answer array
        //Initializing prefix and postifx product arrays
        pre[0] = nums[0];
        pos[n-1] = nums[n-1];

        for(int i = 1; i<n; i++){
            pre[i] = pre[i-1]*nums[i]; //prefix product at for index i is the product of prefix product at i-1 and the value at index i
        }

//postfix prodcut at i is the product from indices i to n-1
        for(int i = n-2; i>=0; i--){
            pos[i] = pos[i+1]*nums[i];
        }

        //Initializing answer array
        ans[0] = pos[1];
        ans[n-1] = pre[n-2];
        //answer at i is product of prefix at (i-1) and postfix at (i+1)
        for(int i = 1; i<n-1; i++){
            ans[i] = pre[i-1]*pos[i+1]; 
        }
        return ans;
    }
};
