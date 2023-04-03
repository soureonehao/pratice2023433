#include "stdio.h"
void main()
{
    char xm[3];
    int score[7], i, j;
    float max, min;
    float ave, sum,rank[3], rankx[3], box;
    for (i = 0; i < 3; i++)
    {
        printf("请输入第%d位参赛选手的姓名:\n", i + 1);
        scanf("%s", xm);
        printf("请输入%s的7个评分<No.1>:\n", xm);
        sum = 0;
        for (j = 0; j < 7; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        min = score[0];
        max = 0;
        for (j = 0; j < 6; j++)
        {
            if (min > score[j + 1])
            {
                min = score[j + 1];
            }
            else
                continue;
        }
        for (j = 0; j < 7; j++)
        {
            if (max < score[j])
            {
                max = score[j];
            }
            else
                continue;
        }
        printf("第%d位的最高分:%.2f\n", i + 1, max);
        printf("第%d位的最低分:%.2f\n", i + 1, min);
        ave = (sum - max - min) / 5.0;
        printf("第%d位参赛歌手的最后得分:%.2f\n", i + 1, ave);
        rank[i] = ave;
        rankx[i] = ave;
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (rank[j] < rank[j + 1]) {
                box = rank[j];
                rank[j] = rank[j + 1];
                rank[j + 1] = box;
            }
        }
    }
    printf("参赛选手的排名\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (rank[i] == rankx[j])
                printf("第%d名 : 姓名：%s 分数：%.2f ", i + 1, xm[j], rankx[j]);
        }
    }
    

}