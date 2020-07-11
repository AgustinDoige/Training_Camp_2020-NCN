/* Alex doesn't like boredom. That's why whenever he gets bored, he comes up with games. 
One long winter evening he came up with a game and decided to play it.

Given a sequence a consisting of n integers. 
The player can make several steps. 
In a single step he can choose an element of the sequence (let's denote it a_k) and delete it, 
at that all elements equal to a_(k+1) and a_(k-1) also must be deleted from the sequence. 
That step brings a_k points to the player.

Alex is a perfectionist, so he decided to get as many points as possible. Help him.

        Input
The first line contains integer n (1 ≤ n ≤ 10**5) that shows how many numbers are in Alex's sequence.
The second line contains n integers a_1, a_2, ..., a_n (1 ≤ a_i ≤ 10**5).

        Output
Print a single integer — the maximum number of points that Alex can earn.
*/

#include <iostream>
typedef int Entero;
using namespace std;
/*
main() {
    Entero largo;
    Entero *arr1, *arr2;
    cin >> largo;
    arr1 = new Entero[largo];
    for (Entero i=0; i<largo; ++i) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
}*/
int main() {
    long long a[100001],i,n,k;
    cin>>n;
	for(;i<n;i++) {
        cin>>k;
        a[k] += k;
    }	
    for(i=2; i<=100001; i++){
        a[i]= max(a[i-1], a[i]+a[i-2]);
    }
	cout<<a[i-1];
}