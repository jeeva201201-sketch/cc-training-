#include<stdio.h>
#include<string.h>
int main()
 
{ 
 
char tot[100][20]; 
 
char a[100],temp[100]; 
int i=0,j; 
FILE *p; 
p=fopen("input1.txt","r"); 
 
fscanf(p,"%s",a); 
 
strcpy(tot[i],a); 
strcpy(temp,"Null"); 
printf("\nLexeme\tToken\n\n"); 
i=1; 
while(strcmp(a,"END")!=0) 
 
{ 
 
if((strcmp(a,";")==0)||(strcmp(a,"<")==0)||(strcmp(a,"{")==0)||(strcmp(a,"(")==0)||(strcmp(a," )")== 0)||(strcmp(a,"}")==0)||(strcmp(a,"#")==0)||(strcmp(a,">")==0)||(strcmp(a,",")==0)||(strcmp(a, "&")==0)) 
 
{ 
 
printf ("\n%s\t", a); 
printf("Special Character\t"); 
} 
 
else if((strcmp(temp,"int")==0)||(strcmp(temp,"float")==0)||(strcmp(temp,"char")==0)) 
 
{ 
 
printf("\n%s\t",a); 
printf("variable\t"); 
} 
else 
if((strcmp(a,"scanf")==0)||(strcmp(a,"printf")==0)||(strcmp(a,"main")==0)||(strcmp(a,"void") 0)) 
 
{ 
printf("\n%s\t",a); 
printf("keywords\t"); 
} 
 
strcpy(temp,a); 
strcpy(tot[i],a); 
i++; 
fscanf(p,"%s",a); 
 
} 
 
printf("\t%d",i); 
printf("\n%s",tot[i-1]); 
}