#include<iostream>
#include<string.h>
#include <math.h>
using namespace std;
void subsequences(char arr[],char out[],int i,int j){
    
    //base case
    if(arr[i]=='\0'){
        out[j]='\0';
        
        cout<<out<<"  ";
        return;
    }
    //recursive case
    //1.including char 
    //2. excluding char
    subsequences(arr,out,i+1,j);
    out[j]=arr[i];
    subsequences(arr,out,i+1,j+1);
}
int main(){
            char arr[100];
            cin>>arr;
            char out[100];
            int k=strlen(arr);
            int ans=pow(2,k);
            cout<<ans<<endl;    
            subsequences(arr,out,0,0);
}