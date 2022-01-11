#include <stdlib.h>
#include "graph.h"

int dest_node_num, path_size;
pnode *path, *res_path ;
int p[100], idx, total_weight;
int brute(pedge e, pnode n);



//////////////////////////

int brute(pedge e, pnode n){  
    if(e->endpoint != NULL)
    printf("\nedge->weight %d endpoint->node#%d \n",e->weight, e->endpoint->node_num);
  if(e->endpoint->node_num == n->node_num)      
    {      
        tmpWeight += e->weight;
        if(tmpWeight<minTSP)  
        minTSP = tmpWeight ;
        printf("tmpWeight=%d\n",tmpWeight);
        tmpWeight = 0;
        return e->weight;                
    } 

   if(e->endpoint == NULL){       
       return 100001;
   }
   if(e->next != NULL)                                    
      brute(e->next, n);
    
    tmpWeight += e->weight;
   return e->weight+brute(e->endpoint->edges,n);   
}



int s(int a, int b){
  minTSP = 10000;
  tmpWeight = 0;
  int tmp = brute(get_node_by_id(a)->edges, get_node_by_id(b));
  if(tmp < minTSP)
     minTSP = tmp;
  //int m = brute(get_node_by_id(a)->edges, get_node_by_id(b));
  //m=+0;
  if(minTSP<10000)
    return minTSP; //printf("shortest path=%d\n", minTSP);
  else
   return -1;///printf("shortest path=%d\n", -1);
}

/* Arrange the N elements of ARRAY in random order.
   Only effective if N is much smaller than RAND_MAX;
   if this may not be the case, use a better random
   number generator. */
void shuffle(int *array, size_t n)
{
    if (n > 1) 
    {
        size_t i;
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}


void tsp(char *data, size_t size){
  int min = 10000, sum=0;
  int arr[size];
  for(int i=0;i<size;i++){
      arr[i] = data[i]-'0';
  }

  for(int i=0 ; i<20; i++){
     /////////////////////////////
     for(int j=0; j<size-1; j++){
    sum += s(arr[i], arr[i+1]);
     }
    if(sum != -1 && sum<min)
       min = sum;
    sum = 0; 
     ////////////////////////////

      shuffle(arr, size);
  }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include <stdlib.h>
#include "graph.h"

int dest_node_num, path_size;
pnode *path, *res_path ;
int p[100], idx, total_weight;
int brute(pedge e, pnode n);



//////////////////////////

int brute(pedge e, pnode n){  
    if(e->endpoint != NULL)
    printf("\nedge->weight %d endpoint->node#%d \n",e->weight, e->endpoint->node_num);
  if(e->endpoint->node_num == n->node_num)      
    {      
        tmpWeight += e->weight;
        if(tmpWeight<minTSP)  
        minTSP = tmpWeight ;
        printf("tmpWeight=%d\n",tmpWeight);
        tmpWeight = 0;
        return e->weight;                
    } 

   if(e->endpoint == NULL){       
       return 100001;
   }
   if(e->next != NULL)                                    
      brute(e->next, n);
    
    tmpWeight += e->weight;
   return e->weight+brute(e->endpoint->edges,n);   
}



int s(int a, int b){
  minTSP = 10000;
  tmpWeight = 0;
  int tmp = brute(get_node_by_id(a)->edges, get_node_by_id(b));
  if(tmp < minTSP)
     minTSP = tmp;
  //int m = brute(get_node_by_id(a)->edges, get_node_by_id(b));
  //m=+0;
  if(minTSP<10000)
    return minTSP; //printf("shortest path=%d\n", minTSP);
  else
   return -1;///printf("shortest path=%d\n", -1);
}

/* Arrange the N elements of ARRAY in random order.
   Only effective if N is much smaller than RAND_MAX;
   if this may not be the case, use a better random
   number generator. */
void shuffle(int *array, size_t n)
{
    if (n > 1) 
    {
        size_t i;
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}


void tsp(char *data, size_t size){
  int min = 10000, sum=0;
  int arr[size];
  for(int i=0;i<size;i++){
      arr[i] = data[i]-'0';
  }

  for(int i=0 ; i<20; i++){
     /////////////////////////////
     for(int j=0; j<size-1; j++){
    sum += s(arr[i], arr[i+1]);
     }
    if(sum != -1 && sum<min)
       min = sum;
    sum = 0; 
     ////////////////////////////

      shuffle(arr, size);
  }
}