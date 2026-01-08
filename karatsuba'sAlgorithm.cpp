#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int makeEqualLength(string &a, string &b){
        int len1 = a.length();
        int len2 = b.length();
        
        if(len1 < len2){
            for(int i=0;i<len2-len1;i++){
                a = '0' + a;
            }
            return len2;
        }
        else if(len1> len2){
            for(int i = 0;i < len1-len2;i++){
                b = '0' + b;
            }
        }
        return len1;
    }
  
    int multiplySingleBit(string a,string b){
        return (a[0] - '0')*(b[0] - '0');
    }
    
    string addBitStrings(string a,string b){
        int n = makeEqualLength(a,b);
        int carry = 0;
        string result;
        
        for(int i=n-1;i>=0;i--){
            int firstBit = a.at(i) - '0';
            int secondBit = b.at(i) - '0';
            
            int resBit = firstBit ^ secondBit ^ carry;
            result = (char)(resBit + '0') + result;
            
            carry = ((firstBit & secondBit) | (secondBit & carry) | (firstBit&carry));
        }
        if(carry) result = '1' + result;
        
        return result;
    }
    
    
    
    long long karatsubaAlgo(string A, string B) {
        int n = makeEqualLength(A,B);
        
        if(n == 0) return 0;
        if(n == 1) return multiplySingleBit(A,B);
        
        
        int firstHalf = n/2;
        int secondHalf = n - firstHalf;
        
        string ALeft = A.substr(0,firstHalf);
        string ARight = A.substr(firstHalf,secondHalf);
        
        string BLeft = B.substr(0,firstHalf);
        string BRight = B.substr(firstHalf,secondHalf);
        
        long long p1 = karatsubaAlgo(ALeft,BLeft);
        long long p2 = karatsubaAlgo( addBitStrings(ALeft,ARight),
                                    addBitStrings(BLeft,BRight));
        long long p3 = karatsubaAlgo(ARight,BRight);
        
        long long result = p1*(1LL<<(2*secondHalf)) + (p2 - p3 - p1)*(1LL<<secondHalf) + p3;
        
        return result;
    }
};

