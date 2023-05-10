#include<bits\stdc++.h>
#include<string>
using namespace std;
#define range 255
void countsort(char a[]){
    char output[strlen(a)];
    int count[range+1],i;
    memset(count,0,sizeof(count));
    for(i=0;a[i];++i)
    ++count[a[i]];
    for(i=1;i<=range;++i)
    count[i] += count[i-1];
    for(i=0;a[i];++i){
        output[count[a[i]]-1] = a[i];
        --count[a[i]];
    }
    for(i=0;a[i];++i)
    a[i] = output[i];
}
int main(){
    char a[] = "anuragpatter";
    countsort(a);
    cout<<"sorted array is:- "<<a;
    return 0;
}