#include<iostream>
using namespace std;
void MergeArray(int A[],int M,int B[],int N)
{ int i=0;
  int j=0;
  int k=0;
  int C[22];
  while(i<M&&j<N)
  {if(A[i]<B[j])
    {C[k]=A[i];
     i++;
     k++;
    }
   else
   {C[k]=B[j];
    j++;
    k++;
   } }
   
   while(i<M)
   {C[k]=A[i];
    i++;
    k++;
   }
   while(j<N)
   {C[k]=B[j];
    j++;
    k++;  
   }
   cout<<"Merged Array is";
   for(int k=0;k<M+N;k++)
   {cout<<C[k]<<" ";}
}
void UnionArray(int A[],int M,int B[],int N)
{ int i=0;
  int j=0;
  int k=0;
  int C[22];
  while(i<M&&j<N)
  {if(A[i]<B[j])
    {C[k]=A[i];
     i++;
     k++;
    }
   else if(A[i]>B[j])
   {C[k]=B[j];
    j++;
    k++;
   }
   else
   {C[k]=A[i];
    i++;
    j++;
    k++;
   }
   
    }
   
   while(i<M)
   {C[k]=A[i];
    i++;
    k++;
   }
   while(j<N)
   {C[k]=B[j];
    j++;
    k++;                                                        
   }
   cout<<"Union Array is";
   for(int i=0;i<k;i++)
   {cout<<C[i]<<" ";}
}
void IntArray(int A[],int M,int B[],int N)
{ int i=0;
  int j=0;
  int k=0;
  int C[22];
  while(i<M&&j<N)
  {if(A[i]<B[j])
    {i++;
    }
   else if(A[i]>B[j])
   {j++;} 
   else
   {
    C[k]=A[i];
    i++;
    j++;
    k++;
   }
  }
   cout<<"Intersection Array is";
   for(int i=0;i<k;i++)
   {cout<<C[i]<<" ";}

}
void SetDiff(int A[],int M,int B[],int N)
{ int i=0;
  int j=0;
  int k=0;
  int C[22];
  while(i<M&&j<N)
  {if(A[i]<B[j])
    {C[k]=A[i];
     i++;
     k++;
    }
   else if(A[i]>B[j])
   {j++;
   } 
   else
   { 
    i++;
    j++;
   }
  }
  while(i<M)
  {
    C[k]=A[i];
    i++;
    k++;
  }
  
   cout<<"Set differnce Array is";
   for(int i=0;i<k;i++)
   {cout<<C[i]<<" ";}
   
}
void SymDiff(int A[],int M,int B[],int N)
{ int i=0;
  int j=0;
  int k=0;
  int C[22];
  while(i<M&&j<N)
  {if(A[i]<B[j])
    {C[k]=A[i];
     i++;
     k++;
    }
   else if(A[i]>B[j])
   {C[k]=B[j];
    j++;
    k++;
   } 
   else
   { 
    i++;
    j++;
   }
  }
  while(i<M)
  {
    C[k]=A[i];
    i++;
    k++;
  }
  while(j<N)
  {
    C[k]=B[j];
    j++;
    k++;
  }
  
   cout<<"Symmetric differnce Array is";
   for(int i=0;i<k;i++)
   {cout<<C[i]<<" ";}
   
}

int main()
{ int A[10]={1,3,5,7,9,13,14,17,18,27};
  int B[12]={2,4,6,8,9,12,16,17,20,27,31,32};
  MergeArray(A,10,B,12);
  UnionArray(A,10,B,12);
  IntArray(A,10,B,12);
  SetDiff(A,10,B,12);
  SymDiff(A,10,B,12);
  return 0;
}