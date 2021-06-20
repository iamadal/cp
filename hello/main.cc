#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int tCase; // number of test case;
    int solutions; // final number of solution

    cin>>tCase; // read test case
    
    while(tCase--){
        int strLen = 0; // string length
        int mathOne = 0; // 
        string data;
        
        cin>>data;
        
        strLen = data.length();
        
        for(int i=0;i<strLen;i++){
            int n = 0;
            if(data[i] == '1') {
                mathOne++;
                n++;
                if(n == 2 ) break;
            }
        }
        solutions = mathOne / 2;
        cout << solutions << '\n';
    }
    
    return 0;
}