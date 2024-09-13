#include <stdio.h>
#include <string.h>
#include <errno.h>


FILE *fp;
char *gen="genesis.txt";



int year;
int day_of_the_year;
int second_of_the_day;
int chain_id;
int trans_per_block;
float difficulty;
float mining_reward;
float gas_price;
float balance;


int main(){
    fp=fopen(gen,"r");
    if(fp==NULL){
    perror("error opening genesis file \n");
    }

    if(fscanf(fp,"%d %d %ld %i %ld %f %f %f %f",&year,&day_of_the_year,&second_of_the_day,&chain_id,&trans_per_block,&difficulty,&mining_reward,&gas_price,&balance)!=9){
    perror("error loading data onto the genesis block");
    }

    printf ("day_of_the_year %d \n",day_of_the_year);
    return 0;

    fclose(fp);
    return 0;
}

