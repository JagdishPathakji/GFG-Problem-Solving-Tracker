// User function Template for C++

class Twitter {
  public:
    
    unordered_map<int,unordered_set<int>> friends; // followers
    int curr = 0; // post number (increment if a post comes by own or by our follower)
    priority_queue<vector<int>> timeline;
    
    Twitter() {
        friends.clear();
        curr = 0;
        timeline = priority_queue<vector<int>>();
    }

    
    void postTweet(int userId, int tweetId) {
        timeline.push({curr++,tweetId,userId});
    }

    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        
        priority_queue<vector<int>> temp = timeline;
        int n = 0;
        while(!temp.empty() && n < 10) {
            auto top = temp.top();
            temp.pop();
            
            if(top[2] == userId || friends[userId].count(top[2])) {
                ans.push_back(top[1]);
                n++;
            }
        }
        
        return ans;
    }

    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        friends[followerId].erase(followeeId);
    }
};