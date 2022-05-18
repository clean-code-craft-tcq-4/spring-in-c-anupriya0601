#include "stats.h"

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
     s.max = numberset[0];
     s.min = numberset[0];    
  }  
      /* If there are more than one elements, then initialize min
      and max*/
    if (numberset[0] > numberset[1]) 
  {
      s.max = numberset[0];
      s.min = numberset[1];
  } 
  else
  {
      s.max = numberset[1];
      s.min = numberset[0];
  }  
    for (i = 2; i<setlength; i++)
  {
    if (numberset[i] >  s.max)     
      s.max = numberset[i];
   
    else if (numberset[i] <  minmax.min)     
      s.min = numberset[i];
  }
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
