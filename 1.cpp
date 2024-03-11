#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


unsigned long gen_buffer(int n){
    int i= sqrt(n);
    double z= sqrt(n);
    
    double sign= z-i;
    //cout << sign <<"\n";
    string za= to_string(sign);
    
    unsigned long fin = sign* pow(2, 32);
    //cout << fin << endl;

    return fin;

}


unsigned long gen_cbrt(int n){
    int i= cbrt(n);
    double z= cbrt(n);
    
    double sign= z-i;
    //cout << sign <<"\n";
    string za= to_string(sign);
    
    unsigned long fin = sign* pow(2, 32);
    //cout << fin << endl;

    return fin;

}


bool is_prime(int n){
    int br=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            br++;
        }

    }

    if(br>0){
        return false;
    } else {

    return true;
    }

}


int find_prime(int n){
    int br=0;
    int i=2;
    while(br<n){
        
        if (is_prime(i)==1){
            br++;

        }
        i++;

    }

    return i-1;
}


int main(){

    unsigned long s=gen_cbrt(3);
       

    unsigned long sqrt[8];


    for (int i=0;i<8;i++){
        

        unsigned long sqrt[i] = {gen_buffer(find_prime(i))};

        
    }
        
        
        //std::   cout << "0x" << std::hex << s <<"\n";
        

    for(int i=0; i<8; i++){

        
        cout << sqrt[i] << endl;
    }

   // cout << find_prime(4);


    return 0;
}
