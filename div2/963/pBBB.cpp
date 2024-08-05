#include <bits/stdc++.h>
#define lowbit(x) x&-x
#define int long long
#define lc 2 * id
#define rc 2 * id + 1
using namespace std;

const int maxn = 2e5;
int n = maxn, arr[maxn];

struct ops{
    string op;
    int l, r, x;
};

vector<ops> vt;

struct Node{
    int mx;  // 區間最大值
    int tag; // 子樹裡所有人都要加上 tag
} seg[maxn*4];

// vector<Node> seg;

void build(int L, int R, int id){
    // cout << L << ' ' << R << ' ' << id << '\n';
    if(L == R){
        seg[id].mx = arr[id];
        return;
    }
    int M = (L + R) / 2;
    build(L, M, lc);
    build(M + 1, R, rc);
    seg[id].mx = max(seg[lc].mx, seg[rc].mx);
}
// 節點 id 的整個區間要加上 tag
void addtag(int tag, int id){
    seg[id].mx += tag; // 最大值會加上 tag
    seg[id].tag += tag; // 注意可能本來就有標記了，所以是 +=
}

// 更新子節點資訊並把標記移到子節點身上
void push(int id){
    addtag(seg[id].tag, lc);
    addtag(seg[id].tag, rc);
    seg[id].tag = 0; // 標記被移到子節點上所以要改成 0
}

// 區間 [l,r] 加上 v

void modify(int l, int r, int v, int L, int R, int id){
    // cout << L << ' ' << R << ' ' << id << '\n';
    if(l <= L && R <= r) {
        addtag(v, id);
        return;
    }
    push(id);
    int M = (L + R) / 2;
    if(r <= M) 
        modify(l, r, v, L, M, lc);
    else if(l > M) 
        modify(l, r, v, M + 1, R, rc);
    else{
        modify(l, r, v, L, M, lc);
        modify(l, r, v, M + 1, R, rc);
    }
    seg[id].mx = max(seg[lc].mx, seg[rc].mx);
}

int query(int l, int r, int L, int R, int id){
    if(l <= L && R <= r) 
        return seg[id].mx;
    push(id);
    int M = (L + R) / 2;
    if(r <= M) 
        return query(l, r, L, M, lc);

    else if(l > M) 
        return query(l, r, M + 1, R, rc);

    else 
        return max(query(l, r, L, M, lc), query(l, r, M + 1, R, rc));
}

set<int> st;
map<int, int> mp;

signed main() {
    string s;
    int l, r, x;
    freopen("cipher_text.txt", "r", stdin);
    freopen("cipher.out", "w", stdout);
    while (cin >> s) {
        cin >> l >> r;
        x = 0;
        if (s == "update") cin >> x;
        // cout << s << ' ' << l << ' ' << r << '\n';
        st.insert(l);
        st.insert(r);
        vt.push_back({s, l, r, x});
    }

    int cnt = 1;
    for (auto idx: st) {
        // cout << cnt << '\n';
        mp[idx] = cnt++;
    }

    build(1, n, 1);

    for (auto [op, l, r, x]: vt) {
        // cout << op << ' ' << mp[l] << ' ' << mp[r] << ' ' << x << '\n';
        if (op == "update") {
            modify(mp[l], mp[r], x, 1, n, 1);
        }
        else {
            cout << query(mp[l], mp[r], 1, n, 1) << '\n';
        }
    }
}