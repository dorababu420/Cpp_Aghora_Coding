#include <stdio.h>
void movezerostoend(int a[],int size)
{
     int i=0,j=0;
     while(i <= size - 1){
       if(a[i] != 0){
          a[j++] = a[i];
       }
       i++;
     }
     while(j <= size - 1)
        a[j++] = 0;
}
int main()
{
  int arr[] = {1,9,8,4,0,0,2,7,0,6,0};
  int i;
  int size = sizeof(arr)/sizeof(arr[0]);
  movezerostoend(arr,size);
  for(i=0;i<=size -1;i++){
    printf("%d",arr[i]);
  }
  return 0;
}

