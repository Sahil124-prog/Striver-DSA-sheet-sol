class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        double result=0;
        switch(choice){
            case 1: {
                    double R = arr[0];  
                    result=3.14159265359* R * R;
                    break;
            }   
            case 2 : {
                    float L = arr[0];  
                    float B = arr[1]; 
                    result= L * B;
                    break;
            }
        }
        return result;
    }
};
