//CRAXXYYY QUESTION..........EASY BUT I MADE IT COMPLICATED

//problem : https://leetcode.com/problems/design-twitter/description/

// topics : set, map ,int


class Twitter {
public:

    unordered_map<int,unordered_set<int>> followers_list;
    vector<pair<int,int>> tweets;

    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweets.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> feed;
  
        for(int i = tweets.size()-1; i>=0;i--){
            auto [user,tweet] = tweets[i];
            if(user == userId || followers_list[userId].contains(user) ){
                feed.push_back(tweet);
                if(feed.size()==10)break;
            
            }
        }
    
        return feed;
    }
    
    void follow(int followerId, int followeeId) {
        followers_list[followerId].insert(followeeId);
        
    }
    
    void unfollow(int followerId, int followeeId) {
        followers_list[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
