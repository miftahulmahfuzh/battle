/*
 * Ahmad Fajar Prasetiyo
 * Teknik Informatika
 * Institut Teknologi Bandung
 */

#include <iostream>


using namespace std;

int arr [16][16];
int maks;


void insialisasi();
void cariMax(int i,int j,int temp);

int main()
{

    int i,j;
    int t,n;
    int temp;
    cin>>t;
    cin>>n;

    while(t!=0){
        insialisasi();
        maks=0;
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                cin>>temp;
                arr[i][j]=temp;
            }
        }

        cariMax(0,0,0);
        cout<<maks<<endl;
        t--;
    }



    return 0;
}


void insialisasi(){
    int i,j;
    for(i=0;i<16;i++)
        for(j=0;j<16;j++)
            arr[i][j]=-1;

}

void cariMax(int i, int j, int temp){
    temp=temp+arr[i][j];
    if(arr[i+1][j]==-1){//basis
        if(maks<temp)
            maks=temp;

    }else{
        cariMax(i+1,j,temp);
        cariMax(i+1,j+1,temp);
    }
}
