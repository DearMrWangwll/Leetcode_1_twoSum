class Solution { // 该方法即是每读到一个数就计算target减去该数的值，判断减后的值是否已经出现过
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        vector<int> res;
        unordered_map<int,int> hash; // 由于unordered_map比map快所以选择无序哈希表
        int i;int j;
        for (i = 0;i<length;++i){
            int another = target - nums[i];
            if(hash.count(another)){
                res  = vector<int>({hash[another],i});
                return res;
            }
            hash[nums[i]] = i; // 初始刚无序哈希表是空的，然后再遍历的过程中逐渐填满
        }
        return res;
    }
};
