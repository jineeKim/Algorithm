using namespace std;

int gcd(long long a, long long b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

long long solution(int w, int h)
{
	int g = 0;
	long long sum = (long long)w * (long long)h;

	g = gcd((long long)w, (long long)h);
	return sum - g * ((w / g) + (h / g) - 1);
}