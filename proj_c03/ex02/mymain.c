#include <stdio.h> 
#include <string.h> 
  
// Driver code 
int main() 
{ 
    // Define a temporary variable 
    char example[100]; 
  
    // Copy the first string into 
    // the variable 
    strcpy(example, "Geeks"); 
  
    // Concatenate this string 
    // to the end of the first one 
    strcat(example, "ForGeeks"); 
  
    // Display the concatenated strings 
    printf("%s\n", example); 
  
    return 0; 
}
