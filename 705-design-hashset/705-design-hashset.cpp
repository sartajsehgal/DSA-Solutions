class MyHashSet {
public:
    vector<vector<int>> v;
    int prime=100;
    MyHashSet() {
        for(int i=0;i<100;i++)
        {
            v.push_back({});
        }
    }
    
    void add(int key) {
        int k=key%prime;
        v[k].push_back(key);
    }
    
    void remove(int key) {
        int k=key%prime;
        for(int i=0;i<v[k].size();i++)
        {
            if(v[k][i]==key)
            {
                v[k][i]=-1;
            }
        }
    }
    
    bool contains(int key) {
        int k=key%prime;
        for(int i=0;i<v[k].size();i++)
        {
            if(v[k][i]==key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */