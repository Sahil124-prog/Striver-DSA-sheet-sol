//Print GFG n times
    #include<bits/stdc++.h>
    using namespace std;
  class solution{
  public:
    void printGfg(int N) {
        // Code here
        if(N==0) return;
        cout<<"GFG"<<" ";
        printGfg(N-1);
        
    }
};