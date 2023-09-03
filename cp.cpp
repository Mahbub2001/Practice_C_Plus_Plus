#include <bits/stdc++.h>
using namespace std;

template <class T, class = void>
struct is_iterable : std::false_type {};

#ifdef __cpp_lib_void_t
using std::void_t;
#else
template <typename... Ts>
struct make_void {
	typedef void type;
};
template <typename... Ts>
using void_t = typename make_void<Ts...>::type;
#endif

template <class T>
struct is_iterable<T, void_t<decltype(std::begin(std::declval<T>())),
							 decltype(std::end(std::declval<T>()))>>
	: std::true_type {};

#define PAIR_SEP ","
template <class T1, class T2>
constexpr std::ostream& operator<<(std::ostream& out, const std::pair<T1, T2>& p) {
	return out << p.first << PAIR_SEP << p.second;
}

#define ITER_SEP " "
template <class Type,
		  class = typename std::enable_if<is_iterable<Type>::value &&
										  !std::is_convertible<Type,
															   std::string>::value>::type>
constexpr std::ostream& operator<<(std::ostream& out, const Type& v) {
	for (auto it = v.begin(); it != v.end(); ++it) {
		if (it != v.begin()) out << ITER_SEP;
		out << *it;
	}
	return out;
}

template <class Type,
		  class = typename std::enable_if<is_iterable<Type>::value &&
										  !std::is_convertible<Type,
															   std::string>::value>::type>
constexpr std::istream& operator>>(std::istream& in, Type& v) {
	for (auto& x : v) in >> x;
	return in;
}

template <class T1, class T2>
constexpr std::istream& operator>>(std::istream& in, std::pair<T1, T2>& p) {
	return in >> p.first >> p.second;
}

template <class T>
constexpr void print(const T& x) { std::cout << x << "\n"; }
template <class T, class... Ts>
constexpr void print(const T& x, const Ts&... args) { std::cout << x << " ", print(args...); }

template <class T>
constexpr void input(T& x) { std::cin >> x; }
template <class T, class... Ts>
constexpr void input(T& x, Ts&... args) { std::cin >> x, input(args...); }

// to reduce typing
#define endl "\n"                             // newline character for faster output (prevent using `std::endl` which flushes the output buffer)
#define YES(x) ((x) ? "YES" : "NO")           // string YES or NO, based on boolean
#define Yes(x) ((x) ? "Yes" : "No")           // string Yes or No, based on boolean
#define ALL(x) begin(x), end(x)               // shorthand for use in algorithm functions
#define MEM(x, val) memset(x, val, sizeof(x)) // memset shorthand
#define LEN(x) static_cast<int>((x).size())   // length/size of container
// floating point operations (global constant `eps` must be defined)
#define LT(x, y) (((x) + eps) < (y))    // floating point less than
#define GT(x, y) (((x)-eps) > (y))      // floating point greater than
#define EQ(x, y) (abs((x) - (y)) < eps) // floating point equal to
#define LE(x, y) (LT(x, y) || EQ(x, y)) // floating point less than or equal to
#define GE(x, y) (GT(x, y) || EQ(x, y)) // floating point greater than or equal to
#define NE(x, y) (!EQ(x, y))            // floating point not equal to
// bit operations
#define CSB(x) __builtin_popcountll(static_cast<unsigned long long>(x)) // count set bits (1s)
#define CLZ(x) __builtin_clzll(static_cast<unsigned long long>(x))      // count leading zeros
#define CTZ(x) __builtin_ctzll(static_cast<unsigned long long>(x))      // count trailing zeros
#define ISPOW2(x) ((x) && !((x) & ((x)-1)))                             // check if x is a power of 2
#define LOG2_F(x) (63 - CLZ(x))                                         // floor of log2(x)
#define LOG2_C(x) (LOG2_F(x) + !ISPOW2(x))                              // ceil of log2(x)
#define GETBIT(x, i) (((x) >> (i)) & 1)                                 // get bit i of x
#define SETBIT(x, i) ((x) | (1ULL << (i)))                              // set bit i of x
#define CLRBIT(x, i) ((x) & ~(1ULL << (i)))                             // clear bit i of x
#define INVBIT(x, i) ((x) ^ (1ULL << (i)))                              // invert bit i of x
#define GETBITS(x, i, j) (((x) >> (i)) & ((1ULL << ((j) - (i))) - 1))   // get bits from i until j of x
#define SETBITS(x, i, j) ((x) | (((1ULL << ((j) - (i))) - 1) << (i)))   // set bits from i until j of x
#define CLRBITS(x, i, j) ((x) & ~(((1ULL << ((j) - (i))) - 1) << (i)))  // clear bits from i until j of x
#define INVBITS(x, i, j) ((x) ^ (((1ULL << ((j) - (i))) - 1) << (i)))   // invert bits from i until j of x
// debug
#define dump(...) std::cout << #__VA_ARGS__ << " : ", print(__VA_ARGS__) // print variable names and values

using ll = long long;
using pii = std::pair<int, int>;
using pil = std::pair<int, long long>;
using pli = std::pair<long long, int>;
using pll = std::pair<long long, long long>;

const double pi = acos(-1.0);
const double euler = exp(1.0);
constexpr double eps = 1e-9;
constexpr int inf = (1 << 30);
constexpr int mod1 = 1'000'000'007;
constexpr int mod2 = 998'244'353;
constexpr int nmax = 16;


int n;
int64_t adjmat[16][16];
int64_t dp[1 << 16];

int64_t f(int mask = 0) {
	if (CSB(mask) == (n - (n & 1))) return 0;
	int64_t& res = dp[mask];
	if (res != -1) return res;
	res = 0;
	for (int i = 0; i < n; ++i) {
		if (GETBIT(mask, i)) continue;
		for (int j = i + 1; j < n; ++j) {
			if (GETBIT(mask, j)) continue;
			res = max(res, adjmat[i][j] + f(SETBIT(SETBIT(mask, i), j)));
		}
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			cin >> adjmat[i][j];
			adjmat[j][i] = adjmat[i][j];
		}
	}

	MEM(dp, -1);
	cout << f() << "\n";
	
	return 0;
}