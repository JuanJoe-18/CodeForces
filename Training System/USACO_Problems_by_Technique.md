# USACO Problems Organized by Technique

Compiled from the [USACO Guide](https://usaco.guide/). Problems are deduplicated (each appears once per technique).

Starred problems (⭐) are essential for mastering each category and are prioritized in the list.

**Total unique problems: 1379**
**Total starred (essential): 178**
**Total techniques: 174**

---

## Table of Contents

- [Ad-Hoc](#ad-hoc) (1)
- [Simulation](#simulation) (21 total, ⭐ 2)
- [Complete Search](#complete-search) (32 total, ⭐ 10)
- [Greedy](#greedy) (63 total, ⭐ 9)
- [Sorting](#sorting) (71 total, ⭐ 17)
- [Binary Search](#binary-search) (91 total, ⭐ 14)
- [Ternary Search](#ternary-search) (8 total, ⭐ 1)
- [Two Pointers](#two-pointers) (4)
- [Sliding Window](#sliding-window) (22)
- [Prefix Sums](#prefix-sums) (52 total, ⭐ 8)
- [2D Prefix Sums](#2d-prefix-sums) (9 total, ⭐ 2)
- [Difference Array](#difference-array) (4)
- [Set](#set) (12 total, ⭐ 1)
- [Map](#map) (8 total, ⭐ 1)
- [Sorted Set](#sorted-set) (20 total, ⭐ 4)
- [Priority Queue](#priority-queue) (15 total, ⭐ 5)
- [Stack](#stack) (21 total, ⭐ 2)
- [Deque](#deque) (2)
- [Linked List](#linked-list) (2 total, ⭐ 1)
- [DSU](#dsu) (28 total, ⭐ 2)
- [PURQ](#purq) (18)
- [PURS](#purs) (35 total, ⭐ 7)
- [RURQ](#rurq) (2)
- [1DRQ](#1drq) (4 total, ⭐ 1)
- [2DRQ](#2drq) (12)
- [Lazy SegTree](#lazy-segtree) (14)
- [SegTreeBeats](#segtreebeats) (9 total, ⭐ 2)
- [Flood Fill](#flood-fill) (16 total, ⭐ 4)
- [BFS](#bfs) (25 total, ⭐ 5)
- [DFS](#dfs) (27 total, ⭐ 7)
- [Connected Components](#connected-components) (16 total, ⭐ 5)
- [Bipartite](#bipartite) (10 total, ⭐ 1)
- [Tree](#tree) (51 total, ⭐ 8)
- [LCA](#lca) (19 total, ⭐ 2)
- [Binary Jumping](#binary-jumping) (9)
- [Euler Tour](#euler-tour) (21)
- [HLD](#hld) (9)
- [Centroid](#centroid) (16 total, ⭐ 4)
- [Diameter](#diameter) (2)
- [Small to Large](#small-to-large) (7 total, ⭐ 3)
- [Virtual Tree](#virtual-tree) (5 total, ⭐ 1)
- [Functional Graph](#functional-graph) (12 total, ⭐ 2)
- [SCC](#scc) (12)
- [BCC](#bcc) (10)
- [2CC](#2cc) (1)
- [TopoSort](#toposort) (11 total, ⭐ 4)
- [Cycle](#cycle) (3 total, ⭐ 1)
- [MST](#mst) (17 total, ⭐ 1)
- [SP](#sp) (22 total, ⭐ 5)
- [APSP](#apsp) (3 total, ⭐ 1)
- [DP](#dp) (166 total, ⭐ 22)
- [Knapsack](#knapsack) (26 total, ⭐ 4)
- [LIS](#lis) (7 total, ⭐ 2)
- [Range DP](#range-dp) (10)
- [Bitmasks](#bitmasks) (37 total, ⭐ 3)
- [SOS DP](#sos-dp) (8 total, ⭐ 1)
- [Broken Profile](#broken-profile) (4)
- [Convex](#convex) (27 total, ⭐ 1)
- [Slope Trick](#slope-trick) (13 total, ⭐ 2)
- [D&C](#d&c) (12 total, ⭐ 2)
- [Meet in the Middle](#meet-in-the-middle) (7 total, ⭐ 1)
- [Combinatorics](#combinatorics) (22 total, ⭐ 3)
- [Catalan](#catalan) (4 total, ⭐ 1)
- [PIE](#pie) (11 total, ⭐ 1)
- [NT](#nt) (10 total, ⭐ 1)
- [Divisibility](#divisibility) (10 total, ⭐ 3)
- [Modular Arithmetic](#modular-arithmetic) (7 total, ⭐ 4)
- [Prime Factorization](#prime-factorization) (8 total, ⭐ 2)
- [Euler Totient](#euler-totient) (1)
- [Matrix](#matrix) (12 total, ⭐ 2)
- [Exponentiation](#exponentiation) (11 total, ⭐ 2)
- [Bitwise](#bitwise) (18 total, ⭐ 2)
- [XOR Hashing](#xor-hashing) (1)
- [Hashing](#hashing) (18 total, ⭐ 2)
- [Strings](#strings) (17 total, ⭐ 1)
- [KMP](#kmp) (8 total, ⭐ 3)
- [Z](#z) (3 total, ⭐ 2)
- [Suffix Array](#suffix-array) (5)
- [Suffix Structures](#suffix-structures) (10 total, ⭐ 2)
- [Trie](#trie) (13 total, ⭐ 1)
- [Palindrome](#palindrome) (1)
- [Geometry](#geometry) (16 total, ⭐ 1)
- [Rectangle](#rectangle) (5 total, ⭐ 1)
- [Convex Hull](#convex-hull) (1)
- [Sweep Line](#sweep-line) (8 total, ⭐ 1)
- [Radial Sweep](#radial-sweep) (4)
- [Manhattan MST](#manhattan-mst) (2)
- [Max Flow](#max-flow) (4)
- [MCF](#mcf) (2)
- [Game](#game) (15)
- [Nimbers](#nimbers) (11)
- [2SAT](#2sat) (7 total, ⭐ 3)
- [FFT](#fft) (5)
- [Generating Functions](#generating-functions) (1)
- [LCT](#lct) (17)
- [Treap](#treap) (9 total, ⭐ 1)
- [Wavelet](#wavelet) (6)
- [Persistent Segtree](#persistent-segtree) (12 total, ⭐ 1)
- [DSUrb](#dsurb) (5 total, ⭐ 1)
- [Dynacon](#dynacon) (4)
- [Mo's Algorithm](#mos-algorithm) (4)
- [Sqrt](#sqrt) (21 total, ⭐ 1)
- [Bitset](#bitset) (13)
- [Random](#random) (5 total, ⭐ 2)
- [Interactive](#interactive) (1)
- [Constructive](#constructive) (1)
- [Median](#median) (3)
- [Inversions](#inversions) (6 total, ⭐ 1)
- [Coordinate Compression](#coordinate-compression) (3)
- [Coloring](#coloring) (2 total, ⭐ 1)
- [Permutation](#permutation) (6 total, ⭐ 1)
- [Graph](#graph) (1)
- [Euler Tour](#euler-tour) (21)
- [Euler's Formula](#eulers-formula) (5)
- [XOR Convolution](#xor-convolution) (1)
- [Cactus](#cactus) (1)
- [Uncategorized](#uncategorized) (207 total, ⭐ 19)
- [2P](#2p) (22 total, ⭐ 4)
- [3DRQ](#3drq) (1)
- [Ad Hoc](#ad-hoc) (3)
- [Angles](#angles) (1)
- [Articulation Points](#articulation-points) (1)
- [BIT](#bit) (9 total, ⭐ 1)
- [Binary Search, 2P](#binary-search,-2p) (1)
- [Bitmask DP](#bitmask-dp) (1)
- [Bitmasking](#bitmasking) (1)
- [Block Cut Tree](#block-cut-tree) (1)
- [Casework](#casework) (8 total, ⭐ 1)
- [Catalan, Combinatorics](#catalan,-combinatorics) (1)
- [Centroid Decomposition](#centroid-decomposition) (1)
- [Combinatorics, XOR Hashing](#combinatorics,-xor-hashing) (1)
- [Combo](#combo) (1)
- [Coordinate Compress](#coordinate-compress) (2)
- [Cycles](#cycles) (1)
- [Divide and Conquer](#divide-and-conquer) (1)
- [Divisors](#divisors) (5)
- [Functional Graphs](#functional-graphs) (2)
- [Game Theory](#game-theory) (3 total, ⭐ 1)
- [Graphs](#graphs) (3)
- [Hamiltonian path](#hamiltonian-path) (1 total, ⭐ 1)
- [Indexed Set](#indexed-set) (1)
- [KRT](#krt) (6)
- [LCM](#lcm) (1)
- [Maps](#maps) (1)
- [Math](#math) (12 total, ⭐ 2)
- [Max Subarray Sum](#max-subarray-sum) (1 total, ⭐ 1)
- [Meet in Middle](#meet-in-middle) (1)
- [Merging](#merging) (8 total, ⭐ 1)
- [MinCostFlow](#mincostflow) (1)
- [Multiset](#multiset) (1)
- [Number Theory](#number-theory) (3)
- [Offline](#offline) (2 total, ⭐ 1)
- [Output Only](#output-only) (1 total, ⭐ 1)
- [Palindromic Tree](#palindromic-tree) (2)
- [Patterns](#patterns) (1)
- [Prefix](#prefix) (1)
- [Prefix Sum](#prefix-sum) (1)
- [Probability](#probability) (2)
- [Radians](#radians) (1)
- [Recursion](#recursion) (6 total, ⭐ 2)
- [Rerooting](#rerooting) (1)
- [SRQ](#srq) (1)
- [SegTree](#segtree) (2)
- [Segment Tree](#segment-tree) (1)
- [Shortest Path](#shortest-path) (1)
- [Sieve](#sieve) (1)
- [Sliding Windows](#sliding-windows) (1)
- [Sortings](#sortings) (1)
- [Spanning Tree](#spanning-tree) (3 total, ⭐ 1)
- [Sparse SegTree](#sparse-segtree) (1)
- [Subsets](#subsets) (2 total, ⭐ 1)
- [Suffix Tree](#suffix-tree) (1)
- [Trees](#trees) (5 total, ⭐ 2)
- [Trees, XOR Hashing](#trees,-xor-hashing) (1)
- [Two Pointers, XOR Hashing](#two-pointers,-xor-hashing) (1)

---

## Ad-Hoc

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Photoshoot 2](https://usaco.org/index.php?page=viewproblem2&cpid=1204) | Bronze | Normal | Bronze | - |

---

## Simulation

**21 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Speeding Ticket](http://www.usaco.org/index.php?page=viewproblem2&cpid=568) | Bronze | Easy | Bronze | - |
| 2 | ⭐ | [Block Game](http://www.usaco.org/index.php?page=viewproblem2&cpid=664) | Bronze | Normal | Bronze | - |
| 3 |  | [Mixing Milk](http://www.usaco.org/index.php?page=viewproblem2&cpid=855) | Bronze | Easy | Bronze | - |
| 4 |  | [Quests](https://codeforces.com/problemset/problem/1914/C) | CF | Easy | Bronze | - |
| 5 |  | [Shell Game](http://www.usaco.org/index.php?page=viewproblem2&cpid=891) | Bronze | Easy | Bronze | - |
| 6 |  | [The Bovine Shuffle](http://www.usaco.org/index.php?page=viewproblem2&cpid=760) | Bronze | Easy | Bronze | - |
| 7 |  | [The Bucket List](http://www.usaco.org/index.php?page=viewproblem2&cpid=856) | Bronze | Easy | Bronze | - |
| 8 |  | [The Cow-Signal](http://www.usaco.org/index.php?page=viewproblem2&cpid=665) | Bronze | Easy | Bronze | - |
| 9 |  | [The Lost Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=735) | Bronze | Easy | Bronze | - |
| 10 |  | [Circular Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=616) | Bronze | Normal | Bronze | - |
| 11 |  | [Measuring Traffic](http://www.usaco.org/index.php?page=viewproblem2&cpid=917) | Bronze | Normal | Bronze | - |
| 12 |  | [Mowing the Field](http://www.usaco.org/index.php?page=viewproblem2&cpid=593) | Bronze | Normal | Bronze | - |
| 13 |  | [Reflection](https://usaco.org/index.php?page=viewproblem2&cpid=1491) | Bronze | Normal | Bronze | - |
| 14 |  | [Team Tic Tac Toe](http://www.usaco.org/index.php?page=viewproblem2&cpid=831) | Bronze | Normal | Bronze | Set |
| 15 |  | [Why Did the Cow Cross the Road III](http://www.usaco.org/index.php?page=viewproblem2&cpid=713) | Bronze | Normal | Bronze | Sorting |
| 16 |  | [Lights Out](http://www.usaco.org/index.php?page=viewproblem2&cpid=599) | Gold | Normal | Gold | Hashing |
| 17 |  | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=592) | Bronze | Hard | Bronze | Sorting |
| 18 |  | [Censoring](http://www.usaco.org/index.php?page=viewproblem2&cpid=526) | Old Bronze | Hard | Bronze | - |
| 19 |  | [Milk Measurement](http://www.usaco.org/index.php?page=viewproblem2&cpid=761) | Bronze | Hard | Bronze | - |
| 20 |  | [Dima and Containers](https://codeforces.com/problemset/problem/358/C) | CF | Very Hard | Bronze | - |
| 21 |  | [Stuck in a Rut](http://www.usaco.org/index.php?page=viewproblem2&cpid=1061) | Bronze | Very Hard | Bronze | - |

---

## Complete Search

**32 problems** (10 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Air Cownditioning II](http://www.usaco.org/index.php?page=viewproblem2&cpid=1276) | Bronze | Normal | Bronze | Recursion, Subsets |
| 2 | ⭐ | [Bovine Genomics](http://www.usaco.org/index.php?page=viewproblem2&cpid=736) | Bronze | Normal | Bronze | - |
| 3 | ⭐ | [Cow Gymnastics](http://www.usaco.org/index.php?page=viewproblem2&cpid=963) | Bronze | Normal | Bronze | - |
| 4 | ⭐ | [Livestock Lineup](http://www.usaco.org/index.php?page=viewproblem2&cpid=965) | Bronze | Normal | Bronze | Recursion, Permutation |
| 5 | ⭐ | [Why Did the Cow Cross the Road II](http://www.usaco.org/index.php?page=viewproblem2&cpid=712) | Bronze | Normal | Bronze | - |
| 6 | ⭐ | [Bovine Genomics](http://www.usaco.org/index.php?page=viewproblem2&cpid=739) | Silver | Hard | Bronze | - |
| 7 | ⭐ | [Cow Checkups](https://usaco.org/index.php?page=viewproblem2&cpid=1469) | Bronze | Hard | Bronze | - |
| 8 | ⭐ | [Load Balancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=617) | Bronze | Hard | Bronze | - |
| 9 | ⭐ | [Sleeping in Class](http://usaco.org/index.php?page=viewproblem2&cpid=1203) | Bronze | Hard | Bronze | - |
| 10 | ⭐ | [Cowntact Tracing](http://www.usaco.org/index.php?page=viewproblem2&cpid=1037) | Bronze | Very Hard | Bronze | - |
| 11 |  | [Apple Division](https://cses.fi/problemset/task/1623) | CSES | Easy | Bronze | Recursion, Subsets |
| 12 |  | [Creating Strings I](https://cses.fi/problemset/task/1622) | CSES | Easy | Bronze | Recursion, Permutation |
| 13 |  | [Daisy Chains](http://www.usaco.org/index.php?page=viewproblem2&cpid=1060) | Bronze | Easy | Bronze | - |
| 14 |  | [Diamond Collector](http://www.usaco.org/index.php?page=viewproblem2&cpid=639) | Bronze | Easy | Bronze | - |
| 15 |  | [Milk Pails](http://www.usaco.org/index.php?page=viewproblem2&cpid=615) | Bronze | Easy | Bronze | - |
| 16 |  | [Searching For Soulmates](http://www.usaco.org/index.php?page=viewproblem2&cpid=1182) | Silver | Easy | Silver | Bitwise |
| 17 |  | [The Wu](https://codeforces.com/contest/1017/problem/D) | CF | Easy | Silver | Bitwise, Binary Search |
| 18 |  | [Absolute Sorting](https://codeforces.com/contest/1772/problem/D) | CF | Normal | Bronze | Greedy |
| 19 |  | [Back and Forth](http://www.usaco.org/index.php?page=viewproblem2&cpid=857) | Bronze | Normal | Bronze | Recursion |
| 20 |  | [Beautiful Permutation II](https://cses.fi/problemset/task/3175) | CSES | Normal | Bronze | Permutation |
| 21 |  | [Chessboard & Queens](https://cses.fi/problemset/task/1624) | CSES | Normal | Bronze | Recursion, Permutation |
| 22 |  | [Counting Liars](http://usaco.org/index.php?page=viewproblem2&cpid=1228) | Bronze | Normal | Bronze | Sorting |
| 23 |  | [Lifeguards](http://www.usaco.org/index.php?page=viewproblem2&cpid=784) | Bronze | Normal | Bronze | - |
| 24 |  | [Triangles](http://www.usaco.org/index.php?page=viewproblem2&cpid=1011) | Bronze | Normal | Bronze | - |
| 25 |  | [Twenty-four](https://dmoj.ca/problem/ccc08s4) | CCC | Normal | Bronze | Permutation |
| 26 |  | [Guess the Animal](http://www.usaco.org/index.php?page=viewproblem2&cpid=893) | Bronze | Hard | Bronze | - |
| 27 |  | [Spirale](https://dmoj.ca/problem/coci17c5p2) | COCI | Hard | Bronze | - |
| 28 |  | [Bull in a China Shop](http://www.usaco.org/index.php?page=viewproblem2&cpid=640) | Bronze | Very Hard | Bronze | - |
| 29 |  | [Contaminated Milk](http://www.usaco.org/index.php?page=viewproblem2&cpid=569) | Bronze | Very Hard | Bronze | - |
| 30 |  | [Load Balancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=619) | Silver | Very Hard | Bronze | - |
| 31 |  | [Moo Language](http://www.usaco.org/index.php?page=viewproblem2&cpid=1324) | Bronze | Very Hard | Bronze | - |
| 32 |  | [Printing Sequences](https://usaco.org/index.php?page=viewproblem2&cpid=1493) | Bronze | Very Hard | Bronze | - |

---

## Greedy

**63 problems** (9 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [High Card Low Card](http://www.usaco.org/index.php?page=viewproblem2&cpid=573) | Gold | Easy | Silver | Sorting |
| 2 | ⭐ | [Tasks & Deadlines](https://cses.fi/problemset/task/1630) | CSES | Easy | Silver | Sorting |
| 3 | ⭐ | [Towers](https://cses.fi/problemset/task/1073) | CSES | Easy | Gold | Sorted Set, LIS, Binary Search |
| 4 | ⭐ | [Kayaking](https://codeforces.com/contest/863/problem/B) | CF | Normal | Bronze | Sorting |
| 5 | ⭐ | [Out of Place](http://www.usaco.org/index.php?page=viewproblem2&cpid=785) | Bronze | Normal | Bronze | - |
| 6 | ⭐ | [Movie Festival II](https://cses.fi/problemset/task/1632) | CSES | Normal | Gold | Sorting, Sorted Set |
| 7 | ⭐ | [Photoshoot](http://usaco.org/index.php?page=viewproblem2&cpid=1227) | Bronze | Hard | Bronze | - |
| 8 | ⭐ | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=597) | Gold | Hard | Silver | Binary Search, Sorting, 2P |
| 9 | ⭐ | [Race](http://www.usaco.org/index.php?page=viewproblem2&cpid=989) | Bronze | Very Hard | Bronze | - |
| 10 |  | [Studying Algorithms](https://codeforces.com/gym/102951/problem/B) | CF | Very Easy | Silver | Sorting |
| 11 |  | [Mad Scientist](http://www.usaco.org/index.php?page=viewproblem2&cpid=1012) | Bronze | Easy | Bronze | - |
| 12 |  | [Watching Mooloo](http://www.usaco.org/index.php?page=viewproblem2&cpid=1301) | Bronze | Easy | Bronze | - |
| 13 |  | [Apartments](https://cses.fi/problemset/task/1084) | CSES | Easy | Silver | Sorting |
| 14 |  | [Cowntagion](http://www.usaco.org/index.php?page=viewproblem2&cpid=1062) | Silver | Easy | Silver | Tree |
| 15 |  | [Ferris Wheel](https://cses.fi/problemset/task/1090) | CSES | Easy | Silver | Sorting, 2P |
| 16 |  | [High Card Wins](http://www.usaco.org/index.php?page=viewproblem2&cpid=571) | Silver | Easy | Silver | Sorting |
| 17 |  | [Lemonade Line](http://www.usaco.org/index.php?page=viewproblem2&cpid=835) | Silver | Easy | Silver | Sorting |
| 18 |  | [Magazine Ad](https://codeforces.com/contest/803/problem/D) | CF | Easy | Silver | Binary Search, 2P |
| 19 |  | [Movie Festival](https://cses.fi/problemset/task/1629) | CSES | Easy | Silver | Sorting |
| 20 |  | [Powered Addition](https://codeforces.com/contest/1338/problem/A) | CF | Easy | Silver | Bitwise |
| 21 |  | [Rest Stops](http://www.usaco.org/index.php?page=viewproblem2&cpid=810) | Silver | Easy | Silver | - |
| 22 |  | [The Party and Sweets](https://codeforces.com/problemset/problem/1158/A) | CF | Easy | Silver | Sorting |
| 23 |  | [USB vs. PS/2](https://codeforces.com/contest/762/problem/B) | CF | Easy | Silver | Sorting, 2P |
| 24 |  | [2017 - Palindromic Partitions](https://qoj.ac/problem/793/) | CEOI | Easy | Gold | Hashing |
| 25 |  | [High Card Low Card](http://www.usaco.org/index.php?page=viewproblem2&cpid=577) | Platinum | Easy | Platinum | PURQ |
| 26 |  | [Hackerman](https://www.codechef.com/LTIME95A/problems/HKRMAN) | CC | Easy | Advanced | 2SAT, DSU, Sliding Window |
| 27 |  | [Set XOR-Min](https://judge.yosupo.jp/problem/set_xor_min) | YS | Easy | Advanced | Trie |
| 28 |  | [Absolute Sorting](https://codeforces.com/contest/1772/problem/D) | CF | Normal | Bronze | Complete Search |
| 29 |  | [Astral Superposition](https://usaco.org/index.php?page=viewproblem2&cpid=1467) | Bronze | Normal | Bronze | - |
| 30 |  | [Cow Tipping](http://www.usaco.org/index.php?page=viewproblem2&cpid=689) | Bronze | Normal | Bronze | - |
| 31 |  | [Even More Odd Photos](http://www.usaco.org/index.php?page=viewproblem2&cpid=1084) | Bronze | Normal | Bronze | - |
| 32 |  | [Palindromes Coloring](https://codeforces.com/problemset/problem/1624/D) | CF | Normal | Bronze | - |
| 33 |  | [AND, OR, and square sum](https://codeforces.com/contest/1368/problem/D) | CF | Normal | Silver | Math |
| 34 |  | [Adjust The Presentation](https://codeforces.com/problemset/problem/2021/C2) | CF | Normal | Silver | - |
| 35 |  | [Berry Picking](http://www.usaco.org/index.php?page=viewproblem2&cpid=990) | Silver | Normal | Silver | Sorting |
| 36 |  | [Big Brush](https://codeforces.com/contest/1638/problem/D) | CF | Normal | Silver | Ad Hoc, DFS |
| 37 |  | [Bovine Acrobatics](https://usaco.org/index.php?page=viewproblem2&cpid=1350) | Silver | Normal | Silver | Sorting, Deque |
| 38 |  | [Ciel and Duel](https://codeforces.com/contest/321/problem/B) | CF | Normal | Silver | - |
| 39 |  | [IPO](https://leetcode.com/problems/ipo) | LC | Normal | Silver | Sorting, Priority Queue |
| 40 |  | [Medical Parity](https://codeforces.com/contest/2181/problem/M) | CF | Normal | Silver | Prefix, Bitwise |
| 41 |  | [Minimizing Difference](https://codeforces.com/contest/1244/problem/E) | CF | Normal | Silver | Binary Search, Prefix Sums |
| 42 |  | [Yet Another Tournament](https://codeforces.com/contest/1783/problem/C) | CF | Normal | Silver | Sorting |
| 43 |  | [2020 - Village (Minimum)](https://codeforces.com/contest/1387/problem/B1) | Baltic OI | Normal | Gold | Tree |
| 44 |  | [Array Destruction](https://codeforces.com/problemset/problem/1474/C) | CF | Normal | Gold | Multiset, Sorting |
| 45 |  | [Delegation](http://www.usaco.org/index.php?page=viewproblem2&cpid=1019) | Gold | Normal | Gold | Tree |
| 46 |  | [Monsters](https://codeforces.com/contest/1810/problem/E) | CF | Normal | Gold | DSU, Set |
| 47 |  | [Nastia Plays with a Tree](https://codeforces.com/contest/1521/problem/D) | CF | Normal | Gold | Tree |
| 48 |  | [Drought](http://usaco.org/index.php?page=viewproblem2&cpid=1181) | Bronze | Hard | Bronze | - |
| 49 |  | [Milking Order](http://www.usaco.org/index.php?page=viewproblem2&cpid=832) | Bronze | Hard | Bronze | - |
| 50 |  | [Permutator](https://codeforces.com/gym/104520/problem/H) | CF | Hard | Bronze | Sorting |
| 51 |  | [Raab Game I](https://cses.fi/problemset/task/3399) | CSES | Hard | Bronze | Ad Hoc |
| 52 |  | [Closest Cow Wins](http://www.usaco.org/index.php?page=viewproblem2&cpid=1158) | Silver | Hard | Silver | Sorting, 2P |
| 53 |  | [Job Completion](https://usaco.org/index.php?page=viewproblem2&cpid=1451) | Gold | Hard | Silver | Priority Queue |
| 54 |  | [MEX vs MED](https://codeforces.com/contest/1744/problem/F) | CF | Hard | Silver | 2P |
| 55 |  | [Stick Division](https://cses.fi/problemset/task/1161) | CSES | Hard | Silver | Priority Queue |
| 56 |  | [Apple Catching](http://www.usaco.org/index.php?page=viewproblem2&cpid=1233) | Gold | Hard | Gold | Sorting, Sorted Set |
| 57 |  | [Bribing Friends](http://www.usaco.org/index.php?page=viewproblem2&cpid=1257) | Gold | Hard | Gold | DP |
| 58 |  | [Buying Gifts](https://codeforces.com/contest/1802/problem/D) | CF | Hard | Gold | Sorting, Sorted Set |
| 59 |  | [Remainder Game](https://atcoder.jp/contests/agc022/tasks/agc022_c) | AC | Hard | Gold | SP |
| 60 |  | [2012 - XOR](https://oj.uz/problem/view/IZhO12_xor) | IZhO | Hard | Advanced | Trie |
| 61 |  | [FEB](http://www.usaco.org/index.php?page=viewproblem2&cpid=1323) | Bronze | Very Hard | Bronze | Casework |
| 62 |  | [Spaced Out](http://www.usaco.org/index.php?page=viewproblem2&cpid=1088) | Silver | Very Hard | Bronze | - |
| 63 |  | [Creating Offices](https://cses.fi/problemset/task/1752) | CSES | Insane | Gold | Tree |

---

## Sorting

**71 problems** (17 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [High Card Low Card](http://www.usaco.org/index.php?page=viewproblem2&cpid=573) | Gold | Easy | Silver | Greedy |
| 2 | ⭐ | [Sum of Three Values](https://cses.fi/problemset/task/1641) | CSES | Easy | Silver | 2P |
| 3 | ⭐ | [Tasks & Deadlines](https://cses.fi/problemset/task/1630) | CSES | Easy | Silver | Greedy |
| 4 | ⭐ | [Don't Be Last!](http://www.usaco.org/index.php?page=viewproblem2&cpid=687) | Bronze | Normal | Bronze | Map |
| 5 | ⭐ | [Kayaking](https://codeforces.com/contest/863/problem/B) | CF | Normal | Bronze | Greedy |
| 6 | ⭐ | [Convention II](http://www.usaco.org/index.php?page=viewproblem2&cpid=859) | Silver | Normal | Silver | Priority Queue |
| 7 | ⭐ | [Diamond Collector](http://www.usaco.org/index.php?page=viewproblem2&cpid=643) | Silver | Normal | Silver | 2P |
| 8 | ⭐ | [Mountain View](http://www.usaco.org/index.php?page=viewproblem2&cpid=896) | Silver | Normal | Silver | - |
| 9 | ⭐ | [Packing Under Range Regulations](https://atcoder.jp/contests/abc214/tasks/abc214_e) | AC | Normal | Silver | Priority Queue |
| 10 | ⭐ | [Rental Service](http://www.usaco.org/index.php?page=viewproblem2&cpid=787) | Silver | Normal | Silver | Prefix Sums |
| 11 | ⭐ | [Room Allocation](https://cses.fi/problemset/task/1164) | CSES | Normal | Silver | Priority Queue |
| 12 | ⭐ | [Splitting the Field](http://www.usaco.org/index.php?page=viewproblem2&cpid=645) | Gold | Normal | Silver | Prefix Sums |
| 13 | ⭐ | [Movie Festival II](https://cses.fi/problemset/task/1632) | CSES | Normal | Gold | Sorted Set, Greedy |
| 14 | ⭐ | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=597) | Gold | Hard | Silver | Binary Search, 2P, Greedy |
| 15 | ⭐ | [Deforestation](https://usaco.org/index.php?page=viewproblem2&cpid=1447) | Silver | Hard | Silver | Binary Search |
| 16 | ⭐ | [Serval and Kaitenzushi Buffet](https://codeforces.com/contest/2085/problem/D) | CF | Hard | Silver | Priority Queue |
| 17 | ⭐ | [Survival of the Weakest (easy version)](https://codeforces.com/problemset/problem/1805/F1) | CF | Hard | Silver | Priority Queue |
| 18 |  | [Bubble Sort](https://www.hackerrank.com/challenges/ctci-bubble-sort/problem) | HR | Very Easy | Bronze | - |
| 19 |  | [Studying Algorithms](https://codeforces.com/gym/102951/problem/B) | CF | Very Easy | Silver | Greedy |
| 20 |  | [Distinct Numbers](https://cses.fi/problemset/task/1621) | CSES | Easy | Bronze | Set |
| 21 |  | [Playing in a Casino](https://codeforces.com/contest/1808/problem/B) | CF | Easy | Bronze | - |
| 22 |  | [All Manhattan Distances](https://cses.fi/problemset/task/3411) | CSES | Easy | Silver | - |
| 23 |  | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=594) | Silver | Easy | Silver | Binary Search |
| 24 |  | [Apartments](https://cses.fi/problemset/task/1084) | CSES | Easy | Silver | Greedy |
| 25 |  | [Convention](http://www.usaco.org/index.php?page=viewproblem2&cpid=858) | Silver | Easy | Silver | Binary Search |
| 26 |  | [Ferris Wheel](https://cses.fi/problemset/task/1090) | CSES | Easy | Silver | Greedy, 2P |
| 27 |  | [High Card Wins](http://www.usaco.org/index.php?page=viewproblem2&cpid=571) | Silver | Easy | Silver | Greedy |
| 28 |  | [Lemonade Line](http://www.usaco.org/index.php?page=viewproblem2&cpid=835) | Silver | Easy | Silver | Greedy |
| 29 |  | [Lisa and the Martians](https://codeforces.com/contest/1851/problem/F) | CF | Easy | Silver | Bitwise, Trie |
| 30 |  | [Movie Festival](https://cses.fi/problemset/task/1629) | CSES | Easy | Silver | Greedy |
| 31 |  | [Paired Up](http://www.usaco.org/index.php?page=viewproblem2&cpid=738) | Silver | Easy | Silver | 2P |
| 32 |  | [Quiz Master](https://codeforces.com/contest/1777/problem/C) | CF | Easy | Silver | 2P, Sliding Window |
| 33 |  | [Restaurant Customers](https://cses.fi/problemset/task/1619) | CSES | Easy | Silver | Prefix Sums |
| 34 |  | [The Party and Sweets](https://codeforces.com/problemset/problem/1158/A) | CF | Easy | Silver | Greedy |
| 35 |  | [USB vs. PS/2](https://codeforces.com/contest/762/problem/B) | CF | Easy | Silver | Greedy, 2P |
| 36 |  | [Robot Collisions](https://codeforces.com/problemset/problem/1525/C) | CF | Easy | Gold | Stack |
| 37 |  | [Counting Liars](http://usaco.org/index.php?page=viewproblem2&cpid=1228) | Bronze | Normal | Bronze | Complete Search |
| 38 |  | [Cow College](http://usaco.org/index.php?page=viewproblem2&cpid=1251) | Bronze | Normal | Bronze | - |
| 39 |  | [Why Did the Cow Cross the Road III](http://www.usaco.org/index.php?page=viewproblem2&cpid=713) | Bronze | Normal | Bronze | Simulation |
| 40 |  | [Berry Picking](http://www.usaco.org/index.php?page=viewproblem2&cpid=990) | Silver | Normal | Silver | Greedy |
| 41 |  | [Bovine Acrobatics](https://usaco.org/index.php?page=viewproblem2&cpid=1350) | Silver | Normal | Silver | Greedy, Deque |
| 42 |  | [Correct Placement](https://codeforces.com/problemset/problem/1472/E) | CF | Normal | Silver | - |
| 43 |  | [Covered Points Count](https://codeforces.com/problemset/problem/1000/C) | CF | Normal | Silver | Prefix Sums, Coordinate Compression |
| 44 |  | [Firecrackers](https://codeforces.com/contest/1468/problem/D) | CF | Normal | Silver | Binary Search |
| 45 |  | [IPO](https://leetcode.com/problems/ipo) | LC | Normal | Silver | Greedy, Priority Queue |
| 46 |  | [Lifeguards](http://www.usaco.org/index.php?page=viewproblem2&cpid=786) | Silver | Normal | Silver | Prefix Sums |
| 47 |  | [Nezzar and Symmetric Array](https://codeforces.com/problemset/problem/1478/C) | CF | Normal | Silver | Prefix Sums |
| 48 |  | [Replace the Numbers](https://codeforces.com/contest/1620/problem/E) | CF | Normal | Silver | - |
| 49 |  | [Save the Nature](https://codeforces.com/problemset/problem/1223/C) | CF | Normal | Silver | Binary Search |
| 50 |  | [Ski Slope](https://usaco.org/index.php?page=viewproblem2&cpid=1520) | Silver | Normal | Silver | Tree, Binary Search |
| 51 |  | [Sleepy Cow Herding](http://www.usaco.org/index.php?page=viewproblem2&cpid=918) | Silver | Normal | Silver | 2P |
| 52 |  | [Social Distancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=1038) | Silver | Normal | Silver | Binary Search |
| 53 |  | [Stuck in a Rut](http://www.usaco.org/index.php?page=viewproblem2&cpid=1064) | Silver | Normal | Silver | - |
| 54 |  | [The Smallest String Concatenation](https://codeforces.com/problemset/problem/632/C) | CF | Normal | Silver | - |
| 55 |  | [Why Did the Cow Cross the Road](http://www.usaco.org/index.php?page=viewproblem2&cpid=714) | Silver | Normal | Silver | Priority Queue |
| 56 |  | [Yet Another Tournament](https://codeforces.com/contest/1783/problem/C) | CF | Normal | Silver | Greedy |
| 57 |  | [Array Destruction](https://codeforces.com/problemset/problem/1474/C) | CF | Normal | Gold | Multiset, Greedy |
| 58 |  | [Laser Takahashi](https://atcoder.jp/contests/abc442/tasks/abc442_e) | AC | Normal | Platinum | Geometry, Angles |
| 59 |  | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=592) | Bronze | Hard | Bronze | Simulation |
| 60 |  | [Permutator](https://codeforces.com/gym/104520/problem/H) | CF | Hard | Bronze | Greedy |
| 61 |  | [2010 - A Huge Tower](https://oj.uz/problem/view/CEOI10_tower) | CEOI | Hard | Silver | 2P |
| 62 |  | [Closest Cow Wins](http://www.usaco.org/index.php?page=viewproblem2&cpid=1158) | Silver | Hard | Silver | Greedy, 2P |
| 63 |  | [Handshake](https://atcoder.jp/contests/abc149/tasks/abc149_e) | AC | Hard | Silver | Binary Search, Prefix Sums |
| 64 |  | [OohMoo Milk](https://usaco.org/index.php?page=viewproblem2&cpid=1523) | Gold | Hard | Silver | Binary Search |
| 65 |  | [Out Of Sorts](http://www.usaco.org/index.php?page=viewproblem2&cpid=834) | Silver | Hard | Silver | - |
| 66 |  | [Triangles](http://www.usaco.org/index.php?page=viewproblem2&cpid=1015) | Silver | Hard | Silver | - |
| 67 |  | [Apple Catching](http://www.usaco.org/index.php?page=viewproblem2&cpid=1233) | Gold | Hard | Gold | Greedy, Sorted Set |
| 68 |  | [Buying Gifts](https://codeforces.com/contest/1802/problem/D) | CF | Hard | Gold | Greedy, Sorted Set |
| 69 |  | [Cloud Computing](https://oj.uz/problem/view/CEOI18_clo) | CEOI | Hard | Gold | Knapsack |
| 70 |  | [Meetings](http://www.usaco.org/index.php?page=viewproblem2&cpid=967) | Silver | Very Hard | Silver | - |
| 71 |  | [Load Balancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=624) | Platinum | Insane | Silver | Binary Search |

---

## Binary Search

**91 problems** (14 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Array Division](https://cses.fi/problemset/task/1085) | CSES | Easy | Silver | - |
| 2 | ⭐ | [Cross Country Skiing](http://www.usaco.org/index.php?page=viewproblem2&cpid=380) | Old Silver | Easy | Silver | Flood Fill |
| 3 | ⭐ | [Towers](https://cses.fi/problemset/task/1073) | CSES | Easy | Gold | Sorted Set, Greedy, LIS |
| 4 | ⭐ | [Xor-Paths](https://codeforces.com/contest/1006/problem/F) | CF | Easy | Gold | Meet in the Middle, DFS |
| 5 | ⭐ | [Edu C: Magic Ship](https://codeforces.com/problemset/problem/1117/C) | CF | Normal | Silver | Prefix Sums |
| 6 | ⭐ | [The Meeting Place Cannot Be Changed](https://codeforces.com/contest/782/problem/B) | CF | Normal | Silver | - |
| 7 | ⭐ | [Wormhole Sort](http://www.usaco.org/index.php?page=viewproblem2&cpid=992) | Silver | Normal | Silver | Connected Components |
| 8 | ⭐ | [2007 - Sails](http://oj.uz/problem/view/IOI07_sails) | IOI | Normal | Platinum | 1DRQ |
| 9 | ⭐ | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=597) | Gold | Hard | Silver | Sorting, 2P, Greedy |
| 10 | ⭐ | [Deforestation](https://usaco.org/index.php?page=viewproblem2&cpid=1447) | Silver | Hard | Silver | Sorting |
| 11 | ⭐ | [2021 - Sateliti](https://oj.uz/problem/view/COCI20_satellti) | COCI | Hard | Gold | Hashing |
| 12 | ⭐ | [The Best Subsequence](https://usaco.org/index.php?page=viewproblem2&cpid=1498) | Gold | Hard | Gold | Modular Arithmetic |
| 13 | ⭐ | [2017 - Traveling Merchant](https://oj.uz/problem/view/APIO17_merchant) | APIO | Hard | Advanced | APSP |
| 14 | ⭐ | [Babysitting](https://codeforces.com/problemset/problem/1903/F) | CF | Hard | Advanced | 2SAT, Trees |
| 15 |  | [ Building an Aquarium](https://codeforces.com/contest/1873/problem/E) | CF | Easy | Silver | - |
| 16 |  | [2012 - Job Scheduling](https://oj.uz/problem/view/CEOI12_jobs) | CEOI | Easy | Silver | - |
| 17 |  | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=594) | Silver | Easy | Silver | Sorting |
| 18 |  | [Cellular Network](https://codeforces.com/contest/702/problem/C) | CF | Easy | Silver | 2P |
| 19 |  | [Convention](http://www.usaco.org/index.php?page=viewproblem2&cpid=858) | Silver | Easy | Silver | Sorting |
| 20 |  | [Counting Haybales](http://www.usaco.org/index.php?page=viewproblem2&cpid=666) | Silver | Easy | Silver | - |
| 21 |  | [Cow Dance Show](http://www.usaco.org/index.php?page=viewproblem2&cpid=690) | Silver | Easy | Silver | Sorted Set |
| 22 |  | [Cow-libi](http://www.usaco.org/index.php?page=viewproblem2&cpid=1303) | Silver | Easy | Silver | - |
| 23 |  | [Cutting Out](https://codeforces.com/contest/1077/problem/D) | CF | Easy | Silver | - |
| 24 |  | [Div 2 C - Maximum Median](https://codeforces.com/contest/1201/problem/C) | CF | Easy | Silver | - |
| 25 |  | [Factory Machines](https://cses.fi/problemset/task/1620) | CSES | Easy | Silver | - |
| 26 |  | [Guess the K-th Zero (Easy)](https://codeforces.com/contest/1520/problem/F1) | CF | Easy | Silver | - |
| 27 |  | [Magazine Ad](https://codeforces.com/contest/803/problem/D) | CF | Easy | Silver | Greedy, 2P |
| 28 |  | [Mixing Water](https://codeforces.com/problemset/problem/1359/C) | CF | Easy | Silver | - |
| 29 |  | [The Wu](https://codeforces.com/contest/1017/problem/D) | CF | Easy | Silver | Bitwise, Complete Search |
| 30 |  | [Close Tuples](https://codeforces.com/contest/1462/problem/E2) | CF | Easy | Gold | Combinatorics |
| 31 |  | [Irrigation](https://codeforces.com/contest/1181/problem/D) | CF | Easy | Gold | PURS, Offline |
| 32 |  | [K-Good Segment](https://codeforces.com/contest/616/problem/D) | CF | Easy | Gold | 2P |
| 33 |  | [Maximum Subsequence](https://codeforces.com/contest/888/problem/E) | CF | Easy | Gold | Meet in the Middle |
| 34 |  | [2006 - Antenna](https://qoj.ac/problem/17234) | CEOI | Easy | Platinum | Radial Sweep |
| 35 |  | [Ammar-utiful Array](https://codeforces.com/gym/104468/problem/H) | CF | Normal | Silver | Prefix Sums |
| 36 |  | [Connecting Two Barns](http://www.usaco.org/index.php?page=viewproblem2&cpid=1159) | Silver | Normal | Silver | Connected Components, 2P |
| 37 |  | [Firecrackers](https://codeforces.com/contest/1468/problem/D) | CF | Normal | Silver | Sorting |
| 38 |  | [Firehose](https://dmoj.ca/problem/ccc10s3) | CCC | Normal | Silver | - |
| 39 |  | [Mahmoud & Ehab & Function](https://codeforces.com/contest/862/problem/E) | CF | Normal | Silver | - |
| 40 |  | [Min Max Sort](https://codeforces.com/contest/1792/problem/C) | CF | Normal | Silver | Two Pointers |
| 41 |  | [Minimizing Difference](https://codeforces.com/contest/1244/problem/E) | CF | Normal | Silver | Prefix Sums, Greedy |
| 42 |  | [Moocast](http://www.usaco.org/index.php?page=viewproblem2&cpid=669) | Gold | Normal | Silver | Connected Components |
| 43 |  | [Multiplication Table](https://cses.fi/problemset/task/2422) | CSES | Normal | Silver | - |
| 44 |  | [Packmen](https://codeforces.com/contest/847/problem/E) | CF | Normal | Silver | - |
| 45 |  | [Pond](https://atcoder.jp/contests/abc203/tasks/abc203_d?lang=en) | AC | Normal | Silver | Prefix Sums |
| 46 |  | [Preparing for Merge Sort](https://codeforces.com/contest/847/problem/B) | CF | Normal | Silver | - |
| 47 |  | [Sabotage](http://usaco.org/index.php?page=viewproblem2&cpid=419) | Old Gold | Normal | Silver | Prefix Sums |
| 48 |  | [Salary Changing](https://codeforces.com/contest/1251/problem/D) | CF | Normal | Silver | - |
| 49 |  | [Save the Nature](https://codeforces.com/problemset/problem/1223/C) | CF | Normal | Silver | Sorting |
| 50 |  | [Set Or Decrease](https://codeforces.com/contest/1622/problem/C) | CF | Normal | Silver | Prefix Sums |
| 51 |  | [Sheikh (Easy version)](https://codeforces.com/problemset/problem/1732/C1) | CF | Normal | Silver | Bitwise, Prefix Sums |
| 52 |  | [Ski Slope](https://usaco.org/index.php?page=viewproblem2&cpid=1520) | Silver | Normal | Silver | Tree, Sorting |
| 53 |  | [Social Distancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=1038) | Silver | Normal | Silver | Sorting |
| 54 |  | [To Become Max](https://codeforces.com/contest/1856/problem/C) | CF | Normal | Silver | - |
| 55 |  | [TripTastic](https://www.codechef.com/problems/TRPTSTIC) | CC | Normal | Silver | 2D Prefix Sums |
| 56 |  | [2009 - Mecho](https://oj.uz/problem/view/IOI09_mecho) | IOI | Normal | Gold | BFS |
| 57 |  | [2015 - Inheritance](https://qoj.ac/problem/1213) | JOI | Normal | Gold | MST |
| 58 |  | [Blocking Elements](https://codeforces.com/contest/1918/problem/D) | CF | Normal | Gold | PURS, DP |
| 59 |  | [Bovine Genomics](http://www.usaco.org/index.php?page=viewproblem2&cpid=741) | Gold | Normal | Gold | Hashing |
| 60 |  | [Cat & Mice](https://open.kattis.com/problems/catandmice) | Kattis | Normal | Gold | Bitmasks, DP, Geometry |
| 61 |  | [Count Descendants](https://atcoder.jp/contests/abc202/tasks/abc202_e) | AC | Normal | Gold | Euler Tour |
| 62 |  | [Delegation](http://www.usaco.org/index.php?page=viewproblem2&cpid=1020) | Platinum | Normal | Gold | DP, Tree |
| 63 |  | [Dishwashing](http://www.usaco.org/index.php?page=viewproblem2&cpid=922) | Gold | Normal | Gold | Stack |
| 64 |  | [Milking Order](http://www.usaco.org/index.php?page=viewproblem2&cpid=838) | Gold | Normal | Gold | TopoSort |
| 65 |  | [Not Escaping](https://codeforces.com/contest/1627/problem/E) | CF | Normal | Gold | SP, Coordinate Compression, DP |
| 66 |  | [Spanning Tree Fraction](https://www.hackerrank.com/contests/w31/challenges/spanning-tree-fraction/problem) | HR | Normal | Gold | MST |
| 67 |  | [Talent Show](http://www.usaco.org/index.php?page=viewproblem2&cpid=839) | Gold | Normal | Gold | DP, Knapsack |
| 68 |  | [The Endspeaker (Hard Version)](https://codeforces.com/contest/2027/problem/D2) | CF | Normal | Gold | DP, Two Pointers, PURS |
| 69 |  | [2011 - Growing Trees](https://oj.uz/problem/view/BOI11_grow) | Baltic OI | Normal | Platinum | 1DRQ |
| 70 |  | [Cyclic Array](https://cses.fi/problemset/task/1191/) | CSES | Normal | Platinum | Binary Jumping, 2P |
| 71 |  | [Cow Checkups](https://usaco.org/index.php?page=viewproblem2&cpid=1470) | Silver | Hard | Silver | Two Pointers, Prefix Sum |
| 72 |  | [Grouped Carriages](https://codeforces.com/contest/1866/problem/G) | CF | Hard | Silver | Priority Queue |
| 73 |  | [Handshake](https://atcoder.jp/contests/abc149/tasks/abc149_e) | AC | Hard | Silver | Prefix Sums, Sorting |
| 74 |  | [Level Generation](https://codeforces.com/problemset/problem/818/F) | CF | Hard | Silver | - |
| 75 |  | [Loan Repayment](http://www.usaco.org/index.php?page=viewproblem2&cpid=991) | Silver | Hard | Silver | Sqrt |
| 76 |  | [Max Median](https://codeforces.com/problemset/problem/1486/D) | CF | Hard | Silver | Prefix Sums |
| 77 |  | [Minimax Problem](https://codeforces.com/contest/1288/problem/D) | CF | Hard | Silver | Bitmasks |
| 78 |  | [OohMoo Milk](https://usaco.org/index.php?page=viewproblem2&cpid=1523) | Gold | Hard | Silver | Sorting |
| 79 |  | [2005 - Garden](https://dmoj.ca/problem/ioi05p1) | IOI | Hard | Gold | Sliding Window, DP |
| 80 |  | [2009 - Regions](https://oj.uz/problem/view/IOI09_regions) | IOI | Hard | Gold | Euler Tour |
| 81 |  | [2016 - Matryoshka](https://qoj.ac/problem/402) | JOI | Hard | Gold | DP, LIS |
| 82 |  | [Cow Camp](http://usaco.org/index.php?page=viewproblem2&cpid=1210) | Gold | Hard | Gold | Combinatorics, Probability, Math |
| 83 |  | [Prime Gift](https://codeforces.com/contest/912/problem/E) | CF | Hard | Gold | Meet in the Middle, DFS |
| 84 |  | [2012 - Mobile](https://oj.uz/problem/view/BOI12_mobile) | Baltic OI | Very Hard | Silver | Stack |
| 85 |  | [Bakery](http://www.usaco.org/index.php?page=viewproblem2&cpid=1302) | Silver | Very Hard | Silver | - |
| 86 |  | [Cowdependence](https://usaco.org/index.php?page=viewproblem2&cpid=1449) | Gold | Very Hard | Silver | Prefix Sums, Two Pointers, Sqrt |
| 87 |  | [Lane Switching](https://open.kattis.com/problems/laneswitching) | Kattis | Very Hard | Silver | Connected Components |
| 88 |  | [2016 - Palinilap](https://oj.uz/problem/view/COI16_palinilap) | COI | Very Hard | Gold | Hashing |
| 89 |  | [2011 - 2circles](https://oj.uz/problem/view/balkan11_2circles) | Balkan OI | Very Hard | Advanced | Geometry |
| 90 |  | [Load Balancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=624) | Platinum | Insane | Silver | Sorting |
| 91 |  | [Gold Experience](https://codeforces.com/contest/1148/problem/G) | CF | Insane | Gold | Bitmasks, NT |

---

## Ternary Search

**8 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Building Construction](https://www.spoj.com/problems/KOPC12A/) | SPOJ | Easy | Gold | - |
| 2 |  | [ Freefall](https://atcoder.jp/contests/abc279/tasks/abc279_d) | AC | Easy | Gold | - |
| 3 |  | [Game With Triangles](https://codeforces.com/problemset/problem/2063/D) | CF | Easy | Gold | - |
| 4 |  | [Police Patrol](https://codeforces.com/problemset/problem/427/E) | CF | Easy | Gold | - |
| 5 |  | [Restorer Distance](https://codeforces.com/contest/1355/problem/E) | CF | Easy | Gold | - |
| 6 |  | [Haybale Distribution](https://usaco.org/index.php?page=viewproblem2&cpid=1355) | Gold | Normal | Gold | - |
| 7 |  | [Simple Skewness](https://codeforces.com/problemset/problem/626/E) | CF | Normal | Gold | - |
| 8 |  | [Boarding Passes](https://oj.uz/problem/view/BOI22_passes) | Baltic OI | Very Hard | Gold | - |

---

## Two Pointers

**4 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Min Max Sort](https://codeforces.com/contest/1792/problem/C) | CF | Normal | Silver | Binary Search |
| 2 |  | [The Endspeaker (Hard Version)](https://codeforces.com/contest/2027/problem/D2) | CF | Normal | Gold | DP, Binary Search, PURS |
| 3 |  | [Cow Checkups](https://usaco.org/index.php?page=viewproblem2&cpid=1470) | Silver | Hard | Silver | Prefix Sum, Binary Search |
| 4 |  | [Cowdependence](https://usaco.org/index.php?page=viewproblem2&cpid=1449) | Gold | Very Hard | Silver | Binary Search, Prefix Sums, Sqrt |

---

## Sliding Window

**22 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Subarray Sums I](https://cses.fi/problemset/task/1660) | CSES | Very Easy | Silver | - |
| 2 |  | [Quiz Master](https://codeforces.com/contest/1777/problem/C) | CF | Easy | Silver | 2P, Sorting |
| 3 |  | [Haybale Feast](http://www.usaco.org/index.php?page=viewproblem2&cpid=767) | Gold | Easy | Gold | Set |
| 4 |  | [Mex Min](https://atcoder.jp/contests/abc194/tasks/abc194_e) | AC | Easy | Gold | - |
| 5 |  | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum) | LC | Easy | Gold | - |
| 6 |  | [Subarray Distinct Values](https://cses.fi/problemset/task/2428) | CSES | Easy | Gold | 2P |
| 7 |  | [Hackerman](https://www.codechef.com/LTIME95A/problems/HKRMAN) | CC | Easy | Advanced | 2SAT, DSU, Greedy |
| 8 |  | [2015 - Palembang Bridges](https://oj.uz/problem/view/APIO15_bridge) | APIO | Normal | Gold | Median |
| 9 |  | [Fort Moo](http://www.usaco.org/index.php?page=viewproblem2&cpid=600) | Platinum | Normal | Gold | - |
| 10 |  | [Little Bird](https://cses.fi/poi/task/527) | POI | Normal | Gold | DP |
| 11 |  | [Max Subarray Sum II](https://cses.fi/problemset/task/1644) | CSES | Normal | Gold | Prefix Sums |
| 12 |  | [Razlika](https://dmoj.ca/problem/coci12c4p4) | COCI | Normal | Gold | - |
| 13 |  | [Sliding Median](https://cses.fi/problemset/task/1076) | CSES | Normal | Gold | Set |
| 14 |  | [2010 - Frog](https://szkopul.edu.pl/problemset/problem/qDH9CkBHZKHY4vbKRBlXPrA7/site/?key=statement) | POI | Normal | Platinum | Binary Jumping |
| 15 |  | [2005 - Garden](https://dmoj.ca/problem/ioi05p1) | IOI | Hard | Gold | Binary Search, DP |
| 16 |  | [2006 - Pyramid](https://dmoj.ca/problem/ioi06p2) | IOI | Hard | Gold | DP |
| 17 |  | [2009 - Digging for Oil](https://dmoj.ca/problem/apio09p1) | APIO | Hard | Gold | DP |
| 18 |  | [2015 - Hacker](https://oj.uz/problem/view/BOI15_hac) | Baltic OI | Hard | Gold | - |
| 19 |  | [Pilots](https://szkopul.edu.pl/problemset/problem/lcU5m2RAICwNHsdzydb8JTQw/site/) | POI | Hard | Gold | - |
| 20 |  | [Sliding Cost](https://cses.fi/problemset/task/1077) | CSES | Hard | Gold | Set |
| 21 |  | [Equilateral Triangles](http://www.usaco.org/index.php?page=viewproblem2&cpid=1021) | Platinum | Hard | Platinum | Bitset |
| 22 |  | [Binary Land](https://www.codechef.com/problems/BINLAND) | CC | Very Hard | Gold | DP |

---

## Prefix Sums

**52 problems** (8 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Good Subarrays](https://codeforces.com/contest/1398/problem/C) | CF | Easy | Silver | Math |
| 2 | ⭐ | [Edu C: Magic Ship](https://codeforces.com/problemset/problem/1117/C) | CF | Normal | Silver | Binary Search |
| 3 | ⭐ | [Haybale Stacking](https://www.spoj.com/problems/HAYBALE/) | SPOJ | Normal | Silver | - |
| 4 | ⭐ | [Rental Service](http://www.usaco.org/index.php?page=viewproblem2&cpid=787) | Silver | Normal | Silver | Sorting |
| 5 | ⭐ | [Running Miles](https://codeforces.com/contest/1826/problem/D) | CF | Normal | Silver | - |
| 6 | ⭐ | [Splitting the Field](http://www.usaco.org/index.php?page=viewproblem2&cpid=645) | Gold | Normal | Silver | Sorting |
| 7 | ⭐ | [Help Yourself](http://usaco.org/index.php?page=viewproblem2&cpid=1018) | Gold | Normal | Gold | Combinatorics |
| 8 | ⭐ | [Farmer John's Favorite Operation](https://usaco.org/index.php?page=viewproblem2&cpid=1471) | Silver | Hard | Silver | - |
| 9 |  | [Breed Counting](http://www.usaco.org/index.php?page=viewproblem2&cpid=572) | Silver | Very Easy | Silver | - |
| 10 |  | [Hoof Paper Scissors](http://www.usaco.org/index.php?page=viewproblem2&cpid=691) | Silver | Very Easy | Silver | - |
| 11 |  | [GCD on Blackboard](https://atcoder.jp/contests/abc125/tasks/abc125_c) | AC | Easy | Silver | - |
| 12 |  | [Max Subarray Sum](https://cses.fi/problemset/task/1643) | CSES | Easy | Silver | - |
| 13 |  | [Range XOR Queries](https://cses.fi/problemset/task/1650) | CSES | Easy | Silver | - |
| 14 |  | [Restaurant Customers](https://cses.fi/problemset/task/1619) | CSES | Easy | Silver | Sorting |
| 15 |  | [Subarray Divisibility](https://cses.fi/problemset/task/1662) | CSES | Easy | Silver | - |
| 16 |  | [Subarray Sums II](https://cses.fi/problemset/task/1661) | CSES | Easy | Silver | - |
| 17 |  | [Subsequences Summing to Sevens](http://www.usaco.org/index.php?page=viewproblem2&cpid=595) | Silver | Easy | Silver | - |
| 18 |  | [Jury Marks](https://codeforces.com/contest/831/problem/C) | CF | Normal | Bronze | Set |
| 19 |  | [Alternating String](https://codeforces.com/contest/2008/problem/E) | CF | Normal | Silver | - |
| 20 |  | [Ammar-utiful Array](https://codeforces.com/gym/104468/problem/H) | CF | Normal | Silver | Binary Search |
| 21 |  | [Counting Rectangles](https://codeforces.com/problemset/problem/1722/E) | CF | Normal | Silver | - |
| 22 |  | [Covered Points Count](https://codeforces.com/problemset/problem/1000/C) | CF | Normal | Silver | Sorting, Coordinate Compression |
| 23 |  | [Just Green Enough](http://www.usaco.org/index.php?page=viewproblem2&cpid=1112) | Silver | Normal | Silver | - |
| 24 |  | [Kites](https://codeforces.com/gym/105822/problem/B) | CF | Normal | Silver | - |
| 25 |  | [Lifeguards](http://www.usaco.org/index.php?page=viewproblem2&cpid=786) | Silver | Normal | Silver | Sorting |
| 26 |  | [Minimizing Difference](https://codeforces.com/contest/1244/problem/E) | CF | Normal | Silver | Binary Search, Greedy |
| 27 |  | [Multiple of 2019](https://atcoder.jp/contests/abc164/tasks/abc164_d) | AC | Normal | Silver | - |
| 28 |  | [Nezzar and Symmetric Array](https://codeforces.com/problemset/problem/1478/C) | CF | Normal | Silver | Sorting |
| 29 |  | [Nusret Gökçe](https://codeforces.com/gym/104114/problem/N) | CF | Normal | Silver | - |
| 30 |  | [Pond](https://atcoder.jp/contests/abc203/tasks/abc203_d?lang=en) | AC | Normal | Silver | Binary Search |
| 31 |  | [Queries for Number of Palindromes](https://codeforces.com/contest/245/problem/H) | CF | Normal | Silver | - |
| 32 |  | [Sabotage](http://usaco.org/index.php?page=viewproblem2&cpid=419) | Old Gold | Normal | Silver | Binary Search |
| 33 |  | [Set Or Decrease](https://codeforces.com/contest/1622/problem/C) | CF | Normal | Silver | Binary Search |
| 34 |  | [Sheikh (Easy version)](https://codeforces.com/problemset/problem/1732/C1) | CF | Normal | Silver | Bitwise, Binary Search |
| 35 |  | [Sliding Window Summation](http://usaco.org/index.php?page=viewproblem2&cpid=1544) | Silver | Normal | Silver | Bitwise |
| 36 |  | [Subarray Sum Constraints](https://cses.fi/problemset/task/3294) | CSES | Normal | Silver | DFS, Connected Components |
| 37 |  | [Sum of XOR Functions](https://codeforces.com/contest/1879/problem/D) | CF | Normal | Silver | Bitwise |
| 38 |  | [Xor Sigma Problem](https://atcoder.jp/contests/abc365/tasks/abc365_e) | AC | Normal | Silver | Bitwise |
| 39 |  | [3SUM](http://www.usaco.org/index.php?page=viewproblem2&cpid=994) | Gold | Normal | Gold | - |
| 40 |  | [Jeopardized Projects](https://codeforces.com/gym/103886/problem/E) | CF | Normal | Gold | Combinatorics |
| 41 |  | [Max Subarray Sum II](https://cses.fi/problemset/task/1644) | CSES | Normal | Gold | Sliding Window |
| 42 |  | [Sleeping in Class](http://www.usaco.org/index.php?page=viewproblem2&cpid=1213) | Platinum | Normal | Platinum | NT |
| 43 |  | [2014 - Hotels](https://szkopul.edu.pl/problemset/problem/gDw3iFkeVm7ZA3j_16-XR7jI/site/?key=statement) | POI | Hard | Silver | Tree |
| 44 |  | [Handshake](https://atcoder.jp/contests/abc149/tasks/abc149_e) | AC | Hard | Silver | Binary Search, Sorting |
| 45 |  | [Irreducible Anagrams](https://codeforces.com/contest/1291/problem/D) | CF | Hard | Silver | - |
| 46 |  | [Max Median](https://codeforces.com/problemset/problem/1486/D) | CF | Hard | Silver | Binary Search |
| 47 |  | [Sum of Segments](https://codeforces.com/contest/2026/problem/D) | CF | Hard | Silver | - |
| 48 |  | [Drought](http://usaco.org/index.php?page=viewproblem2&cpid=1185) | Gold | Hard | Gold | DP |
| 49 |  | [Moortal Cowmbat](http://www.usaco.org/index.php?page=viewproblem2&cpid=971) | Gold | Hard | Gold | DP, APSP |
| 50 |  | [Palisection](https://codeforces.com/contest/17/problem/E) | CF | Hard | Advanced | Strings |
| 51 |  | [Cowdependence](https://usaco.org/index.php?page=viewproblem2&cpid=1449) | Gold | Very Hard | Silver | Binary Search, Two Pointers, Sqrt |
| 52 |  | [Interstellar Intervals](https://usaco.org/index.php?page=viewproblem2&cpid=1450) | Gold | Very Hard | Gold | DP |

---

## 2D Prefix Sums

**9 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Nuske vs Phantom Thnook](https://atcoder.jp/contests/agc015/tasks/agc015_c) | AC | Hard | Silver | Trees |
| 2 | ⭐ | [Painting the Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=923) | Gold | Hard | Silver | Max Subarray Sum |
| 3 |  | [Forest Queries](https://cses.fi/problemset/task/1652) | CSES | Easy | Silver | - |
| 4 |  | [Painting the Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=919) | Silver | Normal | Silver | - |
| 5 |  | [TripTastic](https://www.codechef.com/problems/TRPTSTIC) | CC | Normal | Silver | Binary Search |
| 6 |  | [Eating](https://codeforces.com/problemset/problem/2064/D) | CF | Hard | Silver | Bitmasking, DP |
| 7 |  | [Rectangular Pasture](http://www.usaco.org/index.php?page=viewproblem2&cpid=1063) | Silver | Hard | Silver | - |
| 8 |  | [The Lazy Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=416) | Old Silver | Hard | Silver | - |
| 9 |  | [Modern Art](http://www.usaco.org/index.php?page=viewproblem2&cpid=744) | Platinum | Very Hard | Silver | - |

---

## Difference Array

**4 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Karen and Coffee](https://codeforces.com/contest/816/problem/B) | CF | Easy | Silver | - |
| 2 |  | [Greg and Array](https://codeforces.com/contest/295/problem/A) | CF | Normal | Silver | - |
| 3 |  | [Little Girl and Maximum Sum](https://codeforces.com/contest/276/problem/C) | CF | Normal | Silver | - |
| 4 |  | [QED's Favorite Permutation](https://codeforces.com/contest/2030/problem/D) | CF | Normal | Silver | Sortings |

---

## Set

**12 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Where Am I?](http://www.usaco.org/index.php?page=viewproblem2&cpid=964) | Bronze | Easy | Bronze | - |
| 2 |  | [Distinct Numbers](https://cses.fi/problemset/task/1621) | CSES | Easy | Bronze | Sorting |
| 3 |  | [Haybale Feast](http://www.usaco.org/index.php?page=viewproblem2&cpid=767) | Gold | Easy | Gold | Sliding Window |
| 4 |  | [It's Mooin' Time II](https://usaco.org/index.php?page=viewproblem2&cpid=1468) | Bronze | Normal | Bronze | Map |
| 5 |  | [Jury Marks](https://codeforces.com/contest/831/problem/C) | CF | Normal | Bronze | Prefix Sums |
| 6 |  | [Team Tic Tac Toe](http://www.usaco.org/index.php?page=viewproblem2&cpid=831) | Bronze | Normal | Bronze | Simulation |
| 7 |  | [Monsters](https://codeforces.com/contest/1810/problem/E) | CF | Normal | Gold | DSU, Greedy |
| 8 |  | [Sliding Median](https://cses.fi/problemset/task/1076) | CSES | Normal | Gold | Sliding Window |
| 9 |  | [Sum of Four Values](https://cses.fi/problemset/task/1642) | CSES | Normal | Gold | - |
| 10 |  | [Into Blocks](https://codeforces.com/contest/1209/problem/G1) | CF | Hard | Bronze | Map |
| 11 |  | [It's Mooin' Time](https://usaco.org/index.php?page=viewproblem2&cpid=1445) | Bronze | Hard | Bronze | Maps |
| 12 |  | [Sliding Cost](https://cses.fi/problemset/task/1077) | CSES | Hard | Gold | Sliding Window |

---

## Map

**8 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Don't Be Last!](http://www.usaco.org/index.php?page=viewproblem2&cpid=687) | Bronze | Normal | Bronze | Sorting |
| 2 |  | [Associative Array](https://judge.yosupo.jp/problem/associative_array) | YS | Easy | Bronze | - |
| 3 |  | [Sum of Two Values](https://cses.fi/problemset/task/1640) | CSES | Easy | Bronze | - |
| 4 |  | [Cities & States](http://www.usaco.org/index.php?page=viewproblem2&cpid=667) | Silver | Normal | Bronze | - |
| 5 |  | [It's Mooin' Time II](https://usaco.org/index.php?page=viewproblem2&cpid=1468) | Bronze | Normal | Bronze | Set |
| 6 |  | [Year of the Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=1107) | Bronze | Normal | Bronze | - |
| 7 |  | [Into Blocks](https://codeforces.com/contest/1209/problem/G1) | CF | Hard | Bronze | Set |
| 8 |  | [Made Up](https://atcoder.jp/contests/abc202/tasks/abc202_c?lang=en) | AC | Hard | Bronze | - |

---

## Sorted Set

**20 problems** (4 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Towers](https://cses.fi/problemset/task/1073) | CSES | Easy | Gold | Greedy, LIS, Binary Search |
| 2 | ⭐ | [Traffic Lights](https://cses.fi/problemset/task/1163) | CSES | Easy | Gold | - |
| 3 | ⭐ | [Movie Festival II](https://cses.fi/problemset/task/1632) | CSES | Normal | Gold | Sorting, Greedy |
| 4 | ⭐ | [Snow Boots](http://www.usaco.org/index.php?page=viewproblem2&cpid=813) | Gold | Normal | Gold | Linked List |
| 5 |  | [Cow Dance Show](http://www.usaco.org/index.php?page=viewproblem2&cpid=690) | Silver | Easy | Silver | Binary Search |
| 6 |  | [Concert Tickets](https://cses.fi/problemset/task/1091) | CSES | Easy | Gold | - |
| 7 |  | [Double-Ended Priority Queue](https://judge.yosupo.jp/problem/double_ended_priority_queue) | YS | Easy | Gold | - |
| 8 |  | [Array and Segments](https://codeforces.com/contest/1108/problem/E2) | CF | Normal | Silver | - |
| 9 |  | [Count the Trains](https://codeforces.com/problemset/problem/1690/G) | CF | Normal | Silver | - |
| 10 |  | [Milk Measurement](http://www.usaco.org/index.php?page=viewproblem2&cpid=763) | Silver | Normal | Silver | Priority Queue |
| 11 |  | [Cook and Porridge](https://codeforces.com/contest/1945/problem/G) | CF | Normal | Gold | Priority Queue |
| 12 |  | [Mycraft Sand Sort](https://codeforces.com/problemset/problem/2064/E) | CF | Normal | Gold | Combinatorics, DSU |
| 13 |  | [Connected Components?](https://codeforces.com/problemset/problem/920/E) | CF | Hard | Silver | DFS |
| 14 |  | [Apple Catching](http://www.usaco.org/index.php?page=viewproblem2&cpid=1233) | Gold | Hard | Gold | Sorting, Greedy |
| 15 |  | [Bit Inversions](https://cses.fi/problemset/task/1188) | CSES | Hard | Gold | - |
| 16 |  | [Buying Gifts](https://codeforces.com/contest/1802/problem/D) | CF | Hard | Gold | Greedy, Sorting |
| 17 |  | [HILO](http://usaco.org/index.php?page=viewproblem2&cpid=1162) | Gold | Hard | Gold | Stack, Linked List |
| 18 |  | [Photo Op](http://www.usaco.org/index.php?page=viewproblem2&cpid=1475) | Gold | Hard | Gold | - |
| 19 |  | [Strongest Friendship Group](http://www.usaco.org/index.php?page=viewproblem2&cpid=1259) | Gold | Hard | Gold | DSU, Merging |
| 20 |  | [Tournament](https://codeforces.com/contest/878/problem/C) | CF | Hard | Gold | - |

---

## Priority Queue

**15 problems** (5 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Convention II](http://www.usaco.org/index.php?page=viewproblem2&cpid=859) | Silver | Normal | Silver | Sorting |
| 2 | ⭐ | [Packing Under Range Regulations](https://atcoder.jp/contests/abc214/tasks/abc214_e) | AC | Normal | Silver | Sorting |
| 3 | ⭐ | [Room Allocation](https://cses.fi/problemset/task/1164) | CSES | Normal | Silver | Sorting |
| 4 | ⭐ | [Serval and Kaitenzushi Buffet](https://codeforces.com/contest/2085/problem/D) | CF | Hard | Silver | Sorting |
| 5 | ⭐ | [Survival of the Weakest (easy version)](https://codeforces.com/problemset/problem/1805/F1) | CF | Hard | Silver | Sorting |
| 6 |  | [IPO](https://leetcode.com/problems/ipo) | LC | Normal | Silver | Greedy, Sorting |
| 7 |  | [Milk Measurement](http://www.usaco.org/index.php?page=viewproblem2&cpid=763) | Silver | Normal | Silver | Sorted Set |
| 8 |  | [Why Did the Cow Cross the Road](http://www.usaco.org/index.php?page=viewproblem2&cpid=714) | Silver | Normal | Silver | Sorting |
| 9 |  | [William and Robot](https://codeforces.com/gym/104002/problem/E) | CF | Normal | Silver | - |
| 10 |  | [Cook and Porridge](https://codeforces.com/contest/1945/problem/G) | CF | Normal | Gold | Sorted Set |
| 11 |  | [Bubble Sort Rounds II](https://cses.fi/problemset/task/3152/) | CSES | Hard | Silver | - |
| 12 |  | [Grouped Carriages](https://codeforces.com/contest/1866/problem/G) | CF | Hard | Silver | Binary Search |
| 13 |  | [Job Completion](https://usaco.org/index.php?page=viewproblem2&cpid=1451) | Gold | Hard | Silver | Greedy |
| 14 |  | [Stick Division](https://cses.fi/problemset/task/1161) | CSES | Hard | Silver | Greedy |
| 15 |  | [Carrots for rabbits](https://codeforces.com/contest/1428/problem/E) | CF | Very Hard | Silver | Math |

---

## Stack

**21 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Mike and Feet](https://codeforces.com/contest/547/problem/B) | CF | Normal | Gold | - |
| 2 | ⭐ | [Skyline Photo](https://codeforces.com/contest/1483/problem/C) | CF | Hard | Gold | PURS, DP |
| 3 |  | [Advertisement](https://cses.fi/problemset/task/1142/) | CSES | Easy | Gold | - |
| 4 |  | [Nearest Smaller Values](https://cses.fi/problemset/task/1645) | CSES | Easy | Gold | - |
| 5 |  | [Robot Collisions](https://codeforces.com/problemset/problem/1525/C) | CF | Easy | Gold | Sorting |
| 6 |  | [2011 - Balloons](https://oj.uz/problem/view/CEOI11_bal) | CEOI | Normal | Gold | Geometry |
| 7 |  | [2020 - Fancy Fence](https://codeforces.com/contest/1402/problem/A) | CEOI | Normal | Gold | - |
| 8 |  | [Dishwashing](http://www.usaco.org/index.php?page=viewproblem2&cpid=922) | Gold | Normal | Gold | Binary Search |
| 9 |  | [Maximum Building I](https://cses.fi/problemset/task/1147) | CSES | Normal | Gold | - |
| 10 |  | [Modern Art 2](http://www.usaco.org/index.php?page=viewproblem2&cpid=743) | Gold | Normal | Gold | - |
| 11 |  | [Rectangles](https://codeforces.com/gym/101102/problem/D) | CF | Normal | Gold | - |
| 12 |  | [HILO](http://usaco.org/index.php?page=viewproblem2&cpid=1162) | Gold | Hard | Gold | Sorted Set, Linked List |
| 13 |  | [Increasing Array Queries](https://cses.fi/problemset/task/2416) | CSES | Hard | Gold | PURS |
| 14 |  | [Training on ChinaForces](https://training.olinfo.it/#/task/preoii_allenamento/statement) | OII | Hard | Gold | Divide and Conquer |
| 15 |  | [2019 - Hedgehog Daniyar and Algorithms](https://oj.uz/problem/view/IZhO19_sortbooks) | IZhO | Hard | Platinum | PURQ, Lazy SegTree |
| 16 |  | [2012 - Mobile](https://oj.uz/problem/view/BOI12_mobile) | Baltic OI | Very Hard | Silver | Binary Search |
| 17 |  | [2004 - Empodia](https://dmoj.ca/problem/ioi04p6) | IOI | Very Hard | Gold | - |
| 18 |  | [2015 - Circus](https://oj.uz/problem/view/Balkan15_CIRCUS) | Balkan OI | Very Hard | Gold | SP |
| 19 |  | [ssdj](https://kilonova.ro/problems/1976) | Kilonova | Very Hard | Gold | - |
| 20 |  | [2015 - Žarulje](https://oj.uz/problem/view/COI15_zarulje) | COI | Insane | Gold | - |
| 21 |  | [Maximum Building II](https://cses.fi/problemset/task/1148) | CSES | Insane | Gold | - |

---

## Deque

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Bovine Acrobatics](https://usaco.org/index.php?page=viewproblem2&cpid=1350) | Silver | Normal | Silver | Sorting, Greedy |
| 2 |  | [Backpacking](https://orac2.info/problem/aio24backpacking/) | AIO | Normal | Gold | - |

---

## Linked List

**2 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Snow Boots](http://www.usaco.org/index.php?page=viewproblem2&cpid=813) | Gold | Normal | Gold | Sorted Set |
| 2 |  | [HILO](http://usaco.org/index.php?page=viewproblem2&cpid=1162) | Gold | Hard | Gold | Stack, Sorted Set |

---

## DSU

**28 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Mootube](http://www.usaco.org/index.php?page=viewproblem2&cpid=789) | Gold | Easy | Gold | - |
| 2 | ⭐ | [Favorite Colors](http://www.usaco.org/index.php?page=viewproblem2&cpid=1042) | Gold | Very Hard | Gold | - |
| 3 |  | [Graph Composition](https://codeforces.com/contest/2060/problem/E) | CF | Easy | Silver | Connected Components |
| 4 |  | [Closing the Farm](http://www.usaco.org/index.php?page=viewproblem2&cpid=646) | Gold | Easy | Gold | - |
| 5 |  | [Road Construction](https://cses.fi/problemset/task/1676) | CSES | Easy | Gold | - |
| 6 |  | [Sinking Land](https://atcoder.jp/contests/abc363/tasks/abc363_e) | AC | Easy | Gold | SP |
| 7 |  | [Tractor](http://www.usaco.org/index.php?page=viewproblem2&cpid=245) | Old Silver | Easy | Gold | - |
| 8 |  | [Union Find](https://judge.yosupo.jp/problem/unionfind) | YS | Easy | Gold | - |
| 9 |  | [Hackerman](https://www.codechef.com/LTIME95A/problems/HKRMAN) | CC | Easy | Advanced | 2SAT, Sliding Window, Greedy |
| 10 |  | [The Door Problem](https://codeforces.com/contest/776/problem/D) | CF | Easy | Advanced | 2SAT, DFS |
| 11 |  | [Choose Two and Eat One](https://atcoder.jp/contests/abc282/tasks/abc282_e) | AC | Normal | Gold | - |
| 12 |  | [MST Unification](https://codeforces.com/contest/1108/problem/F) | CF | Normal | Gold | MST |
| 13 |  | [Monsters](https://codeforces.com/contest/1810/problem/E) | CF | Normal | Gold | Set, Greedy |
| 14 |  | [Mountain Time](https://csacademy.com/contest/archive/task/mountain-time) | CSA | Normal | Gold | - |
| 15 |  | [Mycraft Sand Sort](https://codeforces.com/problemset/problem/2064/E) | CF | Normal | Gold | Combinatorics, Sorted Set |
| 16 |  | [Reachable Pairs](https://usaco.org/index.php?page=viewproblem2&cpid=1474) | Gold | Normal | Gold | - |
| 17 |  | [Two Sets](https://codeforces.com/contest/468/problem/B) | CF | Normal | Gold | - |
| 18 |  | [Cross Swapping](https://codeforces.com/problemset/problem/1713/E) | CF | Hard | Gold | - |
| 19 |  | [Digital Village (Hard Version)](https://codeforces.com/contest/2021/problem/E2) | CF | Hard | Gold | DP |
| 20 |  | [New Roads Queries](https://cses.fi/problemset/task/2101/) | CSES | Hard | Gold | Merging |
| 21 |  | [Ski Course Rating](http://www.usaco.org/index.php?page=viewproblem2&cpid=384) | Old Gold | Hard | Gold | - |
| 22 |  | [Strongest Friendship Group](http://www.usaco.org/index.php?page=viewproblem2&cpid=1259) | Gold | Hard | Gold | Merging, Sorted Set |
| 23 |  | [War](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1099) | onlinejudge.org | Hard | Gold | - |
| 24 |  | [Substring Restrictions](https://csacademy.com/contest/archive/task/substring-restrictions) | CSA | Hard | Platinum | - |
| 25 |  | [2016 - Park](https://oj.uz/problem/view/BOI16_park) | Baltic OI | Very Hard | Gold | - |
| 26 |  | [2016 - Zamjene](https://oj.uz/problem/view/COCI16_zamjene) | COCI | Very Hard | Gold | Hashing |
| 27 |  | [Valleys](http://www.usaco.org/index.php?page=viewproblem2&cpid=950) | Platinum | Very Hard | Gold | - |
| 28 |  | [Island Archipelago](https://open.kattis.com/problems/islandarchipelago) | Kattis | Very Hard | Advanced | Euler's Formula |

---

## PURQ

**18 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Dynamic Range Minimum Queries](https://cses.fi/problemset/task/1649) | CSES | Easy | Gold | - |
| 2 |  | [Set To Max](https://codeforces.com/contest/1904/problem/D2) | CF | Easy | Gold | - |
| 3 |  | [01 (Hard Version)](https://codeforces.com/gym/104380/problem/H) | CF | Easy | Platinum | - |
| 4 |  | [High Card Low Card](http://www.usaco.org/index.php?page=viewproblem2&cpid=577) | Platinum | Easy | Platinum | Greedy |
| 5 |  | [Hotel Queries](https://cses.fi/problemset/task/1143) | CSES | Easy | Platinum | - |
| 6 |  | [Point Set Range Composite](https://judge.yosupo.jp/problem/point_set_range_composite) | YS | Easy | Platinum | - |
| 7 |  | [2018 - Deda](https://qoj.ac/problem/13670) | COCI | Easy | Advanced | - |
| 8 |  | [Pareidolia](http://www.usaco.org/index.php?page=viewproblem2&cpid=1332) | Platinum | Normal | Platinum | Matrix |
| 9 |  | [Slingshot](http://www.usaco.org/index.php?page=viewproblem2&cpid=816) | Platinum | Normal | Platinum | - |
| 10 |  | [Springboards](http://www.usaco.org/index.php?page=viewproblem2&cpid=995) | Gold | Normal | Platinum | - |
| 11 |  | [Subarray Sum Queries](https://cses.fi/problemset/task/1190) | CSES | Normal | Platinum | - |
| 12 |  | [2019 - Hedgehog Daniyar and Algorithms](https://oj.uz/problem/view/IZhO19_sortbooks) | IZhO | Hard | Platinum | Stack, Lazy SegTree |
| 13 |  | [2021 - Sjeckanje](https://oj.uz/problem/view/COCI21_sjeckanje) | COCI | Hard | Platinum | - |
| 14 |  | [Robot Path](https://cses.fi/problemset/task/1742) | CSES | Hard | Platinum | - |
| 15 |  | [Nocross](http://www.usaco.org/index.php?page=viewproblem2&cpid=721) | Platinum | Hard | Advanced | - |
| 16 |  | [Interesting Drug](https://codeforces.com/gym/102059/problem/K) | CF | Very Hard | Advanced | - |
| 17 |  | [Karen & Cards](https://codeforces.com/contest/815/problem/D) | CF | Very Hard | Advanced | - |
| 18 |  | [Rainbow Rectangles](https://codeforces.com/contest/1396/problem/D) | CF | Very Hard | Advanced | - |

---

## PURS

**35 problems** (7 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Haircut](http://www.usaco.org/index.php?page=viewproblem2&cpid=1041) | Gold | Easy | Gold | Inversions |
| 2 | ⭐ | [Range Update Queries](https://cses.fi/problemset/task/1651) | CSES | Easy | Gold | - |
| 3 | ⭐ | [Distance Queries on a Tree](https://atcoder.jp/contests/abc294/tasks/abc294_g) | AC | Normal | Gold | LCA |
| 4 | ⭐ | [Distinct Values Queries](https://cses.fi/problemset/task/1734) | CSES | Normal | Gold | Offline |
| 5 | ⭐ | [Skyline Photo](https://codeforces.com/contest/1483/problem/C) | CF | Hard | Gold | Stack, DP |
| 6 | ⭐ | [2011 - Trapezoid](https://oj.uz/problem/view/balkan11_trapezoid) | Balkan OI | Hard | Platinum | DP |
| 7 | ⭐ | [2016 - Zoltan](https://oj.uz/problem/view/COCI16_zoltan) | COCI | Hard | Platinum | DP |
| 8 |  | [Balanced Photo](http://www.usaco.org/index.php?page=viewproblem2&cpid=693) | Gold | Easy | Gold | Inversions |
| 9 |  | [Circle Cross](http://www.usaco.org/index.php?page=viewproblem2&cpid=719) | Gold | Easy | Gold | Inversions |
| 10 |  | [Distinct Colors](https://cses.fi/problemset/task/1139) | CSES | Easy | Gold | Euler Tour |
| 11 |  | [Dynamic Range Sum Queries](https://cses.fi/problemset/task/1648) | CSES | Easy | Gold | - |
| 12 |  | [Increasing Subsequence II](https://cses.fi/problemset/task/1748) | CSES | Easy | Gold | Coordinate Compress |
| 13 |  | [Inversion Counting](https://www.spoj.com/problems/INVCNT) | SPOJ | Easy | Gold | - |
| 14 |  | [Irrigation](https://codeforces.com/contest/1181/problem/D) | CF | Easy | Gold | Binary Search, Offline |
| 15 |  | [List Removals](https://cses.fi/problemset/task/1749) | CSES | Easy | Gold | - |
| 16 |  | [Mega Inversions](https://open.kattis.com/problems/megainversions) | Kattis | Easy | Gold | Inversions |
| 17 |  | [Mincross](http://www.usaco.org/index.php?page=viewproblem2&cpid=720) | Platinum | Easy | Gold | Inversions |
| 18 |  | [Salary Queries](https://cses.fi/problemset/task/1144) | CSES | Easy | Gold | Coordinate Compress |
| 19 |  | [Sleepy Cow Sorting](http://www.usaco.org/index.php?page=viewproblem2&cpid=898) | Gold | Easy | Gold | - |
| 20 |  | [Intersection Points](https://cses.fi/problemset/task/1740) | CSES | Easy | Platinum | - |
| 21 |  | [Ordered Set](https://www.spoj.com/problems/ORDERSET/) | SPOJ | Easy | Platinum | - |
| 22 |  | [Twin Permutations](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/fenwick-binary-indexed-trees/practice-problems/algorithm/mancunian-and-twin-permutations-d988930c/) | HE | Easy | Platinum | - |
| 23 |  | [Blocking Elements](https://codeforces.com/contest/1918/problem/D) | CF | Normal | Gold | Binary Search, DP |
| 24 |  | [Cow Land](http://www.usaco.org/index.php?page=viewproblem2&cpid=921) | Gold | Normal | Gold | Euler Tour, HLD |
| 25 |  | [Path Queries](https://cses.fi/problemset/task/1138) | CSES | Normal | Gold | Euler Tour |
| 26 |  | [Promotion Counting](http://www.usaco.org/index.php?page=viewproblem2&cpid=696) | Platinum | Normal | Gold | Euler Tour |
| 27 |  | [The Endspeaker (Hard Version)](https://codeforces.com/contest/2027/problem/D2) | CF | Normal | Gold | DP, Binary Search, Two Pointers |
| 28 |  | [Geometers Anonymous](https://codeforces.com/problemset/problem/1195/F) | CF | Normal | Platinum | Convex |
| 29 |  | [Grass Planting](http://www.usaco.org/index.php?page=viewproblem2&cpid=102) | Old Gold | Normal | Platinum | HLD |
| 30 |  | [Sasha and Array](https://codeforces.com/problemset/problem/718/C) | CF | Normal | Platinum | Exponentiation, Matrix |
| 31 |  | [Bessie's Snow Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=973) | Platinum | Hard | Gold | Euler Tour, Lazy SegTree |
| 32 |  | [Cow Hopscotch](http://www.usaco.org/index.php?page=viewproblem2&cpid=532) | Old Gold | Hard | Gold | - |
| 33 |  | [Increasing Array Queries](https://cses.fi/problemset/task/2416) | CSES | Hard | Gold | Stack |
| 34 |  | [Pyramid Array](https://cses.fi/problemset/task/1747) | CSES | Hard | Gold | Inversions |
| 35 |  | [Victor Takes Over Canada](https://dmoj.ca/problem/dmopc20c1p5) | DMOPC | Very Hard | Gold | Euler Tour |

---

## RURQ

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Diverging Directions](https://codeforces.com/contest/838/problem/B) | CF | Normal | Platinum | Euler Tour |
| 2 |  | [Subtrees & Paths](https://www.hackerrank.com/challenges/subtrees-and-paths) | HR | Normal | Platinum | HLD |

---

## 1DRQ

**4 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2007 - Sails](http://oj.uz/problem/view/IOI07_sails) | IOI | Normal | Platinum | Binary Search |
| 2 |  | [Horrible Queries](https://www.spoj.com/problems/HORRIBLE) | SPOJ | Easy | Platinum | - |
| 3 |  | [Polynomial Queries](https://cses.fi/problemset/task/1736) | CSES | Easy | Platinum | - |
| 4 |  | [2011 - Growing Trees](https://oj.uz/problem/view/BOI11_grow) | Baltic OI | Normal | Platinum | Binary Search |

---

## 2DRQ

**12 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Forest Queries II](https://cses.fi/problemset/task/1739) | CSES | Easy | Platinum | BIT |
| 2 |  | [2019 - Examination](https://oj.uz/problem/view/JOI19_examination) | JOI | Normal | Platinum | Mo's Algorithm |
| 3 |  | [2019 - Street Lamps](https://oj.uz/problem/view/APIO19_street_lamps) | APIO | Normal | Platinum | BIT |
| 4 |  | [Crowded Cities](https://dmoj.ca/problem/bfs17p6) | Back From Summer | Normal | Platinum | BIT |
| 5 |  | [Friendcross](http://www.usaco.org/index.php?page=viewproblem2&cpid=722) | Platinum | Normal | Platinum | BIT |
| 6 |  | [Mowing the Field](http://www.usaco.org/index.php?page=viewproblem2&cpid=601) | Platinum | Normal | Platinum | BIT |
| 7 |  | [Soriya's Programming Project](https://dmoj.ca/problem/dmopc19c7p5) | DMOPC | Normal | Platinum | D&C, BIT |
| 8 |  | [2006 - Tetris 3D](https://szkopul.edu.pl/problemset/problem/OQjANSOOD_-c38gh8p6g3Gxp/site/?key=statement) | POI | Hard | Platinum | Lazy SegTree |
| 9 |  | [2013 - Game](https://oj.uz/problem/view/IOI13_game) | IOI | Hard | Platinum | Sparse SegTree, Treap |
| 10 |  | [2015 - Teams](https://oj.uz/problem/view/IOI15_teams) | IOI | Very Hard | Platinum | - |
| 11 |  | [2017 - Golf](https://oj.uz/problem/view/JOI17_golf) | JOI | Very Hard | Platinum | SegTree |
| 12 |  | [2017 - Land of the Rainbow Gold](https://dmoj.ca/problem/apio17p1) | APIO | Very Hard | Advanced | Persistent Segtree, Euler's Formula |

---

## Lazy SegTree

**14 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Counting Haybales](http://www.usaco.org/index.php?page=viewproblem2&cpid=578) | Platinum | Easy | Platinum | - |
| 2 |  | [Prefix Sum Queries](https://cses.fi/problemset/task/2166) | CSES | Easy | Platinum | - |
| 3 |  | [Range Affine Range Sum](https://judge.yosupo.jp/problem/range_affine_range_sum) | YS | Easy | Platinum | - |
| 4 |  | [Range Updates & Sums](https://cses.fi/problemset/task/1735) | CSES | Easy | Platinum | - |
| 5 |  | [The Lazy Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=418) | Old Gold | Easy | Platinum | - |
| 6 |  | [2005 - Mountain](https://dmoj.ca/problem/ioi05p2) | IOI | Normal | Platinum | Coordinate Compression |
| 7 |  | [2014 - Wall](https://oj.uz/problem/view/IOI14_wall) | IOI | Normal | Platinum | - |
| 8 |  | [Area of Rectangles](https://cses.fi/problemset/task/1741) | CSES | Normal | Advanced | - |
| 9 |  | [Bessie's Snow Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=973) | Platinum | Hard | Gold | Euler Tour, PURS |
| 10 |  | [2006 - Tetris 3D](https://szkopul.edu.pl/problemset/problem/OQjANSOOD_-c38gh8p6g3Gxp/site/?key=statement) | POI | Hard | Platinum | 2DRQ |
| 11 |  | [2019 - Hedgehog Daniyar and Algorithms](https://oj.uz/problem/view/IZhO19_sortbooks) | IZhO | Hard | Platinum | Stack, PURQ |
| 12 |  | [Strange Tree](https://www.hackerrank.com/contests/openbracket-2017/challenges/special-path-on-a-strange-tree/problem) | HR | Hard | Advanced | - |
| 13 |  | [2018 - Bubble Sort 2](https://oj.uz/problem/view/JOI18_bubblesort2) | JOI | Very Hard | Platinum | - |
| 14 |  | [Victor Identifies Software](https://dmoj.ca/problem/dmopc20c1p6) | DMOPC | Very Hard | Platinum | - |

---

## SegTreeBeats

**9 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Gorgeous Sequence](https://vjudge.net/problem/HDU-5306) | HDU | Very Easy | Advanced | - |
| 2 | ⭐ | [Range Chmin Chmax Add Range Sum](https://judge.yosupo.jp/problem/range_chmin_chmax_add_range_sum) | YS | Hard | Advanced | - |
| 3 |  | [And or Max](https://csacademy.com/contest/round-70/task/and-or-max) | CSA | Easy | Advanced | - |
| 4 |  | [The Child and Sequence](https://codeforces.com/problemset/problem/438/D) | CF | Easy | Advanced | - |
| 5 |  | [Bear and Bad Powers of 42](https://codeforces.com/contest/679/problem/E) | CF | Normal | Advanced | - |
| 6 |  | [Box Operations](https://www.hackerrank.com/challenges/box-operations/problem) | HR | Normal | Advanced | - |
| 7 |  | [Little Pony and Lord Tirek](https://codeforces.com/problemset/problem/453/E) | CF | Normal | Advanced | - |
| 8 |  | [Nagini](https://codeforces.com/contest/855/problem/F) | CF | Normal | Advanced | - |
| 9 |  | [Stations](https://codeforces.com/contest/1572/problem/F) | CF | Hard | Advanced | - |

---

## Flood Fill

**16 problems** (4 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Cross Country Skiing](http://www.usaco.org/index.php?page=viewproblem2&cpid=380) | Old Silver | Easy | Silver | Binary Search |
| 2 | ⭐ | [Icy Perimeter](http://www.usaco.org/index.php?page=viewproblem2&cpid=895) | Silver | Easy | Silver | - |
| 3 | ⭐ | [Where's Bessie?](http://www.usaco.org/index.php?page=viewproblem2&cpid=740) | Silver | Normal | Silver | - |
| 4 | ⭐ | [Why Did the Cow Cross the Road III](http://www.usaco.org/index.php?page=viewproblem2&cpid=716) | Silver | Normal | Silver | - |
| 5 |  | [Counting Rooms](https://cses.fi/problemset/task/1192) | CSES | Easy | Silver | - |
| 6 |  | [Map of Sweden](https://open.kattis.com/problems/sverigekartan) | Kattis | Easy | Silver | Connected Components |
| 7 |  | [Solve The Maze](https://codeforces.com/contest/1365/problem/D) | CF | Easy | Silver | - |
| 8 |  | [Build Gates](http://www.usaco.org/index.php?page=viewproblem2&cpid=596) | Silver | Normal | Silver | - |
| 9 |  | [Comfortable Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=1110) | Silver | Normal | Silver | - |
| 10 |  | [Milk Pails](http://www.usaco.org/index.php?page=viewproblem2&cpid=620) | Silver | Normal | Silver | - |
| 11 |  | [Mooyo Mooyo](http://www.usaco.org/index.php?page=viewproblem2&cpid=860) | Silver | Normal | Silver | - |
| 12 |  | [Switching on the Lights](http://www.usaco.org/index.php?page=viewproblem2&cpid=570) | Silver | Normal | Silver | - |
| 13 |  | [2D Conveyor Belt](https://usaco.org/index.php?page=viewproblem2&cpid=1448) | Silver | Hard | Silver | - |
| 14 |  | [Maze Tac Toe](http://www.usaco.org/index.php?page=viewproblem2&cpid=1134) | Silver | Hard | Silver | - |
| 15 |  | [Multiplayer Moo](http://www.usaco.org/index.php?page=viewproblem2&cpid=836) | Silver | Hard | Silver | - |
| 16 |  | [Snow Boots](http://www.usaco.org/index.php?page=viewproblem2&cpid=811) | Silver | Hard | Silver | - |

---

## BFS

**25 problems** (5 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Moocast](http://www.usaco.org/index.php?page=viewproblem2&cpid=668) | Silver | Easy | Silver | Connected Components, DFS |
| 2 | ⭐ | [Labyrinth](https://cses.fi/problemset/task/1193) | CSES | Easy | Gold | - |
| 3 | ⭐ | [Construct a Palindrome](https://atcoder.jp/contests/abc197/tasks/abc197_f) | AC | Normal | Gold | - |
| 4 | ⭐ | [Lasers and Mirrors](http://www.usaco.org/index.php?page=viewproblem2&cpid=671) | Gold | Normal | Gold | - |
| 5 | ⭐ | [Small Multiple](https://atcoder.jp/contests/arc084/tasks/arc084_b) | AC | Hard | Gold | - |
| 6 |  | [Restore Graph](https://codeforces.com/contest/404/problem/C) | CF | Easy | Silver | - |
| 7 |  | [2013 - Tracks in the Snow](https://oj.uz/problem/view/BOI13_tracks) | Baltic OI | Easy | Gold | - |
| 8 |  | [Island Travels](http://www.usaco.org/index.php?page=viewproblem2&cpid=230) | Old Gold | Easy | Gold | Bitmasks, DP |
| 9 |  | [Message Route](https://cses.fi/problemset/task/1667) | CSES | Easy | Gold | - |
| 10 |  | [Monsters](https://cses.fi/problemset/task/1194) | CSES | Easy | Gold | - |
| 11 |  | [Piggyback](http://www.usaco.org/index.php?page=viewproblem2&cpid=491) | Old Silver | Easy | Gold | - |
| 12 |  | [BFS-DFS](https://csacademy.com/contest/archive/task/bfs-dfs) | CSA | Normal | Silver | DFS |
| 13 |  | [Friendly Spiders](https://codeforces.com/contest/1775/problem/D) | CF | Normal | Silver | Number Theory, Graphs, Shortest Path, Bipartite |
| 14 |  | [Moo Route II](https://usaco.org/index.php?page=viewproblem2&cpid=1304) | Silver | Normal | Silver | - |
| 15 |  | [2009 - Mecho](https://oj.uz/problem/view/IOI09_mecho) | IOI | Normal | Gold | Binary Search |
| 16 |  | [Bessie's Dream](http://www.usaco.org/index.php?page=viewproblem2&cpid=575) | Gold | Normal | Gold | - |
| 17 |  | [Cow At Large](http://www.usaco.org/index.php?page=viewproblem2&cpid=790) | Gold | Normal | Gold | - |
| 18 |  | [Cow Navigation](http://www.usaco.org/index.php?page=viewproblem2&cpid=695) | Gold | Normal | Gold | - |
| 19 |  | [Swap Game](https://cses.fi/problemset/task/1670/) | CSES | Normal | Gold | - |
| 20 |  | [Telephone](http://www.usaco.org/index.php?page=viewproblem2&cpid=1090) | Gold | Normal | Gold | - |
| 21 |  | [Walls](https://dmoj.ca/problem/ioi00p4) | IOI | Normal | Gold | - |
| 22 |  | [What's Up With Gravity?](http://www.usaco.org/index.php?page=viewproblem2&cpid=282) | Old Silver | Normal | Gold | - |
| 23 |  | [A Pie for a Pie](http://www.usaco.org/index.php?page=viewproblem2&cpid=765) | Gold | Hard | Gold | - |
| 24 |  | [Moving to the Capital](https://codeforces.com/contest/1472/problem/G) | CF | Hard | Gold | DP |
| 25 |  | [Replication](http://www.usaco.org/index.php?page=viewproblem2&cpid=1065) | Gold | Hard | Gold | - |

---

## DFS

**27 problems** (7 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Moocast](http://www.usaco.org/index.php?page=viewproblem2&cpid=668) | Silver | Easy | Silver | Connected Components, BFS |
| 2 | ⭐ | [Xor-Paths](https://codeforces.com/contest/1006/problem/F) | CF | Easy | Gold | Meet in the Middle, Binary Search |
| 3 | ⭐ | [Flight Routes Check](https://cses.fi/problemset/task/1682) | CSES | Normal | Silver | - |
| 4 | ⭐ | [Milk Factory](http://www.usaco.org/index.php?page=viewproblem2&cpid=940) | Bronze | Hard | Bronze | Tree |
| 5 | ⭐ | [Even Outdegree Edges](https://cses.fi/problemset/task/2179) | CSES | Hard | Silver | Spanning Tree |
| 6 | ⭐ | [Harder Satisfiability](https://codeforces.com/problemset/problem/1089/H) | CF | Hard | Advanced | 2SAT |
| 7 | ⭐ | [2007 - Training](https://oj.uz/problem/view/IOI07_training) | IOI | Very Hard | Gold | Bitmasks, DP, Tree |
| 8 |  | [Type Printer](https://oj.uz/problem/view/IOI08_printer) | IOI | Very Easy | Advanced | Strings, Trie |
| 9 |  | [Vlak](https://oj.uz/problem/view/COCI20_vlak) | COCI | Very Easy | Advanced | Strings, Trie |
| 10 |  | [Rank](https://dmoj.ca/problem/acsl1p4) | ACSL | Easy | Silver | - |
| 11 |  | [The Door Problem](https://codeforces.com/contest/776/problem/D) | CF | Easy | Advanced | 2SAT, DSU |
| 12 |  | [BFS-DFS](https://csacademy.com/contest/archive/task/bfs-dfs) | CSA | Normal | Silver | BFS |
| 13 |  | [Big Brush](https://codeforces.com/contest/1638/problem/D) | CF | Normal | Silver | Ad Hoc, Greedy |
| 14 |  | [Redistributing Gifts](http://usaco.org/index.php?page=viewproblem2&cpid=1206) | Silver | Normal | Silver | - |
| 15 |  | [Round Dance](https://codeforces.com/contest/1833/problem/E) | CF | Normal | Silver | Connected Components |
| 16 |  | [Subarray Sum Constraints](https://cses.fi/problemset/task/3294) | CSES | Normal | Silver | Connected Components, Prefix Sums |
| 17 |  | [2020 - Graph](https://codeforces.com/contest/1387/problem/A) | Baltic OI | Hard | Silver | Median |
| 18 |  | [Among Us](https://www.codechef.com/INOIPRAC/problems/AMONGUS2) | CC | Hard | Silver | Bipartite |
| 19 |  | [Coloring Game](https://codeforces.com/contest/1991/problem/E) | CF | Hard | Silver | Bipartite |
| 20 |  | [Connected Components?](https://codeforces.com/problemset/problem/920/E) | CF | Hard | Silver | Sorted Set |
| 21 |  | [Connecting Universities](https://codeforces.com/contest/700/problem/B) | CF | Hard | Silver | - |
| 22 |  | [Giving Awards](https://codeforces.com/contest/412/problem/D) | CF | Hard | Silver | - |
| 23 |  | [Wizard's Tour](https://codeforces.com/contest/860/problem/D) | CF | Hard | Silver | Spanning Tree |
| 24 |  | [Lizard Era: Beginning](https://codeforces.com/problemset/problem/585/D) | CF | Hard | Gold | Meet in the Middle, NT |
| 25 |  | [Playlist](https://open.kattis.com/problems/playlist) | Kattis | Hard | Gold | Meet in the Middle, PIE |
| 26 |  | [Prime Gift](https://codeforces.com/contest/912/problem/E) | CF | Hard | Gold | Meet in the Middle, Binary Search |
| 27 |  | [Dependent Events](https://zibada.guru/gcj/ks2021h/problems/#D) | Google Kickstart | Hard | Platinum | LCA, Binary Jumping |

---

## Connected Components

**16 problems** (5 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Fence Planning](http://www.usaco.org/index.php?page=viewproblem2&cpid=944) | Silver | Easy | Silver | - |
| 2 | ⭐ | [Milk Visits](http://www.usaco.org/index.php?page=viewproblem2&cpid=968) | Silver | Easy | Silver | Tree |
| 3 | ⭐ | [Moocast](http://www.usaco.org/index.php?page=viewproblem2&cpid=668) | Silver | Easy | Silver | DFS, BFS |
| 4 | ⭐ | [Mootube](http://www.usaco.org/index.php?page=viewproblem2&cpid=788) | Silver | Easy | Silver | Tree |
| 5 | ⭐ | [Wormhole Sort](http://www.usaco.org/index.php?page=viewproblem2&cpid=992) | Silver | Normal | Silver | Binary Search |
| 6 |  | [Birthday Party](https://open.kattis.com/problems/birthday) | Kattis | Easy | Silver | - |
| 7 |  | [Building Roads](https://cses.fi/problemset/task/1666) | CSES | Easy | Silver | - |
| 8 |  | [Closing the Farm](http://www.usaco.org/index.php?page=viewproblem2&cpid=644) | Silver | Easy | Silver | - |
| 9 |  | [Graph Composition](https://codeforces.com/contest/2060/problem/E) | CF | Easy | Silver | DSU |
| 10 |  | [Map of Sweden](https://open.kattis.com/problems/sverigekartan) | Kattis | Easy | Silver | Flood Fill |
| 11 |  | [PolandBall & Forest](https://codeforces.com/contest/755/problem/C) | CF | Easy | Silver | Tree, Diameter |
| 12 |  | [Connecting Two Barns](http://www.usaco.org/index.php?page=viewproblem2&cpid=1159) | Silver | Normal | Silver | 2P, Binary Search |
| 13 |  | [Moocast](http://www.usaco.org/index.php?page=viewproblem2&cpid=669) | Gold | Normal | Silver | Binary Search |
| 14 |  | [Round Dance](https://codeforces.com/contest/1833/problem/E) | CF | Normal | Silver | DFS |
| 15 |  | [Subarray Sum Constraints](https://cses.fi/problemset/task/3294) | CSES | Normal | Silver | DFS, Prefix Sums |
| 16 |  | [Lane Switching](https://open.kattis.com/problems/laneswitching) | Kattis | Very Hard | Silver | Binary Search |

---

## Bipartite

**10 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [The Great Revegetation](http://www.usaco.org/index.php?page=viewproblem2&cpid=920) | Silver | Easy | Silver | - |
| 2 |  | [Bipartiteness](https://codeforces.com/contest/862/problem/B) | CF | Easy | Silver | - |
| 3 |  | [Building Teams](https://cses.fi/problemset/task/1668) | CSES | Easy | Silver | - |
| 4 |  | [Cover it!](https://codeforces.com/problemset/problem/1176/E) | CF | Easy | Silver | - |
| 5 |  | [Clock Tree](http://www.usaco.org/index.php?page=viewproblem2&cpid=1016) | Silver | Normal | Silver | Tree |
| 6 |  | [Friendly Spiders](https://codeforces.com/contest/1775/problem/D) | CF | Normal | Silver | Number Theory, Graphs, BFS, Shortest Path |
| 7 |  | [Among Us](https://www.codechef.com/INOIPRAC/problems/AMONGUS2) | CC | Hard | Silver | DFS |
| 8 |  | [Catshock](https://codeforces.com/contest/2154/problem/D) | CF | Hard | Silver | Trees |
| 9 |  | [Coloring Game](https://codeforces.com/contest/1991/problem/E) | CF | Hard | Silver | DFS |
| 10 |  | [2011 - Table Coloring](https://dmoj.ca/problem/apio11p1) | APIO | Very Hard | Silver | - |

---

## Tree

**51 problems** (8 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Grass Planting](http://www.usaco.org/index.php?page=viewproblem2&cpid=894) | Silver | Easy | Silver | Coloring |
| 2 | ⭐ | [Milk Visits](http://www.usaco.org/index.php?page=viewproblem2&cpid=968) | Silver | Easy | Silver | Connected Components |
| 3 | ⭐ | [Mootube](http://www.usaco.org/index.php?page=viewproblem2&cpid=788) | Silver | Easy | Silver | Connected Components |
| 4 | ⭐ | [Independent Set](https://atcoder.jp/contests/dp/tasks/dp_p) | AC | Easy | Gold | DP |
| 5 | ⭐ | [Tree Diameter](https://cses.fi/problemset/task/1131) | CSES | Normal | Silver | - |
| 6 | ⭐ | [Milk Factory](http://www.usaco.org/index.php?page=viewproblem2&cpid=940) | Bronze | Hard | Bronze | DFS |
| 7 | ⭐ | [2007 - Training](https://oj.uz/problem/view/IOI07_training) | IOI | Very Hard | Gold | Bitmasks, DP, DFS |
| 8 | ⭐ | [2016 - Burza](https://oj.uz/problem/view/COCI16_burza) | COCI | Very Hard | Gold | Bitmasks, DP, Game Theory |
| 9 |  | [Cowntagion](http://www.usaco.org/index.php?page=viewproblem2&cpid=1062) | Silver | Easy | Silver | Greedy |
| 10 |  | [Journey](https://codeforces.com/contest/839/problem/C) | CF | Easy | Silver | - |
| 11 |  | [PolandBall & Forest](https://codeforces.com/contest/755/problem/C) | CF | Easy | Silver | Connected Components, Diameter |
| 12 |  | [Subordinates](https://cses.fi/problemset/task/1674) | CSES | Easy | Silver | - |
| 13 |  | [Barn Painting](http://www.usaco.org/index.php?page=viewproblem2&cpid=766) | Gold | Easy | Gold | DP |
| 14 |  | [Infected Tree](http://codeforces.com/contest/1689/problem/C) | CF | Easy | Gold | DP |
| 15 |  | [Clock Tree](http://www.usaco.org/index.php?page=viewproblem2&cpid=1016) | Silver | Normal | Silver | Bipartite |
| 16 |  | [Minimize the Diameter](https://codeforces.com/gym/104536/problem/F) | CF | Normal | Silver | - |
| 17 |  | [Ski Slope](https://usaco.org/index.php?page=viewproblem2&cpid=1520) | Silver | Normal | Silver | Sorting, Binary Search |
| 18 |  | [Tree Distances I](https://cses.fi/problemset/task/1132) | CSES | Normal | Silver | - |
| 19 |  | [Tree Distances II](https://cses.fi/problemset/task/1133) | CSES | Normal | Silver | - |
| 20 |  | [2020 - Village (Minimum)](https://codeforces.com/contest/1387/problem/B1) | Baltic OI | Normal | Gold | Greedy |
| 21 |  | [Berland Federalization](https://codeforces.com/problemset/problem/440/D) | CF | Normal | Gold | DP |
| 22 |  | [Bessie's Function](https://usaco.org/index.php?page=viewproblem2&cpid=1497) | Gold | Normal | Gold | DP |
| 23 |  | [Delegation](http://www.usaco.org/index.php?page=viewproblem2&cpid=1019) | Gold | Normal | Gold | Greedy |
| 24 |  | [Delegation](http://www.usaco.org/index.php?page=viewproblem2&cpid=1020) | Platinum | Normal | Gold | DP, Binary Search |
| 25 |  | [Directory Traversal](http://www.usaco.org/index.php?page=viewproblem2&cpid=814) | Gold | Normal | Gold | DP |
| 26 |  | [Distance in Tree](https://codeforces.com/contest/161/problem/D) | CF | Normal | Gold | DP |
| 27 |  | [Flowers](https://kilonova.ro/problems/2890) | IIOT | Normal | Gold | DP |
| 28 |  | [Nastia Plays with a Tree](https://codeforces.com/contest/1521/problem/D) | CF | Normal | Gold | Greedy |
| 29 |  | [Parade](https://szkopul.edu.pl/problemset/problem/1QaUWE_ePAmitZjgAszOVD1U/site/?key=statement) | POI | Normal | Gold | - |
| 30 |  | [Parsa's Humongous Tree](https://codeforces.com/problemset/problem/1528/A) | CF | Normal | Gold | DP |
| 31 |  | [Select Edges](https://atcoder.jp/contests/abc259/tasks/abc259_f) | AC | Normal | Gold | DP |
| 32 |  | [Apple Tree](https://codeforces.com/contest/812/problem/E) | CF | Normal | Advanced | Game, Nimbers |
| 33 |  | [Beautiful Subarrays](https://codeforces.com/problemset/problem/665/E) | CF | Normal | Advanced | Trie, Bitmasks |
| 34 |  | [Cereal Trees II](https://codeforces.com/gym/103886/problem/Q) | CF | Normal | Advanced | DP |
| 35 |  | [Game on Tree](https://atcoder.jp/contests/agc017/tasks/agc017_d) | AC | Normal | Advanced | Game, Nimbers |
| 36 |  | [Short Code](https://codeforces.com/contest/965/problem/E) | CF | Normal | Advanced | Trie, Small to Large |
| 37 |  | [Tree Patrolling](https://atcoder.jp/contests/abc207/tasks/abc207_f) | AC | Normal | Advanced | DP |
| 38 |  | [2013 - Dreaming](https://oj.uz/problem/view/IOI13_dreaming) | IOI | Hard | Silver | - |
| 39 |  | [2014 - Hotels](https://szkopul.edu.pl/problemset/problem/gDw3iFkeVm7ZA3j_16-XR7jI/site/?key=statement) | POI | Hard | Silver | Prefix Sums |
| 40 |  | [GCD Harmony](https://open.kattis.com/problems/gcdharmony) | Kattis | Hard | Gold | DP, Number Theory |
| 41 |  | [Tree and Queries](https://codeforces.com/problemset/problem/375/D) | CF | Hard | Platinum | Sqrt, Euler Tour |
| 42 |  | [Tree and XOR](https://codeforces.com/contest/1055/problem/F) | CF | Hard | Advanced | Trie |
| 43 |  | [Cow Evolution](http://www.usaco.org/index.php?page=viewproblem2&cpid=941) | Bronze | Very Hard | Bronze | - |
| 44 |  | [Family Tree](http://www.usaco.org/index.php?page=viewproblem2&cpid=833) | Bronze | Very Hard | Bronze | - |
| 45 |  | [Tree Compass](https://codeforces.com/contest/1943/problem/C) | CF | Very Hard | Silver | - |
| 46 |  | [2016 - Torrent](https://oj.uz/problem/view/COI16_torrent) | COI | Very Hard | Gold | DP |
| 47 |  | [Boboniu and Jianghu](https://codeforces.com/contest/1394/problem/D) | CF | Very Hard | Gold | DP |
| 48 |  | [Cow At Large](http://www.usaco.org/index.php?page=viewproblem2&cpid=793) | Platinum | Very Hard | Gold | DP |
| 49 |  | [Paimon's Tree](https://codeforces.com/gym/103470/problem/G) | CF Gym | Very Hard | Platinum | DP |
| 50 |  | [2016 - Swap](https://oj.uz/problem/view/BOI16_swap) | Baltic OI | Insane | Gold | DP |
| 51 |  | [Creating Offices](https://cses.fi/problemset/task/1752) | CSES | Insane | Gold | Greedy |

---

## LCA

**19 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Distance Queries on a Tree](https://atcoder.jp/contests/abc294/tasks/abc294_g) | AC | Normal | Gold | PURS |
| 2 | ⭐ | [Omsk Metro (hard version)](https://codeforces.com/contest/1843/problem/F2) | CF | Normal | Platinum | - |
| 3 |  | [Company Queries II](https://cses.fi/problemset/task/1688) | CSES | Easy | Gold | - |
| 4 |  | [Distance Queries](https://cses.fi/problemset/task/1135) | CSES | Easy | Gold | - |
| 5 |  | [Max Flow](http://www.usaco.org/index.php?page=viewproblem2&cpid=576) | Platinum | Easy | Platinum | - |
| 6 |  | [Milk Visits](http://www.usaco.org/index.php?page=viewproblem2&cpid=970) | Gold | Normal | Gold | Euler Tour |
| 7 |  | [Disruption](http://www.usaco.org/index.php?page=viewproblem2&cpid=842) | Platinum | Normal | Platinum | - |
| 8 |  | [Duff in the Army](https://codeforces.com/contest/588/problem/E) | CF | Normal | Platinum | - |
| 9 |  | [Hot & Cold](https://dmoj.ca/problem/bts17p7) | Back to School | Normal | Platinum | - |
| 10 |  | [MST for Each Edge](https://codeforces.com/contest/609/problem/E) | CF | Normal | Platinum | - |
| 11 |  | [Root LCA Queries](https://csacademy.com/contest/archive/task/root-lca-queries) | CSA | Normal | Platinum | - |
| 12 |  | [Two Paths](https://codeforces.com/contest/1000/problem/G) | CF | Normal | Platinum | - |
| 13 |  | [Dependent Events](https://zibada.guru/gcj/ks2021h/problems/#D) | Google Kickstart | Hard | Platinum | Binary Jumping, DFS |
| 14 |  | [Double Tree](https://codeforces.com/contest/1140/problem/G) | CF | Hard | Platinum | Binary Jumping |
| 15 |  | [Functional Constraint](https://tlx.toki.id/contests/troc-12-div-1/problems/D) | TLX | Hard | Platinum | - |
| 16 |  | [Gathering](http://www.usaco.org/index.php?page=viewproblem2&cpid=866) | Platinum | Hard | Platinum | - |
| 17 |  | [Graph & Destination](https://tlx.toki.id/contests/troc-13-div-1/problems/E) | TLX | Hard | Platinum | - |
| 18 |  | [Tree Boxes](http://www.usaco.org/index.php?page=viewproblem2&cpid=948) | Platinum | Hard | Platinum | - |
| 19 |  | [Exercise Route](http://www.usaco.org/index.php?page=viewproblem2&cpid=901) | Platinum | Very Hard | Platinum | - |

---

## Binary Jumping

**9 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Company Queries I](https://cses.fi/problemset/task/1687) | CSES | Easy | Platinum | - |
| 2 |  | [Planets Queries I](https://cses.fi/problemset/task/1750) | CSES | Easy | Platinum | - |
| 3 |  | [Sloth Naptime](https://codeforces.com/gym/102694/problem/C) | CF | Easy | Platinum | - |
| 4 |  | [2010 - Frog](https://szkopul.edu.pl/problemset/problem/qDH9CkBHZKHY4vbKRBlXPrA7/site/?key=statement) | POI | Normal | Platinum | Sliding Window |
| 5 |  | [Cyclic Array](https://cses.fi/problemset/task/1191/) | CSES | Normal | Platinum | Binary Search, 2P |
| 6 |  | [Running Away From the Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=213) | Old Gold | Normal | Platinum | Small to Large, Euler Tour |
| 7 |  | [262144](http://www.usaco.org/index.php?page=viewproblem2&cpid=648) | Platinum | Hard | Platinum | - |
| 8 |  | [Dependent Events](https://zibada.guru/gcj/ks2021h/problems/#D) | Google Kickstart | Hard | Platinum | LCA, DFS |
| 9 |  | [Double Tree](https://codeforces.com/contest/1140/problem/G) | CF | Hard | Platinum | LCA |

---

## Euler Tour

**21 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Distinct Colors](https://cses.fi/problemset/task/1139) | CSES | Easy | Gold | PURS |
| 2 |  | [Subtree Queries](https://cses.fi/problemset/task/1137) | CSES | Easy | Gold | - |
| 3 |  | [2014 - Postmen](https://oj.uz/problem/view/BOI14_postmen) | Baltic OI | Easy | Advanced | - |
| 4 |  | [Mail Delivery (Undirected)](https://cses.fi/problemset/task/1691) | CSES | Easy | Advanced | - |
| 5 |  | [Teleporters (Directed)](https://cses.fi/problemset/task/1693) | CSES | Easy | Advanced | - |
| 6 |  | [Count Descendants](https://atcoder.jp/contests/abc202/tasks/abc202_e) | AC | Normal | Gold | Binary Search |
| 7 |  | [Cow Land](http://www.usaco.org/index.php?page=viewproblem2&cpid=921) | Gold | Normal | Gold | PURS, HLD |
| 8 |  | [Exactly K Steps](https://atcoder.jp/contests/abc267/tasks/abc267_f) | AC | Normal | Gold | - |
| 9 |  | [Milk Visits](http://www.usaco.org/index.php?page=viewproblem2&cpid=970) | Gold | Normal | Gold | LCA |
| 10 |  | [Path Queries](https://cses.fi/problemset/task/1138) | CSES | Normal | Gold | PURS |
| 11 |  | [Promotion Counting](http://www.usaco.org/index.php?page=viewproblem2&cpid=696) | Platinum | Normal | Gold | PURS |
| 12 |  | [The Shortest Statement](https://codeforces.com/contest/1051/problem/F) | CF | Normal | Gold | - |
| 13 |  | [Diverging Directions](https://codeforces.com/contest/838/problem/B) | CF | Normal | Platinum | RURQ |
| 14 |  | [Running Away From the Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=213) | Old Gold | Normal | Platinum | Small to Large, Binary Jumping |
| 15 |  | [2016 - Acrobat](https://vjudge.net/problem/Baekjoon-13973) | Balkan OI | Normal | Advanced | - |
| 16 |  | [Data Center Drama](https://codeforces.com/contest/528/problem/C) | CF | Normal | Advanced | - |
| 17 |  | [Johnny and Megan's Necklace](https://codeforces.com/contest/1361/problem/C) | CF | Normal | Advanced | - |
| 18 |  | [2009 - Regions](https://oj.uz/problem/view/IOI09_regions) | IOI | Hard | Gold | Binary Search |
| 19 |  | [Bessie's Snow Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=973) | Platinum | Hard | Gold | PURS, Lazy SegTree |
| 20 |  | [Tree and Queries](https://codeforces.com/problemset/problem/375/D) | CF | Hard | Platinum | Sqrt, Tree |
| 21 |  | [Victor Takes Over Canada](https://dmoj.ca/problem/dmopc20c1p5) | DMOPC | Very Hard | Gold | PURS |

---

## HLD

**9 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Query on a tree again!](https://www.spoj.com/problems/QTREE3/en/) | SPOJ | Easy | Platinum | - |
| 2 |  | [Cow Land](http://www.usaco.org/index.php?page=viewproblem2&cpid=921) | Gold | Normal | Gold | Euler Tour, PURS |
| 3 |  | [Grass Planting](http://www.usaco.org/index.php?page=viewproblem2&cpid=102) | Old Gold | Normal | Platinum | PURS |
| 4 |  | [Subtrees & Paths](https://www.hackerrank.com/challenges/subtrees-and-paths) | HR | Normal | Platinum | RURQ |
| 5 |  | [Vertex Set Path Composite](https://judge.yosupo.jp/problem/vertex_set_path_composite) | YS | Normal | Platinum | SegTree |
| 6 |  | [The Tree](https://codeforces.com/contest/1017/problem/G) | CF | Hard | Platinum | - |
| 7 |  | [Tree Game](https://tlx.toki.id/problems/troc-14/H/) | TLX | Hard | Platinum | - |
| 8 |  | [Tree Queries](https://codeforces.com/contest/1254/problem/D) | CF | Hard | Platinum | - |
| 9 |  | [2018 - Cats or Dogs](https://oj.uz/problem/view/JOI18_catdog) | JOI | Very Hard | Platinum | - |

---

## Centroid

**16 problems** (4 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2020 - Village (Maximum)](https://codeforces.com/contest/1387/problem/B2) | Baltic OI | Easy | Platinum | Small to Large |
| 2 | ⭐ | [Ciel the Commander](https://codeforces.com/contest/321/problem/C) | CF | Easy | Platinum | - |
| 3 | ⭐ | [Fixed-Length Paths I](https://cses.fi/problemset/task/2080) | CSES | Easy | Platinum | Small to Large |
| 4 | ⭐ | [2011 - Race](https://oj.uz/problem/view/IOI11_race) | IOI | Normal | Platinum | Merging |
| 5 |  | [Fixed-Length Paths II](https://cses.fi/problemset/task/2081) | CSES | Easy | Platinum | BIT |
| 6 |  | [Yin and Yang](http://usaco.org/index.php?page=viewproblem2&cpid=286) | Old Gold | Easy | Platinum | - |
| 7 |  | [2014 - Factories](https://oj.uz/problem/view/JOI14_factories) | JOI | Normal | Platinum | - |
| 8 |  | [2019 - Lampice](https://dmoj.ca/problem/coci19c3p4) | COCI | Normal | Platinum | Hashing |
| 9 |  | [Digit Tree](https://codeforces.com/contest/715/problem/C) | CF | Normal | Platinum | NT |
| 10 |  | [Sherlock's bet to Moriarty](https://codeforces.com/contest/776/problem/F) | CF | Normal | Platinum | - |
| 11 |  | [Xenia & Tree](https://codeforces.com/problemset/problem/342/E) | CF | Normal | Platinum | - |
| 12 |  | [2013 - Synchronization](https://oj.uz/problem/view/JOI13_synchronization) | JOI | Hard | Platinum | Small to Large |
| 13 |  | [Bob Equilibrium](https://dmoj.ca/problem/dmopc19c7p6) | DMOPC | Hard | Platinum | - |
| 14 |  | [Time Traveller Imaxblue](https://dmoj.ca/problem/tc19summerh) | Triway Cup | Hard | Platinum | - |
| 15 |  | [Frequency Table of Tree Distance](https://judge.yosupo.jp/problem/frequency_table_of_tree_distance) | YS | Hard | Advanced | FFT |
| 16 |  | [Big Integer](https://dmoj.ca/problem/bts17p8) | Back to School | Very Hard | Advanced | FFT |

---

## Diameter

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [PolandBall & Forest](https://codeforces.com/contest/755/problem/C) | CF | Easy | Silver | Tree, Connected Components |
| 2 |  | [New Barns](http://www.usaco.org/index.php?page=viewproblem2&cpid=817) | Platinum | Hard | Platinum | - |

---

## Small to Large

**7 problems** (3 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2020 - Village (Maximum)](https://codeforces.com/contest/1387/problem/B2) | Baltic OI | Easy | Platinum | Centroid |
| 2 | ⭐ | [Fixed-Length Paths I](https://cses.fi/problemset/task/2080) | CSES | Easy | Platinum | Centroid |
| 3 | ⭐ | [2016 - Fireworks](https://oj.uz/problem/view/APIO16_fireworks) | APIO | Hard | Advanced | Slope Trick |
| 4 |  | [Running Away From the Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=213) | Old Gold | Normal | Platinum | Binary Jumping, Euler Tour |
| 5 |  | [Short Code](https://codeforces.com/contest/965/problem/E) | CF | Normal | Advanced | Trie, Tree |
| 6 |  | [2013 - Synchronization](https://oj.uz/problem/view/JOI13_synchronization) | JOI | Hard | Platinum | Centroid |
| 7 |  | [Conquer the World](https://icpc.kattis.com/problems/conquertheworld) | ICPC WF | Very Hard | Advanced | Slope Trick |

---

## Virtual Tree

**5 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Color the Tree](https://codeforces.com/gym/104128/problem/E) | Gym | Normal | Platinum | - |
| 2 |  | [Leaf Color](https://atcoder.jp/contests/abc340/tasks/abc340_g) | AC | Normal | Platinum | - |
| 3 |  | [Chaotic V.](https://codeforces.com/contest/1292/problem/D) | CF | Hard | Platinum | - |
| 4 |  | [Kingdom and its Cities](https://codeforces.com/contest/613/problem/D/) | CF | Hard | Platinum | - |
| 5 |  | [Bridges: The Final Battle](https://codeforces.com/problemset/gymProblem/100551/D) | Gym | Insane | Platinum | Block Cut Tree |

---

## Functional Graph

**12 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Planets Cycles](https://cses.fi/problemset/task/1751) | CSES | Easy | Silver | - |
| 2 | ⭐ | [Permutation Rounds](https://cses.fi/problemset/task/3398) | CSES | Easy | Gold | Prime Factorization |
| 3 |  | [Div 2 B - Badge](https://codeforces.com/contest/1020/problem/B) | CF | Very Easy | Silver | - |
| 4 |  | [The Bovine Shuffle](http://www.usaco.org/index.php?page=viewproblem2&cpid=764) | Silver | Easy | Silver | - |
| 5 |  | [Luxury River Cruise](http://usaco.org/index.php?page=viewproblem2&cpid=284) | Old Silver | Normal | Silver | - |
| 6 |  | [2017 - City Attractions](https://csacademy.com/contest/archive/task/city-attractions/statement/) | Balkan OI | Normal | Gold | DP |
| 7 |  | [Planets Queries II](https://cses.fi/problemset/task/1160) | CSES | Normal | Platinum | - |
| 8 |  | [Hoofball](http://www.usaco.org/index.php?page=viewproblem2&cpid=808) | Bronze | Hard | Bronze | - |
| 9 |  | [Cooperative Game](https://codeforces.com/contest/1137/problem/D) | CF | Hard | Silver | - |
| 10 |  | [2004 - Spies](https://szkopul.edu.pl/problemset/problem/r6tMTfvQFPAEfQioYMCQndQe/site/?key=statement) | POI | Hard | Gold | - |
| 11 |  | [2008 - Mafia](https://szkopul.edu.pl/problemset/problem/w3YAoAT3ej27YeiaNWjK57_G/site/?key=statement) | POI | Hard | Gold | - |
| 12 |  | [Tropical Garden](https://oj.uz/problem/view/IOI11_garden) | IOI | Very Hard | Silver | - |

---

## SCC

**12 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2018 - Bike Paths](https://szkopul.edu.pl/problemset/problem/aKKSmtjWTtDOEHDqnmQ3-eAA/site/?key=statement) | POI | Easy | Advanced | DP |
| 2 |  | [Coin Collector](https://cses.fi/problemset/task/1686) | CSES | Easy | Advanced | DP |
| 3 |  | [Planets & Kingdoms](https://cses.fi/problemset/task/1683) | CSES | Easy | Advanced | - |
| 4 |  | [Visits](http://usaco.org/index.php?page=viewproblem2&cpid=1230) | Silver | Normal | Silver | - |
| 5 |  | [Catowice City](https://codeforces.com/contest/1239/problem/D) | CF | Normal | Advanced | - |
| 6 |  | [Grass Cownoisseur](http://www.usaco.org/index.php?page=viewproblem2&cpid=516) | Old Gold | Normal | Advanced | - |
| 7 |  | [Ralph and Mushrooms](https://codeforces.com/problemset/problem/894/E) | CF | Normal | Advanced | DP |
| 8 |  | [2012 - Festival](https://szkopul.edu.pl/problemset/problem/p9uJo01RR9ouMLLAYroFuQ-7/site/?key=statement) | POI | Hard | Advanced | - |
| 9 |  | [Falling Sand](https://codeforces.com/contest/1534/problem/F2) | CF | Hard | Advanced | - |
| 10 |  | [Proving Equivalences](https://open.kattis.com/problems/equivalences) | Kattis | Hard | Advanced | - |
| 11 |  | [2019 - Virus](https://qoj.ac/contest/295/problem/1127) | JOI | Very Hard | Platinum | Merging |
| 12 |  | [New Flight Routes](https://cses.fi/problemset/task/1685) | CSES | Very Hard | Advanced | - |

---

## BCC

**10 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2017 - One-Way Streets](https://qoj.ac/contest/193/problem/789) | CEOI | Easy | Advanced | - |
| 2 |  | [Strongly Connected Edges](https://cses.fi/problemset/task/2177) | CSES | Easy | Advanced | - |
| 3 |  | [2008 - Blockade](https://szkopul.edu.pl/problemset/problem/eDt8w290owtatmCjad0O0ywk/site/?key=statement) | POI | Normal | Advanced | - |
| 4 |  | [2016 - Amusing Journeys](https://szkopul.edu.pl/problemset/problem/YY6-3ua-C1rt7q-97laWc0UP/site/) | POI | Normal | Advanced | - |
| 5 |  | [2018 - Duathlon](https://oj.uz/problem/view/APIO18_duathlon) | APIO | Normal | Advanced | - |
| 6 |  | [Forbidden Cities](https://cses.fi/problemset/task/1705) | CSES | Normal | Advanced | - |
| 7 |  | [SUBMERGE - Submerging Islands](https://www.spoj.com/problems/SUBMERGE/) | SPOJ | Normal | Advanced | Articulation Points |
| 8 |  | [2015 - Pipes](https://qoj.ac/problem/261) | CEOI | Hard | Advanced | - |
| 9 |  | [Investment](https://dmoj.ca/problem/tle17c1p6) | TLE | Hard | Advanced | - |
| 10 |  | [Push a Box](http://www.usaco.org/index.php?page=viewproblem2&cpid=769) | Platinum | Very Hard | Advanced | - |

---

## 2CC

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Two-Edge-Connected Components](https://judge.yosupo.jp/problem/two_edge_connected_components) | YS | Easy | Advanced | - |

---

## TopoSort

**11 problems** (4 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Game Routes](https://cses.fi/problemset/task/1681) | CSES | Easy | Gold | - |
| 2 | ⭐ | [Quantum Superposition](https://open.kattis.com/problems/quantumsuperposition) | Kattis | Easy | Gold | - |
| 3 | ⭐ | [Constrained Topological Sort](https://atcoder.jp/contests/abc304/tasks/abc304_h) | AC | Hard | Gold | - |
| 4 | ⭐ | [Course Schedule II](https://cses.fi/problemset/task/1757) | CSES | Hard | Gold | - |
| 5 |  | [Directing Edges](https://codeforces.com/contest/1385/problem/E) | CF | Easy | Gold | - |
| 6 |  | [Fox and Names](https://codeforces.com/problemset/problem/510/C) | CF | Easy | Gold | - |
| 7 |  | [Substring](https://codeforces.com/contest/919/problem/D) | CF | Easy | Gold | - |
| 8 |  | [Timeline](http://www.usaco.org/index.php?page=viewproblem2&cpid=1017) | Gold | Easy | Gold | - |
| 9 |  | [Reachable Nodes](https://cses.fi/problemset/task/2138) | CSES | Easy | Platinum | Bitset |
| 10 |  | [Milking Order](http://www.usaco.org/index.php?page=viewproblem2&cpid=838) | Gold | Normal | Gold | Binary Search |
| 11 |  | [Pattern Matching](https://codeforces.com/problemset/problem/1476/E) | CF | Hard | Gold | Bitwise |

---

## Cycle

**3 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Graph Girth](https://cses.fi/problemset/task/1707) | CSES | Normal | Gold | - |
| 2 |  | [Round Trip II](https://cses.fi/problemset/task/1678) | CSES | Easy | Gold | - |
| 3 |  | [Swapity Swap](http://www.usaco.org/index.php?page=viewproblem2&cpid=1013) | Bronze | Hard | Bronze | Permutation |

---

## MST

**17 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2011 - Timeismoney](http://oj.uz/problem/view/balkan11_timeismoney) | Balkan OI | Hard | Platinum | Convex |
| 2 |  | [Design Tutorial: Inverse the Problem](https://codeforces.com/contest/472/problem/D) | CF | Easy | Gold | - |
| 3 |  | [Fenced In](http://www.usaco.org/index.php?page=viewproblem2&cpid=623) | Gold | Easy | Gold | - |
| 4 |  | [Road Reparation](https://cses.fi/problemset/task/1675) | CSES | Easy | Gold | - |
| 5 |  | [Superbull](http://www.usaco.org/index.php?page=viewproblem2&cpid=531) | Old Silver | Easy | Gold | - |
| 6 |  | [2015 - Inheritance](https://qoj.ac/problem/1213) | JOI | Normal | Gold | Binary Search |
| 7 |  | [GCD and MST](https://codeforces.com/problemset/problem/1513/D) | CF | Normal | Gold | Math |
| 8 |  | [I Would Walk 500 Miles](http://www.usaco.org/index.php?page=viewproblem2&cpid=946) | Gold | Normal | Gold | - |
| 9 |  | [MST Unification](https://codeforces.com/contest/1108/problem/F) | CF | Normal | Gold | DSU |
| 10 |  | [Moo Network](http://usaco.org/index.php?page=viewproblem2&cpid=1211) | Gold | Normal | Gold | - |
| 11 |  | [Portals](http://www.usaco.org/index.php?page=viewproblem2&cpid=1138) | Gold | Normal | Gold | - |
| 12 |  | [Spanning Tree Fraction](https://www.hackerrank.com/contests/w31/challenges/spanning-tree-fraction/problem) | HR | Normal | Gold | Binary Search |
| 13 |  | [Xor-MST](https://codeforces.com/contest/888/problem/G) | CF | Normal | Advanced | Trie |
| 14 |  | [Checksum](https://zibada.guru/gcj/ks2021a/problems/#D) | Google Kickstart | Hard | Gold | - |
| 15 |  | [Fenced In](http://www.usaco.org/index.php?page=viewproblem2&cpid=625) | Platinum | Hard | Gold | - |
| 16 |  | [Sirni](https://oj.uz/problem/view/COCI17_sirni) | COCI | Hard | Gold | NT |
| 17 |  | [2013 - Toll](https://dmoj.ca/problem/apio13p2) | APIO | Insane | Gold | Bitmasks |

---

## SP

**22 problems** (5 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Investigation](https://cses.fi/problemset/task/1202) | CSES | Normal | Gold | - |
| 2 | ⭐ | [2012 - Shortest Paths](https://vjudge.net/problem/%E6%B4%9B%E8%B0%B7-P8063) | Balkan OI | Hard | Gold | - |
| 3 | ⭐ | [2018 - Commuter Pass](https://oj.uz/problem/view/JOI18_commuter_pass) | JOI | Hard | Gold | DP |
| 4 | ⭐ | [2021 - Robot](https://oj.uz/problem/view/JOI21_ho_t4) | JOI | Hard | Gold | - |
| 5 | ⭐ | [2013 - Tasksauthor](https://tlx.toki.id/problems/apio-2013/C/) | APIO | Hard | Advanced | Output Only |
| 6 |  | [Fine Dining](http://www.usaco.org/index.php?page=viewproblem2&cpid=861) | Gold | Easy | Gold | - |
| 7 |  | [Flight Discount](https://cses.fi/problemset/task/1195) | CSES | Easy | Gold | - |
| 8 |  | [Milk Pumping](http://www.usaco.org/index.php?page=viewproblem2&cpid=969) | Gold | Easy | Gold | - |
| 9 |  | [Shortest Routes I](https://cses.fi/problemset/task/1671) | CSES | Easy | Gold | - |
| 10 |  | [Sinking Land](https://atcoder.jp/contests/abc363/tasks/abc363_e) | AC | Easy | Gold | DSU |
| 11 |  | [Why Did the Cow Cross the Road](http://www.usaco.org/index.php?page=viewproblem2&cpid=717) | Gold | Easy | Gold | - |
| 12 |  | [D/D/D](https://codeforces.com/contest/2109/problem/D) | CF | Normal | Gold | - |
| 13 |  | [Flight Routes](https://cses.fi/problemset/task/1196) | CSES | Normal | Gold | - |
| 14 |  | [Fossil Excavation](https://codeforces.com/gym/103886/problem/L) | CF | Normal | Gold | Bitmasks, DP |
| 15 |  | [Not Escaping](https://codeforces.com/contest/1627/problem/E) | CF | Normal | Gold | Coordinate Compression, Binary Search, DP |
| 16 |  | [Robot Turtles](https://open.kattis.com/problems/robotturtles) | Kattis | Normal | Gold | - |
| 17 |  | [Shortcut](http://www.usaco.org/index.php?page=viewproblem2&cpid=899) | Gold | Normal | Gold | - |
| 18 |  | [2011 - Crocodile](https://oj.uz/problem/view/IOI11_crocodile) | IOI | Hard | Gold | - |
| 19 |  | [Find the Path](https://dmoj.ca/problem/apio11p2) | APIO | Hard | Gold | Geometry |
| 20 |  | [Remainder Game](https://atcoder.jp/contests/agc022/tasks/agc022_c) | AC | Hard | Gold | Greedy |
| 21 |  | [2015 - Circus](https://oj.uz/problem/view/Balkan15_CIRCUS) | Balkan OI | Very Hard | Gold | Stack |
| 22 |  | [Sums](https://szkopul.edu.pl/problemset/problem/ROXsaseQWYR11jbNvCgM19Er/site/?key=statement) | POI | Insane | Gold | - |

---

## APSP

**3 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2017 - Traveling Merchant](https://oj.uz/problem/view/APIO17_merchant) | APIO | Hard | Advanced | Binary Search |
| 2 |  | [Shortest Routes II](https://cses.fi/problemset/task/1672) | CSES | Easy | Gold | - |
| 3 |  | [Moortal Cowmbat](http://www.usaco.org/index.php?page=viewproblem2&cpid=971) | Gold | Hard | Gold | DP, Prefix Sums |

---

## DP

**166 problems** (22 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Dice Combinations](https://cses.fi/problemset/task/1633) | CSES | Very Easy | Gold | Knapsack |
| 2 | ⭐ | [Digit Sum](https://www.spoj.com/problems/PR003004/) | SPOJ | Easy | Gold | - |
| 3 | ⭐ | [Edit Distance](https://cses.fi/problemset/task/1639) | CSES | Easy | Gold | - |
| 4 | ⭐ | [Grid Paths](https://cses.fi/problemset/task/1638) | CSES | Easy | Gold | - |
| 5 | ⭐ | [Independent Set](https://atcoder.jp/contests/dp/tasks/dp_p) | AC | Easy | Gold | Tree |
| 6 | ⭐ | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | LC | Easy | Gold | - |
| 7 | ⭐ | [Time is Mooney](http://www.usaco.org/index.php?page=viewproblem2&cpid=993) | Gold | Easy | Gold | - |
| 8 | ⭐ | [LCS on Permutations](https://codeforces.com/gym/102951/problem/C) | CF | Normal | Gold | LIS |
| 9 | ⭐ | [Piling Papers](http://usaco.org/index.php?page=viewproblem2&cpid=1307) | Gold | Normal | Gold | - |
| 10 | ⭐ | [Subtree](https://atcoder.jp/contests/dp/tasks/dp_v) | AC | Normal | Gold | - |
| 11 | ⭐ | [2018 - Bitaro's Birthday](https://oj.uz/problem/view/JOI18_bitaro) | JOI | Normal | Platinum | Sqrt |
| 12 | ⭐ | [2009 - Candy](https://qoj.ac/problem/16240) | Baltic OI | Hard | Gold | Geometry |
| 13 | ⭐ | [2010 - Patrol](https://dmoj.ca/problem/apio10p2) | APIO | Hard | Gold | Casework |
| 14 | ⭐ | [2018 - Commuter Pass](https://oj.uz/problem/view/JOI18_commuter_pass) | JOI | Hard | Gold | SP |
| 15 | ⭐ | [Circular Barn Revisited](http://www.usaco.org/index.php?page=viewproblem2&cpid=622) | Gold | Hard | Gold | - |
| 16 | ⭐ | [Skyline Photo](https://codeforces.com/contest/1483/problem/C) | CF | Hard | Gold | Stack, PURS |
| 17 | ⭐ | [2011 - Trapezoid](https://oj.uz/problem/view/balkan11_trapezoid) | Balkan OI | Hard | Platinum | PURS |
| 18 | ⭐ | [2016 - Zoltan](https://oj.uz/problem/view/COCI16_zoltan) | COCI | Hard | Platinum | PURS |
| 19 | ⭐ | [2007 - Training](https://oj.uz/problem/view/IOI07_training) | IOI | Very Hard | Gold | Bitmasks, Tree, DFS |
| 20 | ⭐ | [2016 - Burza](https://oj.uz/problem/view/COCI16_burza) | COCI | Very Hard | Gold | Bitmasks, Tree, Game Theory |
| 21 | ⭐ | [2013 - Bubblesort](https://atcoder.jp/contests/joi2013ho/tasks/joi2013ho5) | JOI | Very Hard | Platinum | D&C |
| 22 | ⭐ | [2014 - Holiday](https://oj.uz/problem/view/IOI14_holiday) | IOI | Very Hard | Platinum | D&C |
| 23 |  | [Array Description](https://cses.fi/problemset/task/1746) | CSES | Easy | Gold | - |
| 24 |  | [Barn Painting](http://www.usaco.org/index.php?page=viewproblem2&cpid=766) | Gold | Easy | Gold | Tree |
| 25 |  | [Cow Checklist](http://www.usaco.org/index.php?page=viewproblem2&cpid=670) | Gold | Easy | Gold | - |
| 26 |  | [Cow Decathlon](http://www.usaco.org/index.php?page=viewproblem2&cpid=401) | Old Gold | Easy | Gold | Bitmasks |
| 27 |  | [Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a) | AC | Easy | Gold | - |
| 28 |  | [Fruit Feast](http://www.usaco.org/index.php?page=viewproblem2&cpid=574) | Gold | Easy | Gold | Knapsack |
| 29 |  | [Game on Tree](https://codeforces.com/contest/1970/problem/C3) | CF | Easy | Gold | Rerooting |
| 30 |  | [Grouping](https://atcoder.jp/contests/dp/tasks/dp_u) | AC | Easy | Gold | Bitmasks |
| 31 |  | [Guard Mark](http://www.usaco.org/index.php?page=viewproblem2&cpid=494) | Old Gold | Easy | Gold | Bitmasks |
| 32 |  | [Hoof Paper Scissors](http://www.usaco.org/index.php?page=viewproblem2&cpid=694) | Gold | Easy | Gold | - |
| 33 |  | [Increasing Frequency](https://codeforces.com/problemset/problem/1082/E) | CF | Easy | Gold | - |
| 34 |  | [Infected Tree](http://codeforces.com/contest/1689/problem/C) | CF | Easy | Gold | Tree |
| 35 |  | [Island Travels](http://www.usaco.org/index.php?page=viewproblem2&cpid=230) | Old Gold | Easy | Gold | Bitmasks, BFS |
| 36 |  | [Matching](https://atcoder.jp/contests/dp/tasks/dp_o?lang=en) | AC | Easy | Gold | Bitmasks |
| 37 |  | [Maximum Product](https://codeforces.com/gym/100886/problem/G) | CF | Easy | Gold | - |
| 38 |  | [Moovie Mooving](http://www.usaco.org/index.php?page=viewproblem2&cpid=515) | Old Gold | Easy | Gold | Bitmasks |
| 39 |  | [Mortal Kombat Tower](https://codeforces.com/problemset/problem/1418/C) | CF | Easy | Gold | - |
| 40 |  | [Odometer](http://www.usaco.org/index.php?page=viewproblem2&cpid=435) | Old Silver | Easy | Gold | - |
| 41 |  | [Radio Contact](http://www.usaco.org/index.php?page=viewproblem2&cpid=598) | Gold | Easy | Gold | - |
| 42 |  | [Tenzing and Balls](https://codeforces.com/problemset/problem/1842/C) | CF | Easy | Gold | - |
| 43 |  | [Tree Matching](https://cses.fi/problemset/task/1130) | CSES | Easy | Gold | - |
| 44 |  | [Tree Painting](https://codeforces.com/contest/1187/problem/E) | CF | Easy | Gold | - |
| 45 |  | [Why Did the Cow Cross the Road II](http://www.usaco.org/index.php?page=viewproblem2&cpid=718) | Gold | Easy | Gold | - |
| 46 |  | [2004 - Two Sawmills](https://szkopul.edu.pl/problemset/problem/ovRIpLFK3IhyFPjnVXeZtGxH/site/?key=statement) | CEOI | Easy | Platinum | Convex |
| 47 |  | [2010 - Commando](https://dmoj.ca/problem/apio10p1) | APIO | Easy | Platinum | Convex |
| 48 |  | [Houses and Schools](https://cses.fi/problemset/task/2087/) | CSES | Easy | Platinum | Convex |
| 49 |  | [Problem Setting](http://usaco.org/index.php?page=viewproblem2&cpid=1309) | Platinum | Easy | Platinum | Combo |
| 50 |  | [The Fair Nut and Rectangles](https://codeforces.com/contest/1083/problem/E) | CF | Easy | Platinum | Convex |
| 51 |  | [2018 - Bike Paths](https://szkopul.edu.pl/problemset/problem/aKKSmtjWTtDOEHDqnmQ3-eAA/site/?key=statement) | POI | Easy | Advanced | SCC |
| 52 |  | [Coin Collector](https://cses.fi/problemset/task/1686) | CSES | Easy | Advanced | SCC |
| 53 |  | [Culture Code](https://codeforces.com/contest/1197/problem/E) | CF | Easy | Advanced | - |
| 54 |  | [Word Combinations](https://cses.fi/problemset/task/1731/) | CSES | Easy | Advanced | Strings |
| 55 |  | [2014 - Bank](https://oj.uz/problem/view/IZhO14_bank) | IZhO | Normal | Gold | Bitmasks |
| 56 |  | [2017 - City Attractions](https://csacademy.com/contest/archive/task/city-attractions/statement/) | Balkan OI | Normal | Gold | Functional Graph |
| 57 |  | [Arena](https://codeforces.com/problemset/problem/1606/E) | CF | Normal | Gold | Combinatorics |
| 58 |  | [Berland Federalization](https://codeforces.com/problemset/problem/440/D) | CF | Normal | Gold | Tree |
| 59 |  | [Bessie's Function](https://usaco.org/index.php?page=viewproblem2&cpid=1497) | Gold | Normal | Gold | Tree |
| 60 |  | [Blocking Elements](https://codeforces.com/contest/1918/problem/D) | CF | Normal | Gold | Binary Search, PURS |
| 61 |  | [Cat & Mice](https://open.kattis.com/problems/catandmice) | Kattis | Normal | Gold | Bitmasks, Geometry, Binary Search |
| 62 |  | [Cow Jog](http://www.usaco.org/index.php?page=viewproblem2&cpid=496) | Old Gold | Normal | Gold | - |
| 63 |  | [Delegation](http://www.usaco.org/index.php?page=viewproblem2&cpid=1020) | Platinum | Normal | Gold | Tree, Binary Search |
| 64 |  | [Different Arrays](https://codeforces.com/contest/1783/problem/D) | CF | Normal | Gold | - |
| 65 |  | [Directory Traversal](http://www.usaco.org/index.php?page=viewproblem2&cpid=814) | Gold | Normal | Gold | Tree |
| 66 |  | [Distance in Tree](https://codeforces.com/contest/161/problem/D) | CF | Normal | Gold | Tree |
| 67 |  | [Elevator Rides](https://cses.fi/problemset/task/1653) | CSES | Normal | Gold | Bitmasks |
| 68 |  | [Flood Fill](https://codeforces.com/contest/1114/problem/D) | CF | Normal | Gold | - |
| 69 |  | [Flowers](https://kilonova.ro/problems/2890) | IIOT | Normal | Gold | Tree |
| 70 |  | [Fossil Excavation](https://codeforces.com/gym/103886/problem/L) | CF | Normal | Gold | Bitmasks, SP |
| 71 |  | [Knapsack](https://oj.uz/problem/view/NOI18_knapsack) | NOI | Normal | Gold | Knapsack |
| 72 |  | [Korney Korneevich and XOR (easy version)](https://codeforces.com/problemset/problem/1582/F1) | CF | Normal | Gold | Bitmasks |
| 73 |  | [LCIS](https://codeforces.com/problemset/problem/10/D) | CF | Normal | Gold | LIS |
| 74 |  | [Little Bird](https://cses.fi/poi/task/527) | POI | Normal | Gold | Sliding Window |
| 75 |  | [Magic Numbers](https://codeforces.com/contest/628/problem/D) | CF | Normal | Gold | - |
| 76 |  | [Maximum Glutton](https://atcoder.jp/contests/abc364/tasks/abc364_e) | AC | Normal | Gold | - |
| 77 |  | [Minimal Grid Path](https://cses.fi/problemset/task/3359/) | CSES | Normal | Gold | - |
| 78 |  | [Not Escaping](https://codeforces.com/contest/1627/problem/E) | CF | Normal | Gold | SP, Coordinate Compression, Binary Search |
| 79 |  | [Palindromic Characteristics](https://codeforces.com/contest/835/problem/D) | CF | Normal | Gold | Hashing |
| 80 |  | [Parsa's Humongous Tree](https://codeforces.com/problemset/problem/1528/A) | CF | Normal | Gold | Tree |
| 81 |  | [Phidias](https://dmoj.ca/problem/ioi04p4) | IOI | Normal | Gold | - |
| 82 |  | [Rabbit Carrot](https://oj.uz/problem/view/LMIO19_triusis) | LMiO | Normal | Gold | - |
| 83 |  | [Select Edges](https://atcoder.jp/contests/abc259/tasks/abc259_f) | AC | Normal | Gold | Tree |
| 84 |  | [Snakes](http://www.usaco.org/index.php?page=viewproblem2&cpid=945) | Gold | Normal | Gold | - |
| 85 |  | [Studentsko](https://open.kattis.com/problems/studentsko?tab=submissions) | Kattis | Normal | Gold | LIS |
| 86 |  | [Talent Show](http://www.usaco.org/index.php?page=viewproblem2&cpid=839) | Gold | Normal | Gold | Knapsack, Binary Search |
| 87 |  | [Teamwork](http://www.usaco.org/index.php?page=viewproblem2&cpid=863) | Gold | Normal | Gold | - |
| 88 |  | [The Cow Run](http://usaco.org/index.php?page=viewproblem2&cpid=265) | Old Gold | Normal | Gold | - |
| 89 |  | [The Endspeaker (Hard Version)](https://codeforces.com/contest/2027/problem/D2) | CF | Normal | Gold | Binary Search, Two Pointers, PURS |
| 90 |  | [Uddered but not Herd](http://www.usaco.org/index.php?page=viewproblem2&cpid=1089) | Gold | Normal | Gold | Bitmasks |
| 91 |  | [Yet Another Minimization Problem 2](https://codeforces.com/contest/1637/problem/D) | CF | Normal | Gold | Math, Knapsack |
| 92 |  | [2002 - Batch Scheduling](https://dmoj.ca/problem/ioi02p4) | IOI | Normal | Platinum | Convex |
| 93 |  | [2006 - Frogs](https://szkopul.edu.pl/problemset/problem/HH7LQVRVHom1g8YRe9423d1P/site/) | POI | Normal | Platinum | Convex |
| 94 |  | [2009 - Harbingers](https://oj.uz/problem/view/CEOI09_harbingers) | CEOI | Normal | Platinum | Convex |
| 95 |  | [2011 - Lightning Conductor](https://szkopul.edu.pl/problemset/problem/iYVwsAcHHCRZzAtQh0QFKbsu/site/) | POI | Normal | Platinum | Convex |
| 96 |  | [2014 - Split the Sequence](https://oj.uz/problem/view/APIO14_sequence) | APIO | Normal | Platinum | Convex |
| 97 |  | [2015 - Nafta](https://oj.uz/problem/view/COI15_nafta) | COI | Normal | Platinum | D&C |
| 98 |  | [Bear and Bowling 4](https://codeforces.com/problemset/problem/660/F) | CF | Normal | Platinum | D&C |
| 99 |  | [Circular Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=626) | Platinum | Normal | Platinum | Convex |
| 100 |  | [Estelle's Supper Box](https://codebreaker.xyz/problem/supperbox) | NOI | Normal | Platinum | Knapsack, D&C, SRQ |
| 101 |  | [Julia and Snail](https://codeforces.com/problemset/problem/793/F) | CF | Normal | Platinum | Sqrt, Segment Tree |
| 102 |  | [Yakiniku Restaurants](https://atcoder.jp/contests/arc067/tasks/arc067_d) | AC | Normal | Platinum | D&C |
| 103 |  | [2014 - Supercomputer](https://szkopul.edu.pl/problemset/problem/e9ycK_efBDBt4aPs-QeqYpwR/site/) | POI | Normal | Advanced | Convex |
| 104 |  | [2015 - Clarkson](https://vjudge.net/problem/Baekjoon-11555) | Balkan OI | Normal | Advanced | Suffix Structures |
| 105 |  | [2017 - Building Bridges](https://oj.uz/problem/view/CEOI17_building) | CEOI | Normal | Advanced | Convex |
| 106 |  | [Arpa & Game](https://codeforces.com/contest/850/problem/C) | CF | Normal | Advanced | Game, Bitmasks, Nimbers |
| 107 |  | [Cereal Trees II](https://codeforces.com/gym/103886/problem/Q) | CF | Normal | Advanced | Tree |
| 108 |  | [Game Of Stones](https://codeforces.com/problemset/problem/768/E) | CF | Normal | Advanced | Game, Bitmasks, Nimbers |
| 109 |  | [Ostap & Tree](https://codeforces.com/contest/735/problem/E) | CF | Normal | Advanced | - |
| 110 |  | [Ralph and Mushrooms](https://codeforces.com/problemset/problem/894/E) | CF | Normal | Advanced | SCC |
| 111 |  | [Tree Patrolling](https://atcoder.jp/contests/abc207/tasks/abc207_f) | AC | Normal | Advanced | Tree |
| 112 |  | [Vasya and Big Integers](https://codeforces.com/contest/1051/problem/E) | CF | Normal | Advanced | Strings |
| 113 |  | [Eating](https://codeforces.com/problemset/problem/2064/D) | CF | Hard | Silver | 2D Prefix Sums, Bitmasking |
| 114 |  | [2005 - Garden](https://dmoj.ca/problem/ioi05p1) | IOI | Hard | Gold | Sliding Window, Binary Search |
| 115 |  | [2006 - Pyramid](https://dmoj.ca/problem/ioi06p2) | IOI | Hard | Gold | Sliding Window |
| 116 |  | [2009 - Digging for Oil](https://dmoj.ca/problem/apio09p1) | APIO | Hard | Gold | Sliding Window |
| 117 |  | [2016 - Matryoshka](https://qoj.ac/problem/402) | JOI | Hard | Gold | LIS, Binary Search |
| 118 |  | [2017 - Hard route](https://oj.uz/problem/view/IZhO17_road) | IZhO | Hard | Gold | - |
| 119 |  | [2017 - Longest beautiful sequence](https://oj.uz/problem/view/IZhO17_subsequence) | IZhO | Hard | Gold | Bitmasks |
| 120 |  | [2018 - Global Warming](https://oj.uz/problem/view/CEOI18_glo) | CEOI | Hard | Gold | - |
| 121 |  | [Bribing Friends](http://www.usaco.org/index.php?page=viewproblem2&cpid=1257) | Gold | Hard | Gold | Greedy |
| 122 |  | [Count the Cows](http://usaco.org/index.php?page=viewproblem2&cpid=1115) | Gold | Hard | Gold | - |
| 123 |  | [Digital Village (Hard Version)](https://codeforces.com/contest/2021/problem/E2) | CF | Hard | Gold | DSU |
| 124 |  | [Drought](http://usaco.org/index.php?page=viewproblem2&cpid=1185) | Gold | Hard | Gold | Prefix Sums |
| 125 |  | [Fancy Stack](https://codeforces.com/problemset/problem/1666/F) | CF | Hard | Gold | Combinatorics |
| 126 |  | [Friendship Editing](https://usaco.org/index.php?page=viewproblem2&cpid=1499) | Gold | Hard | Gold | Bitmasks, Graphs |
| 127 |  | [GCD Harmony](https://open.kattis.com/problems/gcdharmony) | Kattis | Hard | Gold | Tree, Number Theory |
| 128 |  | [Liar](https://codeforces.com/contest/822/problem/E) | CF | Hard | Gold | Hashing |
| 129 |  | [Lights Off](http://www.usaco.org/index.php?page=viewproblem2&cpid=1282) | Gold | Hard | Gold | Bitwise |
| 130 |  | [Make it One](https://codeforces.com/contest/1043/problem/F) | CF | Hard | Gold | Combinatorics |
| 131 |  | [Max Indep Set](https://judge.yosupo.jp/problem/maximum_independent_set) | YS | Hard | Gold | Bitmasks, Meet in Middle |
| 132 |  | [Moortal Cowmbat](http://www.usaco.org/index.php?page=viewproblem2&cpid=971) | Gold | Hard | Gold | Prefix Sums, APSP |
| 133 |  | [Moving to the Capital](https://codeforces.com/contest/1472/problem/G) | CF | Hard | Gold | BFS |
| 134 |  | [Pair Programming](http://usaco.org/index.php?page=viewproblem2&cpid=1234) | Gold | Hard | Gold | - |
| 135 |  | [Palindromic Paths](http://www.usaco.org/index.php?page=viewproblem2&cpid=553) | Old Gold | Hard | Gold | - |
| 136 |  | [Redistributing Gifts](http://usaco.org/index.php?page=viewproblem2&cpid=1209) | Gold | Hard | Gold | Bitmasks |
| 137 |  | [Swap](https://atcoder.jp/contests/abc227/tasks/abc227_e) | AC | Hard | Gold | - |
| 138 |  | [Taming the Herd](http://www.usaco.org/index.php?page=viewproblem2&cpid=815) | Gold | Hard | Gold | - |
| 139 |  | [Team Building](http://www.usaco.org/index.php?page=viewproblem2&cpid=673) | Platinum | Hard | Gold | - |
| 140 |  | [2009 - Beetle](https://qoj.ac/problem/16239) | Baltic OI | Hard | Platinum | - |
| 141 |  | [2017 - Long-Distance Coach](https://oj.uz/problem/view/JOI17_coach) | JOI | Hard | Platinum | Convex |
| 142 |  | [Ciel and Gondolas](https://codeforces.com/contest/321/problem/E) | CF | Hard | Platinum | D&C |
| 143 |  | [Subsequence Reversal](http://www.usaco.org/index.php?page=viewproblem2&cpid=698) | Platinum | Hard | Platinum | - |
| 144 |  | [Varying Kibibits](https://codeforces.com/contest/800/problem/D) | CF | Hard | Platinum | Bitmasks |
| 145 |  | [Yet Another Minimization Problem](https://codeforces.com/contest/868/problem/F) | CF | Hard | Platinum | D&C |
| 146 |  | [Log Drivin' Hirin](https://www.facebook.com/codingcompetitions/hacker-cup/2020/round-2/problems/D) | FHC | Hard | Advanced | Convex |
| 147 |  | [2014 - Beads](https://oj.uz/problem/view/APIO14_beads) | APIO | Very Hard | Gold | Casework |
| 148 |  | [2016 - Torrent](https://oj.uz/problem/view/COI16_torrent) | COI | Very Hard | Gold | Tree |
| 149 |  | [2019 - Amusement Park](https://oj.uz/problem/view/CEOI19_amusementpark) | CEOI | Very Hard | Gold | Bitmasks |
| 150 |  | [2020 - Star Trek](https://codeforces.com/contest/1402/problem/C) | CEOI | Very Hard | Gold | Math |
| 151 |  | [Binary Land](https://www.codechef.com/problems/BINLAND) | CC | Very Hard | Gold | Sliding Window |
| 152 |  | [Boboniu and Jianghu](https://codeforces.com/contest/1394/problem/D) | CF | Very Hard | Gold | Tree |
| 153 |  | [Bovine Genetics](http://www.usaco.org/index.php?page=viewproblem2&cpid=1066) | Gold | Very Hard | Gold | - |
| 154 |  | [Cow At Large](http://www.usaco.org/index.php?page=viewproblem2&cpid=793) | Platinum | Very Hard | Gold | Tree |
| 155 |  | [Interstellar Intervals](https://usaco.org/index.php?page=viewproblem2&cpid=1450) | Gold | Very Hard | Gold | Prefix Sums |
| 156 |  | [Professional Layer](https://codeforces.com/contest/1103/problem/D) | CF | Very Hard | Gold | Bitmasks, NT |
| 157 |  | [Stamp Painting](http://www.usaco.org/index.php?page=viewproblem2&cpid=791) | Gold | Very Hard | Gold | - |
| 158 |  | [2014 - Solar Lamps](https://szkopul.edu.pl/problemset/problem/2yK6zUTXvAjhxSDfbjE4Zx7k/site/?key=statement) | POI | Very Hard | Platinum | D&C |
| 159 |  | [Lightsout](http://www.usaco.org/index.php?page=viewproblem2&cpid=602) | Platinum | Very Hard | Platinum | - |
| 160 |  | [Mowing Mischief](http://www.usaco.org/index.php?page=viewproblem2&cpid=926) | Platinum | Very Hard | Platinum | D&C |
| 161 |  | [Paimon's Tree](https://codeforces.com/gym/103470/problem/G) | CF Gym | Very Hard | Platinum | Tree |
| 162 |  | [Sort It Out](http://www.usaco.org/index.php?page=viewproblem2&cpid=865) | Platinum | Very Hard | Platinum | - |
| 163 |  | [String Journey](https://codeforces.com/contest/1063/problem/F) | CF | Very Hard | Advanced | Suffix Structures |
| 164 |  | [2016 - Swap](https://oj.uz/problem/view/BOI16_swap) | Baltic OI | Insane | Gold | Tree |
| 165 |  | [Nora's Toy Boxes](https://codeforces.com/contest/1292/problem/F) | CF | Insane | Gold | Bitmasks, Combinatorics |
| 166 |  | [Wise Men](https://codeforces.com/contest/1326/problem/F2) | CF | Insane | Platinum | Bitmasks, SOS DP |

---

## Knapsack

**26 problems** (4 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Dice Combinations](https://cses.fi/problemset/task/1633) | CSES | Very Easy | Gold | DP |
| 2 | ⭐ | [Minimizing Coins](https://cses.fi/problemset/task/1634) | CSES | Very Easy | Gold | - |
| 3 | ⭐ | [Coin Combinations I (Unordered)](https://cses.fi/problemset/task/1635) | CSES | Easy | Gold | - |
| 4 | ⭐ | [Coin Combinations II (Ordered)](https://cses.fi/problemset/task/1636) | CSES | Easy | Gold | - |
| 5 |  | [Book Shop](https://cses.fi/problemset/task/1158) | CSES | Easy | Gold | - |
| 6 |  | [Fruit Feast](http://www.usaco.org/index.php?page=viewproblem2&cpid=574) | Gold | Easy | Gold | DP |
| 7 |  | [Money Sums](https://cses.fi/problemset/task/1745) | CSES | Easy | Gold | - |
| 8 |  | [Subset Sum Queries](https://atcoder.jp/contests/abc321/tasks/abc321_f) | AC | Easy | Gold | - |
| 9 |  | [The Values You Can Make](https://codeforces.com/contest/687/problem/C) | CF | Easy | Gold | - |
| 10 |  | [Two Sets II](https://cses.fi/problemset/task/1093) | CSES | Easy | Gold | - |
| 11 |  | [School Excursion](https://cses.fi/problemset/task/1706) | CSES | Easy | Platinum | Bitset |
| 12 |  | [2004 - Maximal](https://szkopul.edu.pl/problemset/problem/lGqKS9urITMjTXhpdaHqyoEL/site/?key=statement) | POI | Normal | Gold | Prime Factorization |
| 13 |  | [Cow Poetry](http://www.usaco.org/index.php?page=viewproblem2&cpid=897) | Gold | Normal | Gold | Exponentiation |
| 14 |  | [Exercise](http://www.usaco.org/index.php?page=viewproblem2&cpid=1043) | Gold | Normal | Gold | Prime Factorization |
| 15 |  | [Knapsack](https://oj.uz/problem/view/NOI18_knapsack) | NOI | Normal | Gold | DP |
| 16 |  | [Round Subset](http://codeforces.com/contest/837/problem/D) | CF | Normal | Gold | - |
| 17 |  | [Talent Show](http://www.usaco.org/index.php?page=viewproblem2&cpid=839) | Gold | Normal | Gold | DP, Binary Search |
| 18 |  | [Yet Another Minimization Problem 2](https://codeforces.com/contest/1637/problem/D) | CF | Normal | Gold | DP, Math |
| 19 |  | [2010 - Candies](https://qoj.ac/problem/16695) | Baltic OI | Normal | Platinum | Bitset |
| 20 |  | [Estelle's Supper Box](https://codebreaker.xyz/problem/supperbox) | NOI | Normal | Platinum | DP, D&C, SRQ |
| 21 |  | [Cloud Computing](https://oj.uz/problem/view/CEOI18_clo) | CEOI | Hard | Gold | Sorting |
| 22 |  | [Coding Company](https://cses.fi/problemset/task/1665) | CSES | Hard | Gold | - |
| 23 |  | [2015 - Tug of War](https://oj.uz/problem/view/BOI15_tug) | Baltic OI | Hard | Platinum | Bitset |
| 24 |  | [2017 - Bootfall](https://oj.uz/problem/view/IZhO17_bootfall) | IZhO | Hard | Platinum | Bitset |
| 25 |  | [Mooriokart](http://www.usaco.org/index.php?page=viewproblem2&cpid=925) | Platinum | Very Hard | Gold | - |
| 26 |  | [Exercise](http://www.usaco.org/index.php?page=viewproblem2&cpid=1045) | Platinum | Insane | Gold | Prime Factorization |

---

## LIS

**7 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Towers](https://cses.fi/problemset/task/1073) | CSES | Easy | Gold | Sorted Set, Greedy, Binary Search |
| 2 | ⭐ | [LCS on Permutations](https://codeforces.com/gym/102951/problem/C) | CF | Normal | Gold | DP |
| 3 |  | [Consecutive Subsequence](https://codeforces.com/contest/977/problem/F) | CF | Easy | Gold | - |
| 4 |  | [Kite](https://atcoder.jp/contests/abc439/tasks/abc439_e) | AC | Normal | Gold | - |
| 5 |  | [LCIS](https://codeforces.com/problemset/problem/10/D) | CF | Normal | Gold | DP |
| 6 |  | [Studentsko](https://open.kattis.com/problems/studentsko?tab=submissions) | Kattis | Normal | Gold | DP |
| 7 |  | [2016 - Matryoshka](https://qoj.ac/problem/402) | JOI | Hard | Gold | DP, Binary Search |

---

## Range DP

**10 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2015 - Space Jazz](https://saco-evaluator.org.za/cms/sapo2015z/tasks/jazz/description) | SAPO | Easy | Gold | - |
| 2 |  | [Modern Art 3](http://www.usaco.org/index.php?page=viewproblem2&cpid=1114) | Gold | Easy | Gold | - |
| 3 |  | [The Sports Festival](https://codeforces.com/contest/1509/problem/C) | CF | Easy | Gold | - |
| 4 |  | [2014 - The Stables of Genghis Khan](https://saco-evaluator.org.za/cms/sapo2014z/tasks/genghis/description) | SAPO | Normal | Gold | - |
| 5 |  | [248](http://www.usaco.org/index.php?page=viewproblem2&cpid=647) | Gold | Normal | Gold | - |
| 6 |  | [Brackets](https://www.codechef.com/practice/course/zco-inoi-problems/INOIPRAC/problems/INOI1602) | CC | Normal | Gold | - |
| 7 |  | [Empty String](https://cses.fi/problemset/task/1080) | CSES | Normal | Gold | - |
| 8 |  | [Zuma](https://codeforces.com/problemset/problem/607/B) | CF | Normal | Gold | - |
| 9 |  | [Greedy Pie Eaters](http://www.usaco.org/index.php?page=viewproblem2&cpid=972) | Platinum | Hard | Gold | - |
| 10 |  | [2012 - Sailing Race](https://qoj.ac/problem/14466) | CEOI | Very Hard | Gold | - |

---

## Bitmasks

**37 problems** (3 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [XorTransform](https://kilonova.ro/problems/1832) | kilonova | Hard | Platinum | SOS DP, NT |
| 2 | ⭐ | [2007 - Training](https://oj.uz/problem/view/IOI07_training) | IOI | Very Hard | Gold | DP, Tree, DFS |
| 3 | ⭐ | [2016 - Burza](https://oj.uz/problem/view/COCI16_burza) | COCI | Very Hard | Gold | DP, Tree, Game Theory |
| 4 |  | [Close Group](https://atcoder.jp/contests/abc187/tasks/abc187_f) | AC | Easy | Gold | - |
| 5 |  | [Cow Decathlon](http://www.usaco.org/index.php?page=viewproblem2&cpid=401) | Old Gold | Easy | Gold | DP |
| 6 |  | [Grouping](https://atcoder.jp/contests/dp/tasks/dp_u) | AC | Easy | Gold | DP |
| 7 |  | [Guard Mark](http://www.usaco.org/index.php?page=viewproblem2&cpid=494) | Old Gold | Easy | Gold | DP |
| 8 |  | [Hamiltonian Flights](https://cses.fi/problemset/task/1690) | CSES | Easy | Gold | - |
| 9 |  | [Island Travels](http://www.usaco.org/index.php?page=viewproblem2&cpid=230) | Old Gold | Easy | Gold | DP, BFS |
| 10 |  | [Matching](https://atcoder.jp/contests/dp/tasks/dp_o?lang=en) | AC | Easy | Gold | DP |
| 11 |  | [Moovie Mooving](http://www.usaco.org/index.php?page=viewproblem2&cpid=515) | Old Gold | Easy | Gold | DP |
| 12 |  | [Team Building](https://codeforces.com/contest/1316/problem/E) | CF | Easy | Gold | MinCostFlow |
| 13 |  | [Vowels](https://codeforces.com/contest/383/problem/E) | CF | Easy | Platinum | SOS DP |
| 14 |  | [2014 - Bank](https://oj.uz/problem/view/IZhO14_bank) | IZhO | Normal | Gold | DP |
| 15 |  | [Cat & Mice](https://open.kattis.com/problems/catandmice) | Kattis | Normal | Gold | DP, Geometry, Binary Search |
| 16 |  | [Elevator Rides](https://cses.fi/problemset/task/1653) | CSES | Normal | Gold | DP |
| 17 |  | [Fossil Excavation](https://codeforces.com/gym/103886/problem/L) | CF | Normal | Gold | DP, SP |
| 18 |  | [Korney Korneevich and XOR (easy version)](https://codeforces.com/problemset/problem/1582/F1) | CF | Normal | Gold | DP |
| 19 |  | [Uddered but not Herd](http://www.usaco.org/index.php?page=viewproblem2&cpid=1089) | Gold | Normal | Gold | DP |
| 20 |  | [Bits and Pieces](https://codeforces.com/contest/1208/problem/F) | CF | Normal | Platinum | SOS DP |
| 21 |  | [Compatible Numbers](https://codeforces.com/contest/165/problem/E) | CF | Normal | Platinum | SOS DP |
| 22 |  | [Jzzhu and Numbers](https://codeforces.com/problemset/problem/449/D) | CF | Normal | Platinum | SOS DP |
| 23 |  | [Arpa & Game](https://codeforces.com/contest/850/problem/C) | CF | Normal | Advanced | Game, DP, Nimbers |
| 24 |  | [Beautiful Subarrays](https://codeforces.com/problemset/problem/665/E) | CF | Normal | Advanced | Trie, Tree |
| 25 |  | [Game Of Stones](https://codeforces.com/problemset/problem/768/E) | CF | Normal | Advanced | Game, DP, Nimbers |
| 26 |  | [Minimax Problem](https://codeforces.com/contest/1288/problem/D) | CF | Hard | Silver | Binary Search |
| 27 |  | [2017 - Longest beautiful sequence](https://oj.uz/problem/view/IZhO17_subsequence) | IZhO | Hard | Gold | DP |
| 28 |  | [Friendship Editing](https://usaco.org/index.php?page=viewproblem2&cpid=1499) | Gold | Hard | Gold | DP, Graphs |
| 29 |  | [Max Indep Set](https://judge.yosupo.jp/problem/maximum_independent_set) | YS | Hard | Gold | Meet in Middle, DP |
| 30 |  | [Redistributing Gifts](http://usaco.org/index.php?page=viewproblem2&cpid=1209) | Gold | Hard | Gold | DP |
| 31 |  | [Varying Kibibits](https://codeforces.com/contest/800/problem/D) | CF | Hard | Platinum | DP |
| 32 |  | [2019 - Amusement Park](https://oj.uz/problem/view/CEOI19_amusementpark) | CEOI | Very Hard | Gold | DP |
| 33 |  | [Professional Layer](https://codeforces.com/contest/1103/problem/D) | CF | Very Hard | Gold | DP, NT |
| 34 |  | [2013 - Toll](https://dmoj.ca/problem/apio13p2) | APIO | Insane | Gold | MST |
| 35 |  | [Gold Experience](https://codeforces.com/contest/1148/problem/G) | CF | Insane | Gold | NT, Binary Search |
| 36 |  | [Nora's Toy Boxes](https://codeforces.com/contest/1292/problem/F) | CF | Insane | Gold | DP, Combinatorics |
| 37 |  | [Wise Men](https://codeforces.com/contest/1326/problem/F2) | CF | Insane | Platinum | DP, SOS DP |

---

## SOS DP

**8 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [XorTransform](https://kilonova.ro/problems/1832) | kilonova | Hard | Platinum | Bitmasks, NT |
| 2 |  | [Bit Problem](https://cses.fi/problemset/task/1654) | CSES | Easy | Platinum | - |
| 3 |  | [Vowels](https://codeforces.com/contest/383/problem/E) | CF | Easy | Platinum | Bitmasks |
| 4 |  | [Bits and Pieces](https://codeforces.com/contest/1208/problem/F) | CF | Normal | Platinum | Bitmasks |
| 5 |  | [Compatible Numbers](https://codeforces.com/contest/165/problem/E) | CF | Normal | Platinum | Bitmasks |
| 6 |  | [Jzzhu and Numbers](https://codeforces.com/problemset/problem/449/D) | CF | Normal | Platinum | Bitmasks |
| 7 |  | [2018 - Snake Escaping](https://oj.uz/problem/view/JOI18_snake_escaping) | JOI | Hard | Platinum | - |
| 8 |  | [Wise Men](https://codeforces.com/contest/1326/problem/F2) | CF | Insane | Platinum | Bitmasks, DP |

---

## Broken Profile

**4 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2020 - Selotejp](https://dmoj.ca/problem/coci20c3p4) | COCI | Normal | Advanced | - |
| 2 |  | [Counting Tilings](https://cses.fi/problemset/task/2181) | CSES | Normal | Advanced | - |
| 3 |  | [Guards in the Storehouse](https://codeforces.com/problemset/problem/845/F) | CF | Normal | Advanced | - |
| 4 |  | [Compound Escape](http://www.usaco.org/index.php?page=viewproblem2&cpid=949) | Platinum | Very Hard | Advanced | - |

---

## Convex

**27 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2011 - Timeismoney](http://oj.uz/problem/view/balkan11_timeismoney) | Balkan OI | Hard | Platinum | MST |
| 2 |  | [2004 - Two Sawmills](https://szkopul.edu.pl/problemset/problem/ovRIpLFK3IhyFPjnVXeZtGxH/site/?key=statement) | CEOI | Easy | Platinum | DP |
| 3 |  | [2010 - Commando](https://dmoj.ca/problem/apio10p1) | APIO | Easy | Platinum | DP |
| 4 |  | [Convex Hull](https://open.kattis.com/problems/convexhull) | Kattis | Easy | Platinum | - |
| 5 |  | [Houses and Schools](https://cses.fi/problemset/task/2087/) | CSES | Easy | Platinum | DP |
| 6 |  | [Robert Hood](https://open.kattis.com/problems/roberthood) | Kattis | Easy | Platinum | - |
| 7 |  | [The Fair Nut and Rectangles](https://codeforces.com/contest/1083/problem/E) | CF | Easy | Platinum | DP |
| 8 |  | [Water Balance](https://codeforces.com/problemset/problem/1299/C) | CF | Easy | Platinum | - |
| 9 |  | [2002 - Batch Scheduling](https://dmoj.ca/problem/ioi02p4) | IOI | Normal | Platinum | DP |
| 10 |  | [2006 - Frogs](https://szkopul.edu.pl/problemset/problem/HH7LQVRVHom1g8YRe9423d1P/site/) | POI | Normal | Platinum | DP |
| 11 |  | [2009 - Harbingers](https://oj.uz/problem/view/CEOI09_harbingers) | CEOI | Normal | Platinum | DP |
| 12 |  | [2011 - Lightning Conductor](https://szkopul.edu.pl/problemset/problem/iYVwsAcHHCRZzAtQh0QFKbsu/site/) | POI | Normal | Platinum | DP |
| 13 |  | [2014 - Split the Sequence](https://oj.uz/problem/view/APIO14_sequence) | APIO | Normal | Platinum | DP |
| 14 |  | [Balance Beam](http://www.usaco.org/index.php?page=viewproblem2&cpid=864) | Platinum | Normal | Platinum | - |
| 15 |  | [Circular Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=626) | Platinum | Normal | Platinum | DP |
| 16 |  | [Cow Curling](http://www.usaco.org/index.php?page=viewproblem2&cpid=382) | Old Gold | Normal | Platinum | - |
| 17 |  | [Falling Portals](http://www.usaco.org/index.php?page=viewproblem2&cpid=998) | Platinum | Normal | Platinum | - |
| 18 |  | [Geometers Anonymous](https://codeforces.com/problemset/problem/1195/F) | CF | Normal | Platinum | PURS |
| 19 |  | [2014 - Supercomputer](https://szkopul.edu.pl/problemset/problem/e9ycK_efBDBt4aPs-QeqYpwR/site/) | POI | Normal | Advanced | DP |
| 20 |  | [2017 - Building Bridges](https://oj.uz/problem/view/CEOI17_building) | CEOI | Normal | Advanced | DP |
| 21 |  | [2017 - Long-Distance Coach](https://oj.uz/problem/view/JOI17_coach) | JOI | Hard | Platinum | DP |
| 22 |  | [Fence Orthogonality](https://open.kattis.com/problems/fenceortho) | Kattis | Hard | Platinum | - |
| 23 |  | [Fencing the Herd](http://www.usaco.org/index.php?page=viewproblem2&cpid=534) | Old Gold | Hard | Platinum | - |
| 24 |  | [Mana Collection](http://www.usaco.org/index.php?page=viewproblem2&cpid=1285) | Platinum | Hard | Platinum | Bitmask DP |
| 25 |  | [Log Drivin' Hirin](https://www.facebook.com/codingcompetitions/hacker-cup/2020/round-2/problems/D) | FHC | Hard | Advanced | DP |
| 26 |  | [AGC E - Random Pawn](https://atcoder.jp/contests/agc044/tasks/agc044_e) | AC | Very Hard | Platinum | - |
| 27 |  | [The Awesomest Vertex](https://codeforces.com/contest/1178/problem/G) | CF | Very Hard | Platinum | - |

---

## Slope Trick

**13 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2016 - Fireworks](https://oj.uz/problem/view/APIO16_fireworks) | APIO | Hard | Advanced | Small to Large |
| 2 | ⭐ | [2018 - Safety](https://qoj.ac/contest/2454/problem/13299) | NOI.sg | Hard | Advanced | - |
| 3 |  | [Buy Low Sell High](https://codeforces.com/contest/866/problem/D) | CF | Easy | Advanced | - |
| 4 |  | [Increasing Array II](https://cses.fi/problemset/task/2132) | CSES | Easy | Advanced | - |
| 5 |  | [2019 - Magic Tree](https://qoj.ac/problem/946) | CEOI | Normal | Advanced | - |
| 6 |  | [2019 - Potatoes & Fertilizers](https://oj.uz/problem/view/LMIO19_bulves) | LMiO | Normal | Advanced | - |
| 7 |  | [Bookface](https://codeforces.com/gym/102576/problem/C) | CF | Normal | Advanced | - |
| 8 |  | [CCDSAP Exam](https://www.codechef.com/problems/CCDSAP) | CC | Normal | Advanced | - |
| 9 |  | [Farm of Monsters](https://codeforces.com/gym/102538/problem/F) | CF | Hard | Advanced | - |
| 10 |  | [Landscaping](http://www.usaco.org/index.php?page=viewproblem2&cpid=650) | Platinum | Hard | Advanced | - |
| 11 |  | [Moving Walkways](https://codeforces.com/contest/1209/problem/H) | CF | Hard | Advanced | - |
| 12 |  | [April Fools' Problem](https://codeforces.com/contest/802/problem/O) | CF | Very Hard | Advanced | - |
| 13 |  | [Conquer the World](https://icpc.kattis.com/problems/conquertheworld) | ICPC WF | Very Hard | Advanced | Small to Large |

---

## D&C

**12 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2013 - Bubblesort](https://atcoder.jp/contests/joi2013ho/tasks/joi2013ho5) | JOI | Very Hard | Platinum | DP |
| 2 | ⭐ | [2014 - Holiday](https://oj.uz/problem/view/IOI14_holiday) | IOI | Very Hard | Platinum | DP |
| 3 |  | [2015 - Nafta](https://oj.uz/problem/view/COI15_nafta) | COI | Normal | Platinum | DP |
| 4 |  | [Bear and Bowling 4](https://codeforces.com/problemset/problem/660/F) | CF | Normal | Platinum | DP |
| 5 |  | [Estelle's Supper Box](https://codebreaker.xyz/problem/supperbox) | NOI | Normal | Platinum | DP, Knapsack, SRQ |
| 6 |  | [Soriya's Programming Project](https://dmoj.ca/problem/dmopc19c7p5) | DMOPC | Normal | Platinum | 2DRQ, BIT |
| 7 |  | [Yakiniku Restaurants](https://atcoder.jp/contests/arc067/tasks/arc067_d) | AC | Normal | Platinum | DP |
| 8 |  | [Ciel and Gondolas](https://codeforces.com/contest/321/problem/E) | CF | Hard | Platinum | DP |
| 9 |  | [Non-Decreasing Subsequences](http://www.usaco.org/index.php?page=viewproblem2&cpid=997) | Platinum | Hard | Platinum | Matrix |
| 10 |  | [Yet Another Minimization Problem](https://codeforces.com/contest/868/problem/F) | CF | Hard | Platinum | DP |
| 11 |  | [2014 - Solar Lamps](https://szkopul.edu.pl/problemset/problem/2yK6zUTXvAjhxSDfbjE4Zx7k/site/?key=statement) | POI | Very Hard | Platinum | DP |
| 12 |  | [Mowing Mischief](http://www.usaco.org/index.php?page=viewproblem2&cpid=926) | Platinum | Very Hard | Platinum | DP |

---

## Meet in the Middle

**7 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Xor-Paths](https://codeforces.com/contest/1006/problem/F) | CF | Easy | Gold | Binary Search, DFS |
| 2 |  | [Maximum Subsequence](https://codeforces.com/contest/888/problem/E) | CF | Easy | Gold | Binary Search |
| 3 |  | [Meet in the Middle](https://cses.fi/problemset/task/1628/) | CSES | Easy | Gold | - |
| 4 |  | [Robot Instructions](http://usaco.org/index.php?page=viewproblem2&cpid=1207) | Silver | Easy | Gold | 2P |
| 5 |  | [Lizard Era: Beginning](https://codeforces.com/problemset/problem/585/D) | CF | Hard | Gold | DFS, NT |
| 6 |  | [Playlist](https://open.kattis.com/problems/playlist) | Kattis | Hard | Gold | DFS, PIE |
| 7 |  | [Prime Gift](https://codeforces.com/contest/912/problem/E) | CF | Hard | Gold | Binary Search, DFS |

---

## Combinatorics

**22 problems** (3 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Creating Strings II](https://cses.fi/problemset/task/1715) | CSES | Easy | Gold | - |
| 2 | ⭐ | [Bracket Sequences I](https://cses.fi/problemset/task/2064) | CSES | Easy | Advanced | Catalan |
| 3 | ⭐ | [Help Yourself](http://usaco.org/index.php?page=viewproblem2&cpid=1018) | Gold | Normal | Gold | Prefix Sums |
| 4 |  | [Almost Identity Permutations](https://codeforces.com/problemset/problem/888/D) | CF | Easy | Gold | - |
| 5 |  | [Close Tuples](https://codeforces.com/contest/1462/problem/E2) | CF | Easy | Gold | Binary Search |
| 6 |  | [Distributing Apples](https://cses.fi/problemset/task/1716) | CSES | Easy | Gold | - |
| 7 |  | [Just Stalling](http://www.usaco.org/index.php?page=viewproblem2&cpid=1085) | Bronze | Easy | Gold | - |
| 8 |  | [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/description/) | LC | Easy | Advanced | Catalan |
| 9 |  | [Arena](https://codeforces.com/problemset/problem/1606/E) | CF | Normal | Gold | DP |
| 10 |  | [Bots](https://dmoj.ca/problem/bbc08h) | Bubble Cup | Normal | Gold | - |
| 11 |  | [Jeopardized Projects](https://codeforces.com/gym/103886/problem/E) | CF | Normal | Gold | Prefix Sums |
| 12 |  | [Med and Mex](https://codeforces.com/gym/104520/problem/K) | CF | Normal | Gold | - |
| 13 |  | [Moo Route](http://www.usaco.org/index.php?page=viewproblem2&cpid=1283) | Gold | Normal | Gold | - |
| 14 |  | [Mycraft Sand Sort](https://codeforces.com/problemset/problem/2064/E) | CF | Normal | Gold | DSU, Sorted Set |
| 15 |  | [Strivore](https://atcoder.jp/contests/abc171/tasks/abc171_f) | AC | Normal | Gold | - |
| 16 |  | [Xor Pyramid](https://cses.fi/problemset/task/2419) | CSES | Normal | Gold | Bitwise |
| 17 |  | [SKYLINE - Skyline](https://www.spoj.com/problems/SKYLINE/) | SPOJ | Normal | Advanced | Catalan |
| 18 |  | [Cow Camp](http://usaco.org/index.php?page=viewproblem2&cpid=1210) | Gold | Hard | Gold | Probability, Math, Binary Search |
| 19 |  | [Fancy Stack](https://codeforces.com/problemset/problem/1666/F) | CF | Hard | Gold | DP |
| 20 |  | [Make it One](https://codeforces.com/contest/1043/problem/F) | CF | Hard | Gold | DP |
| 21 |  | [Bracket Sequences II](https://cses.fi/problemset/task/2187) | CSES | Hard | Advanced | Catalan |
| 22 |  | [Nora's Toy Boxes](https://codeforces.com/contest/1292/problem/F) | CF | Insane | Gold | DP, Bitmasks |

---

## Catalan

**4 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Bracket Sequences I](https://cses.fi/problemset/task/2064) | CSES | Easy | Advanced | Combinatorics |
| 2 |  | [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/description/) | LC | Easy | Advanced | Combinatorics |
| 3 |  | [SKYLINE - Skyline](https://www.spoj.com/problems/SKYLINE/) | SPOJ | Normal | Advanced | Combinatorics |
| 4 |  | [Bracket Sequences II](https://cses.fi/problemset/task/2187) | CSES | Hard | Advanced | Combinatorics |

---

## PIE

**11 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Prime Multiples](https://cses.fi/problemset/task/2185) | CSES | Normal | Silver | Bitwise |
| 2 |  | [MOMOS - FEASTOFPIGS](https://www.spoj.com/problems/MOMOS/) | SPOJ | Easy | Platinum | Divisors, Sieve |
| 3 |  | [Cowpatibility](http://www.usaco.org/index.php?page=viewproblem2&cpid=862) | Gold | Normal | Gold | Bitset |
| 4 |  | [Counting Coprime Pairs](https://cses.fi/problemset/task/2417) | CSES | Normal | Platinum | Divisors |
| 5 |  | [Counting Reorders](https://cses.fi/problemset/task/2421) | CSES | Normal | Platinum | - |
| 6 |  | [Grid Completion](https://cses.fi/problemset/task/2429) | CSES | Normal | Platinum | - |
| 7 |  | [KPRIMESB - Almost Prime Numbers Again](https://www.spoj.com/problems/KPRIMESB/) | SPOJ | Normal | Platinum | Divisors |
| 8 |  | [MSKYCODE - Sky Code](https://www.spoj.com/problems/MSKYCODE/) | SPOJ | Normal | Platinum | Divisors |
| 9 |  | [SQFREE - Square-free integers](https://www.spoj.com/problems/SQFREE/) | SPOJ | Normal | Platinum | Divisors |
| 10 |  | [Playlist](https://open.kattis.com/problems/playlist) | Kattis | Hard | Gold | Meet in the Middle, DFS |
| 11 |  | [SetOfPatterns](https://archive.topcoder.com/ProblemStatement/pm/8307) | TopCoder | Hard | Platinum | Strings, Patterns |

---

## NT

**10 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [XorTransform](https://kilonova.ro/problems/1832) | kilonova | Hard | Platinum | Bitmasks, SOS DP |
| 2 |  | [Power Products](https://codeforces.com/contest/1225/problem/D) | CF | Easy | Gold | - |
| 3 |  | [Circular Barn - The Game](http://usaco.org/index.php?page=viewproblem2&cpid=1255) | Silver | Normal | Silver | Game Theory |
| 4 |  | [Digit Tree](https://codeforces.com/contest/715/problem/C) | CF | Normal | Platinum | Centroid |
| 5 |  | [Sleeping in Class](http://www.usaco.org/index.php?page=viewproblem2&cpid=1213) | Platinum | Normal | Platinum | Prefix Sums |
| 6 |  | [Lizard Era: Beginning](https://codeforces.com/problemset/problem/585/D) | CF | Hard | Gold | Meet in the Middle, DFS |
| 7 |  | [Sirni](https://oj.uz/problem/view/COCI17_sirni) | COCI | Hard | Gold | MST |
| 8 |  | [Periodni](https://dmoj.ca/problem/coci08c4p6) | COCI | Hard | Advanced | - |
| 9 |  | [Professional Layer](https://codeforces.com/contest/1103/problem/D) | CF | Very Hard | Gold | DP, Bitmasks |
| 10 |  | [Gold Experience](https://codeforces.com/contest/1148/problem/G) | CF | Insane | Gold | Bitmasks, Binary Search |

---

## Divisibility

**10 problems** (3 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [NAJPWG - Playing with GCD](https://www.spoj.com/problems/NAJPWG/) | SPOJ | Easy | Gold | - |
| 2 | ⭐ | [Common Divisors](https://cses.fi/problemset/task/1081) | CSES | Normal | Gold | - |
| 3 | ⭐ | [Maximum of GCDs](https://www.codechef.com/problems/KSIZEGCD) | CC | Normal | Gold | - |
| 4 |  | [Diluc and Kaeya](https://codeforces.com/problemset/problem/1536/C) | CF | Easy | Gold | - |
| 5 |  | [Product 1 Modulo N](https://codeforces.com/problemset/problem/1514/C) | CF | Easy | Gold | Modular Arithmetic |
| 6 |  | [LCM Sum](https://www.spoj.com/problems/LCMSUM/) | SPOJ | Hard | Gold | LCM, Euler Totient |
| 7 |  | [Sum of Divisors](https://cses.fi/problemset/task/1082) | CSES | Hard | Gold | - |
| 8 |  | [The Number of Pairs](https://codeforces.com/contest/1499/problem/D) | CF | Hard | Gold | - |
| 9 |  | [sqrt(n²+n+X)](https://atcoder.jp/contests/abc420/tasks/abc420_g) | AC | Hard | Gold | - |
| 10 |  | [Power Tower](https://codeforces.com/problemset/problem/906/D) | CF | Very Hard | Gold | Math, Number Theory |

---

## Modular Arithmetic

**7 problems** (4 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Exponentiation II](https://cses.fi/problemset/task/1712) | CSES | Easy | Gold | - |
| 2 | ⭐ | [Divisor Analysis](https://cses.fi/problemset/task/2182) | CSES | Normal | Gold | - |
| 3 | ⭐ | [Queue Composite](https://judge.yosupo.jp/problem/queue_operate_all_composite) | YS | Normal | Gold | - |
| 4 | ⭐ | [The Best Subsequence](https://usaco.org/index.php?page=viewproblem2&cpid=1498) | Gold | Hard | Gold | Binary Search |
| 5 |  | [Exponentiation](https://cses.fi/problemset/task/1095) | CSES | Easy | Gold | - |
| 6 |  | [Product 1 Modulo N](https://codeforces.com/problemset/problem/1514/C) | CF | Easy | Gold | Divisibility |
| 7 |  | [Santa's Bot](https://codeforces.com/contest/1279/problem/D) | CF | Easy | Gold | - |

---

## Prime Factorization

**8 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Permutation Rounds](https://cses.fi/problemset/task/3398) | CSES | Easy | Gold | Functional Graph |
| 2 | ⭐ | [Sumdiv](https://kilonova.ro/problems/127) | Kilonova | Normal | Gold | Math |
| 3 |  | [Div Game](https://atcoder.jp/contests/abc169/tasks/abc169_d) | AC | Easy | Gold | - |
| 4 |  | [2004 - Maximal](https://szkopul.edu.pl/problemset/problem/lGqKS9urITMjTXhpdaHqyoEL/site/?key=statement) | POI | Normal | Gold | Knapsack |
| 5 |  | [Exercise](http://www.usaco.org/index.php?page=viewproblem2&cpid=1043) | Gold | Normal | Gold | Knapsack |
| 6 |  | [Orac and LCM](https://codeforces.com/contest/1349/problem/A) | CF | Normal | Gold | - |
| 7 |  | [Cubic?](https://atcoder.jp/contests/abc238/tasks/abc238_g) | AC | Hard | Gold | Hashing |
| 8 |  | [Exercise](http://www.usaco.org/index.php?page=viewproblem2&cpid=1045) | Platinum | Insane | Gold | Knapsack |

---

## Euler Totient

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [LCM Sum](https://www.spoj.com/problems/LCMSUM/) | SPOJ | Hard | Gold | Divisibility, LCM |

---

## Matrix

**12 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Recursive Sequence](https://www.spoj.com/problems/SEQ/) | SPOJ | Easy | Platinum | Exponentiation |
| 2 | ⭐ | [2009 - Reading](https://vjudge.net/problem/%E6%B4%9B%E8%B0%B7-P6841) | Balkan OI | Normal | Platinum | Exponentiation |
| 3 |  | [Fibonacci Numbers](https://cses.fi/problemset/task/1722) | CSES | Easy | Platinum | Exponentiation |
| 4 |  | [Graph Paths I](https://cses.fi/problemset/task/1723) | CSES | Easy | Platinum | Exponentiation |
| 5 |  | [Graph Paths II](https://cses.fi/problemset/task/1724) | CSES | Easy | Platinum | Exponentiation |
| 6 |  | [Xor-sequences](https://codeforces.com/contest/691/problem/E) | CF | Easy | Platinum | Exponentiation |
| 7 |  | [2007 - Connected Points](https://cses.fi/112/list/) | Baltic OI | Normal | Platinum | Exponentiation |
| 8 |  | [Pareidolia](http://www.usaco.org/index.php?page=viewproblem2&cpid=1332) | Platinum | Normal | Platinum | PURQ |
| 9 |  | [Ray Needs Help](https://dmoj.ca/problem/ray) | DMOJ | Normal | Platinum | Exponentiation |
| 10 |  | [Sasha and Array](https://codeforces.com/problemset/problem/718/C) | CF | Normal | Platinum | Exponentiation, PURS |
| 11 |  | [COWBASIC](http://www.usaco.org/index.php?page=viewproblem2&cpid=746) | Platinum | Hard | Platinum | Exponentiation |
| 12 |  | [Non-Decreasing Subsequences](http://www.usaco.org/index.php?page=viewproblem2&cpid=997) | Platinum | Hard | Platinum | D&C |

---

## Exponentiation

**11 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Recursive Sequence](https://www.spoj.com/problems/SEQ/) | SPOJ | Easy | Platinum | Matrix |
| 2 | ⭐ | [2009 - Reading](https://vjudge.net/problem/%E6%B4%9B%E8%B0%B7-P6841) | Balkan OI | Normal | Platinum | Matrix |
| 3 |  | [Fibonacci Numbers](https://cses.fi/problemset/task/1722) | CSES | Easy | Platinum | Matrix |
| 4 |  | [Graph Paths I](https://cses.fi/problemset/task/1723) | CSES | Easy | Platinum | Matrix |
| 5 |  | [Graph Paths II](https://cses.fi/problemset/task/1724) | CSES | Easy | Platinum | Matrix |
| 6 |  | [Xor-sequences](https://codeforces.com/contest/691/problem/E) | CF | Easy | Platinum | Matrix |
| 7 |  | [Cow Poetry](http://www.usaco.org/index.php?page=viewproblem2&cpid=897) | Gold | Normal | Gold | Knapsack |
| 8 |  | [2007 - Connected Points](https://cses.fi/112/list/) | Baltic OI | Normal | Platinum | Matrix |
| 9 |  | [Ray Needs Help](https://dmoj.ca/problem/ray) | DMOJ | Normal | Platinum | Matrix |
| 10 |  | [Sasha and Array](https://codeforces.com/problemset/problem/718/C) | CF | Normal | Platinum | Matrix, PURS |
| 11 |  | [COWBASIC](http://www.usaco.org/index.php?page=viewproblem2&cpid=746) | Platinum | Hard | Platinum | Matrix |

---

## Bitwise

**18 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Three Days Ago](https://atcoder.jp/contests/abc295/tasks/abc295_d) | AC | Easy | Silver | - |
| 2 | ⭐ | [Prime Multiples](https://cses.fi/problemset/task/2185) | CSES | Normal | Silver | PIE |
| 3 |  | [Data Structures Fan](https://codeforces.com/contest/1872/problem/E) | CF | Easy | Silver | - |
| 4 |  | [Lisa and the Martians](https://codeforces.com/contest/1851/problem/F) | CF | Easy | Silver | Sorting, Trie |
| 5 |  | [Powered Addition](https://codeforces.com/contest/1338/problem/A) | CF | Easy | Silver | Greedy |
| 6 |  | [Searching For Soulmates](http://www.usaco.org/index.php?page=viewproblem2&cpid=1182) | Silver | Easy | Silver | Complete Search |
| 7 |  | [The Wu](https://codeforces.com/contest/1017/problem/D) | CF | Easy | Silver | Complete Search, Binary Search |
| 8 |  | [Field Day](http://www.usaco.org/index.php?page=viewproblem2&cpid=1327) | Silver | Normal | Silver | Graphs |
| 9 |  | [Medical Parity](https://codeforces.com/contest/2181/problem/M) | CF | Normal | Silver | Greedy, Prefix |
| 10 |  | [Sequence Construction](https://usaco.org/index.php?page=viewproblem2&cpid=1518) | Silver | Normal | Silver | - |
| 11 |  | [Sheikh (Easy version)](https://codeforces.com/problemset/problem/1732/C1) | CF | Normal | Silver | Prefix Sums, Binary Search |
| 12 |  | [Sliding Window Summation](http://usaco.org/index.php?page=viewproblem2&cpid=1544) | Silver | Normal | Silver | Prefix Sums |
| 13 |  | [Sum of XOR Functions](https://codeforces.com/contest/1879/problem/D) | CF | Normal | Silver | Prefix Sums |
| 14 |  | [Take a Guess](https://codeforces.com/contest/1556/problem/D) | CF | Normal | Silver | - |
| 15 |  | [Xor Sigma Problem](https://atcoder.jp/contests/abc365/tasks/abc365_e) | AC | Normal | Silver | Prefix Sums |
| 16 |  | [Xor Pyramid](https://cses.fi/problemset/task/2419) | CSES | Normal | Gold | Combinatorics |
| 17 |  | [Lights Off](http://www.usaco.org/index.php?page=viewproblem2&cpid=1282) | Gold | Hard | Gold | DP |
| 18 |  | [Pattern Matching](https://codeforces.com/problemset/problem/1476/E) | CF | Hard | Gold | TopoSort |

---

## XOR Hashing

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Prefix Equality](https://atcoder.jp/contests/abc250/tasks/abc250_e) | AC | Easy | Gold | - |

---

## Hashing

**18 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2018 - Genetics](https://open.kattis.com/problems/genetics2) | Baltic OI | Hard | Gold | - |
| 2 | ⭐ | [2021 - Sateliti](https://oj.uz/problem/view/COCI20_satellti) | COCI | Hard | Gold | Binary Search |
| 3 |  | [Finding Periods](https://cses.fi/problemset/task/1733/) | CSES | Very Easy | Gold | - |
| 4 |  | [2017 - Palindromic Partitions](https://qoj.ac/problem/793/) | CEOI | Easy | Gold | Greedy |
| 5 |  | [Censoring](http://www.usaco.org/index.php?page=viewproblem2&cpid=529) | Silver | Easy | Gold | - |
| 6 |  | [Check Transcription](https://codeforces.com/problemset/problem/1056/E) | CF | Easy | Gold | - |
| 7 |  | [Fullmetal Alchemist II](https://codeforces.com/gym/104048/problem/K) | CF | Easy | Gold | - |
| 8 |  | [Searching For Strings](https://dmoj.ca/problem/ccc20s3) | CCC | Easy | Gold | - |
| 9 |  | [2017 - Hangman 2](https://csacademy.com/contest/rmi-2017-day-1/task/hangman2/) | RMI | Normal | Gold | - |
| 10 |  | [2017 - Osmosmjerka](https://oj.uz/problem/view/COCI17_osmosmjerka) | COCI | Normal | Gold | Probability |
| 11 |  | [Bovine Genomics](http://www.usaco.org/index.php?page=viewproblem2&cpid=741) | Gold | Normal | Gold | Binary Search |
| 12 |  | [Lights Out](http://www.usaco.org/index.php?page=viewproblem2&cpid=599) | Gold | Normal | Gold | Simulation |
| 13 |  | [Palindromic Characteristics](https://codeforces.com/contest/835/problem/D) | CF | Normal | Gold | DP |
| 14 |  | [2019 - Lampice](https://dmoj.ca/problem/coci19c3p4) | COCI | Normal | Platinum | Centroid |
| 15 |  | [Cubic?](https://atcoder.jp/contests/abc238/tasks/abc238_g) | AC | Hard | Gold | Prime Factorization |
| 16 |  | [Liar](https://codeforces.com/contest/822/problem/E) | CF | Hard | Gold | DP |
| 17 |  | [2016 - Palinilap](https://oj.uz/problem/view/COI16_palinilap) | COI | Very Hard | Gold | Binary Search |
| 18 |  | [2016 - Zamjene](https://oj.uz/problem/view/COCI16_zamjene) | COCI | Very Hard | Gold | DSU |

---

## Strings

**17 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2005 - Template](https://szkopul.edu.pl/problemset/problem/PT4yHRX9Mmz85ndhNPGCi_WB/site/) | POI | Hard | Advanced | KMP |
| 2 |  | [Type Printer](https://oj.uz/problem/view/IOI08_printer) | IOI | Very Easy | Advanced | DFS, Trie |
| 3 |  | [Vlak](https://oj.uz/problem/view/COCI20_vlak) | COCI | Very Easy | Advanced | DFS, Trie |
| 4 |  | [2006 - Periods of Words](https://szkopul.edu.pl/problemset/problem/k9UKIj11V6iPRc3LaiYQYHyi/site/?key=statement) | POI | Easy | Advanced | KMP |
| 5 |  | [Frequency of String](https://codeforces.com/contest/963/problem/D) | CF | Easy | Advanced | - |
| 6 |  | [Word Combinations](https://cses.fi/problemset/task/1731/) | CSES | Easy | Advanced | DP |
| 7 |  | [2019 - Necklace](https://oj.uz/problem/view/BOI19_necklace4) | Baltic OI | Normal | Advanced | KMP |
| 8 |  | [Censoring](http://www.usaco.org/index.php?page=viewproblem2&cpid=533) | Gold | Normal | Advanced | - |
| 9 |  | [Find and Replace](http://www.usaco.org/index.php?page=viewproblem2&cpid=1281) | Gold | Normal | Advanced | Trie |
| 10 |  | [Old Berland Language](https://codeforces.com/contest/37/problem/C) | CF | Normal | Advanced | Trie |
| 11 |  | [Prefix-Suffix Palindrome](https://codeforces.com/contest/1326/problem/D2) | CF | Normal | Advanced | - |
| 12 |  | [Sonya and Matrix Beauty](https://codeforces.com/contest/1080/problem/E) | CF | Normal | Advanced | - |
| 13 |  | [Vasya and Big Integers](https://codeforces.com/contest/1051/problem/E) | CF | Normal | Advanced | DP |
| 14 |  | [You Are Given Some Strings...](https://codeforces.com/contest/1202/problem/E) | CF | Normal | Advanced | - |
| 15 |  | [SetOfPatterns](https://archive.topcoder.com/ProblemStatement/pm/8307) | TopCoder | Hard | Platinum | PIE, Patterns |
| 16 |  | [Cow Patterns](http://poj.org/problem?id=3167) | Old Gold | Hard | Advanced | KMP |
| 17 |  | [Palisection](https://codeforces.com/contest/17/problem/E) | CF | Hard | Advanced | Prefix Sums |

---

## KMP

**8 problems** (3 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [String Matching](https://cses.fi/problemset/task/1753) | CSES | Very Easy | Advanced | Z |
| 2 | ⭐ | [2005 - Template](https://szkopul.edu.pl/problemset/problem/PT4yHRX9Mmz85ndhNPGCi_WB/site/) | POI | Hard | Advanced | Strings |
| 3 | ⭐ | [2011 - Matching](https://szkopul.edu.pl/problemset/problem/6b-q_dPI_KRHD3VArapVq7EP/site/) | CEOI | Hard | Advanced | - |
| 4 |  | [2006 - Periods of Words](https://szkopul.edu.pl/problemset/problem/k9UKIj11V6iPRc3LaiYQYHyi/site/?key=statement) | POI | Easy | Advanced | Strings |
| 5 |  | [2019 - Necklace](https://oj.uz/problem/view/BOI19_necklace4) | Baltic OI | Normal | Advanced | Strings |
| 6 |  | [Cow Patterns](http://poj.org/problem?id=3167) | Old Gold | Hard | Advanced | Strings |
| 7 |  | [2011 - Periodicity](https://szkopul.edu.pl/problemset/problem/H6hUSie6S-cBVL4PG5rqQnmj/site/) | POI | Very Hard | Advanced | - |
| 8 |  | [2012 - Prefixuffix](https://szkopul.edu.pl/problemset/problem/DkPj-ES6glaEwxppbuaxbOO6/site/) | POI | Very Hard | Advanced | - |

---

## Z

**3 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [String Matching](https://cses.fi/problemset/task/1753) | CSES | Very Easy | Advanced | KMP |
| 2 | ⭐ | [Z Algorithm](https://judge.yosupo.jp/problem/zalgorithm) | YS | Very Easy | Advanced | - |
| 3 |  | [Prefixes and Suffixes](https://codeforces.com/problemset/problem/432/D) | CF | Normal | Advanced | - |

---

## Suffix Array

**5 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Number of Substrings](https://judge.yosupo.jp/problem/number_of_substrings) | YS | Easy | Advanced | - |
| 2 |  | [Suffix Array](https://judge.yosupo.jp/problem/suffixarray) | YS | Easy | Advanced | - |
| 3 |  | [Run Enumerate](https://judge.yosupo.jp/problem/runenumerate) | YS | Hard | Advanced | - |
| 4 |  | [String Transform](https://cses.fi/problemset/task/1113) | CSES | Hard | Advanced | - |
| 5 |  | [Two Prefixes](https://codeforces.com/contest/1090/problem/J) | CF | Hard | Advanced | - |

---

## Suffix Structures

**10 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Lexicographical String Search](https://www.spoj.com/problems/SUBLEX) | SPOJ | Easy | Advanced | - |
| 2 | ⭐ | [Suffix Array](https://codeforces.com/edu/course/2/lesson/2/2/practice/contest/269103/problem/A) | CF | Easy | Advanced | - |
| 3 |  | [2015 - Clarkson](https://vjudge.net/problem/Baekjoon-11555) | Balkan OI | Normal | Advanced | DP |
| 4 |  | [Cyclical Quest](https://codeforces.com/contest/235/problem/C) | CF | Normal | Advanced | - |
| 5 |  | [Power of String 3](https://www.hackerearth.com/practice/data-structures/advanced-data-structures/suffix-trees/practice-problems/algorithm/power-of-string-3/description/) | HE | Normal | Advanced | - |
| 6 |  | [Indie Album](https://codeforces.com/contest/1207/problem/G) | CF | Hard | Advanced | - |
| 7 |  | [Paper Task](https://codeforces.com/contest/653/problem/F) | CF | Hard | Advanced | - |
| 8 |  | [Yet Another LCP Problem](https://codeforces.com/contest/1073/problem/G) | CF | Hard | Advanced | - |
| 9 |  | [Incomparable Pairs](https://codeforces.com/gym/102129/problem/I) | CF | Very Hard | Advanced | - |
| 10 |  | [String Journey](https://codeforces.com/contest/1063/problem/F) | CF | Very Hard | Advanced | DP |

---

## Trie

**13 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2016 - Selling RNA Strands](https://oj.uz/problem/view/JOI16_selling_rna) | JOI | Hard | Advanced | BIT |
| 2 |  | [Type Printer](https://oj.uz/problem/view/IOI08_printer) | IOI | Very Easy | Advanced | Strings, DFS |
| 3 |  | [Vlak](https://oj.uz/problem/view/COCI20_vlak) | COCI | Very Easy | Advanced | Strings, DFS |
| 4 |  | [Lisa and the Martians](https://codeforces.com/contest/1851/problem/F) | CF | Easy | Silver | Bitwise, Sorting |
| 5 |  | [Set XOR-Min](https://judge.yosupo.jp/problem/set_xor_min) | YS | Easy | Advanced | Greedy |
| 6 |  | [2020 - Klasika](https://oj.uz/problem/view/COCI20_klasika) | COCI | Normal | Advanced | - |
| 7 |  | [Beautiful Subarrays](https://codeforces.com/problemset/problem/665/E) | CF | Normal | Advanced | Tree, Bitmasks |
| 8 |  | [Find and Replace](http://www.usaco.org/index.php?page=viewproblem2&cpid=1281) | Gold | Normal | Advanced | Strings |
| 9 |  | [Old Berland Language](https://codeforces.com/contest/37/problem/C) | CF | Normal | Advanced | Strings |
| 10 |  | [Short Code](https://codeforces.com/contest/965/problem/E) | CF | Normal | Advanced | Tree, Small to Large |
| 11 |  | [Xor-MST](https://codeforces.com/contest/888/problem/G) | CF | Normal | Advanced | MST |
| 12 |  | [2012 - XOR](https://oj.uz/problem/view/IZhO12_xor) | IZhO | Hard | Advanced | Greedy |
| 13 |  | [Tree and XOR](https://codeforces.com/contest/1055/problem/F) | CF | Hard | Advanced | Tree |

---

## Palindrome

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Longest Palindrome](https://cses.fi/problemset/task/1111) | CSES | Easy | Advanced | - |

---

## Geometry

**16 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2009 - Candy](https://qoj.ac/problem/16240) | Baltic OI | Hard | Gold | DP |
| 2 |  | [Rudolph and Christmas Tree](https://codeforces.com/contest/1846/problem/D) | CF | Easy | Bronze | - |
| 3 |  | [Point Location Test](https://cses.fi/problemset/task/2189) | CSES | Easy | Platinum | - |
| 4 |  | [Field Reduction](http://www.usaco.org/index.php?page=viewproblem2&cpid=642) | Silver | Normal | Bronze | - |
| 5 |  | [Maximum Manhattan Distances](https://cses.fi/problemset/task/3410/) | CSES | Normal | Silver | - |
| 6 |  | [2011 - Balloons](https://oj.uz/problem/view/CEOI11_bal) | CEOI | Normal | Gold | Stack |
| 7 |  | [Cat & Mice](https://open.kattis.com/problems/catandmice) | Kattis | Normal | Gold | Bitmasks, DP, Binary Search |
| 8 |  | [Laser Takahashi](https://atcoder.jp/contests/abc442/tasks/abc442_e) | AC | Normal | Platinum | Sorting, Angles |
| 9 |  | [Line Segment Intersection](https://cses.fi/problemset/task/2190) | CSES | Normal | Platinum | - |
| 10 |  | [Lots of Triangles](http://www.usaco.org/index.php?page=viewproblem2&cpid=672) | Platinum | Normal | Platinum | Bitset |
| 11 |  | [Maximum Number of Visible Points](https://leetcode.com/problems/maximum-number-of-visible-points/description/) | LC | Normal | Platinum | Radians, Sliding Windows |
| 12 |  | [Point in Polygon](https://cses.fi/problemset/task/2192) | CSES | Normal | Platinum | Math |
| 13 |  | [Polygon Area](https://cses.fi/problemset/task/2191) | CSES | Normal | Platinum | Math |
| 14 |  | [Polygon Lattice Points](https://cses.fi/problemset/task/2193) | CSES | Normal | Platinum | - |
| 15 |  | [Find the Path](https://dmoj.ca/problem/apio11p2) | APIO | Hard | Gold | SP |
| 16 |  | [2011 - 2circles](https://oj.uz/problem/view/balkan11_2circles) | Balkan OI | Very Hard | Advanced | Binary Search |

---

## Rectangle

**5 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Blocked Billboard II](http://www.usaco.org/index.php?page=viewproblem2&cpid=783) | Bronze | Hard | Bronze | - |
| 2 |  | [Square Pasture](http://www.usaco.org/index.php?page=viewproblem2&cpid=663) | Bronze | Easy | Bronze | - |
| 3 |  | [Blocked Billboard](http://www.usaco.org/index.php?page=viewproblem2&cpid=759) | Bronze | Normal | Bronze | - |
| 4 |  | [B. Two Tables](https://codeforces.com/problemset/problem/1555/B) | CF | Hard | Bronze | - |
| 5 |  | [D3C - White Sheet](https://codeforces.com/contest/1216/problem/C) | CF | Hard | Bronze | - |

---

## Convex Hull

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Escape Through Leaf](https://codeforces.com/problemset/problem/932/F) | CF | Normal | Platinum | - |

---

## Sweep Line

**8 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2020 - Roads](https://codeforces.com/contest/1402/problem/B) | CEOI | Very Hard | Platinum | - |
| 2 |  | [Square Overlap](http://usaco.org/index.php?page=viewproblem2&cpid=227) | Old Silver | Easy | Platinum | - |
| 3 |  | [Closest Pair](https://open.kattis.com/problems/closestpair2) | Kattis | Normal | Platinum | - |
| 4 |  | [Cow Steeplechase II](http://www.usaco.org/index.php?page=viewproblem2&cpid=943) | Silver | Normal | Platinum | - |
| 5 |  | [Hill Walk](http://www.usaco.org/index.php?page=viewproblem2&cpid=266) | Old Gold | Normal | Platinum | - |
| 6 |  | [2006 - Walk](https://oj.uz/problem/view/CEOI06_walk) | CEOI | Hard | Platinum | - |
| 7 |  | [2017 - Plahte](https://oj.uz/problem/view/COCI17_plahte) | COI | Hard | Platinum | - |
| 8 |  | [2014 - Demarcation](https://dmoj.ca/problem/btoi14p4) | Baltic OI | Very Hard | Platinum | - |

---

## Radial Sweep

**4 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2003 - Seeing the Boundary](https://dmoj.ca/problem/ioi03p6) | IOI | Easy | Platinum | - |
| 2 |  | [2006 - Antenna](https://qoj.ac/problem/17234) | CEOI | Easy | Platinum | Binary Search |
| 3 |  | [2018 - Stone](https://szkopul.edu.pl/problemset/problem/NZSCUwz2ACePsBKuVCIVzrRt/site/) | POI | Normal | Platinum | - |
| 4 |  | [2010 - Signaling](https://dmoj.ca/problem/apio10p3) | APIO | Hard | Platinum | - |

---

## Manhattan MST

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Grid MST](https://open.kattis.com/problems/gridmst) | Kattis | Normal | Platinum | - |
| 2 |  | [The Sprawl](https://csacademy.com/contest/archive/task/the-sprawl) | CSA | Hard | Platinum | - |

---

## Max Flow

**4 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Cow Steeplechase](http://www.usaco.org/index.php?page=viewproblem2&cpid=93) | Old Gold | Easy | Advanced | - |
| 2 |  | [Distinct Routes](https://cses.fi/problemset/task/1711) | CSES | Easy | Advanced | - |
| 3 |  | [Download Speed](https://cses.fi/problemset/task/1694) | CSES | Easy | Advanced | - |
| 4 |  | [School Dance](https://cses.fi/problemset/task/1696) | CSES | Easy | Advanced | - |

---

## MCF

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Build String](https://codeforces.com/contest/237/problem/E) | CF | Normal | Advanced | - |
| 2 |  | [Four Melodies](https://codeforces.com/contest/818/problem/G) | CF | Normal | Advanced | - |

---

## Game

**15 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Nim Game I](https://cses.fi/problemset/task/1730) | CSES | Easy | Advanced | Nimbers |
| 2 |  | [S-NIM](https://open.kattis.com/problems/snim) | Kattis | Easy | Advanced | Nimbers |
| 3 |  | [2001 - Ioiwari Game](https://dmoj.ca/problem/ioi01p2) | IOI | Normal | Advanced | - |
| 4 |  | [2005 - Rectangle Game](https://ioi.contest.codeforces.com/group/32KGsXgiKA/contest/103747/problem/E) | IOI | Normal | Advanced | Nimbers |
| 5 |  | [2014 - Cop and Robber](https://oj.uz/problem/view/BOI14_coprobber) | Baltic OI | Normal | Advanced | Graph |
| 6 |  | [Apple Tree](https://codeforces.com/contest/812/problem/E) | CF | Normal | Advanced | Tree, Nimbers |
| 7 |  | [Arpa & Game](https://codeforces.com/contest/850/problem/C) | CF | Normal | Advanced | DP, Bitmasks, Nimbers |
| 8 |  | [Bacterial Tactics](https://zibada.guru/gcj/2019r1c/problems/#C) | GCJ | Normal | Advanced | Nimbers |
| 9 |  | [Chessboard Game, Again!](https://www.hackerrank.com/contests/5-days-of-game-theory/challenges/a-chessboard-game/problem) | Hackerrank | Normal | Advanced | Nimbers |
| 10 |  | [Game Of Stones](https://codeforces.com/problemset/problem/768/E) | CF | Normal | Advanced | DP, Bitmasks, Nimbers |
| 11 |  | [Game on Tree](https://atcoder.jp/contests/agc017/tasks/agc017_d) | AC | Normal | Advanced | Nimbers, Tree |
| 12 |  | [Interval Game 2](https://atcoder.jp/contests/abc206/tasks/abc206_f) | AC | Normal | Advanced | Nimbers |
| 13 |  | [Strange Nim](https://atcoder.jp/contests/arc091/tasks/arc091_d) | AC | Hard | Advanced | Nimbers |
| 14 |  | [2016 - Hydrocontest](https://szkopul.edu.pl/problemset/problem/y9HM1ctDU8V8xLMRUYACDIRs/site/) | POI | Very Hard | Advanced | Cactus |
| 15 |  | [2016 - Not Nim](https://szkopul.edu.pl/problemset/problem/M5CruI5eCu8elnNFHuiXBrvV/site/) | POI | Insane | Advanced | - |

---

## Nimbers

**11 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Nim Game I](https://cses.fi/problemset/task/1730) | CSES | Easy | Advanced | Game |
| 2 |  | [S-NIM](https://open.kattis.com/problems/snim) | Kattis | Easy | Advanced | Game |
| 3 |  | [2005 - Rectangle Game](https://ioi.contest.codeforces.com/group/32KGsXgiKA/contest/103747/problem/E) | IOI | Normal | Advanced | Game |
| 4 |  | [Apple Tree](https://codeforces.com/contest/812/problem/E) | CF | Normal | Advanced | Tree, Game |
| 5 |  | [Arpa & Game](https://codeforces.com/contest/850/problem/C) | CF | Normal | Advanced | Game, DP, Bitmasks |
| 6 |  | [Bacterial Tactics](https://zibada.guru/gcj/2019r1c/problems/#C) | GCJ | Normal | Advanced | Game |
| 7 |  | [Chessboard Game, Again!](https://www.hackerrank.com/contests/5-days-of-game-theory/challenges/a-chessboard-game/problem) | Hackerrank | Normal | Advanced | Game |
| 8 |  | [Game Of Stones](https://codeforces.com/problemset/problem/768/E) | CF | Normal | Advanced | Game, DP, Bitmasks |
| 9 |  | [Game on Tree](https://atcoder.jp/contests/agc017/tasks/agc017_d) | AC | Normal | Advanced | Game, Tree |
| 10 |  | [Interval Game 2](https://atcoder.jp/contests/abc206/tasks/abc206_f) | AC | Normal | Advanced | Game |
| 11 |  | [Strange Nim](https://atcoder.jp/contests/arc091/tasks/arc091_d) | AC | Hard | Advanced | Game |

---

## 2SAT

**7 problems** (3 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Coprime Solitaire](https://atcoder.jp/contests/abc210/tasks/abc210_f) | AC | Normal | Advanced | - |
| 2 | ⭐ | [Babysitting](https://codeforces.com/problemset/problem/1903/F) | CF | Hard | Advanced | Binary Search, Trees |
| 3 | ⭐ | [Harder Satisfiability](https://codeforces.com/problemset/problem/1089/H) | CF | Hard | Advanced | DFS |
| 4 |  | [Hackerman](https://www.codechef.com/LTIME95A/problems/HKRMAN) | CC | Easy | Advanced | DSU, Sliding Window, Greedy |
| 5 |  | [Illumination](https://open.kattis.com/problems/illumination) | Kattis | Easy | Advanced | - |
| 6 |  | [The Door Problem](https://codeforces.com/contest/776/problem/D) | CF | Easy | Advanced | DSU, DFS |
| 7 |  | [Unusual Matrix](https://codeforces.com/contest/1475/problem/F) | CF | Easy | Advanced | - |

---

## FFT

**5 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Convolution Mod](https://judge.yosupo.jp/problem/convolution_mod) | YS | Easy | Advanced | - |
| 2 |  | [Convolution Mod 10^9+7](https://judge.yosupo.jp/problem/convolution_mod_1000000007) | YS | Normal | Advanced | - |
| 3 |  | [Frequency Table of Tree Distance](https://judge.yosupo.jp/problem/frequency_table_of_tree_distance) | YS | Hard | Advanced | Centroid |
| 4 |  | [Big Integer](https://dmoj.ca/problem/bts17p8) | Back to School | Very Hard | Advanced | Centroid |
| 5 |  | [Kevin & Grid](https://codeforces.com/contest/1392/problem/I) | CF | Very Hard | Advanced | Euler's Formula |

---

## Generating Functions

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Tree Depth](http://www.usaco.org/index.php?page=viewproblem2&cpid=974) | Platinum | Hard | Advanced | - |

---

## LCT

**17 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Dynamic Connectivity](https://www.spoj.com/problems/DYNACON1) | SPOJ | Very Easy | Advanced | - |
| 2 |  | [Vertex Add Path Composite](https://judge.yosupo.jp/problem/dynamic_tree_vertex_set_path_composite) | YS | Easy | Advanced | - |
| 3 |  | [Vertex Add Path Sum](https://judge.yosupo.jp/problem/dynamic_tree_vertex_add_path_sum) | YS | Easy | Advanced | - |
| 4 |  | [2011 - Treasure Hunt](https://qoj.ac/contest/2444/problem/14955) | CEOI | Normal | Advanced | - |
| 5 |  | [Balanced Tokens](https://www.hackerrank.com/contests/pwshpc-online-round/challenges/pwsh-tokens/problem) | HR | Normal | Advanced | - |
| 6 |  | [Dynamic LCA](https://www.spoj.com/problems/DYNALCA) | SPOJ | Normal | Advanced | - |
| 7 |  | [Pastoral Oddities](https://codeforces.com/contest/603/problem/E) | CF | Normal | Advanced | - |
| 8 |  | [Squirrel Cities](https://dmoj.ca/problem/wac4p7) | Wesley's Anger Contest | Normal | Advanced | - |
| 9 |  | [Vertex Add Subtree Sum](https://judge.yosupo.jp/problem/dynamic_tree_vertex_add_subtree_sum) | YS | Normal | Advanced | - |
| 10 |  | [2020 - Joker](https://codeforces.com/contest/1386/problem/C) | Baltic OI | Hard | Advanced | - |
| 11 |  | [CERC 17 D](https://codeforces.com/gym/101620) | CF | Hard | Advanced | - |
| 12 |  | [Dynamic Tree Test (Easy)](https://dmoj.ca/problem/ds5easy) | DMOJ | Hard | Advanced | - |
| 13 |  | [Subtree Add Subtree Sum](https://judge.yosupo.jp/problem/dynamic_tree_subtree_add_subtree_sum) | YS | Hard | Advanced | - |
| 14 |  | [Train Tracking](https://codeforces.com/contest/1344/problem/E) | CF | Hard | Advanced | - |
| 15 |  | [Tree or not Tree](https://codeforces.com/contest/117/problem/E) | CF | Hard | Advanced | - |
| 16 |  | [Dynamic Tree Test](https://dmoj.ca/problem/ds5) | DMOJ | Very Hard | Advanced | - |
| 17 |  | [Old Driver Tree](https://codeforces.com/contest/1172/problem/E) | CF | Very Hard | Advanced | - |

---

## Treap

**9 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Dynamic Sequence Range Affine Range Sum](https://judge.yosupo.jp/problem/dynamic_sequence_range_affine_range_sum) | YS | Easy | Advanced | - |
| 2 |  | [Reversals and Sums](https://cses.fi/problemset/task/2074) | CSES | Easy | Advanced | - |
| 3 |  | [Substring Reversals](https://cses.fi/problemset/task/2073) | CSES | Easy | Advanced | - |
| 4 |  | [2011 - Tree Rotations 2](https://szkopul.edu.pl/problemset/problem/b0BM0al2crQBt6zovEtJfOc6/site/?key=statement) | POI | Normal | Advanced | - |
| 5 |  | [Airplane Boarding](http://www.usaco.org/index.php?page=viewproblem2&cpid=402) | Old Gold | Normal | Advanced | - |
| 6 |  | [Maintaining a Sequence](https://dmoj.ca/problem/noi05p2) | NOI | Normal | Advanced | - |
| 7 |  | [Points and Distances](https://www.hackerearth.com/problem/algorithm/septembereasy-points-and-distances-d30d0e6b) | HE | Normal | Advanced | - |
| 8 |  | [Strings](https://csacademy.com/contest/archive/task/strings/) | CSA | Normal | Advanced | - |
| 9 |  | [2013 - Game](https://oj.uz/problem/view/IOI13_game) | IOI | Hard | Platinum | 2DRQ, Sparse SegTree |

---

## Wavelet

**6 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [K-query](https://www.spoj.com/problems/KQUERY/) | SPOJ | Normal | Advanced | - |
| 2 |  | [Range K-th Smallest](https://judge.yosupo.jp/problem/range_kth_smallest) | YS | Normal | Advanced | - |
| 3 |  | [Rectangle Sum](https://judge.yosupo.jp/problem/rectangle_sum) | YS | Normal | Advanced | Persistent Segtree |
| 4 |  | [Smaller Sum](https://atcoder.jp/contests/abc339/tasks/abc339_g) | AC | Normal | Advanced | Persistent Segtree |
| 5 |  | [Easy Query](https://open.kattis.com/problems/easyquery) | Kattis | Very Hard | Advanced | - |
| 6 |  | [Ninjaclasher's Wrath 2](https://dmoj.ca/problem/globexcup19s4) | GlobeX Cup | Very Hard | Advanced | - |

---

## Persistent Segtree

**12 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Count on a tree](https://www.spoj.com/problems/COT/) | SPOJ | Easy | Advanced | - |
| 2 |  | [Closest Equals](https://codeforces.com/problemset/problem/522/D) | CF | Easy | Advanced | - |
| 3 |  | [2010 - Super Piano](https://dmoj.ca/problem/noi10p2) | NOI | Normal | Advanced | - |
| 4 |  | [2021 - Index](https://qoj.ac/problem/13424) | COCI | Normal | Advanced | - |
| 5 |  | [Gao on a tree](https://www.spoj.com/problems/GOT/) | SPOJ | Normal | Advanced | - |
| 6 |  | [K-th Number](https://www.spoj.com/problems/MKTHNUM/) | SPOJ | Normal | Advanced | - |
| 7 |  | [Query on a tree III](https://www.spoj.com/problems/PT07J/) | SPOJ | Normal | Advanced | - |
| 8 |  | [Rectangle Sum](https://judge.yosupo.jp/problem/rectangle_sum) | YS | Normal | Advanced | Wavelet |
| 9 |  | [Smaller Sum](https://atcoder.jp/contests/abc339/tasks/abc339_g) | AC | Normal | Advanced | Wavelet |
| 10 |  | [2020 - The Potion of Great Power](https://codeforces.com/contest/1403/problem/A) | CEOI | Hard | Advanced | Sqrt |
| 11 |  | [2017 - Land of the Rainbow Gold](https://dmoj.ca/problem/apio17p1) | APIO | Very Hard | Advanced | Euler's Formula, 2DRQ |
| 12 |  | [2020 - Specijacija](https://qoj.ac/problem/13409) | COCI | Very Hard | Advanced | - |

---

## DSUrb

**5 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Disconnected Graph](https://codeforces.com/gym/100551/problem/E) | CF | Normal | Advanced | - |
| 2 |  | [Inaho](https://dmoj.ca/problem/mmcc15p1) | MMCC | Easy | Advanced | - |
| 3 |  | [Persistent Union Find](https://judge.yosupo.jp/problem/persistent_unionfind) | YS | Easy | Advanced | - |
| 4 |  | [Envy](https://codeforces.com/contest/891/problem/C) | CF | Normal | Advanced | - |
| 5 |  | [Extending Set of Points](https://codeforces.com/contest/1140/problem/F) | CF | Normal | Advanced | - |

---

## Dynacon

**4 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Connect and Disconnect](https://codeforces.com/gym/100551/problem/A) | CF | Easy | Advanced | - |
| 2 |  | [Vertex Add Component Sum](https://judge.yosupo.jp/problem/dynamic_graph_vertex_add_component_sum) | YS | Normal | Advanced | - |
| 3 |  | [A Museum Robbery](https://codeforces.com/contest/601/problem/E) | CF | Hard | Advanced | - |
| 4 |  | [Forced Online Queries Problem](https://codeforces.com/contest/1217/problem/F) | CF | Hard | Advanced | - |

---

## Mo's Algorithm

**4 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2019 - Examination](https://oj.uz/problem/view/JOI19_examination) | JOI | Normal | Platinum | 2DRQ |
| 2 |  | [COT2 - Count on a tree II](https://www.spoj.com/problems/COT2/) | SPOJ | Normal | Platinum | Sqrt, Trees |
| 3 |  | [Powerful array](https://codeforces.com/contest/86/problem/D) | CF | Normal | Platinum | - |
| 4 |  | [D-query](https://www.spoj.com/problems/DQUERY/) | SPOJ | Hard | Platinum | Sqrt |

---

## Sqrt

**21 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2018 - Bitaro's Birthday](https://oj.uz/problem/view/JOI18_bitaro) | JOI | Normal | Platinum | DP |
| 2 |  | [2017 - Containers](https://szkopul.edu.pl/problemset/problem/oNnWY6ZuzzhvG-jCmijiXkIk/site/?key=statement) | POI | Easy | Platinum | - |
| 3 |  | [Ann and Books](https://codeforces.com/contest/877/problem/F) | CF | Easy | Platinum | - |
| 4 |  | [Holes](https://codeforces.com/problemset/problem/13/E) | CF | Easy | Platinum | - |
| 5 |  | [Points on Plane](https://codeforces.com/contest/576/problem/C) | CF | Easy | Platinum | - |
| 6 |  | [COT2 - Count on a tree II](https://www.spoj.com/problems/COT2/) | SPOJ | Normal | Platinum | Mo's Algorithm, Trees |
| 7 |  | [Hop Sugoroku](https://atcoder.jp/contests/abc335/tasks/abc335_f) | AC | Normal | Platinum | - |
| 8 |  | [Julia and Snail](https://codeforces.com/problemset/problem/793/F) | CF | Normal | Platinum | DP, Segment Tree |
| 9 |  | [Minimizing Haybales](http://www.usaco.org/index.php?page=viewproblem2&cpid=1188) | Platinum | Normal | Platinum | - |
| 10 |  | [Static Range Inversions Query](https://judge.yosupo.jp/problem/static_range_inversions_query) | YS | Normal | Platinum | - |
| 11 |  | [Loan Repayment](http://www.usaco.org/index.php?page=viewproblem2&cpid=991) | Silver | Hard | Silver | Binary Search |
| 12 |  | [2019 - Bridges](https://oj.uz/problem/view/APIO19_bridges) | APIO | Hard | Platinum | - |
| 13 |  | [D-query](https://www.spoj.com/problems/DQUERY/) | SPOJ | Hard | Platinum | Mo's Algorithm |
| 14 |  | [Shopping Time](https://csacademy.com/contest/archive/task/shopping-time) | CSA | Hard | Platinum | - |
| 15 |  | [Tree and Queries](https://codeforces.com/problemset/problem/375/D) | CF | Hard | Platinum | Tree, Euler Tour |
| 16 |  | [2020 - The Potion of Great Power](https://codeforces.com/contest/1403/problem/A) | CEOI | Hard | Advanced | Persistent Segtree |
| 17 |  | [Cowdependence](https://usaco.org/index.php?page=viewproblem2&cpid=1449) | Gold | Very Hard | Silver | Binary Search, Prefix Sums, Two Pointers |
| 18 |  | [2011 - Dancing Elephants](https://oj.uz/problem/view/IOI11_elephants) | IOI | Very Hard | Platinum | - |
| 19 |  | [Arithmetic Subtrees](https://dmoj.ca/problem/wac1p7) | Wesley's Anger Contest | Very Hard | Platinum | - |
| 20 |  | [Fluid Dynamics](https://dmoj.ca/problem/dmopc19c7p7) | DMOPC | Very Hard | Platinum | - |
| 21 |  | [Train Tracking](http://www.usaco.org/index.php?page=viewproblem2&cpid=841) | Platinum | Very Hard | Platinum | - |

---

## Bitset

**13 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Balancing Network (T=1)](https://atcoder.jp/contests/agc041/tasks/agc041_e) | AC | Easy | Platinum | - |
| 2 |  | [Reachable Nodes](https://cses.fi/problemset/task/2138) | CSES | Easy | Platinum | TopoSort |
| 3 |  | [School Excursion](https://cses.fi/problemset/task/1706) | CSES | Easy | Platinum | Knapsack |
| 4 |  | [Triangle](https://atcoder.jp/contests/abc258/tasks/abc258_g) | AC | Easy | Platinum | - |
| 5 |  | [Tzaph & Number Line](https://tlx.toki.id/contests/troc-15-div-1/problems/E) | TOKI | Easy | Platinum | - |
| 6 |  | [Cowpatibility](http://www.usaco.org/index.php?page=viewproblem2&cpid=862) | Gold | Normal | Gold | PIE |
| 7 |  | [2010 - Candies](https://qoj.ac/problem/16695) | Baltic OI | Normal | Platinum | Knapsack |
| 8 |  | [2015 - Uzastopni](https://oj.uz/problem/view/COCI15_uzastopni) | COCI | Normal | Platinum | - |
| 9 |  | [2019 - Nautilus](https://oj.uz/problem/view/BOI19_nautilus) | Baltic OI | Normal | Platinum | - |
| 10 |  | [Lots of Triangles](http://www.usaco.org/index.php?page=viewproblem2&cpid=672) | Platinum | Normal | Platinum | Geometry |
| 11 |  | [2015 - Tug of War](https://oj.uz/problem/view/BOI15_tug) | Baltic OI | Hard | Platinum | Knapsack |
| 12 |  | [2017 - Bootfall](https://oj.uz/problem/view/IZhO17_bootfall) | IZhO | Hard | Platinum | Knapsack |
| 13 |  | [Equilateral Triangles](http://www.usaco.org/index.php?page=viewproblem2&cpid=1021) | Platinum | Hard | Platinum | Sliding Window |

---

## Random

**5 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Ghd](https://codeforces.com/contest/364/problem/D) | CF | Normal | Advanced | - |
| 2 | ⭐ | [Count on a Tree II Striking Back](https://qoj.ac/contest/503/problem/1267) | QOJ | Hard | Advanced | - |
| 3 |  | [Fall in Line](https://www.facebook.com/codingcompetitions/hacker-cup/2024/practice-round/problems/C) | MHC | Easy | Advanced | - |
| 4 |  | [DZY Loves FFT](https://codeforces.com/problemset/problem/444/B) | CF | Normal | Advanced | - |
| 5 |  | [Gena and Second Distance](https://codeforces.com/contest/442/problem/E) | CF | Normal | Advanced | - |

---

## Interactive

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Ehab and another another xor problem](https://codeforces.com/contest/1088/problem/D) | CF | Hard | Silver | Math |

---

## Constructive

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Cereal 2](http://www.usaco.org/index.php?page=viewproblem2&cpid=1184) | Silver | Very Hard | Silver | Spanning Tree, Cycles |

---

## Median

**3 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Stick Lengths](https://cses.fi/problemset/task/1074) | CSES | Easy | Silver | - |
| 2 |  | [2015 - Palembang Bridges](https://oj.uz/problem/view/APIO15_bridge) | APIO | Normal | Gold | Sliding Window |
| 3 |  | [2020 - Graph](https://codeforces.com/contest/1387/problem/A) | Baltic OI | Hard | Silver | DFS |

---

## Inversions

**6 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Haircut](http://www.usaco.org/index.php?page=viewproblem2&cpid=1041) | Gold | Easy | Gold | PURS |
| 2 |  | [Balanced Photo](http://www.usaco.org/index.php?page=viewproblem2&cpid=693) | Gold | Easy | Gold | PURS |
| 3 |  | [Circle Cross](http://www.usaco.org/index.php?page=viewproblem2&cpid=719) | Gold | Easy | Gold | PURS |
| 4 |  | [Mega Inversions](https://open.kattis.com/problems/megainversions) | Kattis | Easy | Gold | PURS |
| 5 |  | [Mincross](http://www.usaco.org/index.php?page=viewproblem2&cpid=720) | Platinum | Easy | Gold | PURS |
| 6 |  | [Pyramid Array](https://cses.fi/problemset/task/1747) | CSES | Hard | Gold | PURS |

---

## Coordinate Compression

**3 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Covered Points Count](https://codeforces.com/problemset/problem/1000/C) | CF | Normal | Silver | Sorting, Prefix Sums |
| 2 |  | [Not Escaping](https://codeforces.com/contest/1627/problem/E) | CF | Normal | Gold | SP, Binary Search, DP |
| 3 |  | [2005 - Mountain](https://dmoj.ca/problem/ioi05p2) | IOI | Normal | Platinum | Lazy SegTree |

---

## Coloring

**2 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Grass Planting](http://www.usaco.org/index.php?page=viewproblem2&cpid=894) | Silver | Easy | Silver | Tree |
| 2 |  | [The Great Revegetation](http://www.usaco.org/index.php?page=viewproblem2&cpid=916) | Bronze | Hard | Bronze | - |

---

## Permutation

**6 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Livestock Lineup](http://www.usaco.org/index.php?page=viewproblem2&cpid=965) | Bronze | Normal | Bronze | Complete Search, Recursion |
| 2 |  | [Creating Strings I](https://cses.fi/problemset/task/1622) | CSES | Easy | Bronze | Complete Search, Recursion |
| 3 |  | [Beautiful Permutation II](https://cses.fi/problemset/task/3175) | CSES | Normal | Bronze | Complete Search |
| 4 |  | [Chessboard & Queens](https://cses.fi/problemset/task/1624) | CSES | Normal | Bronze | Complete Search, Recursion |
| 5 |  | [Twenty-four](https://dmoj.ca/problem/ccc08s4) | CCC | Normal | Bronze | Complete Search |
| 6 |  | [Swapity Swap](http://www.usaco.org/index.php?page=viewproblem2&cpid=1013) | Bronze | Hard | Bronze | Cycle |

---

## Graph

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2014 - Cop and Robber](https://oj.uz/problem/view/BOI14_coprobber) | Baltic OI | Normal | Advanced | Game |

---

## Euler Tour

**21 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Distinct Colors](https://cses.fi/problemset/task/1139) | CSES | Easy | Gold | PURS |
| 2 |  | [Subtree Queries](https://cses.fi/problemset/task/1137) | CSES | Easy | Gold | - |
| 3 |  | [2014 - Postmen](https://oj.uz/problem/view/BOI14_postmen) | Baltic OI | Easy | Advanced | - |
| 4 |  | [Mail Delivery (Undirected)](https://cses.fi/problemset/task/1691) | CSES | Easy | Advanced | - |
| 5 |  | [Teleporters (Directed)](https://cses.fi/problemset/task/1693) | CSES | Easy | Advanced | - |
| 6 |  | [Count Descendants](https://atcoder.jp/contests/abc202/tasks/abc202_e) | AC | Normal | Gold | Binary Search |
| 7 |  | [Cow Land](http://www.usaco.org/index.php?page=viewproblem2&cpid=921) | Gold | Normal | Gold | PURS, HLD |
| 8 |  | [Exactly K Steps](https://atcoder.jp/contests/abc267/tasks/abc267_f) | AC | Normal | Gold | - |
| 9 |  | [Milk Visits](http://www.usaco.org/index.php?page=viewproblem2&cpid=970) | Gold | Normal | Gold | LCA |
| 10 |  | [Path Queries](https://cses.fi/problemset/task/1138) | CSES | Normal | Gold | PURS |
| 11 |  | [Promotion Counting](http://www.usaco.org/index.php?page=viewproblem2&cpid=696) | Platinum | Normal | Gold | PURS |
| 12 |  | [The Shortest Statement](https://codeforces.com/contest/1051/problem/F) | CF | Normal | Gold | - |
| 13 |  | [Diverging Directions](https://codeforces.com/contest/838/problem/B) | CF | Normal | Platinum | RURQ |
| 14 |  | [Running Away From the Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=213) | Old Gold | Normal | Platinum | Small to Large, Binary Jumping |
| 15 |  | [2016 - Acrobat](https://vjudge.net/problem/Baekjoon-13973) | Balkan OI | Normal | Advanced | - |
| 16 |  | [Data Center Drama](https://codeforces.com/contest/528/problem/C) | CF | Normal | Advanced | - |
| 17 |  | [Johnny and Megan's Necklace](https://codeforces.com/contest/1361/problem/C) | CF | Normal | Advanced | - |
| 18 |  | [2009 - Regions](https://oj.uz/problem/view/IOI09_regions) | IOI | Hard | Gold | Binary Search |
| 19 |  | [Bessie's Snow Cow](http://www.usaco.org/index.php?page=viewproblem2&cpid=973) | Platinum | Hard | Gold | PURS, Lazy SegTree |
| 20 |  | [Tree and Queries](https://codeforces.com/problemset/problem/375/D) | CF | Hard | Platinum | Sqrt, Tree |
| 21 |  | [Victor Takes Over Canada](https://dmoj.ca/problem/dmopc20c1p5) | DMOPC | Very Hard | Gold | PURS |

---

## Euler's Formula

**5 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2017 - Land of the Rainbow Gold](https://dmoj.ca/problem/apio17p1) | APIO | Very Hard | Advanced | Persistent Segtree, 2DRQ |
| 2 |  | [Island Archipelago](https://open.kattis.com/problems/islandarchipelago) | Kattis | Very Hard | Advanced | DSU |
| 3 |  | [Kevin & Grid](https://codeforces.com/contest/1392/problem/I) | CF | Very Hard | Advanced | FFT |
| 4 |  | [Paint by Letters](http://www.usaco.org/index.php?page=viewproblem2&cpid=1094) | Platinum | Very Hard | Advanced | - |
| 5 |  | [Rectangles & Connected Regions](https://codeforces.com/gym/100453) | CF | Very Hard | Advanced | - |

---

## XOR Convolution

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [The Struggle](https://codeforces.com/gym/103329/problem/F) | CF | Very Hard | Advanced | - |

---

## Cactus

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2016 - Hydrocontest](https://szkopul.edu.pl/problemset/problem/y9HM1ctDU8V8xLMRUYACDIRs/site/) | POI | Very Hard | Advanced | Game |

---

## Uncategorized

**207 problems** (19 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [ETF - Euler Totient Function](https://www.spoj.com/problems/ETF/) | SPOJ | Easy | Gold | - |
| 2 | ⭐ | [Permutations II](https://cses.fi/problemset/task/1075) | CSES | Easy | Advanced | - |
| 3 | ⭐ | [Task Assignment](https://cses.fi/problemset/task/2129) | CSES | Easy | Advanced | - |
| 4 | ⭐ | [Trucks and Cities](https://codeforces.com/contest/1101/problem/F) | CF | Easy | Advanced | - |
| 5 | ⭐ | [2010 - PCB](https://qoj.ac/contest/3027/problem/16693) | Baltic OI | Normal | Gold | - |
| 6 | ⭐ | [2016 - Messy Bug](https://oj.uz/problem/view/IOI16_messy) | IOI | Normal | Advanced | - |
| 7 | ⭐ | [2016 - Skyscraper](https://oj.uz/problem/view/JOI16_skyscraper) | JOI | Normal | Advanced | - |
| 8 | ⭐ | [2019 - Tennis](http://81.4.170.42:8980/problems/training/Tennis) | Balkan OI | Normal | Advanced | - |
| 9 | ⭐ | [Finding Periods](https://cses.fi/problemset/task/1733) | CSES | Normal | Advanced | - |
| 10 | ⭐ | [Teleporters](https://codeforces.com/problemset/problem/1661/F) | CF | Normal | Advanced | - |
| 11 | ⭐ | [GCDEX - GCD Extreme](https://www.spoj.com/problems/GCDEX/) | SPOJ | Hard | Gold | - |
| 12 | ⭐ | [Critical Cities](https://cses.fi/problemset/task/1703/) | CSES | Hard | Advanced | - |
| 13 | ⭐ | [Finding Patterns](https://cses.fi/problemset/task/2102/) | CSES | Hard | Advanced | - |
| 14 | ⭐ | [Ski Resort](https://open.kattis.com/problems/skiresort) | Kattis | Hard | Advanced | - |
| 15 | ⭐ | [The Meeting Place Cannot Be Changed 2](https://codeforces.com/problemset/problem/982/F) | CF | Hard | Advanced | - |
| 16 | ⭐ | [Useful Roads](https://codeforces.com/gym/100513/problem/L) | CF | Hard | Advanced | - |
| 17 | ⭐ | [2015 - Towns](https://oj.uz/problem/view/IOI15_towns) | IOI | Very Hard | Advanced | - |
| 18 | ⭐ | [2017 - Simurgh](https://oj.uz/problem/view/IOI17_simurgh) | IOI | Very Hard | Advanced | - |
| 19 | ⭐ | [2018 - Highway](https://oj.uz/problem/view/IOI18_highway) | IOI | Very Hard | Advanced | - |
| 20 |  | [Static Range Sum](https://judge.yosupo.jp/problem/static_range_sum) | YS | Very Easy | Silver | - |
| 21 |  | [Finding a Centroid](https://cses.fi/problemset/task/2079) | CSES | Very Easy | Platinum | - |
| 22 |  | [Static Range Minimum Queries](https://cses.fi/problemset/task/1647) | CSES | Very Easy | Platinum | - |
| 23 |  | [Matching](https://codeforces.com/gym/104417/problem/G) | CF | Easy | Bronze | - |
| 24 |  | [Maximum Distance](https://codeforces.com/gym/102951/problem/A) | CF | Easy | Bronze | - |
| 25 |  | [Promotion Counting](http://www.usaco.org/index.php?page=viewproblem2&cpid=591) | Bronze | Easy | Bronze | - |
| 26 |  | [Binomial Coefficients](https://cses.fi/problemset/task/1079) | CSES | Easy | Gold | - |
| 27 |  | [Candy Lottery](https://cses.fi/problemset/task/1727) | CSES | Easy | Gold | - |
| 28 |  | [Counting Divisors](https://cses.fi/problemset/task/1713) | CSES | Easy | Gold | - |
| 29 |  | [Course Schedule](https://cses.fi/problemset/task/1679) | CSES | Easy | Gold | - |
| 30 |  | [Increasing Subsequence](https://cses.fi/problemset/task/1145) | CSES | Easy | Gold | - |
| 31 |  | [Longest Flight Route](https://cses.fi/problemset/task/1680) | CSES | Easy | Gold | - |
| 32 |  | [MARBLES - Marbles](https://www.spoj.com/problems/MARBLES/) | SPOJ | Easy | Gold | - |
| 33 |  | [Montmort Numbers](https://judge.yosupo.jp/problem/montmort_number_mod) | YS | Easy | Gold | - |
| 34 |  | [Static RMQ](https://judge.yosupo.jp/problem/staticrmq) | YS | Easy | Gold | - |
| 35 |  | [2014 - Secret](https://oj.uz/problem/view/JOI14_secret) | JOI | Easy | Platinum | - |
| 36 |  | [Marathon](http://www.usaco.org/index.php?page=viewproblem2&cpid=495) | Old Gold | Easy | Platinum | - |
| 37 |  | [Max Points on a Line](https://leetcode.com/problems/max-points-on-a-line/description/) | LC | Easy | Platinum | - |
| 38 |  | [Path Queries II](https://cses.fi/problemset/task/2134) | CSES | Easy | Platinum | - |
| 39 |  | [Pizzeria Queries](https://cses.fi/problemset/task/2206) | CSES | Easy | Platinum | - |
| 40 |  | [Point in Polygon](https://open.kattis.com/problems/pointinpolygon) | Kattis | Easy | Platinum | - |
| 41 |  | [Polygon Area](https://open.kattis.com/problems/polygonarea) | Kattis | Easy | Platinum | - |
| 42 |  | [Product on Segment](https://www.codechef.com/problems/SEGPROD) | CC | Easy | Platinum | - |
| 43 |  | [Segment Distance](https://open.kattis.com/problems/segmentdistance) | Kattis | Easy | Platinum | - |
| 44 |  | [Segment Intersection](https://open.kattis.com/problems/segmentintersection) | Kattis | Easy | Platinum | - |
| 45 |  | [Sort Points by Argument](https://judge.yosupo.jp/problem/sort_points_by_argument) | YS | Easy | Platinum | - |
| 46 |  | [(Negative) Cycle Finding](https://cses.fi/problemset/task/1197) | CSES | Easy | Advanced | - |
| 47 |  | [2011 - Parrots](https://oj.uz/problem/view/IOI11_parrots) | IOI | Easy | Advanced | - |
| 48 |  | [2011 - cmp](https://oj.uz/problem/view/balkan11_cmp) | Balkan OI | Easy | Advanced | - |
| 49 |  | [2013 - Cave](https://oj.uz/problem/view/IOI13_cave) | IOI | Easy | Advanced | - |
| 50 |  | [2014 - Palindrome](https://oj.uz/problem/view/APIO14_palindrome) | APIO | Easy | Advanced | - |
| 51 |  | [2017 - Coins](https://oj.uz/problem/view/IOI17_coins) | IOI | Easy | Advanced | - |
| 52 |  | [2017 - Easter Eggs](https://oj.uz/problem/view/info1cup17_eastereggs) | InfO(1) Cup | Easy | Advanced | - |
| 53 |  | [2017 - Museum](https://oj.uz/problem/view/CEOI17_museum) | CEOI | Easy | Advanced | - |
| 54 |  | [2018 - Combo](https://oj.uz/problem/view/IOI18_combo) | IOI | Easy | Advanced | - |
| 55 |  | [2018 - Polynomial](https://szkopul.edu.pl/problemset/problem/9JvSAnyf5d1FlPAEXEdUAtCz/site/) | POI | Easy | Advanced | - |
| 56 |  | [2019 - Feast](https://oj.uz/problem/view/NOI19_feast) | NOI.sg | Easy | Advanced | - |
| 57 |  | [2019 - Transfer](https://oj.uz/problem/view/IOI19_transfer) | IOI | Easy | Advanced | - |
| 58 |  | [APSP (with negative weights)](https://open.kattis.com/problems/allpairspath) | Kattis | Easy | Advanced | - |
| 59 |  | [Bipartite Matching](https://judge.yosupo.jp/problem/bipartitematching) | YS | Easy | Advanced | - |
| 60 |  | [Coin Grid](https://cses.fi/problemset/task/1709) | CSES | Easy | Advanced | - |
| 61 |  | [Cordon Bleu](https://open.kattis.com/problems/cordonbleu) | Kattis | Easy | Advanced | - |
| 62 |  | [Cut and Paste](https://cses.fi/problemset/task/2072) | CSES | Easy | Advanced | - |
| 63 |  | [Enumerate Quotients](https://judge.yosupo.jp/problem/enumerate_quotients) | YS | Easy | Advanced | - |
| 64 |  | [Fast Flow](https://www.spoj.com/problems/FASTFLOW) | SPOJ | Easy | Advanced | - |
| 65 |  | [I Love Strings!!](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=18&page=show_problem&problem=1620) | onlinejudge.org | Easy | Advanced | - |
| 66 |  | [K-Inversions](https://open.kattis.com/problems/kinversions) | Kattis | Easy | Advanced | - |
| 67 |  | [Mike & Friends](https://codeforces.com/contest/547/problem/E) | CF | Easy | Advanced | - |
| 68 |  | [Monocarp and the Set](https://codeforces.com/contest/1886/problem/D) | CF | Easy | Advanced | - |
| 69 |  | [Police Chase](https://cses.fi/problemset/task/1695) | CSES | Easy | Advanced | - |
| 70 |  | [Range Queries and Copies](https://cses.fi/problemset/task/1737) | CSES | Easy | Advanced | - |
| 71 |  | [SSSP Negative](https://open.kattis.com/problems/shortestpath3) | Kattis | Easy | Advanced | - |
| 72 |  | [String Multimatching](https://open.kattis.com/problems/stringmultimatching) | Kattis | Easy | Advanced | - |
| 73 |  | [Tall Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=697) | Platinum | Easy | Advanced | - |
| 74 |  | [Tanya and Password](https://codeforces.com/problemset/problem/508/D) | CF | Easy | Advanced | - |
| 75 |  | [Vasya and Endless Credits](https://codeforces.com/contest/1107/problem/F) | CF | Easy | Advanced | - |
| 76 |  | [It's All About the Base](http://www.usaco.org/index.php?page=viewproblem2&cpid=509) | Old Bronze | Normal | Bronze | - |
| 77 |  | [Sleepy Cow Herding](https://usaco.org/index.php?page=viewproblem2&cpid=915) | Bronze | Normal | Bronze | - |
| 78 |  | [Erasing Vertices](https://atcoder.jp/contests/agc049/tasks/agc049_a) | AC | Normal | Gold | - |
| 79 |  | [2012 - Monkey and Apple-trees](https://oj.uz/problem/view/IZhO12_apple) | IZhO | Normal | Platinum | - |
| 80 |  | [2014 - Cards](https://szkopul.edu.pl/problemset/problem/qpsk3ygf8MU7D_1Es0oc_xd8/site/?key=statement) | POI | Normal | Platinum | - |
| 81 |  | [2015 - Happiness](https://oj.uz/problem/view/Balkan15_HAPPINESS) | Balkan OI | Normal | Platinum | - |
| 82 |  | [2017 - Railway](https://oj.uz/problem/view/BOI17_railway) | Baltic OI | Normal | Platinum | - |
| 83 |  | [2017 - Toll](https://oj.uz/problem/view/BOI17_toll) | Baltic OI | Normal | Platinum | - |
| 84 |  | [2019 - Valley](https://oj.uz/problem/view/BOI19_valley) | Baltic OI | Normal | Platinum | - |
| 85 |  | [Continued Fractions](https://dmoj.ca/problem/dmopc19c7p4) | DMOPC | Normal | Platinum | - |
| 86 |  | [Lynyrd Skynyrd](https://codeforces.com/contest/1142/problem/B) | CF | Normal | Platinum | - |
| 87 |  | [Optimal Milking](http://www.usaco.org/index.php?page=viewproblem2&cpid=365) | Old Gold | Normal | Platinum | - |
| 88 |  | [Seating](http://www.usaco.org/index.php?page=viewproblem2&cpid=231) | Old Gold | Normal | Platinum | - |
| 89 |  | [Serge and Dining Room](https://codeforces.com/contest/1179/problem/C) | CF | Normal | Platinum | - |
| 90 |  | [The Troublesome Frog](https://ioi.contest.codeforces.com/group/32KGsXgiKA/contest/103699/problem/A) | IOI | Normal | Platinum | - |
| 91 |  | [(Zero XOR Subset)-less](https://codeforces.com/contest/1101/problem/G) | CF | Normal | Advanced | - |
| 92 |  | [2005 - Rivers](http://dmoj.ca/problem/ioi05p6) | IOI | Normal | Advanced | - |
| 93 |  | [2010 - Saveit!](https://oj.uz/problem/view/IOI10_saveit) | IOI | Normal | Advanced | - |
| 94 |  | [2012 - Last Supper](https://oj.uz/problem/view/IOI12_supper) | IOI | Normal | Advanced | - |
| 95 |  | [2014 - Question](https://oj.uz/problem/view/CEOI14_question_grader) | CEOI | Normal | Advanced | - |
| 96 |  | [2015 - Navigation](https://dunjudge.me/analysis/problems/762/) | JOI | Normal | Advanced | - |
| 97 |  | [2016 - Gap](https://oj.uz/problem/view/APIO16_gap) | APIO | Normal | Advanced | - |
| 98 |  | [2016 - Kangaroo](https://qoj.ac/contest/1107/problem/5532) | CEOI | Normal | Advanced | - |
| 99 |  | [2017 - The Big Prize](https://oj.uz/problem/view/IOI17_prize) | IOI | Normal | Advanced | - |
| 100 |  | [2018 - Airline](https://oj.uz/problem/view/JOI18_airline) | JOI | Normal | Advanced | - |
| 101 |  | [2019 - Dzumbus](https://oj.uz/problem/view/COCI19_dzumbus) | COCI | Normal | Advanced | - |
| 102 |  | [2019 - Olympiads](https://qoj.ac/contest/2090/problem/11449) | Baltic OI | Normal | Advanced | - |
| 103 |  | [2022 - Magic Cards](https://qoj.ac/contest/1336/problem/6206) | IOI | Normal | Advanced | - |
| 104 |  | [April Fools' Problem (medium)](https://codeforces.com/contest/802/problem/N) | CF | Normal | Advanced | - |
| 105 |  | [Blazing New Trails](https://open.kattis.com/problems/blazingnewtrails) | Kattis | Normal | Advanced | - |
| 106 |  | [Breaking Strings](https://www.spoj.com/problems/BRKSTRNG/) | SPOJ | Normal | Advanced | - |
| 107 |  | [Bricks](https://codeforces.com/contest/1404/problem/E) | CF | Normal | Advanced | - |
| 108 |  | [Captain America](https://codeforces.com/contest/704/problem/D) | CF | Normal | Advanced | - |
| 109 |  | [Card Game](https://codeforces.com/problemset/problem/808/F) | CF | Normal | Advanced | - |
| 110 |  | [Counting Primes](https://judge.yosupo.jp/problem/counting_primes) | YS | Normal | Advanced | - |
| 111 |  | [Dirichlet Convolution and Prefix Sums](https://judge.yosupo.jp/problem/dirichlet_convolution_and_prefix_sums) | YS | Normal | Advanced | - |
| 112 |  | [Dirichlet Inverse and Prefix Sums](https://judge.yosupo.jp/problem/dirichlet_inverse_and_prefix_sums) | YS | Normal | Advanced | - |
| 113 |  | [Div 1 D - Miss Punyverse](https://codeforces.com/contest/1280/problem/D) | CF | Normal | Advanced | - |
| 114 |  | [Diverse Singing](https://codeforces.com/gym/102156/problem/C) | CF | Normal | Advanced | - |
| 115 |  | [Fashion](https://csacademy.com/contest/archive/task/fashion) | CSA | Normal | Advanced | - |
| 116 |  | [Finding Borders](https://cses.fi/problemset/task/1732/) | CSES | Normal | Advanced | - |
| 117 |  | [Function](https://vjudge.net/problem/HDU-5608) | HDU | Normal | Advanced | - |
| 118 |  | [Gain Battle Power](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4701) | onlinejudge.org | Normal | Advanced | - |
| 119 |  | [Giant Pizza](https://cses.fi/problemset/task/1684) | CSES | Normal | Advanced | - |
| 120 |  | [Hungry Squirrels](https://dmoj.ca/problem/wac4p6) | Wesley's Anger Contest | Normal | Advanced | - |
| 121 |  | [Incorrect Flow](https://codeforces.com/contest/708/problem/D) | CF | Normal | Advanced | - |
| 122 |  | [Ivan and Burgers](https://codeforces.com/contest/1100/problem/F) | CF | Normal | Advanced | - |
| 123 |  | [Karen & Supermarket](https://codeforces.com/contest/815/problem/C) | CF | Normal | Advanced | - |
| 124 |  | [Line Add Get Min](https://judge.yosupo.jp/problem/line_add_get_min) | YS | Normal | Advanced | - |
| 125 |  | [MCO - Magical Teleporter](https://codeforces.com/group/R2SERIff4f/contest/213171/problem/R) | CF | Normal | Advanced | - |
| 126 |  | [Marshland Rescues](https://open.kattis.com/problems/marshlandrescues) | Kattis | Normal | Advanced | - |
| 127 |  | [Matching Substrings](https://csacademy.com/contest/archive/task/matching-substrings) | CSA | Normal | Advanced | - |
| 128 |  | [Matchings](https://open.kattis.com/problems/matchings) | Kattis | Normal | Advanced | - |
| 129 |  | [Maximum Xor Subarray](https://cses.fi/problemset/task/1655) | CSES | Normal | Advanced | - |
| 130 |  | [Minimal Rotation](https://cses.fi/problemset/task/1110/) | CSES | Normal | Advanced | - |
| 131 |  | [Multi-Path Story](https://atcoder.jp/contests/jag2013summer-day4/tasks/icpc2013summer_day4_i) | AC | Normal | Advanced | - |
| 132 |  | [New Year & Handle Change](https://codeforces.com/contest/1279/problem/F) | CF | Normal | Advanced | - |
| 133 |  | [Phoenix and Computers](https://codeforces.com/contest/1515/problem/E) | CF | Normal | Advanced | - |
| 134 |  | [Restore Array](https://oj.uz/problem/view/RMI19_restore) | RMI | Normal | Advanced | - |
| 135 |  | [Robotic Cow Herd](http://www.usaco.org/index.php?page=viewproblem2&cpid=674) | Platinum | Normal | Advanced | - |
| 136 |  | [Segment Add Get Min](https://judge.yosupo.jp/problem/segment_add_get_min) | YS | Normal | Advanced | - |
| 137 |  | [Sum of Totient Function](https://judge.yosupo.jp/problem/sum_of_totient_function) | YS | Normal | Advanced | - |
| 138 |  | [The Tree Has Fallen!](https://codeforces.com/contest/1778/problem/E) | CF | Normal | Advanced | - |
| 139 |  | [Trees and XOR Queries Again](https://codeforces.com/contest/1902/problem/F) | CF | Normal | Advanced | - |
| 140 |  | [Turtle and Multiplication](https://codeforces.com/contest/1981/problem/D) | CF | Normal | Advanced | - |
| 141 |  | [Vacation](https://www.facebook.com/codingcompetitions/hacker-cup/2021/final-round/problems/D) | FHC | Normal | Advanced | - |
| 142 |  | [XOR Battle](https://atcoder.jp/contests/agc045/tasks/agc045_a) | AC | Normal | Advanced | - |
| 143 |  | [XOR Game](https://atcoder.jp/contests/arc122/tasks/arc122_d) | AC | Normal | Advanced | - |
| 144 |  | [Xor Closure](https://csacademy.com/contest/archive/task/xor-closure/statement/) | CSA | Normal | Advanced | - |
| 145 |  | [Xor Sum 3](https://atcoder.jp/contests/abc141/tasks/abc141_f) | AC | Normal | Advanced | - |
| 146 |  | [Xum](https://codeforces.com/problemset/problem/1427/E) | CF | Normal | Advanced | - |
| 147 |  | [Zookeepers' Gathering](https://codeforces.com/gym/102621/problem/L) | mBIT | Normal | Advanced | - |
| 148 |  | [Modern Art](http://www.usaco.org/index.php?page=viewproblem2&cpid=737) | Bronze | Hard | Bronze | - |
| 149 |  | [Sleepy Cow Sorting](http://www.usaco.org/index.php?page=viewproblem2&cpid=892) | Bronze | Hard | Bronze | - |
| 150 |  | [Taming the Herd](http://www.usaco.org/index.php?page=viewproblem2&cpid=809) | Bronze | Hard | Bronze | - |
| 151 |  | [Static Range Queries](https://codeforces.com/gym/102951/problem/D) | CF | Hard | Silver | - |
| 152 |  | [2004 - Cave](https://szkopul.edu.pl/problemset/problem/5Z9PRRPP-R90WhmbSY_qHd-1/site/) | POI | Hard | Platinum | - |
| 153 |  | [2017 - Dragon 2](https://qoj.ac/problem/371) | JOI | Hard | Platinum | - |
| 154 |  | [2018 - Election](https://oj.uz/problem/view/BOI18_election) | Balkan OI | Hard | Platinum | - |
| 155 |  | [Birthday Cake](https://open.kattis.com/problems/birthdaycake) | Kattis | Hard | Platinum | - |
| 156 |  | [Cut Length](https://codeforces.com/contest/598/problem/F) | CF | Hard | Platinum | - |
| 157 |  | [Destiny](https://codeforces.com/problemset/problem/840/D) | CF | Hard | Platinum | - |
| 158 |  | [JOI Spring Camp 2019 Day 4 - Cake 3](https://oj.uz/problem/view/JOI19_cake3) | JOI | Hard | Platinum | - |
| 159 |  | [Manhattan Multifocal Ellipse](https://atcoder.jp/contests/abc366/tasks/abc366_e) | AC | Hard | Platinum | - |
| 160 |  | [Max Collinear](https://open.kattis.com/problems/maxcolinear) | Kattis | Hard | Platinum | - |
| 161 |  | [Maximum Number of Darts Inside of a Circular Dartboard](https://leetcode.com/problems/maximum-number-of-darts-inside-of-a-circular-dartboard/description/) | LC | Hard | Platinum | - |
| 162 |  | [Rectangular Polyline](https://codeforces.com/contest/1444/problem/D) | CF | Hard | Platinum | - |
| 163 |  | [2006 - Connect](https://qoj.ac/contest/3174/problem/17237) | CEOI | Hard | Advanced | - |
| 164 |  | [2008 - Pyramid Base](https://oj.uz/problem/view/IOI08_pyramid_base) | IOI | Hard | Advanced | - |
| 165 |  | [2014 - Rail](https://oj.uz/problem/view/IOI14_rail) | IOI | Hard | Advanced | - |
| 166 |  | [2015 - Scales](https://oj.uz/problem/view/IOI15_scales) | IOI | Hard | Advanced | - |
| 167 |  | [2016 - Aliens](https://oj.uz/problem/view/IOI16_aliens) | IOI | Hard | Advanced | - |
| 168 |  | [2016 - ICC](https://qoj.ac/problem/5531) | CEOI | Hard | Advanced | - |
| 169 |  | [2019 - Two Transportations](https://oj.uz/problem/view/JOI19_transportations) | JOI | Hard | Advanced | - |
| 170 |  | [2020 - Stray Cat](https://oj.uz/problem/view/JOI20_stray) | JOI | Hard | Advanced | - |
| 171 |  | [A Simple Sieve](https://www.spoj.com/problems/ASSIEVE/) | SPOJ | Hard | Advanced | - |
| 172 |  | [ARC E - MUL](https://atcoder.jp/contests/arc085/tasks/arc085_c) | AC | Hard | Advanced | - |
| 173 |  | [Chiori and Doll Picking (Easy Version)](https://codeforces.com/contest/1336/problem/E1) | CF | Hard | Advanced | - |
| 174 |  | [Concatenation with Intersection](https://codeforces.com/contest/1313/problem/E) | CF | Hard | Advanced | - |
| 175 |  | [Contest with Drinks Hard](https://atcoder.jp/contests/arc066/tasks/arc066_d) | AC | Hard | Advanced | - |
| 176 |  | [Counting Divisors (cube)](https://www.spoj.com/problems/DIVCNT3/) | SPOJ | Hard | Advanced | - |
| 177 |  | [Counting Divisors (square)](http://www.spoj.com/problems/DIVCNT2/) | SPOJ | Hard | Advanced | - |
| 178 |  | [Counting Square-free Integers](https://judge.yosupo.jp/problem/counting_squarefrees) | YS | Hard | Advanced | - |
| 179 |  | [For the Emperor!](https://codeforces.com/contest/2046/problem/D) | CF | Hard | Advanced | - |
| 180 |  | [Gentrification](https://www.facebook.com/codingcompetitions/hacker-cup/2015/round-3/problems/C) | FHC | Hard | Advanced | - |
| 181 |  | [Goods Transportation](https://codeforces.com/problemset/problem/724/E) | CF | Hard | Advanced | - |
| 182 |  | [Ligatures](https://open.kattis.com/problems/ligatures) | Kattis | Hard | Advanced | - |
| 183 |  | [Mall & Transportation](https://tlx.toki.id/contests/troc-13-div-1/problems/D) | TLX | Hard | Advanced | - |
| 184 |  | [Optimal Binary Search Tree](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1245) | onlinejudge.org | Hard | Advanced | - |
| 185 |  | [Standing Out from the Herd](http://www.usaco.org/index.php?page=viewproblem2&cpid=768) | Platinum | Hard | Advanced | - |
| 186 |  | [Sum of Multiplicative Function (Large)](https://judge.yosupo.jp/problem/sum_of_multiplicative_function_large) | YS | Hard | Advanced | - |
| 187 |  | [The Wrath of Khan](https://open.kattis.com/problems/thewrathofkahn) | Kattis | Hard | Advanced | - |
| 188 |  | [Digit Queries](https://cses.fi/problemset/task/2431/) | CSES | Very Hard | Bronze | - |
| 189 |  | [2015 - Editor](https://oj.uz/problem/view/BOI15_edi) | Baltic OI | Very Hard | Platinum | - |
| 190 |  | [2014 - Kanji Shiritori](https://qoj.ac/problem/1407) | JOI | Very Hard | Advanced | - |
| 191 |  | [2017 - Koala Game](https://oj.uz/problem/view/APIO17_koala) | APIO | Very Hard | Advanced | - |
| 192 |  | [AB=C](https://atcoder.jp/contests/cf16-exhibition-final/tasks/cf16_exhibition_final_h) | AC | Very Hard | Advanced | - |
| 193 |  | [Alien Codebreaking](https://open.kattis.com/problems/aliencodebreaking) | Kattis | Very Hard | Advanced | - |
| 194 |  | [Around the World](https://codeforces.com/contest/1299/problem/D) | CF | Very Hard | Advanced | - |
| 195 |  | [Cow and Exercise](https://codeforces.com/contest/1307/problem/G) | CF | Very Hard | Advanced | - |
| 196 |  | [Easy Win](https://codeforces.com/gym/102331/problem/E) | CF | Very Hard | Advanced | - |
| 197 |  | [Good Subsegments](https://codeforces.com/contest/997/problem/E) | CF | Very Hard | Advanced | - |
| 198 |  | [Momoka](https://dmoj.ca/problem/mmcc15p3) | MMCC | Very Hard | Advanced | - |
| 199 |  | [One Billion Shades of Grey](https://codeforces.com/contest/1427/problem/G) | CF | Very Hard | Advanced | - |
| 200 |  | [Shopping Plans](https://dmoj.ca/problem/cco20p6) | CCO | Very Hard | Advanced | - |
| 201 |  | [Showing Off](https://codeforces.com/contest/1416/problem/F) | CF | Very Hard | Advanced | - |
| 202 |  | [Time Travelling Squirrels](https://dmoj.ca/problem/wac4p5) | Wesley's Anger Contest | Very Hard | Advanced | - |
| 203 |  | [K-th Shortest Walk](https://judge.yosupo.jp/problem/k_shortest_walk) | YS | Insane | Advanced | - |
| 204 |  | [Bernoulli Number](https://judge.yosupo.jp/problem/bernoulli_number) | YS | N/A | Advanced | - |
| 205 |  | [Chinese Remainder](https://open.kattis.com/problems/chineseremainder) | Kattis | N/A | Advanced | - |
| 206 |  | [Modular Arithmetic](https://open.kattis.com/problems/modulararithmetic) | Kattis | N/A | Advanced | - |
| 207 |  | [Partition Function](https://judge.yosupo.jp/problem/partition_function) | YS | N/A | Advanced | - |

---

## 2P

**22 problems** (4 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Books](https://codeforces.com/contest/279/problem/B) | CF | Very Easy | Silver | - |
| 2 | ⭐ | [Sum of Three Values](https://cses.fi/problemset/task/1641) | CSES | Easy | Silver | Sorting |
| 3 | ⭐ | [Diamond Collector](http://www.usaco.org/index.php?page=viewproblem2&cpid=643) | Silver | Normal | Silver | Sorting |
| 4 | ⭐ | [Angry Cows](http://www.usaco.org/index.php?page=viewproblem2&cpid=597) | Gold | Hard | Silver | Binary Search, Sorting, Greedy |
| 5 |  | [Cellular Network](https://codeforces.com/contest/702/problem/C) | CF | Easy | Silver | Binary Search |
| 6 |  | [Ferris Wheel](https://cses.fi/problemset/task/1090) | CSES | Easy | Silver | Greedy, Sorting |
| 7 |  | [Magazine Ad](https://codeforces.com/contest/803/problem/D) | CF | Easy | Silver | Binary Search, Greedy |
| 8 |  | [Paired Up](http://www.usaco.org/index.php?page=viewproblem2&cpid=738) | Silver | Easy | Silver | Sorting |
| 9 |  | [Quiz Master](https://codeforces.com/contest/1777/problem/C) | CF | Easy | Silver | Sorting, Sliding Window |
| 10 |  | [They Are Everywhere](https://codeforces.com/problemset/problem/701/C) | CF | Easy | Silver | - |
| 11 |  | [USB vs. PS/2](https://codeforces.com/contest/762/problem/B) | CF | Easy | Silver | Greedy, Sorting |
| 12 |  | [K-Good Segment](https://codeforces.com/contest/616/problem/D) | CF | Easy | Gold | Binary Search |
| 13 |  | [Playlist](https://cses.fi/problemset/task/1141) | CSES | Easy | Gold | - |
| 14 |  | [Robot Instructions](http://usaco.org/index.php?page=viewproblem2&cpid=1207) | Silver | Easy | Gold | Meet in the Middle |
| 15 |  | [Subarray Distinct Values](https://cses.fi/problemset/task/2428) | CSES | Easy | Gold | Sliding Window |
| 16 |  | [An impassioned circulation of affection](https://codeforces.com/problemset/problem/814/C) | CF | Normal | Silver | - |
| 17 |  | [Connecting Two Barns](http://www.usaco.org/index.php?page=viewproblem2&cpid=1159) | Silver | Normal | Silver | Connected Components, Binary Search |
| 18 |  | [Sleepy Cow Herding](http://www.usaco.org/index.php?page=viewproblem2&cpid=918) | Silver | Normal | Silver | Sorting |
| 19 |  | [Cyclic Array](https://cses.fi/problemset/task/1191/) | CSES | Normal | Platinum | Binary Jumping, Binary Search |
| 20 |  | [2010 - A Huge Tower](https://oj.uz/problem/view/CEOI10_tower) | CEOI | Hard | Silver | Sorting |
| 21 |  | [Closest Cow Wins](http://www.usaco.org/index.php?page=viewproblem2&cpid=1158) | Silver | Hard | Silver | Sorting, Greedy |
| 22 |  | [MEX vs MED](https://codeforces.com/contest/1744/problem/F) | CF | Hard | Silver | Greedy |

---

## 3DRQ

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2007 - Pairs](https://oj.uz/problem/view/IOI07_pairs) | IOI | Normal | Platinum | BIT |

---

## Ad Hoc

**3 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [ABBC or BACB](https://codeforces.com/problemset/problem/1873/G) | CF | Normal | Bronze | - |
| 2 |  | [Big Brush](https://codeforces.com/contest/1638/problem/D) | CF | Normal | Silver | Greedy, DFS |
| 3 |  | [Raab Game I](https://cses.fi/problemset/task/3399) | CSES | Hard | Bronze | Greedy |

---

## Angles

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Laser Takahashi](https://atcoder.jp/contests/abc442/tasks/abc442_e) | AC | Normal | Platinum | Geometry, Sorting |

---

## Articulation Points

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [SUBMERGE - Submerging Islands](https://www.spoj.com/problems/SUBMERGE/) | SPOJ | Normal | Advanced | BCC |

---

## BIT

**9 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2016 - Selling RNA Strands](https://oj.uz/problem/view/JOI16_selling_rna) | JOI | Hard | Advanced | Trie |
| 2 |  | [Fixed-Length Paths II](https://cses.fi/problemset/task/2081) | CSES | Easy | Platinum | Centroid |
| 3 |  | [Forest Queries II](https://cses.fi/problemset/task/1739) | CSES | Easy | Platinum | 2DRQ |
| 4 |  | [2007 - Pairs](https://oj.uz/problem/view/IOI07_pairs) | IOI | Normal | Platinum | 3DRQ |
| 5 |  | [2019 - Street Lamps](https://oj.uz/problem/view/APIO19_street_lamps) | APIO | Normal | Platinum | 2DRQ |
| 6 |  | [Crowded Cities](https://dmoj.ca/problem/bfs17p6) | Back From Summer | Normal | Platinum | 2DRQ |
| 7 |  | [Friendcross](http://www.usaco.org/index.php?page=viewproblem2&cpid=722) | Platinum | Normal | Platinum | 2DRQ |
| 8 |  | [Mowing the Field](http://www.usaco.org/index.php?page=viewproblem2&cpid=601) | Platinum | Normal | Platinum | 2DRQ |
| 9 |  | [Soriya's Programming Project](https://dmoj.ca/problem/dmopc19c7p5) | DMOPC | Normal | Platinum | D&C, 2DRQ |

---

## Binary Search, 2P

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Three Base Stations](https://codeforces.com/contest/51/problem/C) | CF | Normal | Silver | - |

---

## Bitmask DP

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Mana Collection](http://www.usaco.org/index.php?page=viewproblem2&cpid=1285) | Platinum | Hard | Platinum | Convex |

---

## Bitmasking

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Eating](https://codeforces.com/problemset/problem/2064/D) | CF | Hard | Silver | 2D Prefix Sums, DP |

---

## Block Cut Tree

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Bridges: The Final Battle](https://codeforces.com/problemset/gymProblem/100551/D) | Gym | Insane | Platinum | Virtual Tree |

---

## Casework

**8 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2010 - Patrol](https://dmoj.ca/problem/apio10p2) | APIO | Hard | Gold | DP |
| 2 |  | [Three Logos](https://codeforces.com/problemset/problem/581/D) | CF | Easy | Bronze | - |
| 3 |  | [Fence Painting](http://www.usaco.org/index.php?page=viewproblem2&cpid=567) | Bronze | Normal | Bronze | - |
| 4 |  | [Hoof Paper Scissors Minus One](https://usaco.org/index.php?page=viewproblem2&cpid=1515) | Bronze | Normal | Bronze | - |
| 5 |  | [Social Distancing I](https://usaco.org/index.php?page=viewproblem2&cpid=1035) | Bronze | Normal | Bronze | - |
| 6 |  | [Leaders](https://usaco.org/index.php?page=viewproblem2&cpid=1275) | Bronze | Hard | Bronze | - |
| 7 |  | [FEB](http://www.usaco.org/index.php?page=viewproblem2&cpid=1323) | Bronze | Very Hard | Bronze | Greedy |
| 8 |  | [2014 - Beads](https://oj.uz/problem/view/APIO14_beads) | APIO | Very Hard | Gold | DP |

---

## Catalan, Combinatorics

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Balanced Subsequences](https://codeforces.com/contest/1924/problem/D) | CF | Hard | Advanced | - |

---

## Centroid Decomposition

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Her Lost](https://tlx.toki.id/problems/troc-33/H) | TLX | Hard | Platinum | - |

---

## Combinatorics, XOR Hashing

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Hyperregular Bracket Strings](https://codeforces.com/contest/1830/problem/C) | CF | Hard | Gold | - |

---

## Combo

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Problem Setting](http://usaco.org/index.php?page=viewproblem2&cpid=1309) | Platinum | Easy | Platinum | DP |

---

## Coordinate Compress

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Increasing Subsequence II](https://cses.fi/problemset/task/1748) | CSES | Easy | Gold | PURS |
| 2 |  | [Salary Queries](https://cses.fi/problemset/task/1144) | CSES | Easy | Gold | PURS |

---

## Cycles

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Cereal 2](http://www.usaco.org/index.php?page=viewproblem2&cpid=1184) | Silver | Very Hard | Silver | Spanning Tree, Constructive |

---

## Divide and Conquer

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Training on ChinaForces](https://training.olinfo.it/#/task/preoii_allenamento/statement) | OII | Hard | Gold | Stack |

---

## Divisors

**5 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [MOMOS - FEASTOFPIGS](https://www.spoj.com/problems/MOMOS/) | SPOJ | Easy | Platinum | PIE, Sieve |
| 2 |  | [Counting Coprime Pairs](https://cses.fi/problemset/task/2417) | CSES | Normal | Platinum | PIE |
| 3 |  | [KPRIMESB - Almost Prime Numbers Again](https://www.spoj.com/problems/KPRIMESB/) | SPOJ | Normal | Platinum | PIE |
| 4 |  | [MSKYCODE - Sky Code](https://www.spoj.com/problems/MSKYCODE/) | SPOJ | Normal | Platinum | PIE |
| 5 |  | [SQFREE - Square-free integers](https://www.spoj.com/problems/SQFREE/) | SPOJ | Normal | Platinum | PIE |

---

## Functional Graphs

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Medium Demon Problem (easy version)](https://codeforces.com/contest/2044/problem/G1) | CF | Normal | Silver | - |
| 2 |  | [Medium Demon Problem (hard version)](https://codeforces.com/contest/2044/problem/G2) | CF | Normal | Silver | - |

---

## Game Theory

**3 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2016 - Burza](https://oj.uz/problem/view/COCI16_burza) | COCI | Very Hard | Gold | Bitmasks, DP, Tree |
| 2 |  | [Circular Barn - The Game](http://usaco.org/index.php?page=viewproblem2&cpid=1255) | Silver | Normal | Silver | NT |
| 3 |  | [Fennec VS. Snuke](https://atcoder.jp/contests/arc078/tasks/arc078_b) | AC | Hard | Silver | Trees |

---

## Graphs

**3 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Field Day](http://www.usaco.org/index.php?page=viewproblem2&cpid=1327) | Silver | Normal | Silver | Bitwise |
| 2 |  | [Friendly Spiders](https://codeforces.com/contest/1775/problem/D) | CF | Normal | Silver | Number Theory, BFS, Shortest Path, Bipartite |
| 3 |  | [Friendship Editing](https://usaco.org/index.php?page=viewproblem2&cpid=1499) | Gold | Hard | Gold | Bitmasks, DP |

---

## Hamiltonian path

**1 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [De Bruijn Sequence](https://cses.fi/problemset/task/1692) | CSES | Easy | Advanced | - |

---

## Indexed Set

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2011 - Tree Rotations](https://szkopul.edu.pl/problemset/problem/sUe3qzxBtasek-RAWmZaxY_p/site/?key=statement) | POI | Normal | Platinum | Merging |

---

## KRT

**6 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Qpwoeirut and Vertices](https://codeforces.com/contest/1706/problem/E) | CF | Normal | Platinum | - |
| 2 |  | [TULIPS](https://www.codechef.com/problems/TULIPS) | CC | Normal | Platinum | - |
| 3 |  | [Graph and Queries](https://codeforces.com/contest/1416/problem/D) | CF | Hard | Platinum | - |
| 4 |  | [Groceries in Meteor Town](https://codeforces.com/contest/1628/problem/E) | CF | Hard | Platinum | - |
| 5 |  | [Swapping Cities](https://qoj.ac/problem/436) | APIO | Hard | Platinum | - |
| 6 |  | [Werewolf](https://qoj.ac/problem/2744) | IOI | Hard | Platinum | - |

---

## LCM

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [LCM Sum](https://www.spoj.com/problems/LCMSUM/) | SPOJ | Hard | Gold | Divisibility, Euler Totient |

---

## Maps

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [It's Mooin' Time](https://usaco.org/index.php?page=viewproblem2&cpid=1445) | Bronze | Hard | Bronze | Set |

---

## Math

**12 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Good Subarrays](https://codeforces.com/contest/1398/problem/C) | CF | Easy | Silver | Prefix Sums |
| 2 | ⭐ | [Sumdiv](https://kilonova.ro/problems/127) | Kilonova | Normal | Gold | Prime Factorization |
| 3 |  | [AND, OR, and square sum](https://codeforces.com/contest/1368/problem/D) | CF | Normal | Silver | Greedy |
| 4 |  | [GCD and MST](https://codeforces.com/problemset/problem/1513/D) | CF | Normal | Gold | MST |
| 5 |  | [Yet Another Minimization Problem 2](https://codeforces.com/contest/1637/problem/D) | CF | Normal | Gold | DP, Knapsack |
| 6 |  | [Point in Polygon](https://cses.fi/problemset/task/2192) | CSES | Normal | Platinum | Geometry |
| 7 |  | [Polygon Area](https://cses.fi/problemset/task/2191) | CSES | Normal | Platinum | Geometry |
| 8 |  | [Ehab and another another xor problem](https://codeforces.com/contest/1088/problem/D) | CF | Hard | Silver | Interactive |
| 9 |  | [Cow Camp](http://usaco.org/index.php?page=viewproblem2&cpid=1210) | Gold | Hard | Gold | Combinatorics, Probability, Binary Search |
| 10 |  | [Carrots for rabbits](https://codeforces.com/contest/1428/problem/E) | CF | Very Hard | Silver | Priority Queue |
| 11 |  | [2020 - Star Trek](https://codeforces.com/contest/1402/problem/C) | CEOI | Very Hard | Gold | DP |
| 12 |  | [Power Tower](https://codeforces.com/problemset/problem/906/D) | CF | Very Hard | Gold | Divisibility, Number Theory |

---

## Max Subarray Sum

**1 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Painting the Barn](http://www.usaco.org/index.php?page=viewproblem2&cpid=923) | Gold | Hard | Silver | 2D Prefix Sums |

---

## Meet in Middle

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Max Indep Set](https://judge.yosupo.jp/problem/maximum_independent_set) | YS | Hard | Gold | Bitmasks, DP |

---

## Merging

**8 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2011 - Race](https://oj.uz/problem/view/IOI11_race) | IOI | Normal | Platinum | Centroid |
| 2 |  | [2011 - Tree Rotations](https://szkopul.edu.pl/problemset/problem/sUe3qzxBtasek-RAWmZaxY_p/site/?key=statement) | POI | Normal | Platinum | Indexed Set |
| 3 |  | [Lomsat gelral](https://codeforces.com/contest/600/problem/E) | CF | Normal | Platinum | - |
| 4 |  | [New Roads Queries](https://cses.fi/problemset/task/2101/) | CSES | Hard | Gold | DSU |
| 5 |  | [Strongest Friendship Group](http://www.usaco.org/index.php?page=viewproblem2&cpid=1259) | Gold | Hard | Gold | DSU, Sorted Set |
| 6 |  | [2009 - Loza](https://dmoj.ca/problem/coi09p3) | COI | Hard | Platinum | - |
| 7 |  | [2020 - Joitter](https://oj.uz/problem/view/JOI20_joitter2) | JOI | Hard | Platinum | - |
| 8 |  | [2019 - Virus](https://qoj.ac/contest/295/problem/1127) | JOI | Very Hard | Platinum | SCC |

---

## MinCostFlow

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Team Building](https://codeforces.com/contest/1316/problem/E) | CF | Easy | Gold | Bitmasks |

---

## Multiset

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Array Destruction](https://codeforces.com/problemset/problem/1474/C) | CF | Normal | Gold | Sorting, Greedy |

---

## Number Theory

**3 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Friendly Spiders](https://codeforces.com/contest/1775/problem/D) | CF | Normal | Silver | Graphs, BFS, Shortest Path, Bipartite |
| 2 |  | [GCD Harmony](https://open.kattis.com/problems/gcdharmony) | Kattis | Hard | Gold | DP, Tree |
| 3 |  | [Power Tower](https://codeforces.com/problemset/problem/906/D) | CF | Very Hard | Gold | Divisibility, Math |

---

## Offline

**2 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Distinct Values Queries](https://cses.fi/problemset/task/1734) | CSES | Normal | Gold | PURS |
| 2 |  | [Irrigation](https://codeforces.com/contest/1181/problem/D) | CF | Easy | Gold | PURS, Binary Search |

---

## Output Only

**1 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [2013 - Tasksauthor](https://tlx.toki.id/problems/apio-2013/C/) | APIO | Hard | Advanced | SP |

---

## Palindromic Tree

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Palindromic Partition](https://codeforces.com/contest/932/problem/G) | CF | Very Hard | Advanced | - |
| 2 |  | [Palindromic Magic](https://codeforces.com/contest/1081/problem/H) | CF | Insane | Advanced | - |

---

## Patterns

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [SetOfPatterns](https://archive.topcoder.com/ProblemStatement/pm/8307) | TopCoder | Hard | Platinum | PIE, Strings |

---

## Prefix

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Medical Parity](https://codeforces.com/contest/2181/problem/M) | CF | Normal | Silver | Greedy, Bitwise |

---

## Prefix Sum

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Cow Checkups](https://usaco.org/index.php?page=viewproblem2&cpid=1470) | Silver | Hard | Silver | Two Pointers, Binary Search |

---

## Probability

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2017 - Osmosmjerka](https://oj.uz/problem/view/COCI17_osmosmjerka) | COCI | Normal | Gold | Hashing |
| 2 |  | [Cow Camp](http://usaco.org/index.php?page=viewproblem2&cpid=1210) | Gold | Hard | Gold | Combinatorics, Math, Binary Search |

---

## Radians

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Maximum Number of Visible Points](https://leetcode.com/problems/maximum-number-of-visible-points/description/) | LC | Normal | Platinum | Geometry, Sliding Windows |

---

## Recursion

**6 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Air Cownditioning II](http://www.usaco.org/index.php?page=viewproblem2&cpid=1276) | Bronze | Normal | Bronze | Complete Search, Subsets |
| 2 | ⭐ | [Livestock Lineup](http://www.usaco.org/index.php?page=viewproblem2&cpid=965) | Bronze | Normal | Bronze | Complete Search, Permutation |
| 3 |  | [Apple Division](https://cses.fi/problemset/task/1623) | CSES | Easy | Bronze | Complete Search, Subsets |
| 4 |  | [Creating Strings I](https://cses.fi/problemset/task/1622) | CSES | Easy | Bronze | Complete Search, Permutation |
| 5 |  | [Back and Forth](http://www.usaco.org/index.php?page=viewproblem2&cpid=857) | Bronze | Normal | Bronze | Complete Search |
| 6 |  | [Chessboard & Queens](https://cses.fi/problemset/task/1624) | CSES | Normal | Bronze | Complete Search, Permutation |

---

## Rerooting

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Game on Tree](https://codeforces.com/contest/1970/problem/C3) | CF | Easy | Gold | DP |

---

## SRQ

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Estelle's Supper Box](https://codebreaker.xyz/problem/supperbox) | NOI | Normal | Platinum | DP, Knapsack, D&C |

---

## SegTree

**2 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Vertex Set Path Composite](https://judge.yosupo.jp/problem/vertex_set_path_composite) | YS | Normal | Platinum | HLD |
| 2 |  | [2017 - Golf](https://oj.uz/problem/view/JOI17_golf) | JOI | Very Hard | Platinum | 2DRQ |

---

## Segment Tree

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Julia and Snail](https://codeforces.com/problemset/problem/793/F) | CF | Normal | Platinum | DP, Sqrt |

---

## Shortest Path

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Friendly Spiders](https://codeforces.com/contest/1775/problem/D) | CF | Normal | Silver | Number Theory, Graphs, BFS, Bipartite |

---

## Sieve

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [MOMOS - FEASTOFPIGS](https://www.spoj.com/problems/MOMOS/) | SPOJ | Easy | Platinum | PIE, Divisors |

---

## Sliding Windows

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Maximum Number of Visible Points](https://leetcode.com/problems/maximum-number-of-visible-points/description/) | LC | Normal | Platinum | Geometry, Radians |

---

## Sortings

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [QED's Favorite Permutation](https://codeforces.com/contest/2030/problem/D) | CF | Normal | Silver | Difference Array |

---

## Spanning Tree

**3 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Even Outdegree Edges](https://cses.fi/problemset/task/2179) | CSES | Hard | Silver | DFS |
| 2 |  | [Wizard's Tour](https://codeforces.com/contest/860/problem/D) | CF | Hard | Silver | DFS |
| 3 |  | [Cereal 2](http://www.usaco.org/index.php?page=viewproblem2&cpid=1184) | Silver | Very Hard | Silver | Constructive, Cycles |

---

## Sparse SegTree

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [2013 - Game](https://oj.uz/problem/view/IOI13_game) | IOI | Hard | Platinum | 2DRQ, Treap |

---

## Subsets

**2 problems** (1 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Air Cownditioning II](http://www.usaco.org/index.php?page=viewproblem2&cpid=1276) | Bronze | Normal | Bronze | Complete Search, Recursion |
| 2 |  | [Apple Division](https://cses.fi/problemset/task/1623) | CSES | Easy | Bronze | Complete Search, Recursion |

---

## Suffix Tree

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Security](https://codeforces.com/contest/1037/problem/H) | CF | Very Hard | Advanced | - |

---

## Trees

**5 problems** (2 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 | ⭐ | [Nuske vs Phantom Thnook](https://atcoder.jp/contests/agc015/tasks/agc015_c) | AC | Hard | Silver | 2D Prefix Sums |
| 2 | ⭐ | [Babysitting](https://codeforces.com/problemset/problem/1903/F) | CF | Hard | Advanced | 2SAT, Binary Search |
| 3 |  | [COT2 - Count on a tree II](https://www.spoj.com/problems/COT2/) | SPOJ | Normal | Platinum | Sqrt, Mo's Algorithm |
| 4 |  | [Catshock](https://codeforces.com/contest/2154/problem/D) | CF | Hard | Silver | Bipartite |
| 5 |  | [Fennec VS. Snuke](https://atcoder.jp/contests/arc078/tasks/arc078_b) | AC | Hard | Silver | Game Theory |

---

## Trees, XOR Hashing

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Mergers](https://qoj.ac/problem/72) | JOI | Very Hard | Gold | - |

---

## Two Pointers, XOR Hashing

**1 problems** (0 starred ⭐)

| # | ⭐ | Problem | Source | Difficulty | Level | Other Tags |
|---|---|---------|--------|------------|-------|------------|
| 1 |  | [Three Occurrences](https://codeforces.com/contest/1418/problem/G) | CF | Hard | Gold | - |

---
