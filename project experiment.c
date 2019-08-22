#include <stdio.h>
#include<conio.h>
int main()
{

    int m,i,j,month,x;
    //printf("\n\t\t\t\tBLOOD BANK MANAGEMENT SYSTEM\n\n");
    printf("\t\t\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4  WELCOME TO OUR BLOOD BANK MANAGEMENT SYSTEM\t\4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    printf("\n\n\n\t\t\t\tEnter the number of donors: ");
    scanf("%d",&x);
    printf("\t\t\t\tEnter the number of months: ");
    scanf("%d",&month);
    int Id[12][100],B[12][100];
    for(m=1;m<=month;m++) {
        printf("\n\t\t\t\tEnter data of Month-%d: \n",m);
        for(i=0;i<x;i++) {
            printf("\t\t\t\tPerson %d ID: ",i+1);
            scanf("%d",&Id[m][i]);
            printf("\t\t\t\tAmount of Blood: ");
            scanf("%d",&B[m][i]);
            printf("\n");
        }
    }

    while(1){
    system("cls");
    printf("\t\t\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4  WELCOME TO OUR BLOOD BANK MANAGEMENT SYSTEM\t\4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    int key,count=0,id,price,bags,total,c,p,k,l,flag;

    printf("\n\n\n\t\t\t\tWhat do you want to know?\n");
    printf("\t\t\t\t1. Check donor's ability?\n");
    printf("\t\t\t\t2. How many new donors in one month?\n");
    printf("\t\t\t\t3. Best donor of the month?\n");
    printf("\t\t\t\t4. Top 3 donates of the month?\n"); //sorting
    printf("\t\t\t\t5. Search for particular ID in one month?\n"); //searching
    printf("\t\t\t\t6. Want to buy blood?\n");
    printf("\t\t\t\t7. Exit\n");

    int s;
    printf("\n");
    printf("\t\t\t\tEnter your choice: ");
    scanf("\t\t\t\t%d",&s);
    printf("\n");
    switch(s) {
        case 1:
            {
            printf("\t\t\t\tEnter Donor's Id: ");
            scanf("%d",&id);
            for(k=month-1;k<=month;k++) {
                flag=0;
                for(l=0;l<x;l++) {
                    if(id==Id[k][l]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==0)
                printf("\t\t\t\tThe Donor bearing id %d has the ability to donate blood.\n",id);
            else if(flag==1)
                printf("\t\t\t\tThe Donor bearing id %d has not the ability to donate blood.\n",id);

            break;

            }
        case 2:
            {
            printf("\t\t\t\tEnter the month: ");
            int ND=0;
            scanf("%d",&month);
            for(i=0;i<x;i++) {
                flag=0;
                for(m=1;m<month;m++) {
                    for(j=0;j<x;j++) {
                        if(Id[month][i]==Id[m][j]) {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                        break;
                }
                if(flag==0)
                    ND=ND+1;
            }
            printf("\t\t\t\tThe number of new Donor is %d\n",ND);

            break;
            }

        case 3:
            printf("\t\t\t\tEnter the month: ");
            scanf("%d",&month);
            int max=B[month][0];
            int BestDonor;
            for(i=1;i<x;i++) {
                if(max<B[month][i])
                    max=B[month][i];
                    BestDonor=Id[month][i];
            }
            printf("\t\t\t\tBest donor of month %d is ID:%d\n",month,BestDonor);

            break;

        case 4:
            printf("\t\t\t\tEnter the month: ");
            scanf("%d",&month);
            int arr[100];
            for(i=0; i<x; i++){
                arr[i]=B[month][i];
            }
            for(i=1; i<x; i++){
                key=arr[i];
                j=i-1;
                while(j>=0 && key>arr[j] ){
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=key;
            }
            printf("\t\t\t\tTop 3 donates:\n");
            printf("\t\t\t\t");
            for(i=0; i<3; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");


            break;

        case 5:
            printf("\t\t\t\tEnter the month: ");
            scanf("%d",&month);
            printf("\t\t\t\tEnter the Id: ");
            scanf("%d",&id);
            for(i=0; i<x; i++){
                if(Id[month][i]==id)
                    count++;
            }
            if(count==1)
                printf("\t\t\t\tID %d found in month %d\n",id,month);
            else
                printf("\t\t\t\tID %d not found in month %d\n",id,month);


            break;

        case 6:
            {
            int coinList[100];
            int coins[6]={1,5,10,20,50,100};
            printf("\t\t\t\tEnter the price of per unit bags: ");
            scanf("%d",&price);
            printf("\t\t\t\tHow many bags do you want to buy? ");
            scanf("%d",&bags);
            total=price*bags;
            int t=total;
            p=0;
            printf("\t\t\t\tYour total amount is %d taka.\n",t);
            for(i=5;i>=0;i--) {
                if(total>0) {
                    c=total/coins[i];
                    if(c>=1){
                        for(j=0;j<c;j++) {
                            coinList[p++]=coins[i];
                        }
                    total=total%coins[i];
                    }
                }
            }
            printf("\t\t\t\tYour Note List is: \n");
            printf("\t\t\t\t");
            for(k=0;k<p;k++) {
                printf("%d ",coinList[k]);
            }
            printf("\n");

            break;
            }

        case 7:
            exit(0);

        default:
            printf("\t\t\t\tInvalid Input\n");
            break;
    }

    printf("\n\t\t\t\tPress any key to continue");

    getch();
    }
}

