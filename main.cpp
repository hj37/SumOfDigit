#include <cstdio>

using namespace std;

int digit_sum(int x)
{
    int result = 0;
    while(x != 0)
    {
        /*
        ��������� ���������� ����ؼ� �����ش�.
        �׸��� x���� ���� ��� �������ش�.
        */

        result += x%10;
        x = x/10;//��
    }

    return result;
}

int main()
{
    freopen("input.txt","rt",stdin);

    int N; int Max = 0;
    /*N���� �ڿ��� �ڸ����� �� �񱳸� ����
    max ���� */
    int answer;/*�ڸ����� ���� ���� ū ���ڸ�
    �����ϴ� ���� */
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
    {
        int num;
        scanf("%d",&num);
        int tmp = digit_sum(num);

        if(tmp > Max)
        {
            Max = tmp;
            answer = num;
        }
    }

    printf("%d",answer);

    return 0;
}
