class LRUCache {
public:
    unordered_map<int,int>mp; //for storing key-value pair of lru cache
    deque<int>lst;             //storing key in cache
    int cp;                   //define capacity of cache
    LRUCache(int capacity) {
        cp = capacity;
        mp.clear();
        lst.clear();
    }
    
    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;
        lst.erase(key);
        lst.push_front(key);
        return mp[key];
    }
    
    void put(int key, int value) {
        if (mp.find(key)==mp.end()) {
            if (lst.size()==cp) {
                int last=lst.back();
                lst.pop_back();
                mp.erase(last);
            }
            mp[key]=value;
            lst.push_front(key);
        }
        else {
            lst.remove(key);
            lst.push_front(key);
            mp[key]=value;
        }
    }
};
