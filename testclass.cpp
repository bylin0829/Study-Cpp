#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result = {};
        if(nums.size()<3){
            return result;
        }
        else{
            for(int i =0;i<nums.size()-2;i++){
                for(int j=i+1;j<nums.size()-1;j++){
                    for(int k=j+1; k<nums.size();k++){
                        if(nums[i]+nums[j]+nums[k]==0){
                            //Check the triplets is unique
                            int flag = 0;
                            vector <int> temp = {};
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[k]);
                            //Sorting before comparasion
                            sort(temp.begin(), temp.end());
                            for(auto x:result){
                                if(x==temp){
                                    flag=1;
                                }
                            }
                            if(flag==0){
                                result.push_back(temp);
                            }
                        }
                    }
                }
            }
        }
        return result;
    }
};

int main(){
    // Solution* x = new Solution;
    vector<int> x = {-2,10,-14,11,5,-4,2,0,-10,-10,5,7,-11,10,-2,-5,2,12,-5,14,-11,-15,-5,12,0,13,8,7,10,6,-9,-15,1,14,11,-9,-13,-10,6,-8,-5,-11,6,-9,14,11,-7,-6,8,3,-7,5,-5,3,2,10,-6,-12,3,11,1,1,12,10,-8,0,8,-5,6,-8,-6,8,-12,-14,7,9,12,-15,-12,-2,-4,-4,-12,6,7,-3,-6,-14,-8,4,4,9,-10,-7,-4,-3,1,11,-1,-8,-12,9,7,-9,10,-1,-14,-1,-8,11,12,-5,-7};
    // vector<vector<int>> mynum = {{1,30,51},{9,513,5}};
    vector<vector<int>> mynum = {};
    Solution *test = new Solution;
    auto y = test->threeSum(x);

    for(auto a:y){
        for(auto b:a){
            cout << b<<" ";
        }
        cout << endl;
    }
    // cout << (x==y);
    // sort(mynum[1].begin(), mynum[1].end());
    // for (auto n : mynum[1])
    //     cout << n;
    
    // x->threeSum(mynum);
    return 0;
}