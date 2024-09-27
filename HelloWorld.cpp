#include <bits/stdc++.h>

using namespace std;

void imprimirVector(vector<char> parcial){
    for(int i = 0; i<parcial.size(); i++){
        cout<<parcial[i];
    }
    cout<<endl;
}

int main(){
    string s; getline(cin,s);
    int inicio = 97;
    vector<char> parcial;
    int conta = 0; 
    cout<<s.length();
    for(int i = 0; i<s.length(); i++){
        while(char(inicio) != s[i] && inicio<122){
            parcial.push_back(char(inicio));
            imprimirVector(parcial);
            parcial.pop_back();
            conta++;
            inicio++;
        }
        if(char(inicio) == s[i]){
            parcial.push_back(char(inicio));
        }else{
            parcial.push_back(char(32));
        }
        
        inicio = 97;
    }
    
    imprimirVector(parcial);
    
}
