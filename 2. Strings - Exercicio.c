#include <stdio.h>


/*
 Faça uma função que verifique a existência de uma
substring e retorne a posição inicial da substring;

● Exemplo:

● Entrada: “Aula de estruturas de dados e programação”
● Substring a ser procurada: “strut”
● Retorno: 9
● Caso a substring não esteja contida, retornar -1
*/

int getStrLength(char* str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
} // nao sei é pra usar strlen ou implementar.


int checkString(const char* mystr, const char* mymask)
{
    int index;
    short counter = 0;

    short stringLength = getStrLength(mystr);
    short maskLength = getStrLength(mymask);


    for (index = 0; index < stringLength; index++)
    {
        for (int l = 0; l < maskLength; l++)
        {
            if (mymask[l] == '\0')
                break;
            if (mystr[index + l] == mymask[l])
            {
                counter++;
            }
            if (counter == maskLength)
            {
                return index;
            }
        }
        counter = 0;
    }


    return -1;
}


int main(void)
{
    const char string[] = "Aula de estruturas de dados e programação";
    const char mask[] = "o";

    int check = checkString(string, mask);


    printf("indice do array  =  %d", check);
}
