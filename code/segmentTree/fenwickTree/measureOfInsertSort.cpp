//
//
// @..*
//
//   ..
//  @..
//

#include "stdc++.h"


using namespace std;

// from algo spot

struct FenwickTree{
    
    vector<int> tree;
    FenwickTree(int n) : tree(n+1){}
    
    int sum(int pos){
        ++pos;
        
        int ret = 0;
        
        while(pos > 0){
            ret += tree[pos];
            
        #if 0
            pos &= (pos -1);  // remove last one  : change last one to zero
        #else
            pos -= (pos & -pos); //ie let's substract using (pos & -pos) like in add for less brain stress
        #endif
            
        }
        
        return ret;
    }
    
    
    void add(int pos, int val){
        
        ++pos;
        
        while(pos < tree.size()){
            
            tree[pos] += val;
            pos += (pos & -pos);   // add last one bit to itself
            
        }
    }
}


long long countMoves(const vector<int>& a){
    
    FenwickTree tree(1000000);
    
    long long ret = 0;
    
    for(int i=0;i <a.size(); ++i){
        ret += tree.sum(999999) - tree.sum(a[i]);
        tree.add(a[i], 1);
    }
    
    return ret;
    
}



int main(int argc, const char * argv[]) {
    // insert code here...
  
    
    std::cout << "Hello, World!\n";
    return 0;
}
