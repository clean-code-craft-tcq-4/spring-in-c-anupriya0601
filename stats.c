#include "stats.h"

struct pair getMinMax(int arr[], int n)
{
  struct pair minmax;    
  int i;
   
  /*If there is only one element then return it as min and max both*/
  if (n == 1)
  {
     minmax.max = arr[0];
     minmax.min = arr[0];    
     return minmax;
  }   
 
  /* If there are more than one elements, then initialize min
      and max*/
  if (arr[0] > arr[1]) 
  {
      minmax.max = arr[0];
      minmax.min = arr[1];
  } 
  else
  {
      minmax.max = arr[1];
      minmax.min = arr[0];
  }   
 
  for (i = 2; i<n; i++)
  {
    if (arr[i] >  minmax.max)     
      minmax.max = arr[i];
   
    else if (arr[i] <  minmax.min)     
      minmax.min = arr[i];
  }
   
  return minmax;
}
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int i,sum;
    for(i=0; i<setlength;i++) {
        sum += numberset[i];
    }
    s.average = sum / setlength;
    
    /*If there is only one element then return it as min and max both*/
    if (setlength == 1)
  {
     s.max = arr[0];
     s.min = arr[0];    
  }  
      /* If there are more than one elements, then initialize min
      and max*/
    if (numberset[0] > numberset[1]) 
  {
      s.max = arr[0];
      s.min = arr[1];
  } 
  else
  {
      s.max = arr[1];
      s.min = arr[0];
  }  
    for (i = 2; i<setlength; i++)
  {
    if (numberset[i] >  s.max)     
      s.max = arr[i];
   
    else if (numberset[i] <  minmax.min)     
      s.min = arr[i];
  }
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
