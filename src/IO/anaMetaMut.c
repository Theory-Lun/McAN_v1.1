//
// Created by lun on 2021/5/27.
//
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Hashmap_acc2line.h"
#include "virus.h"
void readMut_acc2line_hash(char *str_input, struct Hashmap_acc2line *hash);
void readMeta_acc2line_hash(char *str_input, struct Hashmap_acc2line *hash);
bool chomp( char *str );
bool emptyStr(char * str);
void readDate2Date(char * str_date, struct Date * pDate);
int cmp_time_date(const void* _a, const void* _b);
void location_init(struct Location * pLocation);

void extractDateFromMetaLine(char *line, struct Date *pDate){
    char *cpLine = (char *)malloc(sizeof(char) * (1 + strlen(line)));
    strcpy(cpLine, line);
    chomp(cpLine);
    char * r = cpLine;
    int columnIndex = 0; //column index starting from 0
    for (char * token1 =strsep(&r,"\t"); token1!=NULL; token1=strsep(&r,"\t")) {
        if(7 == columnIndex){ //8th column, date
            if(emptyStr(token1)){
                break;
            }
            readDate2Date(token1, pDate);
        }
        columnIndex ++;
    }
    //free
    free(cpLine);
    cpLine = NULL;
}
