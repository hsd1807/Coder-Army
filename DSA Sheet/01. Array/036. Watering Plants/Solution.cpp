class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int index = 0, water = capacity, steps = 0;
        while (index  < plants.size()) {
            if (water < plants[index]) {
                water = capacity - plants[index];
                steps += (index + 1) * 2 - 1;
            }
            else {
                water -= plants[index];
                steps++;
            }
            index++;
        }
        return steps;
    }
};
