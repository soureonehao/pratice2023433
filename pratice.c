#include "stdio.h"
void main()
{
    char xm[3];
    int score[7], i, j;
    float max, min;
    float ave, sum,rank[3], rankx[3], box;
    for (i = 0; i < 3; i++)
    {
        printf("�������%dλ����ѡ�ֵ�����:\n", i + 1);
        scanf("%s", xm);
        printf("������%s��7������<No.1>:\n", xm);
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
        printf("��%dλ����߷�:%.2f\n", i + 1, max);
        printf("��%dλ����ͷ�:%.2f\n", i + 1, min);
        ave = (sum - max - min) / 5.0;
        printf("��%dλ�������ֵ����÷�:%.2f\n", i + 1, ave);
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
    printf("����ѡ�ֵ�����\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (rank[i] == rankx[j])
                printf("��%d�� : ������%s ������%.2f ", i + 1, xm[j], rankx[j]);
        }
    }
    

}