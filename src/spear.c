#include <stdio.h>

int n;
int k;
int A[100000];


int sp(int l){
  int sum=0;
  for(int i=0; i<n; i++){
    sum += A[i]/l;
  }
  if(sum>=k)return 0;
  else return 1;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = 0;
  ub = 1e9 + 1;
  while(ub - lb > 1){
    int mid = (lb + ub) / 2;
    if(sp((mid))) ub = mid;
    else lb = mid;
  }

  printf("%d\n", lb);
  return 0;
}
