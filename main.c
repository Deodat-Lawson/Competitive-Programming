#include <stdio.h>

char in,var,var2;
short n;
short v[2];
int main()
{
    scanf(" %c",&in);
    while (in != '7') {
        scanf(" %c",&var);
        if (in=='1') {
            scanf("%hd",&v[var-'A']);
        }
        else if (in=='2') {
            printf("%hd\n",v[var-'A']);
        }
        else if (in=='3') {
            scanf(" %c",&var2);
            v[var-'A']+=v[var2-'A'];
        }
        else if (in=='4') {
            scanf(" %c",&var2);
            v[var-'A']*=v[var2-'A'];
        }
        else if (in=='5') {
            scanf(" %c",&var2);
            v[var-'A']-=v[var2-'A'];
        }
        else {  // in=='6'
            scanf(" %c",&var2);
            v[var-'A']/=v[var2-'A'];
        }
        scanf(" %c",&in);
    }
}