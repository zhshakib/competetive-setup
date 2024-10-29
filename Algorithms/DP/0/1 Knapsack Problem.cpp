#include<bits/stdc++.h>

using namespace std;

int main() {
	int item = 3;
	int capacity = 50;
	int profit[item] = {60,120,100};
	int weight[item] = {10,30,20};
	
	int knap[item+1][capacity+1];
	for(int i = 0; i <= item; i++) {
		for(int w = 0; w <= capacity; w++) {
			if(i == 0 || w == 0) {
				knap[i][w] = 0;
				continue;
			}
			
			if(weight[i-1] <= w){
				knap[i][w] = max(knap[i-1][w], knap[i-1][w-weight[i-1]] + profit[i-1]);
			} else {
				knap[i][w] = knap[i-1][w];
			}
		}
 	}
	
	cout << knap[item][capacity] << endl;
	
	/* for(int i = 0; i <= item; i++) {
		for(int j = 0; j <= capacity; j++) {
			cout << knap[i][j] << "\t";
		}
		cout << endl;
	} */
}