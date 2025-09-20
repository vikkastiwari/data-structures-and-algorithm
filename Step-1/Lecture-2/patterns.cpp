#include<iostream>
using namespace std;

int main()
{
    int n=5, m=5;
    // Pattern 1
    // *****
    // *****
    // *****
    // *****
    // *****
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    cout<<endl;

    // Pattern 2
    // *
    // **
    // ***
    // ****
    // *****
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    cout<<endl;

    // Pattern 3
    // *****
    // ****
    // ***
    // **
    // *
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){    
            cout<<"*";
        }   
        cout<<endl;
    }
    cout<<endl;

    // pattern 4
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){    
            cout<<j+1;
        }   
        cout<<endl;
    }
    cout<<endl;

    //pattern 5
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){    
            cout<<i+1;
        }   
        cout<<endl;
    }
    cout<<endl;

    //pattern 6
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){    
            cout<<j+1;
        }   
        cout<<endl;
    }
    cout<<endl;

    // pattern 7
    /**
    *
   ***
  *****
 *******
*********
    */

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){    
            cout<<" ";
        }   
        for(int j=0;j<i+1;j++){    
            cout<<"*";
        }
        for(int j=0;j<i;j++){    
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    //pattern 6
    // 1 
    // 0 1 
    // 1 0 1 
    // 0 1 0 1 
    // 1 0 1 0 1 
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){  
            if(i%2){
                cout<<j%2;
            }else {
                cout<<(j+1)%2;
            }  
            cout << " ";
        }   
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){    
            cout<<j+1;
        }
        for(int j=i+1;j<n;j++){    
            cout<<" ";
        } 
        for(int j=0;j<n-i;j++){    
            cout<<" ";
        }  
        for(int j=i;j>=0;j--){    
            cout<<j+1;
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
