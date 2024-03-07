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


int main(){

    unsigned long s=gen_buffer(3);
    //cout <<s << endl;
    //cout << sqrt(2) << "\n";
    unsigned long sqrt[8] = {gen_buffer(2), gen_buffer(3), gen_buffer(5), gen_buffer(7), gen_buffer(11), gen_buffer(13), gen_buffer(17), gen_buffer(19)};
    std::   cout << "0x" << std::hex << s <<"\n";
    //cout << str;
    //cout << s <<"\n";

    for(int i=0; i<8; i++){
        cout << sqrt[i] << endl;
    }


    return 0;
}
