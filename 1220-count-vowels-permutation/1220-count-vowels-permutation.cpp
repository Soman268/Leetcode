class Solution {
public:
    int countVowelPermutation(int n) {
	long long int a = 1, e = 1, i = 1, o = 1, u = 1, mod = 1e9 + 7;
	for (int k = 2; k <= n; k++) {
		// these new variables store the prev values for each of the vowels
		long long int ta = a, ti = i, te = e, to = o, tu = u;
		
		// using the previous values of vowels, I get the new values of each increased length
		a = te;
		e = ta + ti;
		i = ta + te + to + tu;
		o = ti + tu;
		u = ta;
		
		// to keep the range to not exceed 1e9+7, we do mod for each of the value 
		a %= mod, e %= mod, i %= mod, o %= mod, u %= mod;
	}
	return (a + e + i + o + u) % mod;
}
};