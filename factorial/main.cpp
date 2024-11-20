//
//  main.cpp
//  factorial
//
//  Created by Zyoud on 19/11/2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int f=1,n;
    cin>>n;
    for(int i=1;i<=n;i++)
        f*=i;
    cout<<f<<endl;
    
    
    return 0;
}
