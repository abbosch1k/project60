#include <iostream>
using namespace std;

int main() {
    int a[5]={1,3,5,7,9};
    int target=5;

    int l=0, r=4;

    while(l<=r) {
        int m=(l+r)/2;

        if(a[m]==target) {
            cout<<"Found at "<<m;
            return 0;
        }

        if(a[m]<target)
            l=m+1;
        else
            r=m-1;
    }

    cout<<"Not found";
}
