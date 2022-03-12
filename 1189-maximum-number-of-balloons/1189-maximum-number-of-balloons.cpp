class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[] = {0,0,0,0,0};
        for(char i: text){
            switch(i){
                case 'b': arr[0] += 1;
                    break;
                case 'a' : arr[1] += 1;
                    break;
                case 'l' : arr[2] += 1;
                    break;
                case 'o': arr[3] += 1;
                    break;
                 case 'n': arr[4] += 1;
                    break;
            }
        }
        return min({arr[0],arr[1],arr[2]/2,arr[3]/2,arr[4]});
    }
};