# Leetcode_1_twoSum
# C++
该方法即是每读到一个数就计算target减去该数的值，判断减后的值是否已经出现过，利用unordered_map，使搜寻的时间复杂度控制在O(1)，虽然unordered_map的搜寻速度不一定比map快，还要考虑数据量的大小，但是考虑到时间复杂度还是选择了无序哈希
# python3
python 我准备用自带的list中强大的in来解决问题，但是提交的时候出了很多次问题，首先是列表是[3,3]的情况，输出结果为[0,0]，于是我将第二个数的判断改为nums[nums.index(es_1)+1:]，又遇到了第二个索引值偏小的问题（此时用于读取的列表长度变短了），于是我将append的第二个数改为了nums[nums.index(es_1)+1:].index(target-es_1)+nums.index(es_1)+1

类比C++中的hashmap，在python3中可以用字典来更快速的解决这个问题
