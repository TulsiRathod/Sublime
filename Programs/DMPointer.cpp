#include<bits/stdc++.h>
using namespace std;

void solve(){
    int arr[5][3][4];
    int cnt=1;
    for(int i{0};i<5;i++){
        for(int j{0};j<3;j++){
            for(int l{0};l<4;l++){
                arr[i][j][l]=cnt++;
            }
        }
    }
    for(int i{0};i<5;i++){
        for(int j{0};j<3;j++){
            for(int l{0};l<4;l++){
                cout<<arr[i][j][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    //declare 3d pointer
    int (*p)[3][4]=arr;
    cout<<*(*(*p))<<endl;

    //declare row pointer
    // int (*rowp)[4]=arr[0];
    int (*rowp)[4]=*p;
    cout<<*(*rowp)<<endl;
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


#include<bits/stdc++.h>
using namespace std;

struct square{
    int l;
    int area;
};

square** createSquare(const int &n){
    square** p=new square*[n];
    for(int i{0};i<n;i++){
        (*(p+i))=new square();
        (*(p+i))->l = rand() % 100;
        (*(p+i))->area = ((*(p+i))->l) * ((*(p+i))->l);
    }
    return p;
}

void sortSquareByArea(square** const &p,const int &n){
    for(int i{0};i<n;i++){
        for(int j{i+1};j<n;j++){
            if(((*(p+i))->area)>(*(p+j))->area){
                square *temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}

void display(const square* const* const &p,const int &n){
    for(int i{0};i<n;i++){
        cout<<"Side : "<<(*(p+i))->l<<"  area : "<<(*(p+i))->area<<endl;
    }
}

void solve(){
    auto squares=createSquare(5);
    display(squares,5);
    sortSquareByArea(squares,5);
    cout<<endl;
    display(squares,5);
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