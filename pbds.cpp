#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

int main() {
    int t;
    cin>>t;
    while(t--){
             // declaration
        pbds A;
        map<int,int>mp;
long long n,ans=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
	cin>>a[i];
    }

    for(int i=0;i<n;i++){
	A.insert(a[i]);

// finding number of elements larger than a[i]
		ans += A.order_of_key(a[i]) + mp[a[i]];
		mp[a[i]]++;
	}
	cout << ans << "\n";
}

}
