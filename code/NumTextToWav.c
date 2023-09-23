#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char c = ' ';
    // 输入二进制数字文本的文件的指针
    FILE *fp_I = NULL;
    // 输出到concat.txt的文件的指针
    FILE *fp_O = NULL;

    fp_I = fopen("./Btext.txt", "r");
    fp_O = fopen("./concat.txt", "w");
    while ((c = fgetc(fp_I)) != EOF)
    {
        if( c == '0')
        {
            fprintf(fp_O, "file \'./resource/0.wav\'\n");
        }
        else if( c == '1')
        {
            fprintf(fp_O, "file \'./resource/1.wav\'\n");
        }
        else if( c == ' ')
        {
            fprintf(fp_O, "file \'./resource/shape.wav\'\n");
        }
        else
        {
            printf("get a invalid character in file!", stderr);
            printf("It is \'%c\'", c, stderr);
            system("pause");
            return -1;
        }

        fprintf(fp_O, "file \'./resource/mute.wav\'\n");
    }

    fclose(fp_I);
    fclose(fp_O);
    putc('\n', stdout);
    printf("Seems nothing is bad, you can shutdown this window.\n");
    system("pause");
    return 0;
}
