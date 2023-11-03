#include<bits/stdc++.h>
using namespace std;

enum class RCTYPE{
    REG,
    HSRP
};

struct RC{
    RCTYPE type;
    union{
        const char *regular;
        int id;
    };
};

// RC** createNumPlate(const int &n){
//     RC** p=new RC*[n];
//     for(int i{0};i<n;i++){
//         *(p+i)=new RC; 
//     }
//     return p;
// }

void solve(){
    cout<<"Hi1";
    // auto p=createNumPlate(5);
    // int plates[4]={1234,1004,1212,4000};
    // int isHSPR[4]={0,1,1,0};
    // for(int i{0};i<5;i++){
    //     if(isHSPR[i]==0){
    //         (*(p+i))->type=RCTYPE::REG;
    //         (*(p+i))->regular="Regular";
    //     }else{
    //         (*(p+i))->type=RCTYPE::HSRP;
    //         (*(p+i))->id=plates[i];
    //     }
    // }
    cout<<"Hi";
    // for(int i{0};i<5;i++){
    //     if((*(p+i))->type==RCTYPE::REG){
    //         cout<<"Regular Plate : "<<(*(p+i))->regular<<endl;
    //     }else{
    //         cout<<"Number Plate : "<<(*(p+i))->id<<endl;
    //     }
    // }
}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    // TEST
    solve();
    return 0;
}