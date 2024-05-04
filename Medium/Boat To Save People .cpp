class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       int boats = 0;
       sort(people.begin(), people.end());
       int i=0,j=people.size()-1;

        while(i <= j){
            if((people[j] + people[i]) <= limit){
                i++;
            }
            j--;
            boats++;
        }
        return boats;
    }
};
