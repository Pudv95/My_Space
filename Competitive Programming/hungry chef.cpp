#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int nb_cost,pb_cost,q,money;
        cin>>nb_cost>>pb_cost>>q>>money;
	    int nb = 0, pb = 0;
	    if((nb_cost*q)>money){
	        cout<<-1<<endl;
	        continue;
	    }
        else if(money>pb_cost*q){
            pb = q;
            cout<<nb<<" "<<pb<<endl;
            continue;
        }
	    else{
            nb = q;
            money = money - (nb_cost*q);
            while( (money+nb_cost-pb_cost)>=0 ){
                if(money+nb_cost>pb_cost){
                    nb--;
                    pb++;
                }
                money = money + nb_cost - pb_cost;
            }
	    }
	    cout<<nb<<" "<<pb<<endl;
	}
	return 0;
}
