using namespace std;

long long solution(int price, int money, int count)
{
    long long m = money;
    for (int i = 1; i <= count; ++i) {
        m -= price * i;
    }
    long long answer = m > 0 ? 0 : -m;
    return answer;
}