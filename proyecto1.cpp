#include<iostream>

using namespace std;

int main ()
{ 
    float x,y,z,k,determinante;
    int  t=0,nf=0,nc=0,matriz[nf][nc],igualA[t];
    int numeros[100][100];

        cout<<"digite el numero de filas"<<endl;
        cin>>nf;
        cout<<"digite el numero de columnas"<<endl;
        cin>>nc;
        t=nf;
            
            for(int i=0;i<nf;i++)
            {
                for( int j=0;j<nc;j++)
                {
                    cout<<"digite el numero ["<<i<<"]["<<j<<"]" ; 
                    cin>>numeros[i][j];         
                }             
            }
            
            for(int i=0;i<nf;i++)
            {
                cout<<"digite a que estan igualadas las ecuaciones["<<i<<"]";
                cin>>igualA[i];
            }
            
            for(int i=0; i<nf; i++)
            {          
                for(int j=0; j<nc;j++)
                {
                    cout<<numeros[i][j]<<" ";
                    
                }
                cout<<"="<<igualA[i]<<" ";
                cout<<"\n";
            } 

        if (nf==2 && nc==2)
        {
          determinante= (numeros[0][0]*numeros[1][1])-(numeros[0][1]*numeros[1][0]);
          cout<<"el determinante es :"<<endl;
          cout<<determinante<<endl;
          x=(igualA[0]*numeros[1][1]-igualA[1]*numeros[0][1]);
          y=(numeros[0][0]*igualA[0]-numeros[1][1]*igualA[1]);
          y=y/determinante;
          x=x/determinante;
          cout<<"x ="<<x<<endl;
          cout<<"y ="<<y<<endl;

        }

   
   return 0;

}