#include<iostream>
#include<algorithm>
#include <ctime>
using namespace std;

int Initial_State [ 10 ] [ 10 ];

bool get_Initial_State( int i , int j  )  //�����ڣ� i , j ��λ�ô����Դ洢������,�ҵ����򷵻�true�����򷵻�false
{
        if( i > 9 || j > 9 ) 
                return true;

        for( int k = 1 ; k <= 9 ; ++k ) 
        {
                bool can = true;                // can �������ڼ�¼����k�ܷ���� ( i , j ) �� 
                for( int m = 1 ; m < i ; ++m ) 
                        if( Initial_State[m][j] == k )  // ���ͬһ���Ƿ���ֹ�����k
                        {
                                can = false ;
                                break ;
                        }
                if ( can ) 
                        for( int n = 1 ; n < j ; ++n ) 
                                if( Initial_State[i][n] == k )  // ���ͬһ���Ƿ���ֹ�����k
                                {
                                        can = false ;
                                        break; 
                                }
                if( can ) 
                {
                        int up1 = ( i/3 ) * 3 + 3 ; // (i,j)�������ڵ�3��3С����i���������
                        int up2 = ( j/3 ) *3 + 3;   // (i,j)�������ڵ�3��3С������j���������

                        if( i % 3 == 0 )    //���������������Ĵ���
                                up1 = i ; 
                        if( j % 3 == 0 ) 
                                up2 = j ;

                        for( int p = up1-2 ; p <= up1 ; ++p  )  /* �����3��3��С�������Ƿ������ͬһ������ */
                        {
                                if( can == false )   /* �������ѭ�� */
                                        break ;
                                for( int q = up2-2 ; q <= up2 ; ++q ) 
                                        if( Initial_State[p][q] == k ) 
                                        {
                                                can = false ;
                                                break ;
                                        }
                        }
                }
                if( can ) 
                {
                        Initial_State[i][j] = k ; 
                        if( j<9 ) 
                        {
                                if( get_Initial_State( i  , j +1 ) )   /* ��ͬһ�е���һλ�ÿ�ʼ���� */
                                        return true ;  
                        }
                        else
                        {
                                if( i < 9 )  
                                {
                                        if( get_Initial_State( i + 1 , 1 ) )    /* ����һ�еĵ�һ���ո�ʼ���� */
                                                return true ;
                                }
                                else
                                        return true ;  /* i >= 9  && j >= 9  , �������� */

                        }
                        Initial_State[i][j] = 0 ;   /* �ؼ���һ�����Ҳ������Ҫ�ظ�ԭ״��������������������Ӱ�� */
                }
        }
        return false ;  /*  1��9�����Թ������У��򷵻صݹ����һ�� */
}

void start() 
{
        srand ( unsigned ( time (NULL) ) );  /* ����random_shuffle����������� */
        for( int i = 1  ; i <= 9 ; ++i )
                for( int j = 1 ; j <= 9 ; ++j )
                        Initial_State[i][j] = 0 ;

        for( int i = 1 ; i <= 9 ; ++i ) 
                Initial_State[1][i] = i ; 

        random_shuffle( &( Initial_State[1][1]) , &( Initial_State[1][10])  ) ;  /* ��һ��������в��� */

        get_Initial_State( 2 , 1 ) ;  /* �ӵڶ��п�ʼ���� */
}

int main()
{
        start( ) ;
        for( int i = 1 ; i <= 9 ; ++ i ) 
        {
                for( int j = 1 ; j <= 9 ; ++j ) 
                        cout<< Initial_State [i][j] <<" " ;
                cout<<endl; 
        }
        getchar() ; 
        return 0 ;
}

