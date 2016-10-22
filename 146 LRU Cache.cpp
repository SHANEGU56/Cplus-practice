class LRUCache{ 
private:
    int cap;
    list<pair<int,int>> l;
    unordered_map<int, list<pair<int,int>>::iterator> m;
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        auto it = m.find(key);
        if(it == m.end()) return -1;
        l.splice(l.begin(), l, it->second);
        return it->second->second;
    }
    
    void set(int key, int value) {
        if(m.find(key)!= m.end()) l.erase(m.find(key)->second);
        l.push_front(make_pair(key, value));
        m[key] = l.begin();
        if(m.size() > cap){
            int k = l.rbegin()->first;
            l.pop_back();
            m.erase(k);
        }
    }
};