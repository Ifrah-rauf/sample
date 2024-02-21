# include<stdio.h>
# include<stdlib.h>
/* struct stack{
    int top; int *arr; int size;
};

int isFull(struct stack *ptr){
    if(ptr->top==-1)
        return 1;
    else{    
        return 0;}
}
int isEmpty(struct stack *ptr){
    if(ptr->top==ptr->size-1)
        return 0;
    else{    
        return 1;}
}

int main(){
    struct stack *sp= (struct stack *)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    printf("Is full? %d\n",isFull(sp));
    printf("Is empty? %d\n",isEmpty(sp));

} */


/*
int check(int);
int main(){   //variable.n   variable.name    variable.bal
    struct acc{
        int n; char name[10]; int bal;
    }a[2];int c;int am;
    printf("Welcome to family Bank\n");
    for(int i=0;i<2;i++){
        printf("Enter your name: ");
        scanf("%s",a[i].name);
        printf("Enter your account number: ");
        scanf("%d",&a[i].n);
        printf("Enter your balance: ");
        scanf("%d",&a[i].bal);
    }
    for(int i=0;i<2;i++){
        if(a[i].bal<1000){
            printf("Balance of %s is less than 1000\n",a[i].name);
            exit(0);
        }
        else{
            printf("Balance of %s can be withdrawn. Do you want to withdraw? (0/1)",a[i].name);
            scanf("%d",&c);
            if(c==1){
                printf("Enter amount: ");scanf("%d",&am);
                printf("You have %d left in account.\n",(a[i].bal)-am);
            }
        exit(0);
        }
    }
}
*/
    

/*int main(){
    char word[14]="Challenging", word2[3]="Hi";
    char w;
    puts("What is your name?");w=getchar();puts("Hi ");putchar(w);
} */
    

/*int main(){
    FILE *fp; 
    char ch; int c=0,s=0,t=0,n=0;char str[25];
    printf("Enter file name: ");
    scanf("%s",str);
    fp=fopen(str,"r");
    while(1){
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        c++;
        if(ch==' ')
            s++;
        if(ch=='\n')
            n++;
        if(ch=='\t')
            t++;
    }
    fclose(fp);
    printf("Number of Characters: %d\n",c);
    printf("Number of blanks: %d\n",s);
    printf("Number of newline: %d\n",n);
    printf("Number of tab: %d\n",t);
}
*/

//the below solution's logic is correct; j=j+1 doesn't work.
/*int main()
{
    int i,j=1,a,b;
    int mat[3][2]={{1,2},{3,4},{4,5}};
    for(i=0;i<=2;i++){
        a=mat[i][1];b=mat[j][0];j=j+1;
        printf("a:%d b:%d \n",a,b);

        if(a<b){
            printf("The matrix at row %d is accurate.\n",i);
        }
        else{printf("The matrix at row %d is inaccurate.\n",i);}       
    }

        
}*/

int main(int argc, char *argv[]){
    FILE *fs,*ft;
    char ch;
    if(argc!=3){
        printf("inaccurate arguements passed\n");
    }
    else
        fs=fopen(argv[1],"r");
    if(fs==NULL){
        printf("Cannot open source file.\n");exit(1);
    }
    else
        ft=fopen(argv[2],"w");
    if(ft==NULL){
        printf("CAnnot open target file.\n");fclose(fs);exit(2);
    }
    else{
        while((ch=fgetc(fs))!=EOF)
            fputc(ch,ft);
    }
    fclose(ft);fclose(fs);


}

