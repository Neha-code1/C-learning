#include<iostream>

using namespace std;

int main(){

int arr[5][7];

int i,j;

// Changed 4 to 5 because the array has 5 rows
for(i=0;i<5;i++){

    for(j=0;j<7;j++){

        printf("Enter element of row %d column %d: ",i+1,j+1);
        scanf("%d",&arr[i][j]);
        printf("\n");

    }
}

// Changed 4 to 5 because all 5 rows should be printed
for(i=0;i<5;i++){

    for(j=0;j<7;j++){

        printf("Element of row %d column %d = %d",i+1,j+1,arr[i][j]);
        printf("\n");

    }
}

int secm;

// Changed max to largest because you use largest later
int largest = secm = arr[0][0];

for(i=0;i<5;i++){

    for(j=0;j<7;j++){

        if(arr[i][j]>largest){

            largest=arr[i][j];

        }

    }

}

for(i=0;i<5;i++){

    for(j=0;j<7;j++){

        // Changed secm<largest to arr[i][j]<largest
        if(arr[i][j]>secm && arr[i][j]<largest){

            secm=arr[i][j];

        }

    }

}

// Changed max to largest
cout<<"Largest value is\n"<<largest<<endl;

cout<<"Second largest value is\n"<<secm<<endl;

int row,col;

cout<<"Enter the row value\n";
cin>>row;

cout<<"Enter the column value\n";
cin>>col;

// Loop kept as per your version
for(int i=row;i<5;i++){

    for(int j=col;j<7;j++){

        if(j==6){

            if(i!=4){

                cout<<"Next date "<<arr[i+1][0];

            }

            else{

                cout<<"NO next date";

            }

        }

        else{

            cout<<"Next date: "<<arr[i][j+1];

        }

        break;
    }
    break;
}

for(int i=row;i<5;i++){

    for(int j=col;j<7;j++){

        if(j==0){

            if(i!=0){

                cout<<"Previous date "<<arr[i-1][6];

            }

            else{

                cout<<"NO previous date";

            }

        }

        else{

            cout<<"Previous date: "<<arr[i][j-1];

        }

        break;
    }
    break;
}

// Declared missing variables
int roww,colum;

cout<<"\nEnter the row value to find next week\n";
cin>>roww;

cout<<"Enter the column value to find next week\n";
cin>>colum;

// Changed row to roww
if(roww+1<5){

    // Changed arr[roww][colum] to arr[roww+1][colum]
    if(arr[roww+1][colum]!=0){

        // Changed i and j to roww and colum
        cout<<"Next week's same weekday: "<<arr[roww+1][colum];

    }

    else{

        cout<<"No next week available";

    }

}

else{

    cout<<"No next week available";

}

return 0;

}