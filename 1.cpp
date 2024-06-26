#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <vector>
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

string str_to_bin(const string s){
    string binaryString;
    for(char c: s){

        binaryString+=std::bitset<8>(c).to_string();
    }
    return binaryString;
        

        
    }

 

int main(){

    unsigned long s=gen_cbrt(3);
       

    unsigned long squares[8];
    unsigned long cubes[64];
    string test="Whether we wanted it or not, we've stepped into a war with the Cabal on Mars. So let's get to taking out their command, one by one. Valus Ta'aurc. From what I can gather, he commands the Siege Dancers from an Imperial Land Tank just outside of Rubicon. He's well protected, but with the right team, we can punch through those defenses, take this beast out, and break their grip on Freehold."; 
    
    for (int i=0;i<8;i++){
        

        squares[i] = {gen_buffer(find_prime(i))};

        
    }
    
    for (int i=0;i<64;i++){
        

        cubes[i] = {gen_cbrt(find_prime(i))};

        
        
    }
     
    string pad= str_to_bin(test);
    int len= pad.size();
    int block_num=(len/512)+1;
    int k= (block_num*512)-1-len-64;
    string padding;
    for(int i=0;i<len;i++){
        padding+=pad[i];
    }
    


    padding+="1"; 
    
    int koef=padding.size();
    while (koef<block_num*512-64){
        padding+="0";
        koef++;

    }
    
    string lpad;
    lpad+=std::bitset<64>(len).to_string();
    for(int i=0;i<64;i++){
        padding+=lpad[i];
    }
    /*for(int i=0;i<512;i++){
        cout<<padding[i];
    }*/
   
    vector<string> blocks;
    for(int i=0;i<block_num;i++){
        string block=padding.substr(i*512,512);
        blocks.push_back(block);
    }
   /* for(auto i=blocks.begin();i !=blocks.end();++i){
        cout<<*i<<endl<<endl;
        

    }*/
    int x=0;
    string w[64];
    string chunk=blocks[0];
    cout <<chunk<<endl;
    for(int j=0;j<16;j++){
        w[j]=

    }


    
    
    return 0;
    
}
