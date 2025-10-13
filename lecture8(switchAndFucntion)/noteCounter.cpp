#include <iostream>
using namespace std;
int main(){
    int amount = 1330;
    int hundred = 0, fifty = 0, twenty = 0, one = 1;
    
    
    switch(amount/100){
        case 0 : hundred = 0;
                 amount = amount;
                 break;
        default: hundred = amount/ 100;
                    amount =  amount % 100;
                    break;
    }
    cout<< amount;
    
    switch(amount/50){
        case 0: fifty = 0;
               amount = amount ;
               break;
        default: fifty = amount / 50;
                amount = amount % 50;
                break;
    }
    cout<< amount;
    switch(amount/20){
        case 0 : twenty = 0;
                 amount = 0;
                 break;
        default : twenty = amount / 20;
                  amount = amount % 20;
                  break;
    }
    cout<< amount;
    switch(amount/1){
        case 0 : one = 0;
                 amount = 0;
                 break;
        default: one = amount / 1;
                amount = amount % 1;
    }
    cout<<"Hundred rupees need :"<<hundred<<endl;
    cout<<"Fiftry rupees need :"<<fifty<<endl;
    cout<<"Twenty rupees need :" <<twenty<<endl;
    cout<<"One rupeed need :" <<one <<endl;
}

// you can also add case for 1 ,2,3 but this will save your time  
// but yes, it is very neccesary to write the base or edge case in every situation 