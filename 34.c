#include <stdio.h>
#include <stdlib.h>
struct students{
int mathematics;
int programming;
int data_structure;
int algorithms;

};

int main()
{
   struct students A;
   struct students B;
   struct students C;
   struct students D;
   struct students E;
   struct students F;
   struct students G;
   struct students H;
   struct students J;
   struct students K;
   A.mathematics=80, A.programming=40, A.data_structure=40, A.algorithms=80;
   B.mathematics=80, B.programming=30, B.data_structure=40, B.algorithms=10;
   C.mathematics=80, C.programming=20, C.data_structure=30, C.algorithms=80;
   D.mathematics=80, D.programming=70, D.data_structure=40, D.algorithms=80;
   E.mathematics=80, E.programming=80, E.data_structure=80, E.algorithms=20;
   F.mathematics=80, F.programming=40, F.data_structure=40, F.algorithms=80;
   G.mathematics=80, G.programming=40, G.data_structure=40, G.algorithms=80;
   H.mathematics=80, H.programming=70, H.data_structure=60, H.algorithms=90;
   J.mathematics=80, J.programming=40, J.data_structure=90, J.algorithms=70;
   K.mathematics=80, K.programming=40, K.data_structure=40, K.algorithms=60;
   printf("enter your id");
   int mo,x;
   scanf("%d",&mo);
   switch(mo){
   case 10:
       printf("your degrees are %d %d %d %d", A.mathematics,A.programming,A.data_structure,A.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&A.mathematics,&A.programming,&A.data_structure,&A.algorithms);
       printf("your degrees are %d %d %d %d", A.mathematics,A.programming,A.data_structure,A.algorithms);}
       break;
   case 11:
       printf("your degrees are %d %d %d %d", B.mathematics,B.programming,B.data_structure,B.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&B.mathematics,&B.programming,&B.data_structure,&B.algorithms);
       printf("your degrees are %d %d %d %d", B.mathematics,B.programming,B.data_structure,B.algorithms);}
       break;
    case 12:
       printf("your degrees are %d %d %d %d", C.mathematics,C.programming,C.data_structure,C.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&C.mathematics,&C.programming,&C.data_structure,&C.algorithms);
       printf("your degrees are %d %d %d %d", C.mathematics,C.programming,C.data_structure,C.algorithms);}
       break;
   case 13:
       printf("your degrees are %d %d %d %d", D.mathematics,D.programming,D.data_structure,D.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&D.mathematics,&D.programming,&D.data_structure,&D.algorithms);
       printf("your degrees are %d %d %d %d", D.mathematics,D.programming,D.data_structure,D.algorithms);}
       break;
    case 14:
       printf("your degrees are %d %d %d %d", E.mathematics,E.programming,E.data_structure,E.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&E.mathematics,&E.programming,&E.data_structure,&E.algorithms);
       printf("your degrees are %d %d %d %d", E.mathematics,E.programming,E.data_structure,E.algorithms);}
       break;
    case 15:
       printf("your degrees are %d %d %d %d", F.mathematics,F.programming,F.data_structure,F.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&F.mathematics,&F.programming,&F.data_structure,&F.algorithms);
       printf("your degrees are %d %d %d %d", F.mathematics,F.programming,F.data_structure,F.algorithms);}
       break;
    case 16:
       printf("your degrees are %d %d %d %d", G.mathematics,G.programming,G.data_structure,G.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&G.mathematics,&G.programming,&G.data_structure,&G.algorithms);
       printf("your degrees are %d %d %d %d", G.mathematics,G.programming,G.data_structure,G.algorithms);}
       break;
    case 17:
       printf("your degrees are %d %d %d %d", H.mathematics,H.programming,H.data_structure,H.algorithms);
       printf("do you want to manipulate it j");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&H.mathematics,&H.programming,&H.data_structure,&H.algorithms);
       printf("your degrees are %d %d %d %d", H.mathematics,H.programming,H.data_structure,H.algorithms);}
       break;
   case 18:
       printf("your degrees are %d %d %d %d", J.mathematics,J.programming,J.data_structure,J.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&J.mathematics,&J.programming,&J.data_structure,&J.algorithms);
       printf("your degrees are %d %d %d %d", J.mathematics,J.programming,J.data_structure,J.algorithms);}
       break;
    case 19:
       printf("your degrees are %d %d %d %d", K.mathematics,K.programming,K.data_structure,K.algorithms);
       printf("do you want to manipulate it ");
       scanf("%d",&x);
       if(x==1){scanf("%d %d %d %d",&K.mathematics,&K.programming,&K.data_structure,&K.algorithms);
       printf("your degrees are %d %d %d %d", K.mathematics,K.programming,K.data_structure,K.algorithms);}
       break;
    default:
        printf("wrong id");
        break;












   }
   return 0;

}
