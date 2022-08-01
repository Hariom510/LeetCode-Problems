class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
//          int n= suits.size();
//         set<char> s(suits.begin(),suits.end());
//         if(s.size()==1) return "Flush";
        
//         int maxi =0;
//         sort(ranks.begin(), ranks.end());
//         int count =0;
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 if(ranks[i]==ranks[j]) count++;
//                 else count=0;
//             }
//         }
        
        
//         // for(int i=0; i<n-1; i++){
//         //     if(suits[i]!=suits[i+1])
//         // }
//         return " ";
        
//         map<char, int> m1;
//         map<int, int> m2;
        
//         for(auto i: suits){
//             m1[i]++;
//         }
//         for(auto i: ranks){
//             m2[i]++;
//         }
//          string ans = "High Card";
//         for(auto i: m1){
//             if(i.second==5){
//                 return "Flush";
//             }
//         }
        
//         for(auto i: m2){
//             if(i.second>=3){
//                 return "Three of a Kind";
//                 break;
//             }
//            else if(i.second==2){
//                 return "Pair";
//                 break;
//             }
//         }
        
        map<char,int> m ; // Stores count of same suit
        map<int,int> m2 ; // Stores count of same rank
        for(auto i:suits)
        {
            m[i]++ ;
        }
        for(auto i:ranks)
        {
            m2[i]++ ;
        }
        string ans = "High Card" ;
        for(auto i:m) // Checking same suit
        {
            if(i.second == 5)
            {
                ans = "Flush" ;
				return ans;
            }
        }
        for(auto i:m2) // Checking same rank
        {
            if(i.second >= 3)
            {
                ans = "Three of a Kind" ;
                return ans;
            }
        }
        
        for(auto i:m2) // Checking same rank
        {
            if(i.second ==2)
            {
                ans = "Pair" ;
				return ans;
            }
        }
    
        return ans ;
    }
};