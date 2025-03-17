class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(int i:nums){
            if(mp[i] % 2 != 0){
                return false;
            }
        }
        return true;
    }
};
