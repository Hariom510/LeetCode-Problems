class SmallestInfiniteSet {
public:
    //set always holds element in sorted order
    set<int> s;
    SmallestInfiniteSet() {
        //clear the set for running different test cases
        s.clear();
        for(int i=1; i<=1000; i++){
            s.insert(i);
        }
    }
    
    int popSmallest() {
       int beg = *s.begin();
        s.erase(beg);
        return beg;
    }
    
    void addBack(int num) {
      s.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */