#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
void enc(string& name, string key, string alphabet);
void dec(string& name, string key, string alphabet);
int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyz"};
    string key ;
    string name;
    getline(cin,name);


    int num;
    cout<<"choose a number \n"
    "1- Insert a new key\n"
    "2- Encrypt a message\n"
    "3- Decrypt a message\n"
    "4- Exit"<<endl;
    do{
        cout<<"choose a number"<<endl;
        cin>>num;
        switch(num){
        case 1:
            cout<<"insert a new key"<<endl;
            cin>>key;
                break;
        case 2:
            enc(name, key, alphabet);
            cout<<endl;
                break;
        case 3:
            dec(name,key,alphabet);
        default:
            exit(0);

    }
    }while(true);
}

void enc(string& name, string key, string alphabet){
    for(int i=0; i<name.length();i++) {
        int j;
        for (j = 0; j < key.length(); j++) {
            if (isalpha(name[i]) && isupper(name[i])) {
                if (name[i] == toupper(alphabet[j])) {
                    break;
                }
            } else if (isalpha(name[i]) && islower(name[i])) {
                if (name[i] == tolower(alphabet[j])) {
                    break;
                }
            }
        }
        if(isupper(name[i])){
            name[i] = toupper(key[j]);
        }else if(islower(name[i])){
            name[i] = tolower(key[j]);
        }
    }
    cout<<name<<endl;
}
 void dec(string& name, string key, string alphabet){
    for(int i=0; i<name.length();i++){
        int j;
        for(j=0 ; j<alphabet.length(); j++){
            if(isupper(name[i])&& isalpha(name[i])){
                if(name[i]==toupper(key[j])){
                break;}
            }else if(islower(name[i])&& isalpha(name[i])){
                if(name[i]==tolower(key[j])){
                break;}
            }
        }
        if(isupper(name[i])){
            name[i]=toupper(alphabet[j]);
        }else if(islower(name[i])){
            name[i]=tolower(alphabet[j]);
        }
    }
    cout<<name<<endl;
}