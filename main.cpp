#include <cstdio>

using namespace std;

int digit_sum(int x)
{
    int result = 0;
    while(x != 0)
    {
        /*
        결과값에는 나머지값을 계속해서 더해준다.
        그리고 x에는 몫을 계속 저장해준다.
        */

        result += x%10;
        x = x/10;//몫
    }

    return result;
}

int main()
{
    freopen("input.txt","rt",stdin);

    int N; int Max = 0;
    /*N개의 자연수 자릿수의 합 비교를 위한
    max 변수 */
    int answer;/*자릿수의 합이 가장 큰 숫자를
    저장하는 공간 */
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
