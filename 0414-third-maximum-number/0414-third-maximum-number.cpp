class Solution {
public:
    int thirdMax(vector<int>& arr) {
       long largest = LONG_MIN, slargest = LONG_MIN, tlargest = LONG_MIN; // Use LONG_MIN to handle negatives properly
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (arr[i] == largest || arr[i] == slargest || arr[i] == tlargest) {
            continue;  // Skip if the number is already considered as largest, second largest, or third largest
        }

        if (arr[i] > largest) {
            tlargest = slargest;
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] > slargest) {
            tlargest = slargest;
            slargest = arr[i];
        } else if (arr[i] > tlargest) {
            tlargest = arr[i];
        }
    }

    // If tlargest is still LONG_MIN, it means we don't have a third distinct maximum
    return (tlargest == LONG_MIN) ? largest : tlargest;
    }
};