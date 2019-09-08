//longest_common_prefix_string.c
int main()

{
    
int n,i,j,k;

char a[20],r[20];
    
scanf("%d",&n);
   
for(i=0;i<n;i++)
    
{
    
 printf("enter string %d:",i+1);
    
 scanf("%s",a);
     if(i==0)
    
 {
       
  strcpy(r,a);
       
  continue;
    
 }
    
 j=0;
    
 while(a[j]!='\0')
    
 {
       
  if(a[j]!=r[j])
      
   {
            
     for(k=j;k<strlen(r)-1;k++)
         
      r[k]='\0';
    
     break;
    
    }
      
   j++;

 }
    
}
  
  printf("%s",r);

 
   return 0;

}
