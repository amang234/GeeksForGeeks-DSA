class Solution {
  public:
    vector<string> binstr(int n) {
        vector<string>result; 
        
        int largest = 0 ; 
        int temp = n ; 
        int power = 0 ; 
        
        while(temp--){
            largest += pow(2, power);
            power++;
        }
        
        for(int num = 0; num <= largest ; num++){
            bitset<32>binary(num);
            string str = "";
            for(int i = 0 ; i < 32; i++){
                if(binary[i]){
                    str = "1" + str;
                }
                else str  =  "0" + str;
            }
          
            int st = 32- n ; 
            string s = str.substr(st);
            result.push_back(s);
        }
        return result; 
        
    }
};