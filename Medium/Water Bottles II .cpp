class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptyBottles = 0;
        int bottlesDrink = 0;
        while(numBottles != 0 || emptyBottles != 0) {
            
            if(numBottles >= numExchange) {
                bottlesDrink = bottlesDrink + numBottles;
                emptyBottles = numBottles;
                numBottles =0;
            }
            else if(emptyBottles >= numExchange) {
                  numBottles++;
                  emptyBottles = emptyBottles - numExchange++;
            }
            else if(numBottles > 0) {
                    emptyBottles = emptyBottles + numBottles;
                    bottlesDrink = bottlesDrink + numBottles;
                    numBottles = 0;
            }
            else break;
        }
        return bottlesDrink;
    }
};
