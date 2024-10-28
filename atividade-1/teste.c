#include <stdio.h> 
int main() { 
char a[100]; 
int i; 
for (i = 0; i < 20; i++) 
scanf("%c", &a[i]); 
for (i = 0; i < 20; i++) 
printf("%2c", a[i]); 
} 