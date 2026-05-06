#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
return (*(int*)a-*(int*)b);
}

int main(){

int n;

printf("Enter size: ");

if(scanf("%d",&n)!=1||n<=0){
printf("-1\n");
return 0;
}

long long a[100005];

printf("Enter array elements: ");

for(int i=0;i<n;i++){
scanf("%lld",&a[i]);
}

long long k;

printf("Enter K: ");
scanf("%lld",&k);

if(k==0){
for(int i=1;i<n;i++){
if(a[i]!=a[0]){
printf("-1\n");
return 0;
}
}
printf("0\n");
return 0;
}

for(int i=1;i<n;i++){
if((a[i]-a[0])%k!=0){
printf("-1\n");
return 0;
}
}

qsort(a,n,sizeof(long long),compare);

long long target=a[n/2];
long long operations=0;

for(int i=0;i<n;i++){
operations+= llabs(a[i]-target)/k;
}

printf("Minimum Operations: %lld\n",operations);

return 0;
}