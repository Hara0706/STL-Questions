// Median of sorted arrays

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	
	int n; cin>>n;
	int a[n], b[n];
	vector<int> v;
	int i;
	for(i=0; i<n; i++)
	{
	    cin>>a[i];
	    cin>>b[i];
	    v.push_back(a[i]);
	    v.push_back(b[i]);
	}
	sort(v.begin(), v.end());
	
	  if(v.size()%2==0)
	  {
	      cout<<v[v.size()/2-1];
	  }
	  else 
	  {
	      cout<<v[v.size()/2];
	  }
	
	
    
	return 0;
}
