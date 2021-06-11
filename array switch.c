//////////////////////////////////////
/*Input:how many no to enter in an array
5
*Output: 
1.create
2.display
3 search
4 insert
5.delete
6.sorting
7.copy array
8.Reverse
 enter your choice1
enter the elements of array......
10
20
30
40
50

 do you want to continue press 11

 enter your choice2
elements of array are
   10   20   30   40   50
 do you want to continue press 11

 enter your choice3

 1.linear search
2.binary search
1
 enter the search element
30
30 element found at 2 index
30 element found at 1 times

 do you want to continue press 11

 enter your choice4
enter the element and new position of element
30
3
elements of array are
   10   20   30   30   40   50
 do you want to continue press 11

 enter your choice4
enter the element and new position of element
35
5
elements of array are
   10   20   30   30   35   40   50
 do you want to continue press 11

 enter your choice5
enter the element and position of element to be deleted
30
3
elements of array are
   10   20   30   35   40   50
 do you want to continue press 11

 enter your choice8

reverse an array
   50   40   35   30   20   10
 do you want to continue press 12
*Description:Array Operations:1.create
                              2.Display
                              3.Search
                              4.Insert
                              5.Delete
                              6.Sorting
                              7.Copy 
                              8.Reverse using switch case;
*Date: 11-june-2021
*Author: Shruti Nahar*/ 
/////////////////////////////////////////#include <stdio.h>
#define max 20
int main()
{
    int i,n,arr[max],j,temp,ch,s,ele,pos,mid;
    int copy[10];
    int flag=0;
    printf("1.create \n2.display \n3 search \n4 insert \n5.delete \n6.sorting\n7.copy array\n8.Reverse");
     printf("\nhow many no to enter in an array\n");
     scanf("%d",&n);
    do
    {
    printf("\n enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("enter the elements of array......\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    break;
    case 2:
    printf("elements of array are \n");
    for(i=0;i<n;i++)
    {

        printf("%5d",arr[i]);
    }
    break;
    case 3:
        printf("\n 1.linear search \n2.binary search\n");
        scanf("%d",&ch);
        if(ch==1)
        {
        printf(" enter the search element\n");
        scanf("%d",&s);
        for(i=0;i<n;i++)    //i=0 while(i<n && s!=arr[i]){ i++; } if(i<n) {  print("element found at %d",i+1,"pos"); } else { print("not found"); }
            {
                if(arr[i]==s)
                {
                     flag=flag+1;
                      printf("%d element found at %d index\n",s,i);
                }
            }
            if(flag>0)
            {
                 printf("%d element found at %d times\n",s,flag);
            }
        }
        if(ch==2)
        {
             printf(" enter the search element\n");
             scanf("%d",&s);
             printf("enter the elements of array");
             for(i=0;i<n;i++)
               {
                    scanf("%d",&arr[i]);
               }
               int lb=0,ub=n-1;
               mid=(lb+ub)/2;
               while(lb<=ub)
                {
                    if(arr[mid]==s)
                    {
                        printf(" %d element is found  at %d position",arr[mid],mid+1);
                        break;
                    }
        else if(arr[mid]>s)
        {
            ub=mid-1;
            mid=(lb+ub)/2;
        }
        else if(arr[mid]<s)
        {
            lb=mid+1;
            mid=(lb+ub)/2;
        }
        else
        {
            printf("element not present in array");
        }
    }
}

    break;
    case 4:
        printf("enter the element and new position of element\n");
        scanf("%d %d",&ele,&pos);
        for(i=n-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=ele;
        n++;
        printf("elements of array are\n");
        for(i=0;i<n;i++)
        {
            printf("%5d",arr[i]);
        }
    break;
    case 5:
        printf("enter the element and position of element to be deleted \n");
        scanf("%d %d",&ele,&pos);
        for(i=pos-1;i<=n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("elements of array are\n");
        for(i=0;i<n;i++)
        {
            printf("%5d",arr[i]);
        }
        break;

    case 6:
    printf("enter the elements of array......\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements of array are \n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }

        }
    }
    printf("\nsorted data in asecending order \n");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n sorted element in desecending order\n");
    for(i=(n-1);i>=0;i--)
    {
        printf("%5d",arr[i]);
    }
    break;
    case 7:
        printf("\noriginal array elements are \n");
        for(i=0;i<n;i++)
        {
            printf("%5d",arr[i]);
        }
        printf("\ncopied array elements are \n");
        for(i=0;i<n;i++)
        {
            copy[i]=arr[i];
            printf("%5d",copy[i]);
        }
        break;
    case 8:
        printf("\nreverse an array \n");
        for(i=n-1;i>=0;i--)
        {
            printf("%5d",arr[i]);
        }
        break;
    default:
        printf("invalid choice");
    }
        printf("\n do you want to continue press 1");
        scanf("%d",&ch);
    }while(ch==1);
}


