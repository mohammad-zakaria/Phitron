#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    // take input from the user of the matrix size     
       
    int m; cin >> m; 
     int n; cin >> n;          
    
    // create the matrix of mxn and take input of the elements     

    int mat[m][n];     
    for(int i=0;i<m;i++){         
        for(int j=0;j<n;j++) cin >> mat[i][j];     
    }          
    // create a set to keep track of elements     
    set<int> elements;     
    for(int i=0;i<m;i++){         
        for(int j=0;j<n;j++){             
            // if we have found the element             
            if(elements.find(mat[i][j])!=elements.end()) {                 
                mat[i][j] = -1;             
            } else {                 
                elements.insert(mat[i][j]);             
            }         
        }     
    }          
    // display the elements of the matrix     
    
    for(int i=0;i<m;i++){         
        for(int j=0;j<n;j++){             
            cout << mat[i][j] << " ";         
        }         
        cout << endl;     
    } 
        
    return 0; 
}
