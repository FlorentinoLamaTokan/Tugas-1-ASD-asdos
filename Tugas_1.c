#include<stdio.h>

int main()
{
    int input;
    int i, j, k;
    int a=1;
        printf("================\n");
        printf("Tugas Quiz Asdos\n");
        printf("================\n");
        printf("1. level 1\n");
        printf("2. level 2\n");
        printf("3. level 3\n");
        printf("4. exit\n");
        printf("================\n");
    printf("masukan pilihan : ");
    scanf("%d", &input);

    while(input!=4)
    {
        switch(input)
    {

    case 1:
        system("cls");
        printf("masukkan angka : ");
        scanf("%d", &input);

        for(i=1; i<=input; i++){
            for(j=1; j<=i; j++){

            int a= i+j-2;
            if(a<10){
                printf("%d  ", a);
            }
            else
            {
                printf("%d ", a);
            }

            }printf("\n");

        }

        break;
    case 2:
                system("cls");
        printf("masukkan angka : ");
        scanf("%d", &input);

        for(i=1; i<=input; i++){
            for(j=1; j<=i; j++){

            int a= i*j;
            if(a<10){
                printf("%d  ", a);
            }
            else
            {
                printf("%d ", a);
            }

            }printf("\n");

        }
        break;

    case 3:

        system("cls");
        printf("masukkan angka : ");
        scanf("%d", &input);
        for(i=1; i<=input+1; i++){
            for(j=i; j<=input;j++){
                printf("_");
            }
            for(k=1; k<=2*i-1; k++){
                if(k<i)
                    printf("%d", a++);
                else if(k==i)
                    printf("%d", a);
                else
                    printf("%d", --a);

            }printf("\n");

        }
        for(i=input; i>=1; i--){
            for(j=input; j>=i; j--){
                printf(" ");
            }
            for(k=1; k<=2*i-1; k++){
                if(k<i)
                    printf("%d", a++);
                else if(k == i)
                    printf("%d", a);
                else
                    printf("%d", --a);
            }
            printf("\n");
        }

        break;
    }
}


}

