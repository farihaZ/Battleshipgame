#include <stdio.h>
#define ROWS 10
#define COLS 10
void main(){
    int num , i=1,sport[ROWS][COLS],j,x,y;
    printf("************************************\n");
    printf("************************************\n");
    printf("*******THE BATTTLESHIP GAME*********\n");
    printf("************************************\n");
    printf("************************************\n");
    printf("WELLCOME player choose the level\n");
    printf("1.Easy\n");
    printf("2.Dificult\n");
    printf("3.Very Complicated\n");
    printf("0.I want to exit.\n");
    scanf("%d",&num);
   if( num > 3 ){
        while (i < 3){
            printf("1.Easy\n");
            printf("2.Dificult\n");
            printf("3.Very Complicated\n");
            printf("0.I want to exit.\n");
            scanf("%d",&num);
            i += 1;
        }
    }
    
    switch(num){
        case 1 :
            // signed the psition to each board
            for(i=1;i <= ROWS;i++){
		        for(j=1;j<=COLS;j++){
		               
		                sport[i][j]=0;
		                
		         }
            }
            // show the board to the player
            printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
            for(i=1;i<=ROWS;i++){
                printf("%d",i);
		        for(j=1;j<=COLS;j++){
		            printf("\t[ ]");
		        }
		        printf("\n");
            }
            
            // signing the ship positions
            for(i=1;i<=ROWS;i++){
		        for(j=1;j<=COLS;j++){
		            if (sport[i][j]== 0 ){
		                sport[3][3]=1;
		                sport[4][3]=1;
		                sport[5][3]=1;
		                sport[3][5]=1;
		                sport[3][6]=1;
		                sport[2][9]=1;
		                sport[3][9]=1;
		                sport[4][9]=1;
		                sport[6][5]=1;
		                sport[6][6]=1;
		                sport[6][7]=1;
		                sport[6][8]=1;
		                sport[9][3]=1;
		                sport[9][4]=1;
		                sport[9][5]=1;
		                sport[9][6]=1;
		                sport[9][7]=1;
		                
		                
		            }
		        }
            }
            
            // ask the user to hit the short 
            do {
                printf("Enter the ROW from 1 to 10 :");
                scanf("%d",&i);
            }while(i < 1 || i > 10);
            do {
                printf("Enter the coloumn from 1 to 10 :");
                scanf("%d",&j);
            }while(j < 1 || j > 10);
            
            // if the user miss the ship show the empty table
            if (sport[i][j]==0){
                printf("SORRY YOU miss the SHIP\n");
                
                 // show the board to the player
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(i=1;i<=ROWS;i++){
                    printf("%d",i);
		            for(j=1;j<=COLS;j++){
		                printf("\t[ ]");
		            }
		            printf("\n");
                }
            //if the user hit the ship show the table with the sport 
            }else if (sport[i][j]==1) {
                printf("Congratulation you hit the ship and won the game \n)");
                sport[i][j]=2;
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(x=1;x<=ROWS;x++){
                    printf("%d",x);
		            for(y=1;y<=COLS;y++){
		            
		                if (sport[x][y]== 2){
		                    printf("\t[*]");
		                }else {
		                    printf("\t[ ]");
		                }
		            
		            }
		            printf("\n");
                }
            }
            
           /* printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
            for(x=1;x<=ROWS;x++){
                printf("%d",x);
		        for(y=1;y<=COLS;y++){
		            
		              if (sport[x][y]== 1){
		                printf("\t[*]");
		            }else {
		                printf("\t[ ]");
		            }
		            
		        }
		        printf("\n");
            }*/
          
            
            break ;
        case 2 :
            
            // signed the psition to each board
            for(i=1;i <= ROWS;i++){
		        for(j=1;j<=COLS;j++){
		               
		                sport[i][j]=0;
		                
		         }
            }
            // show the board to the player
            printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
            for(i=1;i<=ROWS;i++){
                printf("%d",i);
		        for(j=1;j<=COLS;j++){
		            printf("\t[ ]");
		        }
		        printf("\n");
            }
            
            // signing the ship positions
            for(i=1;i<=ROWS;i++){
		        for(j=1;j<=COLS;j++){
		            if (sport[i][j]== 0 ){
		                sport[3][3]=1;
		                sport[4][3]=1;
		                sport[5][3]=1;
		                sport[3][5]=1;
		                sport[3][6]=1;
		                sport[2][9]=1;
		                sport[3][9]=1;
		                sport[4][9]=1;
		                sport[6][5]=1;
		                sport[6][6]=1;
		                sport[6][7]=1;
		                sport[6][8]=1;
		                sport[9][3]=1;
		                sport[9][4]=1;
		                sport[9][5]=1;
		                sport[9][6]=1;
		                sport[9][7]=1;
		                
		                
		            }
		        }
            }
            
            // ask the user to hit the short 
            do {
                printf("Enter the ROW from 1 to 10 :");
                scanf("%d",&i);
            }while(i < 1 || i > 10);
            do {
                printf("Enter the coloumn from 1 to 10:");
                scanf("%d",&j);
            }while(j < 1 || j > 10);
            
            // if the user miss the ship show the empty table
            if (sport[i][j]==0){
                printf("SORRY YOU miss the SHIP\n");
                
                 // show the board to the player
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(i=1;i<=ROWS;i++){
                    printf("%d",i);
		            for(j=1;j<=COLS;j++){
		                printf("\t[ ]");
		            }
		            printf("\n");
                }
            //if the user hit the ship show the table with the sport 
            }else if (sport[i][j]==1) {
                printf("Congratulation you hit the ship and won the game \n)");
                sport[i][j]=2;
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(x=1;x<=ROWS;x++){
                    printf("%d",x);
		            for(y=1;y<=COLS;y++){
		            
		                if (sport[x][y]== 2){
		                    printf("\t[*]");
		                }else {
		                    printf("\t[ ]");
		                }
		            
		            }
		            printf("\n");
                }
            }
            
            break;
        case 3 :
            // signed the psition to each board
            for(i=1;i <= ROWS;i++){
		        for(j=1;j<=COLS;j++){
		               
		                sport[i][j]=0;
		                
		         }
            }
            // show the board to the player
            printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
            for(i=1;i<=ROWS;i++){
                printf("%d",i);
		        for(j=1;j<=COLS;j++){
		            printf("\t[ ]");
		        }
		        printf("\n");
            }
            
            // signing the ship positions
            for(i=1;i<=ROWS;i++){
		        for(j=1;j<=COLS;j++){
		            if (sport[i][j]== 0 ){
		                sport[3][3]=1;
		                sport[4][3]=1;
		                sport[5][3]=1;
		                sport[3][5]=1;
		                sport[3][6]=1;
		                sport[2][9]=1;
		                sport[3][9]=1;
		                sport[4][9]=1;
		                sport[6][5]=1;
		                sport[6][6]=1;
		                sport[6][7]=1;
		                sport[6][8]=1;
		                sport[9][3]=1;
		                sport[9][4]=1;
		                sport[9][5]=1;
		                sport[9][6]=1;
		                sport[9][7]=1;
		                
		                
		            }
		        }
            }
            
            // ask the user to hit the short 
            do {
                printf("Enter the ROW from 1 to 10 :");
                scanf("%d",&i);
            }while(i < 1 || i > 10);
            do {
                printf("Enter the coloumn from 1 to 10:");
                scanf("%d",&j);
            }while(j < 1 || j > 10);
            
            // if the user miss the ship show the empty table
            if (sport[i][j]==0){
                printf("SORRY YOU miss the SHIP\n");
                
                 // show the board to the player
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(i=1;i<=ROWS;i++){
                    printf("%d",i);
		            for(j=1;j<=COLS;j++){
		                printf("\t[ ]");
		            }
		            printf("\n");
                }
            //if the user hit the ship show the table with the sport 
            }else if (sport[i][j]==1) {
                printf("Congratulation you hit the ship and won the game \n)");
                sport[i][j]=2;
                
                printf("\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n");
                for(x=1;x<=ROWS;x++){
                    printf("%d",x);
		            for(y=1;y<=COLS;y++){
		            
		                if (sport[x][y]== 2){
		                    printf("\t[*]");
		                }else {
		                    printf("\t[ ]");
		                }
		            
		            }
		            printf("\n");
                }
            }
            
            break;
        case 0 :
            printf("you have left the game");
            
    }
    
}


