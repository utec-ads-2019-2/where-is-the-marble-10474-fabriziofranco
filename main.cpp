#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int return_index(vector<int> numeros, int number){
    for(size_t i=0;i<numeros.size();i++){
        if(numeros[i]==number)
            return (i+1);
    }
    return -1;
}

int main(){
    int cantidad,tests;
    int controlador=1;
    while(cin>>cantidad>>tests){

        vector<int> numbers;

        if(cantidad==0 and tests==0)
            return 0;

        cout<<"CASE# "<<controlador<<":"<<endl;
        controlador++;

        int temp;
        for(int i=0;i<cantidad;i++){
            cin>>temp;
            numbers.push_back(temp);
        }

        sort(numbers.begin(),numbers.end());

        for(int i=0;i<tests;i++){
            cin>>temp;
            int position=return_index(numbers,temp);
            if(position!=-1)
                cout<<temp<<" found at "<<position<<endl;
            else
                cout<<temp<<" not found\n";
        }


    }
    return 0;
}

