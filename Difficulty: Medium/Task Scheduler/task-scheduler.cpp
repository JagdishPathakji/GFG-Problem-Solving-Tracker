class Solution {
public:
    int leastInterval(int N, int k, vector<char> &tasks) {
        
        // Ignore this approach, you have solved it using PQ (check leetcode)
        
        vector<int> freq(26,0);
        
        for(char c : tasks)
            freq[c - 'A']++;
        
        int maxFreq = 0;
        for(int f : freq)
            maxFreq = max(maxFreq, f);
        
        int countMax = 0;
        for(int f : freq)
            if(f == maxFreq)
                countMax++;
        
        int part = (maxFreq - 1) * (k + 1) + countMax;
        
        return max((int)tasks.size(), part);
    }
};