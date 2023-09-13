#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of coins you want to achive-> ";
    cin>>n;
    int i = 0;
    while(n>0){
        if(i%8==0 && i!=0){
            n-=8;
        }
        n--;
        cout<<"Day "<<i+1<<" and "<<n<<" coins are left"<<endl;
        i++;
    }
    cout<<"\n\nIt will take you "<<i<<" days to achive your goal\n\n\n";
}