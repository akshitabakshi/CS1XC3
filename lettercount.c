#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char mainbuffer[1024];
    int i = 0;
    int j;
    char input;
    int Count = 0;
    int k;
    float percentage;
    int c;
    int r;
    int min;
    //inputting the text
    printf("Enter text for analysis: ");
    //storing it in the buffer
    while (1)
    {
        input = getchar();
        if (input == '\n')
        {
            mainbuffer[i] = '\0';
            break;
        }
        else mainbuffer[i] = input;
        i++;
        
        
    }
    int letters[100] = {0};//to store occurrences of letters
    int letters2[100] = {0};//to find most frequent and least frequent character
    
    
    for(j = 0; j < strlen(mainbuffer); j++)
    { //capital
      if (mainbuffer[j]>=65 && mainbuffer[j]<=90) //stores occurrences of letters in letters array
      {   int p = mainbuffer[j];
          
          letters[p] += 1;
          
      };
      //small
  	 if (mainbuffer[j]>=97 && mainbuffer[j]<=122) 
      {   int k = mainbuffer[j];
          
          letters[k-32] += 1;
          
      };
 	    
 		
	}
	
  printf("\nLetter Analysis Complete!");
  printf("\n\nLetter\t Occurrences\t Percentage\n");
  printf("***********************************************************\n");
  for(int m = 65; m <= 90; m++)
  {   
      
      percentage = ((float)letters[m]/ (float)(strlen(mainbuffer))) * 100;
      printf("%-10c %-15d %-15.2f",m,letters[m],percentage );
      printf("\n");
  }
    for (int y=65 ; y < 91; y++) {     
        letters2[y] = letters[y];//copying elements of letters to letters2     
    }      
    //largest
    for (int s = 65; s < 91; ++s) {
    if (letters2[0] < letters2[s]) {
      letters2[0] = letters2[s];
      c = s;
      
    }
  }
    int largest = letters2[0];
      
        
    //Smallest  
    for (int n = 65; n< 91; ++n) {     
        //Compare elements of array with min 
        if(letters2[n] == 0)    
           {min = letters2[n];  
           r = n;
           break;}
        else if (letters2[n] < c)    
           {min = letters2[n];  
           r = n;}
    }      
    
	
	printf("\n");
	printf("The most frequently occuring character is: %c.\n",c);
	printf("The least frequently occuring character is: %c.\n",r);
	
	
    return 0;
}



