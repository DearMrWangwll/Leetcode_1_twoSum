class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        '''
        以下是我自己写的稚嫩的代码
        res = []
        for es_1 in nums:
            if target - es_1 in nums[nums.index(es_1)+1:]:
                res.append(nums.index(es_1))
                res.append(nums[nums.index(es_1)+1:].index(target-es_1)+nums.index(es_1)+1)
                return res
        return res
        '''
        hashmap = {}
        for index,num in enumerate(nums):
            another_num = target - num
            if another_num in hashmap:
                return [hashmap[another_num],index]
            hashmap[num] = index;
        return None
