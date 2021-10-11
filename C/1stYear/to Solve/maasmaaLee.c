#include <stdio.h>
#include <string.h>

int main(){
      int n;
      scanf("%d\n", &n);
      int iUnknown = n;
      int oUnknown = n - 1;
      char motion[20];
      scanf("%s", motion);
      int wrote = strlen(motion);
      for (size_t i = 0; i < wrote; i++)
      {
            if (motion[i] == 'O')
            {
                  oUnknown--;
            }
            if (motion[i] == 'I')
            {
                  iUnknown--;
            }

      }
      int facI = 1, facO = 1, facAll = 1;
      int unknowns = iUnknown + oUnknown;
      if (iUnknown == oUnknown + 1)
      {
            iUnknown--;
            
      }
      
      while (unknowns > 1)
      {
            facAll *= unknowns;
            unknowns--;
      }
      while (oUnknown > 1)
      {
            facO *= oUnknown;
            oUnknown--;
      }
      while (iUnknown > 1)
      {
            facI *= iUnknown;
            iUnknown--;
      }
      int answer = (facAll / (facI*facO));
      printf("%d", answer);
      
      
}