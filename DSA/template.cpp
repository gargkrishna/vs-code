//------ I am not A god but a creater  ------//

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define srt(x) sort((x).begin(), (x).end());
#define clr(x) memset(x, 0, sizeof(x));
#define mem(a, val) memset(a, val, sizeof(a));
#define trace(x)           \
	for (auto it : x)      \
		cout << it << ' '; \
	cout << "\n";
#define sumv(x, w)    \
	for (auto it : x) \
		w += it;
#define traca(A, n)            \
	for (ll i = 0; i < n; i++) \
		cout << A[i] << ' ';   \
	cout << "\n";
#define pll pair<ll, ll>
#define vll vector<ll>
#define vvll vector<vll>
#define vb vector<bool>
#define vc vector<char>
#define vpll vector<pll>
#define fastio                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
#define cy cout << "YES" \
				<< "\n";
#define cn cout << "NO" \
				<< "\n";
#define nl cout << "\n";
#define chk cout << "*\n";
#define print(x) cout << x << "\n";

/*-----------------------------Modular Arithmetic---------------------*/
inline ll add(ll x, ll y, ll mod)
{
	x += y;
	if (x >= mod)
		return x - mod;
	return x;
}
inline ll sub(ll x, ll y, ll mod)
{
	x -= y;
	if (x < 0)
		return x + mod;
	return x;
}
inline ll mul(ll x, ll y, ll mod) { return (x * 1ll * y) % mod; }
inline ll power(ll x, ll y, ll mod)
{
	ll ans = 1;
	while (y)
	{
		if (y & 1)
			ans = mul(ans, x, mod);
		x = mul(x, x, mod);
		y >>= 1;
	}
	return ans;
}
inline ll inv(ll x, ll mod) { return power(x, mod - 2, mod); }

/*------------------------ Important Functions ----------------------------*/

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	a %= b;
	return gcd(b, a);
}

ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

ll min(ll x, ll y, ll z)
{
	return min(min(x, y), z);
}

/*------------------------ Few More Functions ----------------------------*/

ll factmod(ll n, ll p)
{
	ll res = 1;
	while (n > 1)
	{
		res = (res * ((n / p) % 2 ? p - 1 : 1)) % p;
		for (ll i = 2; i <= n % p; ++i)
			res = (res * i) % p;
		n /= p;
	}
	return res % p;
}

ll largestPower(ll n, ll p)
{
	ll x = 0;
	while (n)
	{
		n /= p;
		x += n;
	}
	return x;
}

ll modFact(ll n, ll p)
{
	if (n >= p)
		return 0;
	ll res = 1;
	bool isPrime[n + 1];
	memset(isPrime, 1, sizeof(isPrime));
	for (ll i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
		{
			for (ll j = 2 * i; j <= n; j += i)
				isPrime[j] = 0;
		}
	}
	for (ll i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			ll k = largestPower(n, i);
			res = (res * power(i, k, p)) % p;
		}
	}
	return res;
}

/*------------------------ Trouble begins here ----------------------------*/

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
	}
	return 0;
}