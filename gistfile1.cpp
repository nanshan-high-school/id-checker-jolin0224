#include <iostream>
using namespace std;
int main(){    
    char EnglishWord;
    int EnglishNumber;
 
    cout << "請輸入身分證英文";    
    cin >> EnglishNumber;  
 
    if(EnglishWord = 'A'){        
        EnglishNumber = 10;    
    }    
    if(EnglishWord = 'B'){        
        EnglishNumber = 11;    
    }    if(EnglishWord = 'C'){        
        EnglishNumber = 12;   
    }    if(EnglishWord = 'D'){        
        EnglishNumber = 13;   
    }    if(EnglishWord = 'E'){        
        EnglishNumber = 14;   
    }    if(EnglishWord = 'F'){
        EnglishNumber = 15; 
    }    if(EnglishWord = 'G'){  
        EnglishNumber = 16;  
    }    if(EnglishWord = 'H'){  
        EnglishNumber = 17;   
    }    if(EnglishWord = 'J'){  
        EnglishNumber = 18; 
    }    if(EnglishWord = 'K'){ 
        EnglishNumber = 19; 
    }    if(EnglishWord = 'L'){   
        EnglishNumber = 20; 
    }    if(EnglishWord = 'M'){ 
        EnglishNumber = 21; 
    }    if(EnglishWord = 'N'){  
        EnglishNumber = 22;    
    }    if(EnglishWord = 'P'){   
        EnglishNumber = 23; 
    }    if(EnglishWord = 'Q'){ 
        EnglishNumber = 24;  
    }    if(EnglishWord = 'R'){  
        EnglishNumber = 25;  
    }    if(EnglishWord = 'S'){ 
        EnglishNumber = 26; 
    }    if(EnglishWord = 'T'){ 
        EnglishNumber = 27; 
    }    if(EnglishWord = 'U'){  
        EnglishNumber = 28;
    }    if(EnglishWord = 'V'){
        EnglishNumber = 29; 
    }    if(EnglishWord = 'X'){ 
        EnglishNumber = 30;   
    }    if(EnglishWord = 'Y'){ 
        EnglishNumber = 31;  
    }    if(EnglishWord = 'W'){  
        EnglishNumber = 32; 
    }    if(EnglishWord = 'Z'){  
        EnglishNumber = 33; 
    }    if(EnglishWord = 'I'){   
        EnglishNumber = 34; 
    }    if(EnglishWord = 'O'){
        EnglishNumber = 35;   
    }   
 
    int IDnumber;  
    cout << "請輸入身分證數字"; 
    cin >> IDnumber;
 
    int n3 = IDnumber/100000000;  
    int n4 = IDnumber/10000000 - n3*10;
    int n5 = IDnumber/1000000 - n4*100;  
    int n6 = IDnumber/100000 - n5*1000;  
    int n7 = IDnumber/10000 - n6*10000;  
    int n8 = IDnumber/1000 - n7*100000;  
    int n9 = IDnumber/100 - n8*1000000;  
    int n10 = IDnumber/10 - n7*10000000; 
    int n11 = IDnumber/1 - n7*100000000;
 
    if((EnglishNumber/10 + EnglishNumber%10*9 + n3*8 + n4*7 + n5*6 + n6*5 + n7*4 + n8*3 + n9*2 + n10*1 + n11*1)%10 == 0){ 
        cout << "有此人";   
    }else{ 
        cout << "你不是人!!!"; 
    }  
    return 0;
}

