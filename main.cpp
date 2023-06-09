/* : Обхождане на масив и изкарване на броя на четните числа, които са по-големи от 100 и по-малки от 10 000.*/
/*
#include <iostream>
#define N 5

using namespace std;

int main()
{
    int arr[]={240,400,4,10100,300,200};
    int lenght = sizeof(arr)/sizeof(int);
    int i, count=0;
    for(i=0; i<lenght;i++){
        if(arr[i]%2==0 && (arr[i]>100 && arr[i]<10000)){
           count++;
        }
    }
    cout<< "Broi = " << count;

    return 0;
}
*/



/*: Намиране на най - голям общ делител на масив от числа,
	след което да се сортират. */

/*
#include <iostream>
using namespace std;

int evk(int m,int n){
    while(n!=0){
        int rem = m%n;
        m=n;
        n=rem;
    }
    return m;
}
int main()
{
    int arr[5]={18,6,27,33,66};
    int i;
    int nod=arr[0];
    for(i=0; i<5; i++){
        nod = evk(nod,arr[i]);
    }
    cout<< nod;
    return 0;

}
*/



/* 	Задача: Даден е масив A, с n на брой положителни целочислени елементи.
	     Да се намери най-големият общ делител, чрез алгоритъм на Евклид
	     на максималния четен и минималния нечетен елемент на масива.*/
/*
#include <iostream>

using namespace std ;

int evk(int maxEven, int minEven){
    while(minEven!=0){
        int temp = maxEven% minEven;
        maxEven = minEven;
        minEven = temp;
    }
    return maxEven;

}
int main()
{
    int A[10]={23, 41, 52, 66, 184, 10, 18, 24, 99, 166};
    int minEven=A[0];
    int maxEven = A[0];
    int i;
    for(i=0;i<sizeof(A)/sizeof(int);i++){
        if(A[i]%2==0 && A[i]>maxEven){
            maxEven = A[i];
        }
        if(A[i]%2!=0 && A[i]<minEven){
            minEven = A[i];
        }
    }
    cout<< evk(maxEven, minEven);

    return 0;
}
*/

/* Дадени са два масива (A и B), с n на брой положителни целочислени елементи,
     всеки един от тях. Да се прегледат всички двойки от елементи с еднакви индекси от

     двата масива, като по-големият от двата елемента да се записва в трети масив C. В
случай, че сумата на елементите на масива C е трицифрено число, да се изведе последната ѝ цифра.*/


/*

#include <iostream>
#define N 5

using namespace std;

int main()
{
    int A[5]={30,5,8,1,9};
    int B[5]={1,6,90,3,4};
    int C[5];
    int i=0;
    int sum =0, temp=0;
    for(i=0; i<5; i++){
        if(A[i]>=B[i]){
            C[i]=A[i];
        }else{
            C[i]=B[i];
        }
        sum+=C[i];
    }
    for(i=0;i<5;i++){
        cout<< C[i] << " ";
    }
    temp =sum;
    for(i=0;i<2;i++){
        temp = temp/10;
    }
    if(temp<10 && temp>0){
        cout<< "\n" << sum%10;
    }


    return 0;
}
*/

/*	Задача: Даден е двумерен масив A[n x n]. Да се генерира едномерен масив B със сортирани:
	минималните по стойност елементи от съответните редове на масив A, сумата на
	елементите по главният диагонал на масив A и броят на отрицателните елементи
	по вторичният диагонал на масив А */

/*
#include <iostream>
using namespace std;
#define N 3
int main()
{
    int A[N][N],B[N+2];
    int i,j;
    for(i = 0;i <N; i++){
        for(j=0;j<N;j++){
            cin >> A[i][j];
        }
    }
    for(i=0;i<N;i++){
        int minEl=A[i][0];
        for(j=0; j<N;j++){
            if(minEl>A[i][j]){
                minEl = A[i][j];
            }
            B[i]=minEl;

        }


    }
   for(i=0;i<N;i++){
        for(j=0; j<N;j++){
            if(i==j){
                B[N]= B[N]+A[i][j];
            }

        }

    }

    for(i=0;i<N;i++){

        for(j=0; j<N;j++){

            if(j==N-i-1){
                if(A[i][j]<0){
                    B[N+1]=B[N+1]+1;
                }else{
                    B[N+1]=0;
                }
            }
        }

    }
    int item;
    for(i=0;i< 5; i++){
        for(j=5-1;j>i;j--){
            if(B[j-1]>B[j]){
                item = B[j-1];
                B[j-1]=B[j];
                B[j]=item;
            }
        }
    }
    for(i=0; i<5;i++){
        cout<< B[i] << " " ;
    }

    return 0;

}

*/



/*	Задача: Даден е двумерен масив A с n^2 на брой елементи.
 Да се сортират и изведат във възходящ ред сумите на елементите,
  разположени по редовете на масив А. */
/*
#include <iostream>
#define N 2
using namespace std;


int main()
{
    int A[N][N], i, j;
    int sumArr[N];
    for(i=0;i<N;i++){
        for(j=0; j<N;j++){
            cin>> A[i][j];
        }
    }
    for(i=0;i<N;i++){
        int sum=0;
        for(j=0;j<N;j++){
            sum = sum+ A[i][j];
        }
        sumArr[i]=sum;

    }
    int item=0;
    for(i=0;i<N;i++){
        for(j=N-1;j>i;j--){
            if(sumArr[j-1]> sumArr[j]){
                item=sumArr[j-1];
                sumArr[j-1]=sumArr[j];
                sumArr[j]=item;
            }
        }
    }

    for(i=0;i<N;i++){
         cout<< sumArr[i] << " ";
    }

    return 0;
}
*/



/*	Задача: Дадена е матрица с числа. Да се намери броят на положителни, отрицателни числа и нули,
 средно аритметично от положителни числа, средно
	аритметично от отрицателни числа, средно аритметично от елементите в главен диагонал,
	 средно аритметично от елементите във вторичен диагонал.*/

/*
#include <iostream>
#define N 2
using namespace std;

int main()
{
    int arr[N][N], i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cin>> arr[i][j];
        }
    }
    int po=0, nul;
    float sumPo=0;
    int neg=0;
    float sumNeg=0;
    float sum1=0,sum2=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(arr[i][j]>0){
                po++;
                sumPo+=arr[i][j];
            }else if(arr[i][j]<0){
                neg++;
                sumNeg+=arr[i][j];
            }else{
                nul++;
            }

        }
    }

     for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(j==N-i-1){
                sum2+=arr[i][j];
            }
        }
    }
    cout<< "broi polojitelni= " << po << " \n";
    cout<< "broi otricatelni= " << neg <<" \n";
    cout<< "broi nuli= " << nul << " \n";
    cout<< "Sredno aritmetichno polojitelni= " << sumPo/po << " \n";
    cout<< "Sredno aritmetichno otricatelni= " << sumNeg/neg << " \n";
    cout<< "Sredno aritmetichno diagonal= " << sum1/N << " \n";
    cout<< "Sredno aritmetichno vtorichen diagonal= " << sum2/N << " \n";
    return 0;
}

*/
/*suma ot elementite na stulbpvete
#include <iostream>
#define N 2
using namespace std;
*/
/*
int main()
{
    int arr[N][N], i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cin>> arr[i][j];
        }
    }
    for(j=0;j<N;j++){
         int s=0;
        for(i=0;i<N;i++){
            s+=arr[i][j];
        }
        cout<< "s= " <<s <<" ";
    }
    return 0;

}

*/


/* vsichki vuzmojni dvoiki
#include <iostream>
#define N 3
using namespace std;

int main()
{
	int a[N], i, j;
	for(i=0; i<N; i++)
		cin >> a[i];
	for(i=0; i<N; i++)
		for(j=i+1; j<N; j++)
			cout<< a[i]<< " " << a[j] <<"\n";
	return 0;
}
*/


/* Даден е едномерен масив. Да се намери сумата от всички най-големи общи делители на всички съседни двойки от масива.
	При условие, че масивът е възходящ, но има елемент, който не отговаря на това условие.
*/
/*
#include <iostream>
#define N 3
using namespace std;
int evk(int m, int n ){
    while(n!=0){
        int rem = m%n;
        m=n;
        n=rem;
    }
    return m;

}
int main()
{
	int a[5]={1,2,3,5,4};
	int sum=0;
	for(int i=0; i<5-1; i++){
        sum+=evk(a[i],a[i+1]);
	}
	cout<< sum;

	return 0;
}
*/


/*
#include <iostream>
#define N 3
using namespace std;
int evk(int m, int n ){
    while(n!=0){
        int rem = m%n;
        m=n;
        n=rem;
    }
    return m;

}
int main()
{
	int a[5]={1,8,4,5,4};
	int sum=0;
	int b[4];
	for(int i=0; i<5-1; i++){
        b[i]=evk(a[i],a[i+1]);
	}
	for(int i = 0;i<4;i++){
        cout<<b[i] << " ";
	}

	return 0;
}
*/


/*
#include <iostream>

using namespace std;
int nod(int m, int n){
    while(n!=0){
        int rem = m%n;
        m=n;
        n=rem;
    }
    return m;
}

int main()
{
    int n;
    cout<< "Enter n \n";
    cin>> n;
    int A[n],B[n],k=0;
    int i=0,j=0;
    cout<< "Enter elements of A\n";
    for(i=0;i<n;i++){
        cin>> A[i];
    }
    cout<< "Enter elements of B\n";
    for(i=0;i<n;i++){
        cin>> B[i];
    }
    for(i=0;i<n;i++){
        if(A[i]!=B[i]){
            k+=2;
        }

    }
    int C[k];
    int D[k-1];
    for(i=0; i<n; i++){
        if(A[i]!=B[i]){

            C[j]=A[i];
            j++;
            C[j]=B[i];
            j++;

        }
    }
    cout<< "Elements of C: \n";
    for(i=0;i<k;i++){
        cout<< C[i] << " ";
    }
    int delitel;
    for(i=0;i<k-1;i++){
        delitel=nod(C[i],C[i+1]);
        D[i]=delitel;

    }
    cout<< "\nElements of D: \n";
    for(i=0;i<k-1;i++){
        cout<< D[i] << " ";
    }

    return 0;
}
*/


/*
#include <iostream>

using namespace std;
/* nai golqm obsht delitel - funkciq*/
/*
int nod(int m, int n){
    while(n!=0){
        int rem = m%n;
        m=n;
        n=rem;
    }
    return m;
}

int main()
{
    int n;
    cout<< "Enter n \n";
    cin>> n;
    int A[n],B[n],k=0;
    int i=0,j=0;
    cout<< "Enter elements of A\n";
    for(i=0;i<n;i++){
        cin>> A[i];
    }
    cout<< "Enter elements of B\n";
    for(i=0;i<n;i++){
        cin>> B[i];
    }

    /* namirame duljinata na msiv C*/

    /*
    for(i=0;i<n;i++){
        if(A[i]!=B[i]){
            k+=2;
        }

    }
    /* zapisvame elementite s ednakvi indeksi i razlichni stoinosti ot davata masiva v C*/
    /*
    int C[k];
    int D[k-1];
    for(i=0; i<n; i++){
        if(A[i]!=B[i]){

            C[j]=A[i];
            j++;
            C[j]=B[i];
            j++;

        }
    }

    /* printirame */
    /*

    cout<< "Elements of C: \n";
    for(i=0;i<k;i++){
        cout<< C[i] << " ";
    }

    /* zapisvame nai golemite obshti deliteli v D */


    /*
    int delitel;
    for(i=0;i<k-1;i++){
        delitel=nod(C[i],C[i+1]);
        D[i]=delitel;

    }
    cout<< "\nElements of D: \n";
    for(i=0;i<k-1;i++){
        cout<< D[i] << " ";
    }

    return 0;
}
*/






#include <iostream>

using namespace std;


int main()
{
    int n;
    cout<< "Enter n \n";
    cin>> n;
    int A[n][n], B[n+n], C[n+n];
    cout<< "Enter elements of A: \n";
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>> A[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<< A[i][j] << " ";
        }
        cout<< "\n";
    }
    cout<< "\n";


    /* dobavqme elementite ot glavniq diagonal */

     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                B[i]=A[i][j];
            }
        }
    }

    /* dobavqme elementite ot vtorichniq diagonal */

     int current = n;
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==n-i-1){
                B[current]=A[i][j];
                current++;
            }
        }
    }


    /* zapisvame masiva B v masiva C */


     for(i=0;i< 2*n;i++){
        for(j=0;j< 2*n;j++){
            C[i]=B[i];
        }
    }

    /* sortirame C v nizhodqsht red */
    for(i=0; i<2*n;i++){
        for(j=2*n-1;j>i;j--){
            if(C[j-1]<C[j]){
                int temp = C[j-1];
                C[j-1]=C[j];
                C[j]=temp;
            }
        }
    }


    for(i=0;i<n+n;i++){
        cout << C[i] <<" ";
    }
    return 0;
}
