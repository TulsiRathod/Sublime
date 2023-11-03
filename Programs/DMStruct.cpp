#include<bits/stdc++.h>
using namespace std;

struct circle{
    float radius;
    double area;
};

circle** createCircle(const int& n){
    circle** c=new circle*[n];
    for(int i{0};i<n;i++){
        *(c+i)=new circle;
    }
    return c;
}

void editRadius(circle* const* const &p,const int &n){
    for(int i{0};i<n;i++){
        (*(p+i))->radius=rand()%100;
    }
}

void calculateArea(circle* const* const &p,const int &n){
    for(int i{0};i<n;i++){
        (*(p+i))->area=(*(p+i))->radius*(*(p+i))->radius*3.14285;
    }
}

void display(const circle* const* const &p,const int &n){
    for(int i{0};i<n;i++){
        cout<<"Radius : "<<(*(p+i))->radius<<"  2Area : "<<(*(p+i))->area<<endl;
    }
}

void deleteCircle(const circle* const* p,const int &n){
    for(int i{0};i<n;i++){
        delete *(p+i);
    }
    delete[] p;
    p=nullptr;
}

void solve(){
    auto circles=createCircle(10);
    editRadius(circles,10);
    calculateArea(circles,10);
    display(circles,10);
    deleteCircle(circles,10);
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