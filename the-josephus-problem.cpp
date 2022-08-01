#include <stdio.h>

int total = 41;



int main(){
int matrix[total];
for(int i = 0;i < total;i++){
    matrix[i] = 1;
}

for(int i = 0; i < 9999; i++){
   int j = 0;
   if( matrix[i % (total)] == 1)
   while(1){
      if(j > total)
         break;
      if(matrix[(i + j + 1) % (total)] == 1 && (i + j + 1) % (total) != i % (total)){
         matrix[(i + j + 1) %        (total)] = 0;
         break;
         }
      j++;
    }
}

for(int i = 0;i < total;i++){
    if(matrix[i] == 1)
    printf("Index %d is alive",i + 1);
}

}
