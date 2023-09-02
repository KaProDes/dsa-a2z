vector<int> getFrequencies(vector<int>& nums) {
    map<int,int> hashMap; 
    for(int num : nums){
        hashMap[num]++;
    }
    int maxFreq = INT_MIN;
    int maxFreqElement = 0;
    int minFreq = INT_MAX;
    int minFreqElement = 0;
    // **Note**: It is a map, so keys will appear in ascending order
    // So if multiple frequencies are same, lowest key will be prefered.
    for(auto it : hashMap){
        int number = it.first;
        int frequency = it.second;
        if(minFreq > frequency){ // minFreq >= frequency in case we want highest key to be prefered
            minFreq = frequency;
            minFreqElement = number;
        }
        if(maxFreq < frequency){ // maxFreq <= frequency in case we want highest key to be prefered
            maxFreq = frequency;
            maxFreqElement = number;
        }
    }
    vector<int> result;
    result.push_back(maxFreqElement);
    result.push_back(minFreqElement);
    return result;
}