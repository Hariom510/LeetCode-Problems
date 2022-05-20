class Solution {
public:
     unordered_map<string, string> m;
     int num =0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        num++;
        string ans = "http://tinyurl.com/";
        string add = to_string(num);
        ans += add;
        m[ans] = longUrl;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));