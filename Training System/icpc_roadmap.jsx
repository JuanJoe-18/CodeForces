import { useState, useMemo, useEffect } from "react";
import Dashboard from "./Dashboard";

// Format: [name, source, technique, minutes, url, starred]
// Sources: C=CSES, UB=USACO Bronze, US=USACO Silver, UG=USACO Gold, UP=USACO Plat, CF=Codeforces, CT=Team
// Techniques: impl, graph, dp, tree, rq, str, geo, adv, sort, slide, flow, dsu, scc, bs, greedy, topo, sp, func
// starred: 1=essential, 0=optional

const C = "https://cses.fi/problemset/task/";
const U = "http://www.usaco.org/index.php?page=viewproblem2&cpid=";
const CF = "https://codeforces.com/contest/";

const WEEKS = [
  // ===== VACATION PHASE: 5hrs/day =====
  {
    id:1, title:"Cerrar Intro + Arrancar Grafos", dates:"Jun 22–28", phase:"vac",
    focus:"Limpiar los 3 fallidos de CSES Intro, cerrar huecos, y meter las primeras 5 sesiones de grafos BFS/DFS",
    days:[
      ["Dom",[
        ["Number Spiral","C","impl",60,C+"1071",0],
        ["Trailing Zeros","C","impl",30,C+"1618",0],
        ["Gray Code","C","impl",50,C+"2205",0],
      ]],
      ["Lun",[
        ["Two Sets","C","impl",45,C+"1092",0],
        ["Tower of Hanoi","C","impl",40,C+"2165",0],
        ["Digit Queries","C","impl",50,C+"2431",0],
      ]],
      ["Mar",[
        ["Creating Strings","C","impl",35,C+"1622",0],
        ["Apple Division","C","impl",40,C+"1623",0],
        ["Chessboard and Queens","C","impl",50,C+"1624",0],
      ]],
      ["Mié",[
        ["Counting Rooms","C","graph",40,C+"1192",0],
        ["Labyrinth","C","graph",50,C+"1193",0],
        ["The Bucket List","UB","impl",30,U+"856",0],
      ]],
      ["Jue",[
        ["Building Roads","C","graph",30,C+"1666",0],
        ["Message Route","C","graph",45,C+"1667",0],
        ["Speeding Ticket","UB","impl",35,U+"568",1],
      ]],
      ["Vie",[
        ["Building Teams","C","graph",50,C+"1668",0],
        ["Round Trip","C","graph",60,C+"1669",0],
        ["Cow Gymnastics","UB","impl",35,U+"963",1],
      ]],
      ["Sáb",[
        ["Monsters","C","graph",70,C+"1194",0],
        ["Milk Factory","UB","graph",40,U+"940",1],
        ["Block Game","UB","impl",35,U+"664",1],
      ]],
    ]
  },
  {
    id:2, title:"Caminos Cortos + DAGs", dates:"Jun 29 – Jul 5", phase:"vac",
    focus:"Dijkstra, Bellman-Ford, Floyd-Warshall, topological sort. Implementar Dijkstra de memoria.",
    days:[
      ["Dom",[
        ["Shortest Routes I","C","sp",60,C+"1671",0],
        ["Shortest Routes II","C","sp",50,C+"1672",0],
        ["Circular Barn","UB","impl",35,U+"616",0],
      ]],
      ["Lun",[
        ["High Score","C","sp",60,C+"1673",0],
        ["Flight Discount","C","sp",60,C+"1195",0],
        ["The Lost Cow","UB","impl",30,U+"735",0],
      ]],
      ["Mar",[
        ["Cycle Finding","C","graph",50,C+"1197",0],
        ["Round Trip II","C","graph",50,C+"1678",0],
        ["Stuck in a Rut","UB","impl",45,U+"1061",0],
      ]],
      ["Mié",[
        ["Course Schedule","C","topo",40,C+"1679",0],
        ["Longest Flight Route","C","topo",50,C+"1680",0],
        ["Censoring","UB","str",45,U+"526",0],
      ]],
      ["Jue",[
        ["Game Routes","C","topo",45,C+"1681",0],
        ["Investigation","C","sp",55,C+"1202",0],
        ["Milk Measurement","UB","impl",40,U+"761",0],
      ]],
      ["Vie",[
        ["Flight Routes","C","sp",60,C+"1196",0],
        ["Hoofball","UB","graph",40,U+"808",1],
        ["Reflection","UB","impl",40,U+"1491",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",180,"",0],
        ["Upsolving 1 problema","CF","mixed",60,"",0],
      ]],
    ]
  },
  {
    id:3, title:"MST, DSU, SCC, Functional Graphs", dates:"Jul 6–12", phase:"vac",
    focus:"Union-Find, Kruskal, componentes fuertemente conexas, grafos funcionales. Templates propios de DSU.",
    days:[
      ["Dom",[
        ["Road Reparation","C","dsu",45,C+"1675",0],
        ["Road Construction","C","dsu",40,C+"1676",0],
        ["Swapity Swap","UB","graph",40,U+"1013",1],
      ]],
      ["Lun",[
        ["Flight Routes Check","C","graph",50,C+"1682",0],
        ["Planets and Kingdoms","C","scc",70,C+"1683",0],
        ["The Great Revegetation","UB","graph",35,U+"916",1],
      ]],
      ["Mar",[
        ["Planets Queries I","C","func",55,C+"1750",0],
        ["Planets Cycles","C","func",50,C+"1751",0],
        ["Milk Factory","UB","graph",35,U+"940",1],
      ]],
      ["Mié",[
        ["Giant Pizza","C","scc",70,C+"1684",0],
        ["Coin Collector","C","scc",50,C+"1686",0],
        ["Sleepy Cow Herding","UB","impl",30,U+"915",0],
      ]],
      ["Jue",[
        ["Mail Delivery","C","graph",60,C+"1691",0],
        ["Teleporters Path","C","graph",55,C+"1693",0],
        ["Social Distancing I","UB","greedy",35,U+"1035",0],
      ]],
      ["Vie",[
        ["De Bruijn Sequence","C","graph",50,C+"1692",0],
        ["Hamiltonian Flights","C","dp",65,C+"1690",0],
        ["Leaders","UB","impl",40,U+"1275",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",180,"",0],
        ["Upsolving 2 problemas","CF","mixed",80,"",0],
      ]],
    ]
  },
  {
    id:4, title:"Flujo + Gaps de S&S + USACO Silver", dates:"Jul 13–19", phase:"vac",
    focus:"Max-flow/matching basics, cerrar sorting gaps, arrancar USACO Silver modules.",
    days:[
      ["Dom",[
        ["Download Speed","C","flow",70,C+"1694",0],
        ["Police Chase","C","flow",60,C+"1695",0],
        ["Where Am I?","UB","sort",30,U+"964",1],
      ]],
      ["Lun",[
        ["School Dance","C","flow",50,C+"1696",0],
        ["Distinct Routes","C","flow",60,C+"1711",0],
        ["Year of the Cow","UB","sort",35,U+"1107",0],
      ]],
      ["Mar",[
        ["Collecting Numbers II","C","sort",50,C+"2217",0],
        ["Josephus Problem II","C","sort",55,C+"2163",0],
        ["Don't Be Last!","UB","sort",30,U+"687",1],
      ]],
      ["Mié",[
        ["Nested Ranges Check","C","sort",55,C+"2168",0],
        ["Nested Ranges Count","C","sort",60,C+"2169",0],
        ["Cities & States","US","sort",40,U+"667",0],
      ]],
      ["Jue",[
        ["Room Allocation","C","greedy",45,C+"1164",0],
        ["Factory Machines","C","bs",40,C+"1620",0],
        ["Angry Cows","US","bs",45,U+"594",1],
      ]],
      ["Vie",[
        ["Tasks and Deadlines","C","greedy",30,C+"1630",0],
        ["Reading Books","C","greedy",25,C+"1631",0],
        ["Cow College","UB","greedy",40,U+"1251",0],
        ["Fence Painting","UB","impl",25,U+"567",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST con equipo (4hrs)","CT","contest",240,"",0],
        ["Upsolving","CT","mixed",60,"",0],
      ]],
    ]
  },
  {
    id:5, title:"DP Foundation", dates:"Jul 20–26", phase:"vac",
    focus:"DP lineal, grid, string. Regla: escribir la recurrencia en papel ANTES de codear cada problema.",
    days:[
      ["Dom",[
        ["Coin Combinations II","C","dp",40,C+"1636",0],
        ["Removing Digits","C","dp",30,C+"1637",0],
        ["Grid Paths I","C","dp",45,C+"1638",0],
      ]],
      ["Lun",[
        ["Book Shop","C","dp",50,C+"1158",0],
        ["Array Description","C","dp",55,C+"1746",0],
        ["Hoof Paper Scissors","US","dp",40,U+"691",0],
      ]],
      ["Mar",[
        ["Counting Towers","C","dp",60,C+"2413",0],
        ["Edit Distance","C","dp",45,C+"1639",0],
        ["Kayaking","CF","greedy",30,CF+"863/problem/B",0],
      ]],
      ["Mié",[
        ["Longest Common Subsequence","C","dp",50,C+"1746",0],
        ["Rectangle Cutting","C","dp",45,C+"1745",0],
        ["Playing in a Casino","CF","sort",30,CF+"1808/problem/B",0],
      ]],
      ["Jue",[
        ["Money Sums","C","dp",40,C+"1745",0],
        ["Removal Game","C","dp",55,C+"1745",0],
        ["Why Did the Cow Cross the Road III","UB","sort",35,U+"713",0],
      ]],
      ["Vie",[
        ["Two Sets II","C","dp",50,C+"1093",0],
        ["Minimal Grid Path","C","dp",70,C+"3359",0],
        ["Sum of Three Values","C","sort",50,C+"1641",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",180,"",0],
        ["Upsolving 2 problemas","CF","mixed",80,"",0],
      ]],
    ]
  },
  {
    id:6, title:"DP Intermedio + USACO Gold DP", dates:"Jul 27 – Ago 2", phase:"vac",
    focus:"Bitmask DP, digit DP, LIS. Última semana de vacaciones — aprovechar las 5hrs al máximo.",
    days:[
      ["Dom",[
        ["Increasing Subsequence","C","dp",45,C+"1145",0],
        ["Projects","C","dp",55,C+"1140",0],
        ["Mountain Range","C","dp",60,C+"1743",0],
      ]],
      ["Lun",[
        ["Elevator Rides","C","dp",70,C+"1653",0],
        ["Counting Tilings","C","dp",65,C+"2181",0],
        ["Out of Place","UB","greedy",35,U+"785",1],
      ]],
      ["Mar",[
        ["Counting Numbers","C","dp",60,C+"2220",0],
        ["Increasing Subsequence II","C","dp",55,C+"1748",0],
        ["It's Mooin' Time","UB","sort",35,U+"1445",0],
      ]],
      ["Mié",[
        ["Sum of Four Values","C","sort",55,C+"1642",0],
        ["Subarray Sums II","C","sort",45,C+"1661",0],
        ["Into Blocks","CF","dsu",40,CF+"1209/problem/G1",0],
      ]],
      ["Jue",[
        ["Subarray Divisibility","C","sort",45,C+"1662",0],
        ["Distinct Values Subarrays II","C","sort",40,C+"2427",0],
        ["Made Up","CF","sort",35,"https://atcoder.jp/contests/abc202/tasks/abc202_c",0],
      ]],
      ["Vie",[
        ["Array Division","C","bs",45,C+"1085",0],
        ["Movie Festival II","C","greedy",50,C+"1632",0],
        ["Maximum Subarray Sum II","C","sort",55,C+"1644",0],
      ]],
      ["Sáb",[
        ["🏆 SIMULACRO ICPC con equipo (5hrs)","CT","contest",300,"",0],
        ["Post-mortem + análisis","CT","mixed",60,"",0],
      ]],
    ]
  },
  // ===== SEMESTER PHASE: 2-3hrs weekdays, 4-5hrs weekends =====
  {
    id:7, title:"Árboles Foundation", dates:"Ago 3–9", phase:"sem",
    focus:"Tree DP, diámetro, distancias. Cambio de ritmo: 1-2 problemas entre semana, 2-3 fines de semana.",
    days:[
      ["Dom",[
        ["Tree Matching","C","tree",55,C+"1130",0],
        ["Tree Diameter","C","tree",45,C+"1131",0],
      ]],
      ["Lun",[
        ["Tree Distances I","C","tree",50,C+"1132",0],
      ]],
      ["Mar",[
        ["Tree Distances II","C","tree",55,C+"1133",0],
      ]],
      ["Mié",[
        ["Counting Liars","UB","bs",30,U+"1228",0],
        ["Bovine Genomics","UB","impl",30,U+"736",1],
      ]],
      ["Jue",[
        ["Company Queries I","C","tree",50,C+"1687",0],
      ]],
      ["Vie",[
        ["Company Queries II","C","tree",55,C+"1688",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",150,"",0],
        ["Upsolving","CF","mixed",40,"",0],
      ]],
    ]
  },
  {
    id:8, title:"Árboles: LCA, Euler Tour, Queries", dates:"Ago 10–16", phase:"sem",
    focus:"Binary lifting, Euler tour para convertir problemas de árboles en problemas de rangos.",
    days:[
      ["Dom",[
        ["Distance Queries","C","tree",55,C+"1135",0],
        ["Counting Paths","C","tree",60,C+"1136",0],
      ]],
      ["Lun",[
        ["Subtree Queries","C","tree",55,C+"1137",0],
      ]],
      ["Mar",[
        ["Path Queries","C","tree",55,C+"1138",0],
      ]],
      ["Mié",[
        ["Distinct Colors","C","tree",60,C+"1139",0],
      ]],
      ["Jue",[
        ["Finding a Centroid","C","tree",50,C+"2079",0],
      ]],
      ["Vie",[
        ["Triangles","UB","geo",35,U+"1011",0],
        ["Guess the Animal","UB","impl",35,U+"893",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST con equipo","CT","contest",180,"",0],
        ["Upsolving","CT","mixed",60,"",0],
      ]],
    ]
  },
  {
    id:9, title:"Árboles Avanzados + Functional Graphs", dates:"Ago 17–23", phase:"sem",
    focus:"Path Queries II (HLD/Segtree en árbol), Fixed-Length Paths, Planets Queries II.",
    days:[
      ["Dom",[
        ["Path Queries II","C","tree",80,C+"2134",0],
        ["Fixed-Length Paths I","C","tree",70,C+"2080",0],
      ]],
      ["Lun",[
        ["Planets Queries II","C","func",65,C+"1160",0],
      ]],
      ["Mar",[
        ["Knight's Tour","C","graph",60,C+"1689",0],
      ]],
      ["Mié",[
        ["Lifeguards","US","greedy",40,U+"786",0],
        ["Photoshoot","UB","greedy",35,U+"1227",1],
      ]],
      ["Jue",[
        ["Fixed-Length Paths II","C","tree",80,C+"2081",0],
      ]],
      ["Vie",[
        ["Sliding Window Median","C","slide",55,C+"1076",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",150,"",0],
        ["Upsolving","CF","mixed",40,"",0],
      ]],
    ]
  },
  {
    id:10, title:"Range Queries Foundation", dates:"Ago 24–30", phase:"sem",
    focus:"Segment Tree iterativo/recursivo, Fenwick. Debe salirte el Segtree en 10 minutos de memoria.",
    days:[
      ["Dom",[
        ["Dynamic Range Minimum Queries","C","rq",40,C+"1649",0],
        ["Range Xor Queries","C","rq",35,C+"1650",0],
        ["Range Update Queries","C","rq",45,C+"1651",0],
      ]],
      ["Lun",[
        ["Forest Queries","C","rq",40,C+"1652",0],
      ]],
      ["Mar",[
        ["Hotel Queries","C","rq",55,C+"1143",0],
      ]],
      ["Wed",[
        ["List Removals","C","rq",50,C+"1749",0],
      ]],
      ["Jue",[
        ["Salary Queries","C","rq",60,C+"1144",0],
      ]],
      ["Vie",[
        ["Load Balancing","UB","sort",40,U+"617",1],
      ]],
      ["Sáb",[
        ["🏆 CONTEST con equipo","CT","contest",180,"",0],
        ["Upsolving","CT","mixed",60,"",0],
      ]],
    ]
  },
  {
    id:11, title:"Range Queries Advanced + Lazy", dates:"Ago 31 – Sep 6", phase:"sem",
    focus:"Lazy propagation, 2D queries, problemas combinados. Template de Segtree+Lazy propio.",
    days:[
      ["Dom",[
        ["Prefix Sum Queries","C","rq",55,C+"2166",0],
        ["Pizzeria Queries","C","rq",60,C+"2206",0],
      ]],
      ["Lun",[
        ["Subarray Sum Queries","C","rq",50,C+"1190",0],
      ]],
      ["Mar",[
        ["Distinct Values Queries","C","rq",55,C+"1734",0],
      ]],
      ["Mié",[
        ["Range Updates and Sums","C","rq",70,C+"1735",0],
      ]],
      ["Jue",[
        ["Polynomial Queries","C","rq",60,C+"1736",0],
      ]],
      ["Vie",[
        ["Forest Queries II","C","rq",55,C+"1739",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",150,"",0],
        ["Upsolving","CF","mixed",40,"",0],
      ]],
    ]
  },
  {
    id:12, title:"Range Queries Pro + Sliding Window", dates:"Sep 7–13", phase:"sem",
    focus:"Queries más difíciles de CSES + la sección Sliding Window completa.",
    days:[
      ["Dom",[
        ["Range Queries and Copies","C","rq",65,C+"1737",0],
        ["Missing Coin Sum Queries","C","rq",60,C+"2432",0],
      ]],
      ["Lun",[
        ["Sliding Window Sum","C","slide",25,C+"2424",0],
        ["Sliding Window Minimum","C","slide",35,C+"2425",0],
      ]],
      ["Mar",[
        ["Sliding Window Xor","C","slide",30,C+"2426",0],
        ["Sliding Window Distinct Values","C","slide",40,C+"2428",0],
      ]],
      ["Mié",[
        ["Sliding Window Cost","C","slide",50,C+"1077",0],
      ]],
      ["Jue",[
        ["Sliding Window Inversions","C","slide",55,C+"2430",0],
      ]],
      ["Vie",[
        ["Movie Festival Queries","C","rq",50,C+"1740",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST con equipo","CT","contest",180,"",0],
        ["Upsolving","CT","mixed",60,"",0],
      ]],
    ]
  },
  {
    id:13, title:"String Algorithms", dates:"Sep 14–20", phase:"sem",
    focus:"Hashing, KMP, borders, periods. String hashing como herramienta universal O(1) substring compare.",
    days:[
      ["Dom",[
        ["Word Combinations","C","str",55,C+"1731",0],
        ["Finding Borders","C","str",50,C+"1732",0],
      ]],
      ["Lun",[
        ["Finding Periods","C","str",50,C+"1733",0],
      ]],
      ["Mar",[
        ["Minimal Rotation","C","str",55,C+"1110",0],
      ]],
      ["Mié",[
        ["Longest Palindrome","C","str",55,C+"1111",0],
      ]],
      ["Jue",[
        ["Palindrome Queries","C","str",60,C+"2420",0],
      ]],
      ["Vie",[
        ["Finding Patterns","C","str",50,C+"2102",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",150,"",0],
        ["Upsolving","CF","mixed",40,"",0],
      ]],
    ]
  },
  {
    id:14, title:"Strings Avanzados + Geometry gaps", dates:"Sep 21–27", phase:"sem",
    focus:"Suffix arrays conceptos, Aho-Corasick intro, cerrar geometry gaps.",
    days:[
      ["Dom",[
        ["Counting Patterns","C","str",55,C+"2103",0],
        ["Distinct Substrings","C","str",60,C+"2104",0],
      ]],
      ["Lun",[
        ["Pattern Positions","C","str",55,C+"2105",0],
      ]],
      ["Mar",[
        ["Repeating Substring","C","str",50,C+"2106",0],
      ]],
      ["Mié",[
        ["Polygon Lattice Points","C","geo",40,C+"2193",0],
        ["Minimum Euclidean Distance","C","geo",50,C+"2194",0],
      ]],
      ["Jue",[
        ["Convex Hull","C","geo",55,C+"2195",0],
      ]],
      ["Vie",[
        ["Sleeping in Class","UB","greedy",35,U+"1203",1],
        ["Blocked Billboard II","UB","geo",35,U+"783",1],
      ]],
      ["Sáb",[
        ["🏆 CONTEST con equipo","CT","contest",180,"",0],
        ["Upsolving","CT","mixed",60,"",0],
      ]],
    ]
  },
  {
    id:15, title:"Advanced Techniques + Bitwise", dates:"Sep 28 – Oct 4", phase:"sem",
    focus:"Meet in the Middle, SOS DP, bitwise tricks. Problemas de Advanced Techniques de CSES.",
    days:[
      ["Dom",[
        ["Meet in the Middle","C","adv",60,C+"1628",0],
        ["Counting Bits","C","adv",40,C+"2419",0],
      ]],
      ["Lun",[
        ["Maximum Xor Subarray","C","adv",55,C+"1655",0],
      ]],
      ["Mar",[
        ["Reachable Nodes","C","adv",50,C+"2138",0],
      ]],
      ["Mié",[
        ["Reachability Queries","C","adv",50,C+"2139",0],
      ]],
      ["Jue",[
        ["Necessary Roads","C","adv",55,C+"2177",0],
      ]],
      ["Vie",[
        ["Necessary Cities","C","adv",50,C+"2178",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST VIRTUAL CF Div2","CF","contest",150,"",0],
        ["Upsolving","CF","mixed",40,"",0],
      ]],
    ]
  },
  {
    id:16, title:"Problemas Mixtos Rating 1600–2000", dates:"Oct 5–11", phase:"sem",
    focus:"Ya no por categoría sino por habilidad: leer, identificar técnica, implementar limpio y rápido.",
    days:[
      ["Dom",[
        ["D. Dijkstra?","CF","graph",60,CF+"20/problem/D",0],
        ["E. Tree Painting","CF","tree",60,CF+"1187/problem/E",0],
      ]],
      ["Lun",[
        ["D. Journey","CF","dp",55,CF+"1472/problem/D",0],
      ]],
      ["Mar",[
        ["E. Minimal Segment Cover","CF","rq",60,CF+"1175/problem/E",0],
      ]],
      ["Mié",[
        ["C. Ski Base","CF","greedy",50,CF+"913/problem/C",0],
      ]],
      ["Jue",[
        ["E. Almost Shortest Path","CF","sp",65,CF+"843/problem/D",0],
      ]],
      ["Vie",[
        ["D. Prefix-Suffix Palindrome","CF","str",55,CF+"1326/problem/D2",0],
      ]],
      ["Sáb",[
        ["🏆 SIMULACRO ICPC con equipo (5hrs)","CT","contest",300,"",0],
      ]],
    ]
  },
  {
    id:17, title:"Simulacro ICPC #1", dates:"Oct 12–18", phase:"sim",
    focus:"Set ICPC Latam Regional 2023. Post-mortem detallado. Upsolving completo.",
    days:[
      ["Dom",[
        ["🏆 ICPC Latam Regional 2023 (equipo, 5hrs)","CT","contest",300,"",0],
      ]],
      ["Lun",[
        ["Upsolving Problema A o B","CT","mixed",60,"",0],
      ]],
      ["Mar",[
        ["Upsolving Problema C o D","CT","mixed",70,"",0],
      ]],
      ["Mié",[
        ["D. Treelabeling","CF","tree",55,CF+"1611/problem/D",0],
      ]],
      ["Jue",[
        ["E. Editor","CF","rq",55,CF+"1263/problem/E",0],
      ]],
      ["Vie",[
        ["Notebook: escribir/verificar templates","CT","mixed",60,"",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST CF Div2 individual","CF","contest",150,"",0],
      ]],
    ]
  },
  {
    id:18, title:"Simulacro ICPC #2", dates:"Oct 19–25", phase:"sim",
    focus:"Set ICPC Latam Regional 2024. Ajustar estrategia de equipo.",
    days:[
      ["Dom",[
        ["🏆 ICPC Latam Regional 2024 (equipo, 5hrs)","CT","contest",300,"",0],
      ]],
      ["Lun",[
        ["Upsolving Problema más difícil","CT","mixed",70,"",0],
      ]],
      ["Mar",[
        ["Upsolving + editorial analysis","CT","mixed",60,"",0],
      ]],
      ["Mié",[
        ["F. Array Partition","CF","dp",55,CF+"1454/problem/F",0],
      ]],
      ["Jue",[
        ["E. Greedy Shopping","CF","greedy",55,CF+"1800/problem/E",0],
      ]],
      ["Vie",[
        ["Notebook: completar + probar","CT","mixed",60,"",0],
      ]],
      ["Sáb",[
        ["🏆 CONTEST equipo (set internacional)","CT","contest",180,"",0],
      ]],
    ]
  },
  {
    id:19, title:"Simulacro ICPC #3 + Notebook Final", dates:"Oct 26 – Nov 1", phase:"sim",
    focus:"Último simulacro formal. Notebook impreso y verificado. Empezar a bajar la carga.",
    days:[
      ["Dom",[
        ["🏆 ICPC Latam Regional 2022 (equipo, 5hrs)","CT","contest",300,"",0],
      ]],
      ["Lun",[
        ["Upsolving final","CT","mixed",60,"",0],
      ]],
      ["Mar",[
        ["Verificar TODOS los templates del notebook","CT","mixed",90,"",0],
      ]],
      ["Mié",[
        ["Coin Combinations II (repaso)","C","dp",30,C+"1636",0],
        ["Building Roads (repaso)","C","graph",30,C+"1666",0],
      ]],
      ["Jue",[
        ["Tree Diameter (repaso)","C","tree",30,C+"1131",0],
        ["String Matching (repaso)","C","str",30,C+"1753",0],
      ]],
      ["Vie",[
        ["Práctica ligera con equipo (2-3hrs)","CT","contest",150,"",0],
      ]],
      ["Sáb",[
        ["Imprimir notebook final","CT","mixed",60,"",0],
        ["Revisión estrategia equipo","CT","mixed",30,"",0],
      ]],
    ]
  },
  {
    id:20, title:"TAPER → REGIONAL 🏁", dates:"Nov 2–7", phase:"sim",
    focus:"Bajar carga. Descansar. Llegar fresco el 7 de noviembre. Ya estás listo.",
    days:[
      ["Dom",[
        ["1 problema fácil de warm-up","C","impl",20,C+"1068",0],
        ["Repasar notebook grafos","CT","mixed",20,"",0],
      ]],
      ["Lun",[
        ["Repasar notebook DP + Trees","CT","mixed",30,"",0],
      ]],
      ["Mar",[
        ["Repasar notebook RQ + Strings","CT","mixed",30,"",0],
      ]],
      ["Mié",[
        ["Estrategia final equipo: quién lee qué, roles","CT","mixed",40,"",0],
      ]],
      ["Jue",[
        ["🛌 DESCANSO TOTAL — no tocar código","CT","mixed",0,"",0],
      ]],
      ["Vie",[
        ["🛌 Descanso + buena alimentación + dormir temprano","CT","mixed",0,"",0],
      ]],
      ["Sáb",[
        ["🏁 REGIONAL ICPC — A GANAR","CT","contest",300,"",0],
      ]],
    ]
  },
];

const TECH_COLORS = {
  impl:"#94a3b8", graph:"#00e5a0", sp:"#00e5a0", topo:"#00e5a0", scc:"#00e5a0",
  func:"#00e5a0", dsu:"#00e5a0", flow:"#38bdf8", dp:"#ff6b6b", tree:"#ffd43b",
  rq:"#fb923c", str:"#c084fc", geo:"#f472b6", adv:"#e879f9", sort:"#94a3b8",
  slide:"#fb923c", bs:"#94a3b8", greedy:"#94a3b8", mixed:"#64748b", contest:"#ff6b9d",
};
const TECH_LABELS = {
  impl:"Impl", graph:"Grafos", sp:"ShortPath", topo:"TopoSort", scc:"SCC",
  func:"FuncGraph", dsu:"DSU", flow:"Flow", dp:"DP", tree:"Árboles",
  rq:"RangeQ", str:"Strings", geo:"Geometría", adv:"Advanced", sort:"Sort&Search",
  slide:"SlidingW", bs:"BinSearch", greedy:"Greedy", mixed:"Mix", contest:"Contest",
};
const SRC_COLORS = { C:"#00e5a0", UB:"#fbbf24", US:"#38bdf8", UG:"#f59e0b", UP:"#a78bfa", CF:"#ff6b6b", CT:"#ff6b9d" };
const SRC_LABELS = { C:"CSES", UB:"USACO🥉", US:"USACO🥈", UG:"USACO🥇", UP:"USACO💎", CF:"CF", CT:"Equipo" };
const PHASE_INFO = {
  vac:{ label:"VACACIONES", sub:"5 hrs/día", color:"#00e5a0", bg:"rgba(0,229,160,0.06)" },
  sem:{ label:"SEMESTRE", sub:"2-3 hrs L-V · 4-5 hrs S-D", color:"#38bdf8", bg:"rgba(56,189,248,0.06)" },
  sim:{ label:"SIMULACROS", sub:"Modo competencia", color:"#ff6b9d", bg:"rgba(255,107,157,0.06)" },
};

const STORAGE_KEY = "icpc-training-progress";

const STATUS = {
  0: { label: "No hecho", color: "rgba(255,255,255,0.15)", bg: "transparent", icon: "" },
  1: { label: "Practicando", color: "#fbbf24", bg: "#fbbf2420", icon: "⚡" },
  2: { label: "Completado", color: "#00e5a0", bg: "#00e5a0", icon: "✓" },
  3: { label: "Repasando", color: "#38bdf8", bg: "#38bdf820", icon: "🔄" },
};

function loadProgress() {
  try {
    const raw = localStorage.getItem(STORAGE_KEY);
    return raw ? JSON.parse(raw) : {};
  } catch { return {}; }
}

function saveProgress(data) {
  try { localStorage.setItem(STORAGE_KEY, JSON.stringify(data)); } catch {}
}

function Countdown() {
  const d = Math.max(0, Math.ceil((new Date("2026-11-07") - new Date()) / 864e5));
  return (
    <div style={{display:"flex",alignItems:"baseline",gap:6}}>
      <span style={{fontSize:32,fontWeight:800,fontFamily:"monospace",color:"#ff6b9d",lineHeight:1}}>{d}</span>
      <span style={{fontSize:12,color:"rgba(255,255,255,0.4)"}}>días para la Regional</span>
    </div>
  );
}

export default function Planner() {
  const [weekIdx, setWeekIdx] = useState(0);
  const [checked, setChecked] = useState(loadProgress);
  const [filterStarred, setFilterStarred] = useState(false);
  const [showExport, setShowExport] = useState(false);
  const [showDashboard, setShowDashboard] = useState(false);

  useEffect(() => { saveProgress(checked); }, [checked]);

  const w = WEEKS[weekIdx];
  const pi = PHASE_INFO[w.phase];

  const toggleCheck = (dayI, probI) => {
    const k = `${weekIdx}-${dayI}-${probI}`;
    setChecked(p => {
      const current = p[k] || 0;
      const next = (current + 1) % 4;
      return { ...p, [k]: next };
    });
  };

  const weekStats = useMemo(() => {
    return WEEKS.map((wk, wi) => {
      let total = 0, done = 0, mins = 0, starred = 0, starredDone = 0, practicing = 0, reviewing = 0;
      wk.days.forEach((d, di) => {
        d[1].forEach((p, pi) => {
          total++;
          mins += p[3];
          if (p[5]) starred++;
          const st = checked[`${wi}-${di}-${pi}`] || 0;
          if (st >= 2) {
            done++;
            if (p[5]) starredDone++;
          }
          if (st === 1) practicing++;
          if (st === 3) reviewing++;
        });
      });
      return { total, done, mins, starred, starredDone, practicing, reviewing };
    });
  }, [checked]);

  const globalStats = useMemo(() => {
    let total=0, done=0, cses=0, usaco=0, cf=0, starred=0, starredDone=0, practicing=0, reviewing=0;
    WEEKS.forEach((wk,wi) => wk.days.forEach((d,di) => d[1].forEach((p,pi) => {
      total++;
      const st = checked[`${wi}-${di}-${pi}`] || 0;
      if(st >= 2) done++;
      if(st === 1) practicing++;
      if(st === 3) reviewing++;
      if(p[1]==="C") cses++;
      else if(p[1].startsWith("U")) usaco++;
      else if(p[1]==="CF") cf++;
      if(p[5]) { starred++; if(st >= 2) starredDone++; }
    })));
    return {total,done,cses,usaco,cf,starred,starredDone,practicing,reviewing};
  }, [checked]);

  const techStats = useMemo(() => {
    const stats = {};
    WEEKS.forEach((wk,wi) => wk.days.forEach((d,di) => d[1].forEach((p,pi) => {
      const tech = p[2];
      if (!stats[tech]) stats[tech] = { total:0, done:0 };
      stats[tech].total++;
      const st = checked[`${wi}-${di}-${pi}`] || 0;
      if (st >= 2) stats[tech].done++;
    })));
    return stats;
  }, [checked]);

  const st = weekStats[weekIdx];

  const exportData = () => {
    const blob = new Blob([JSON.stringify(checked, null, 2)], { type: "application/json" });
    const url = URL.createObjectURL(blob);
    const a = document.createElement("a");
    a.href = url; a.download = "icpc-progress.json"; a.click();
    URL.revokeObjectURL(url);
  };

  const importData = (e) => {
    const file = e.target.files?.[0];
    if (!file) return;
    const reader = new FileReader();
    reader.onload = (ev) => {
      try {
        const data = JSON.parse(ev.target.result);
        setChecked(data);
      } catch { alert("Invalid file"); }
    };
    reader.readAsText(file);
  };

  return (
    <div style={{minHeight:"100vh",background:"#07070c",color:"#e0e0e8",fontFamily:"-apple-system,sans-serif",padding:"16px 12px"}}>
      <style>{`
        @import url('https://fonts.googleapis.com/css2?family=JetBrains+Mono:wght@400;600;700;800&display=swap');
        *{box-sizing:border-box}
        ::-webkit-scrollbar{width:3px;height:3px}
        ::-webkit-scrollbar-thumb{background:rgba(255,255,255,0.1);border-radius:2px}
      `}</style>

      <div style={{maxWidth:880,margin:"0 auto"}}>
        {/* Header */}
        <div style={{marginBottom:16}}>
          <div style={{fontSize:9,fontFamily:"monospace",color:"#00e5a0",letterSpacing:3,marginBottom:4}}>
            ICPC 2026 · DAILY TRAINING PLANNER
          </div>
          <div style={{display:"flex",justifyContent:"space-between",alignItems:"flex-end",flexWrap:"wrap",gap:8}}>
            <div>
              <h1 style={{fontSize:22,fontWeight:800,margin:0,fontFamily:"'JetBrains Mono',monospace",color:"#fff"}}>
                Plan Diario de Problemas
              </h1>
              <p style={{color:"rgba(255,255,255,0.3)",fontSize:12,margin:"2px 0 0"}}>
                Jun 22 → Nov 7 · 20 semanas · {globalStats.total} problemas · ⭐ {globalStats.starred} starred
              </p>
            </div>
            <Countdown/>
          </div>
        </div>

        {/* Global Stats */}
        <div style={{display:"grid",gridTemplateColumns:"repeat(4,1fr)",gap:8,marginBottom:16}}>
          {[
            {v:globalStats.done+"/"+globalStats.total, l:"COMPLETADOS", c:globalStats.done>0?"#00e5a0":"rgba(255,255,255,0.3)"},
            {v:globalStats.practicing, l:"⚡ PRACTICANDO", c:"#fbbf24"},
            {v:globalStats.reviewing, l:"🔄 REPASANDO", c:"#38bdf8"},
            {v:Math.round(globalStats.done/Math.max(globalStats.total,1)*100)+"%", l:"PROGRESO", c:"#a78bfa"},
          ].map((s,i) => (
            <div key={i} style={{background:"rgba(255,255,255,0.02)",border:"1px solid rgba(255,255,255,0.04)",borderRadius:8,padding:"10px 8px",textAlign:"center"}}>
              <div style={{fontFamily:"monospace",fontSize:18,fontWeight:800,color:s.c,lineHeight:1}}>{s.v}</div>
              <div style={{fontSize:8,color:"rgba(255,255,255,0.25)",marginTop:4,letterSpacing:1,fontFamily:"monospace"}}>{s.l}</div>
            </div>
          ))}
        </div>

        {/* Platform Stats */}
        <div style={{display:"grid",gridTemplateColumns:"repeat(4,1fr)",gap:8,marginBottom:16}}>
          {[
            {v:globalStats.cses, l:"CSES", c:"#00e5a0"},
            {v:globalStats.usaco, l:"USACO", c:"#fbbf24"},
            {v:globalStats.cf, l:"CF/CONTEST", c:"#ff6b6b"},
            {v:globalStats.starredDone+"/"+globalStats.starred, l:"⭐ STARRED", c:"#fbbf24"},
          ].map((s,i) => (
            <div key={i} style={{background:"rgba(255,255,255,0.02)",border:"1px solid rgba(255,255,255,0.04)",borderRadius:8,padding:"8px 6px",textAlign:"center"}}>
              <div style={{fontFamily:"monospace",fontSize:16,fontWeight:800,color:s.c,lineHeight:1}}>{s.v}</div>
              <div style={{fontSize:7,color:"rgba(255,255,255,0.25)",marginTop:3,letterSpacing:1,fontFamily:"monospace"}}>{s.l}</div>
            </div>
          ))}
        </div>

        {/* Dashboard */}
        {showDashboard && <Dashboard weeks={WEEKS} checked={checked} />}

        {/* Week Selector */}
        <div style={{display:"flex",gap:3,marginBottom:4,overflowX:"auto",paddingBottom:4}}>
          {WEEKS.map((wk,i) => {
            const s = weekStats[i];
            const pct = s.total>0 ? s.done/s.total : 0;
            const phi = PHASE_INFO[wk.phase];
            const active = weekIdx===i;
            return (
              <button key={i} onClick={() => setWeekIdx(i)} style={{
                minWidth:38, padding:"6px 4px", borderRadius:6, border:"none", cursor:"pointer",
                background: active ? `${phi.color}20` : pct===1 ? "rgba(0,229,160,0.1)" : "rgba(255,255,255,0.02)",
                display:"flex", flexDirection:"column", alignItems:"center", gap:2,
                borderBottom: active ? `2px solid ${phi.color}` : "2px solid transparent",
                transition:"all 0.1s",
              }}>
                <span style={{fontSize:9,fontFamily:"monospace",fontWeight:700,color:active?phi.color:pct===1?"#00e5a0":"rgba(255,255,255,0.3)"}}>
                  {i+1}
                </span>
                {s.total>0 && (
                  <div style={{width:20,height:2,borderRadius:1,background:"rgba(255,255,255,0.06)"}}>
                    <div style={{width:`${pct*100}%`,height:"100%",borderRadius:1,background:pct===1?"#00e5a0":phi.color,transition:"width 0.3s"}}/>
                  </div>
                )}
              </button>
            );
          })}
        </div>

        {/* Phase Labels + Controls */}
        <div style={{display:"flex",gap:8,marginBottom:14,fontSize:8,fontFamily:"monospace",alignItems:"center",flexWrap:"wrap"}}>
          <span style={{color:"rgba(255,255,255,0.2)"}}>S1–6</span>
          <span style={{color:"#00e5a0",letterSpacing:1}}>VACACIONES</span>
          <span style={{color:"rgba(255,255,255,0.15)"}}>|</span>
          <span style={{color:"rgba(255,255,255,0.2)"}}>S7–16</span>
          <span style={{color:"#38bdf8",letterSpacing:1}}>SEMESTRE</span>
          <span style={{color:"rgba(255,255,255,0.15)"}}>|</span>
          <span style={{color:"rgba(255,255,255,0.2)"}}>S17–20</span>
          <span style={{color:"#ff6b9d",letterSpacing:1}}>SIMULACROS</span>
          <div style={{marginLeft:"auto",display:"flex",gap:6}}>
            <button onClick={() => setShowDashboard(!showDashboard)} style={{
              padding:"3px 8px",borderRadius:4,border:"none",cursor:"pointer",fontSize:9,fontFamily:"monospace",
              background:showDashboard?"#a78bfa20":"rgba(255,255,255,0.04)",
              color:showDashboard?"#a78bfa":"rgba(255,255,255,0.4)",
            }}>
              📊 Dashboard
            </button>
            <button onClick={() => setFilterStarred(!filterStarred)} style={{
              padding:"3px 8px",borderRadius:4,border:"none",cursor:"pointer",fontSize:9,fontFamily:"monospace",
              background:filterStarred?"#fbbf2420":"rgba(255,255,255,0.04)",
              color:filterStarred?"#fbbf24":"rgba(255,255,255,0.4)",
            }}>
              ⭐ Solo Starred
            </button>
            <button onClick={() => setShowExport(!showExport)} style={{
              padding:"3px 8px",borderRadius:4,border:"none",cursor:"pointer",fontSize:9,fontFamily:"monospace",
              background:"rgba(255,255,255,0.04)",color:"rgba(255,255,255,0.4)",
            }}>
              💾 Sync
            </button>
          </div>
        </div>

        {/* Export/Import Panel */}
        {showExport && (
          <div style={{background:"rgba(255,255,255,0.02)",border:"1px solid rgba(255,255,255,0.06)",borderRadius:8,padding:"12px",marginBottom:12}}>
            <div style={{fontSize:10,fontFamily:"monospace",color:"rgba(255,255,255,0.5)",marginBottom:8}}>SINCRONIZAR PROGRESO</div>
            <div style={{display:"flex",gap:8}}>
              <button onClick={exportData} style={{
                padding:"6px 12px",borderRadius:4,border:"1px solid rgba(255,255,255,0.1)",
                background:"rgba(0,229,160,0.1)",color:"#00e5a0",cursor:"pointer",fontSize:10,fontFamily:"monospace",
              }}>
                📤 Exportar
              </button>
              <label style={{
                padding:"6px 12px",borderRadius:4,border:"1px solid rgba(255,255,255,0.1)",
                background:"rgba(56,189,248,0.1)",color:"#38bdf8",cursor:"pointer",fontSize:10,fontFamily:"monospace",
              }}>
                📥 Importar
                <input type="file" accept=".json" onChange={importData} style={{display:"none"}}/>
              </label>
            </div>
            <p style={{fontSize:9,color:"rgba(255,255,255,0.3)",margin:"8px 0 0"}}>
              El progreso se guarda automáticamente en este navegador (localStorage). Exporta para moverlo a otro dispositivo.
            </p>
          </div>
        )}

        {/* Week Header */}
        <div style={{background:pi.bg,border:`1px solid ${pi.color}20`,borderRadius:10,padding:"14px 16px",marginBottom:12}}>
          <div style={{display:"flex",justifyContent:"space-between",alignItems:"flex-start",flexWrap:"wrap",gap:8}}>
            <div>
              <div style={{display:"flex",alignItems:"center",gap:8,marginBottom:2}}>
                <span style={{fontSize:9,fontFamily:"monospace",color:pi.color,fontWeight:700,letterSpacing:2}}>
                  SEMANA {w.id} · {w.dates}
                </span>
                <span style={{fontSize:8,padding:"2px 6px",borderRadius:3,background:`${pi.color}15`,color:pi.color,fontFamily:"monospace",fontWeight:600}}>
                  {pi.label} · {pi.sub}
                </span>
              </div>
              <h2 style={{fontSize:18,fontWeight:800,margin:"4px 0 0",fontFamily:"'JetBrains Mono',monospace",color:"#fff"}}>
                {w.title}
              </h2>
              <p style={{fontSize:12,color:"rgba(255,255,255,0.4)",margin:"4px 0 0",lineHeight:1.4}}>{w.focus}</p>
            </div>
            <div style={{textAlign:"right"}}>
              <div style={{fontFamily:"monospace",fontSize:20,fontWeight:800,color:st.done===st.total&&st.total>0?"#00e5a0":"#fff"}}>
                {st.done}/{st.total}
              </div>
              {st.starred > 0 && (
                <div style={{fontSize:10,fontFamily:"monospace",color:"#fbbf24"}}>
                  ⭐ {st.starredDone}/{st.starred}
                </div>
              )}
              <div style={{fontSize:9,color:"rgba(255,255,255,0.3)",fontFamily:"monospace"}}>
                ~{Math.round(st.mins/60)}hrs estimadas
              </div>
            </div>
          </div>
        </div>

        {/* Days */}
        <div style={{display:"flex",flexDirection:"column",gap:6,marginBottom:20}}>
          {w.days.map(([dow, problems], di) => {
            const filteredProblems = filterStarred
              ? problems.map((p, i) => ({p, i, show: p[5] === 1})).filter(x => x.show)
              : problems.map((p, i) => ({p, i, show: true}));
            if (filteredProblems.length === 0) return null;
            return (
              <div key={di} style={{
                background:"rgba(255,255,255,0.02)",
                border:"1px solid rgba(255,255,255,0.04)",
                borderRadius:8, padding:"10px 12px",
              }}>
                <div style={{display:"flex",alignItems:"center",gap:8,marginBottom:8}}>
                  <span style={{
                    fontFamily:"monospace",fontSize:11,fontWeight:700,
                    color:dow==="Sáb"?"#ff6b9d":dow==="Dom"?"#a78bfa":"rgba(255,255,255,0.5)",
                    minWidth:28,
                  }}>
                    {dow}
                  </span>
                  <div style={{flex:1,height:1,background:"rgba(255,255,255,0.04)"}}/>
                  <span style={{fontSize:9,fontFamily:"monospace",color:"rgba(255,255,255,0.2)"}}>
                    {problems.reduce((a,p)=>a+p[3],0)} min
                  </span>
                </div>
                <div style={{display:"flex",flexDirection:"column",gap:5,paddingLeft:4}}>
                  {filteredProblems.map(({p, i: pi}) => {
                    const [name,src,tech,mins,url,starred] = p;
                    const status = checked[`${weekIdx}-${di}-${pi}`] || 0;
                    const statusInfo = STATUS[status];
                    const isDone = status >= 2;
                    const isContest = tech==="contest";
                    return (
                      <div key={pi}
                        onClick={() => toggleCheck(di, pi)}
                        style={{
                          display:"flex",alignItems:"center",gap:8,cursor:"pointer",
                          opacity:status===2?0.5:1, transition:"opacity 0.15s",
                        }}>
                        <div style={{
                          width:18,height:18,borderRadius:4,flexShrink:0,
                          border:`2px solid ${statusInfo.color}`,
                          background:status===2?statusInfo.bg:"transparent",
                          display:"flex",alignItems:"center",justifyContent:"center",
                          transition:"all 0.15s",
                        }}>
                          {status === 2 && <span style={{fontSize:11,color:"#07070c",fontWeight:800}}>✓</span>}
                          {status === 1 && <span style={{fontSize:10}}>⚡</span>}
                          {status === 3 && <span style={{fontSize:9}}>🔄</span>}
                        </div>
                        {starred === 1 && <span style={{fontSize:10}}>⭐</span>}
                        {url ? (
                          <a href={url} target="_blank" rel="noopener" onClick={e => e.stopPropagation()} style={{
                            fontSize:13,color:isContest?"#ff6b9d":isDone?"rgba(255,255,255,0.4)":"#fff",
                            fontWeight:isContest?700:400,
                            textDecoration:isDone?"line-through":"none",
                            flex:1,
                          }}>
                            {name}
                          </a>
                        ) : (
                          <span style={{
                            fontSize:13,color:isContest?"#ff6b9d":"#fff",fontWeight:isContest?700:400,
                            textDecoration:isDone?"line-through":"none",
                            flex:1,
                          }}>
                            {name}
                          </span>
                        )}
                        {status > 0 && (
                          <span style={{
                            fontSize:7,padding:"1px 4px",borderRadius:2,
                            background:`${statusInfo.color}20`,color:statusInfo.color,
                            fontFamily:"monospace",fontWeight:600,
                          }}>
                            {statusInfo.label}
                          </span>
                        )}
                        <span style={{
                          fontSize:8,padding:"2px 5px",borderRadius:3,
                          background:`${SRC_COLORS[src]}15`,color:SRC_COLORS[src],
                          fontFamily:"monospace",fontWeight:600,
                        }}>
                          {SRC_LABELS[src]}
                        </span>
                        <span style={{
                          fontSize:8,padding:"2px 5px",borderRadius:3,
                          background:`${TECH_COLORS[tech]}12`,color:TECH_COLORS[tech],
                          fontFamily:"monospace",fontWeight:600,
                        }}>
                          {TECH_LABELS[tech]}
                        </span>
                        <span style={{fontSize:10,fontFamily:"monospace",color:"rgba(255,255,255,0.2)",minWidth:32,textAlign:"right"}}>
                          {mins>0?mins+"m":"—"}
                        </span>
                      </div>
                    );
                  })}
                </div>
              </div>
            );
          })}
        </div>

        {/* Status Legend */}
        <div style={{
          background:"rgba(255,255,255,0.02)",border:"1px solid rgba(255,255,255,0.04)",
          borderRadius:8,padding:"8px 14px",marginBottom:12,
        }}>
          <div style={{fontSize:9,fontFamily:"monospace",color:"rgba(255,255,255,0.3)",letterSpacing:1,marginBottom:6}}>
            ESTADOS (click para ciclar)
          </div>
          <div style={{display:"flex",flexWrap:"wrap",gap:12}}>
            {Object.entries(STATUS).map(([k,v]) => (
              <div key={k} style={{display:"flex",alignItems:"center",gap:4}}>
                <div style={{
                  width:14,height:14,borderRadius:3,
                  border:`2px solid ${v.color}`,
                  background:k==="2"?v.bg:"transparent",
                  display:"flex",alignItems:"center",justifyContent:"center",
                }}>
                  {k === "2" && <span style={{fontSize:8,color:"#07070c",fontWeight:800}}>✓</span>}
                  {k === "1" && <span style={{fontSize:8}}>⚡</span>}
                  {k === "3" && <span style={{fontSize:7}}>🔄</span>}
                </div>
                <span style={{fontSize:9,color:v.color,fontFamily:"monospace"}}>{v.label}</span>
              </div>
            ))}
          </div>
        </div>

        {/* Tech Stats */}
        <div style={{
          background:"rgba(255,255,255,0.02)",border:"1px solid rgba(255,255,255,0.04)",
          borderRadius:8,padding:"10px 14px",marginBottom:12,
        }}>
          <div style={{fontSize:9,fontFamily:"monospace",color:"rgba(255,255,255,0.3)",letterSpacing:1,marginBottom:8}}>
            PROGRESO POR TÉCNICA
          </div>
          <div style={{display:"flex",flexWrap:"wrap",gap:6}}>
            {Object.entries(techStats)
              .filter(([k]) => !["mixed","contest"].includes(k))
              .sort((a,b) => b[1].total - a[1].total)
              .map(([k,v]) => (
                <span key={k} style={{
                  fontSize:9,padding:"2px 6px",borderRadius:3,
                  background:`${TECH_COLORS[k]||"#64748b"}10`,color:TECH_COLORS[k]||"#64748b",
                  fontFamily:"monospace",
                }}>
                  {TECH_LABELS[k]||k} {v.done}/{v.total}
                </span>
              ))}
          </div>
        </div>

        {/* Navigation */}
        <div style={{display:"flex",justifyContent:"space-between",gap:8}}>
          <button onClick={() => setWeekIdx(Math.max(0,weekIdx-1))} disabled={weekIdx===0}
            style={{flex:1,padding:"10px",borderRadius:8,border:"1px solid rgba(255,255,255,0.06)",
              background:"rgba(255,255,255,0.02)",color:weekIdx===0?"rgba(255,255,255,0.15)":"rgba(255,255,255,0.5)",
              cursor:weekIdx===0?"default":"pointer",fontFamily:"monospace",fontSize:12}}>
            ← Semana {weekIdx}
          </button>
          <button onClick={() => setWeekIdx(Math.min(WEEKS.length-1,weekIdx+1))} disabled={weekIdx===WEEKS.length-1}
            style={{flex:1,padding:"10px",borderRadius:8,border:"1px solid rgba(255,255,255,0.06)",
              background:"rgba(255,255,255,0.02)",color:weekIdx===WEEKS.length-1?"rgba(255,255,255,0.15)":"rgba(255,255,255,0.5)",
              cursor:weekIdx===WEEKS.length-1?"default":"pointer",fontFamily:"monospace",fontSize:12}}>
            Semana {weekIdx+2} →
          </button>
        </div>

        <p style={{fontSize:8,color:"rgba(255,255,255,0.12)",textAlign:"center",fontFamily:"monospace",marginTop:12}}>
          Plan calibrado · 20 semanas · CSES + USACO Guide + CF · Math deprioritizado · Progreso guardado en localStorage
        </p>
      </div>
    </div>
  );
}
