##############################
# Country definition for CHI #
##############################
province = {
  id = 1215 # 青島
}
province = {
  id = 1217 # 連雲
}
province = {
  id = 1219 # 南通
}
province = {
  id = 1228 # 鄭縣
}
province = {
  id = 1231 # 襄陽
}
province = {
  id = 1232 # 漢口市
}
province = {
  id = 1235 # 南京市
}
province = {
  id = 1238 # 杭州
}
province = {
  id = 1239 # 寧波
}
province = {
  id = 1240 # 永嘉（溫州）
}
province = {
  id = 1244 # 福州
}
province = {
  id = 1247 # 廈門
}
province = {
  id = 1251 # 南昌
}
province = {
  id = 1255 # 長沙
}
province = {
  id = 1269 # 西安
}
province = {
  id = 1276 # 蘭州
}
province = {
  id = 1360 # 成都市
}
province = {
  id = 1364 # 貴陽
}

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  capital            = 1235 # 南京市
  dissent            = 15
  manpower           = 2200
  tc_mod                 = 1
  research_mod           = 1
  peacetime_ic_mod       = 0.9
  # Resource Reserves
  energy         = 1000
  metal          = 500
  rare_materials = 500
  oil            = 500
  supplies       = 1000
  money          = 200
  transports     = 40
  escorts        = 10

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CGX value = 50 }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 50 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
    relation = { tag = U01 value = 50 }
    relation = { tag = U02 value = 50 }
    relation = { tag = GER value = 20 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }

  nationalprovinces      = { 1170 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1221 1222 1223 1224 1225 1226 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1293 1294 1305 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1327 1360 1361 1362 1363 1364 1365 1374 1375 1377 1378 1379 1380 1381 1382 1385 1386 1387 1388 1389 1390 1394 1395 1396 1397 1398 1399 1401 1402 1403 1404 1418 1419 1420 1421 1430 1431 1432 1433 1434 1435 1436 1437 1438 1439 1440 1441 1442 1443 1444 1445 1446 1447 1448 1450 1451 1452 1453 1455 1530 1595 1623 1779 1810 1811 1875 1876 1884 1885 1886 1887 1888 1889 1890 1894 1898 2605 2606 2607 2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632 2633 2634 2635 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2673 2674 2675 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2699 2700 2701 2702 2703 2704 2705 2706 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716 2717 2718 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2736 2737 2738 2739 2740 2741 2742 2743 2744 2745 2746 2747 2748 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2781 2782 2783 2784 2785 2786 2787 2788 2789 2790 2791 2792 2793 2794 2795 2796 2797 2798 2799 2800 2801 2802 2803 2804 2805 2806 2807 2808 2809 2810 2811 2812 2813 2814 2815 2816 2817 2818 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 2838 2839 2840 2841 2842 2843 2844 2845 2846 2847 2848 2849 2850 2851 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 2865 2866 2867 2868 2869 2870 2871 2872 2873 2875 2876 2877 2878 2879 2880 2881 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2930 2931 2932 2933 2934 2935 2936 2937 2938 2939 2940 2941 2942 2943 2944 2945 2946 2947 2948 2949 2950 2951 2952 2953 2954 2957 2962 2964 2965 2966 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2996 2997 2998 2999 3000 3464 3470 3471 3472 3478 3480 3481 3590 3591 3592 3593 3594 3767 3768 2990 2991 2992 2993 2994 2995 2955 2956 2960 2963 2958 2959 2961 2874 3669 }
  ownedprovinces         = { 1217 1218 1219 1220 1221 1222 1223 1224 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1238 1239 1240 1215 1241 1242 1243 1244 1245 1246 1247 1250 1251 1252 1253 1254 1255 1256 1257 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1274 1276 1277 1278 1279 1280 1360 1361 1363 1364 1365 1875 1876 1884 1885 1886 1887 1888 1889 1890 2606 2607 2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2625 2626 2627 2628 2629 2630 2631 2632 2633 2634 2635 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2674 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2699 2700 2701 2702 2703 2704 2705 2706 2737 2738 2740 2741 2742 2743 2744 2745 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2781 2782 2783 2784 2786 2787 2788 2790 2795 2797 2798 2799 2800 2801 2838 2839 2840 2841 2842 2843 2844 2845 2846 2847 2848 2849 2976 2996 3000 3590 3592 3594 1270 1275 2850 2851 1811 1281 1211 1212 2994 2992 2993 }
  controlledprovinces    = { 1217 1218 1219 1220 1221 1222 1223 1224 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1238 1239 1240 1215 1241 1242 1243 1244 1245 1246 1247 1250 1251 1252 1253 1254 1255 1256 1257 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1274 1276 1277 1278 1279 1280 1360 1361 1363 1364 1365 1875 1876 1884 1885 1886 1887 1888 1889 1890 2606 2607 2608 2609 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2625 2626 2627 2628 2629 2630 2631 2632 2633 2634 2635 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2674 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2699 2700 2701 2702 2703 2704 2705 2706 2737 2738 2740 2741 2742 2743 2744 2745 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2781 2782 2783 2784 2786 2787 2788 2790 2795 2797 2798 2799 2800 2801 2838 2839 2840 2841 2842 2843 2844 2845 2846 2847 2848 2849 2976 2996 3000 3590 3592 3594 1270 1275 2850 2851 1811 1281 1211 1212 2994 2992 2993 }

  techapps               = { 5050 5080 5170 5180 5660 5310 1010 1100 6050 6010 3550 3010 8010 8020 9700 9710 7400 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 10
    defense_lobby     = 7
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 52001 } # 林森 
  headofgovernment       = { type = 9 id = 52002 } # 蒋介石
  foreignminister        = { type = 9 id = 52003 } # 张群 
  armamentminister       = { type = 9 id = 52004 } # 孔祥熙 
  ministerofsecurity     = { type = 9 id = 52064 } # 陈诚
  ministerofintelligence = { type = 9 id = 52078 } # 戴笠 
  chiefofstaff           = { type = 9 id = 52007 } # 程潜
  chiefofarmy            = { type = 9 id = 52022 } # 蒋介石
  chiefofnavy            = { type = 9 id = 52009 } # 陈绍宽 
  chiefofair             = { type = 9 id = 52010 } # 周至柔 
  dormant_leaders        = { 50000 50004 50012 50013 50020 50021 50027 50029 50031 50051 50072 50085 50087 50090 50094 50100 50101 50132 50143 50160 50164 50182 50186 50193 50209 50428 50226 50228 50230 50232 50245 50262 50264 50268 50269 50272 50279 50291 50292 50296 50297 50300 50301 50314 50337 50348 50377 50392 50393 50394 50395 50396 50397 50398 50370 50377 50500 50501 50502 50503 50504 50505 50506 50507 50508 50509 50510 50511 50512 50513 50514 50515 50516 50600 50601 50602 50603 50604 50605 50606 50607 50608 50609 50610 50611 50612 50613 50614 50615 50616 50617 50618 50619 50620 50621 50700 50701 50702 50703 50704 50705 50706 50707 50708 50709 50710 50711 50712 50713 50714 50715 50716 50717 50718 50719 50800 50801 50802 50803 50804 50805 50806 50807 50808 50809 50810 50811 50812 50813 50814 50815 50816 50817 50818 50819 50820 50821 50822 50823 50824 50825 50826 50827 50828 50900 50901 50902 50903 50904 50905 50906 50907 50908 50909 50910 50911 50912 50913 50914 50915 50916 50917 }
  dormant_teams          = { 1003 1007 1015 1020 1025 1026 1029 1030 1031 1032 1033 1034 1035 1036 1037 1038 1039 1040 1042 1045 1046 1047 1050 1051 1052 1053 1054 1055 1056 1057 1058 1060 1061 1062 }

  landunit = {
    id       = { type = 22000 id = 1001 }
    name     = "國民革命軍第1軍 "
    location = 1276
    leader   = 50122
    division = {
      id             = { type = 22000 id = 1 }
      name           = "陸軍第1師（第1軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = artillery
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2078 }
    name     = "國民革命軍第1軍78師 "
    location = 1276
    leader   = 50187
    division = {
      id             = { type = 22000 id = 78 }
      name           = "陸軍第78師（第1軍-嫡系）"
      type           = motorized
      model          = 37
      extra          = engineer
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1002 }
    name     = "國民革命軍第2軍 "
    location = 1278
    leader   = 50189
    division = {
      id             = { type = 22000 id = 9 }
      name           = "陸軍第9師（第2軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 80 }
      name           = "陸軍第80師（第2軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2002 }
    name     = "國民革命軍第2軍3師 "
    location = 1278
    leader   = 50190
    division = {
      id             = { type = 22000 id = 3 }
      name           = "陸軍第3師（第2軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = artillery
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1003 }
    name     = "國民革命軍第3軍 "
    location = 1262
    division = {
      id             = { type = 22000 id = 7 }
      name           = "陸軍第7師（第3軍-旁系滇軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 12 }
      name           = "陸軍第12師（第3軍-旁系滇軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1004 }
    name     = "國民革命軍第4軍 "
    location = 1257
    leader   = 50332
    division = {
      id             = { type = 22000 id = 59 }
      name           = "陸軍第59師（第4軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2004 }
    name     = "國民革命軍第4軍90師 "
    location = 1257
    leader   = 50244
    division = {
      id             = { type = 22000 id = 90 }
      name           = "陸軍第90師（第4軍-旁系粵軍） "
      type           = infantry
      model          = 37
      strength       = 50
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1005 }
    name     = "國民革命軍第5軍 "
    location = 1364
    leader   = 50115
    division = {
      id             = { type = 22000 id = 92 }
      name           = "陸軍第92師（第5軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = engineer
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2005 }
    name     = "國民革命軍第5軍93師 "
    location = 1364
    leader   = 50142
    division = {
      id             = { type = 22000 id = 93 }
      name           = "陸軍第93師（第5軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1008 }
    name     = "國民革命軍第8軍 "
    location = 1217
    leader   = 50125
    division = {
      id             = { type = 22000 id = 95 }
      name           = "陸軍第95師（第8軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = artillery
      strength       = 80
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 166 }
      name           = "陸軍第166師（第8軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2008 }
    name     = " 稅警總團 "
    location = 1217
    leader   = 50265
    division = {
      id             = { type = 22000 id = 338 }
      name           = "稅警總團（財政部） "
      type           = motorized
      model          = 38
      extra          = armored_car
      brigade_model  = 1
      strength       = 100
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1009 }
    name     = "國民革命軍第9軍 "
    location = 1227
    leader   = 50089
    division = {
      id             = { type = 22000 id = 54 }
      name           = "陸軍第54師（第9軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2009 }
    name     = "國民革命軍第9軍47師 "
    location = 1227
    leader   = 50251
    division = {
      id             = { type = 22000 id = 47 }
      name           = "陸軍第47師（第9軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 3009 }
    name     = "國民革命軍第9軍99師 "
    location = 1227
    leader   = 50159
    division = {
      id             = { type = 22000 id = 99 }
      name           = "陸軍第99師（第9軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1010 }
    name     = "國民革命軍第10軍 "
    location = 1221
    leader   = 50112
    division = {
      id             = { type = 22000 id = 41 }
      name           = "陸軍第41師（第10軍-旁系直軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 48 }
      name           = "陸軍第48師（第10軍-旁系直軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1013 }
    name     = "國民革命軍第13軍 "
    location = 1228
    leader   = 50278
    division = {
      id             = { type = 22000 id = 23 }
      name           = "陸軍第23師（第13軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = artillery
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2013 }
    name     = "國民革命軍第13軍4師 "
    location = 1228
    leader   = 50325
    division = {
      id             = { type = 22000 id = 4 }
      name           = "陸軍第4師（第13軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 3013 }
    name     = "國民革命軍第13軍89師 "
    location = 1228
    leader   = 50010
    division = {
      id             = { type = 22000 id = 89 }
      name           = "陸軍第89師（第13軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1014 }
    name     = "國民革命軍第14軍 "
    location = 1223
    leader   = 50180
    division = {
      id             = { type = 22000 id = 10 }
      name           = "陸軍第10師（第14軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2014 }
    name     = "國民革命軍第14軍83師 "
    location = 1223
    leader   = 50210
    division = {
      id             = { type = 22000 id = 83 }
      name           = "陸軍第83師（第14軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = engineer
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 3014 }
    name     = "國民革命軍第14軍85師 "
    location = 1223
    leader   = 50036
    division = {
      id             = { type = 22000 id = 85 }
      name           = "陸軍第85師（第14軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1015 }
    name     = "國民革命軍第15軍 "
    location = 1230
    leader   = 50214
    division = {
      id             = { type = 22000 id = 64 }
      name           = "陸軍第64師（第15軍-旁系豫軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 65 }
      name           = "陸軍第65師（第15軍-旁系豫軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1016 }
    name     = "國民革命軍第16軍 "
    location = 1255
    division = {
      id             = { type = 22000 id = 53 }
      name           = "陸軍第53師（第16軍-旁系湘軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1017 }
    name     = "國民革命軍第17軍 "
    location = 1269
    leader   = 50176
    division = {
      id             = { type = 22000 id = 21 }
      name           = "陸軍第21師（第17軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 84 }
      name           = "陸軍第84師（第17軍-旁系國民軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1018 }
    name     = "國民革命軍第18軍 "
    location = 1251
    leader   = 50219
    division = {
      id             = { type = 22000 id = 11 }
      name           = "陸軍第11師（第18軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = engineer
      strength       = 80
      experience     = 45
    }
    division = {
      id             = { type = 22000 id = 60 }
      name           = "陸軍第60師（第18軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 67 }
      name           = "陸軍第67師（第18軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1020 }
    name     = "國民革命軍第20軍 "
    location = 1265
    leader   = 50343
    division = {
      id             = { type = 22000 id = 133 }
      name           = "陸軍第133師（第20軍-川軍楊森） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 134 }
      name           = "陸軍第134師（第20軍-川軍楊森） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 1021 }
    name     = "國民革命軍第21軍 "
    location = 1280
    leader   = 50281
    division = {
      id             = { type = 22000 id = 146 }
      name           = "陸軍第146師（第21軍-川軍劉湘） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 162 }
      name           = "陸軍第162師（第21軍-川軍劉湘） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2021 }
    name     = "國民革命軍第21軍145師 "
    location = 1280
    leader   = 50138
    division = {
      id             = { type = 22000 id = 145 }
      name           = "陸軍第145師（第21軍-川軍劉湘）"
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1022 }
    name     = "國民革命軍第22軍 "
    location = 1255
    division = {
      id             = { type = 22000 id = 18 }
      name           = "陸軍第18師（第22軍-旁系湘軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 46 }
      name           = "陸軍第46師（第22軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 50 }
      name           = "陸軍第50師（第22軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1023 }
    name     = "國民革命軍第23軍 "
    location = 1280
    leader   = 50248
    division = {
      id             = { type = 22000 id = 147 }
      name           = "陸軍第147師（第23軍-川軍劉湘） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 167 }
      name           = "陸軍第167師（第23軍-川軍劉湘） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2023 }
    name     = "國民革命軍第23軍148師 "
    location = 1280
    leader   = 50037
    division = {
      id             = { type = 22000 id = 148 }
      name           = "陸軍第148師（第23軍-川軍劉湘） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1024 }
    name     = "國民革命軍第24軍 "
    location = 1361
    leader   = 50218
    division = {
      id             = { type = 22000 id = 136 }
      name           = "陸軍第136師（第24軍-川軍劉文輝） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 137 }
      name           = "陸軍第137師（第24軍-川軍劉文輝） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1025 }
    name     = "國民革命軍第25軍 "
    location = 1232
    leader   = 50307
    division = {
      id             = { type = 22000 id = 13 }
      name           = "陸軍第13師（第25軍-旁系鄂軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 52 }
      name           = "陸軍第52師（第25軍-雜牌閩軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 165 }
      name           = "陸軍第165師（第25軍-雜牌甘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1026 }
    name     = "國民革命軍第26軍 "
    location = 1229
    leader   = 50147
    division = {
      id             = { type = 22000 id = 32 }
      name           = "陸軍第32師（第26軍-旁系西北） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 33 }
      name           = "陸軍第33師（第26軍-旁系西北） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 44 }
      name           = "陸軍第44師（第26軍-旁系西北） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1027 }
    name     = "國民革命軍第27軍 "
    location = 1222
    leader   = 50007
    division = {
      id             = { type = 22000 id = 75 }
      name           = "陸軍第75師（第27軍-旁系豫軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 76 }
      name           = "陸軍第76師（第27軍-旁系豫軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1028 }
    name     = "國民革命軍第28軍 "
    location = 1255
    leader   = 50204
    division = {
      id             = { type = 22000 id = 16 }
      name           = "陸軍第16師（第28軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 62 }
      name           = "陸軍第62師（第28軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1030 }
    name     = "國民革命軍第30軍 "
    location = 1224
    leader   = 50266
    division = {
      id             = { type = 22000 id = 30 }
      name           = "陸軍第30師（第30軍-旁系西北） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2030 }
    name     = "國民革命軍第30軍31師 "
    location = 1224
    leader   = 50053
    division = {
      id             = { type = 22000 id = 31 }
      name           = "陸軍第31師（第30軍-旁系西北） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1032 }
    name     = "國民革命軍第32軍 "
    location = 1209
    leader   = 50253
    division = {
      id             = { type = 22000 id = 139 }
      name           = "陸軍第139師（第32軍-旁系晉軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 141 }
      name           = "陸軍第141師（第32軍-旁系晉軍） "
      type           = infantry
      model          = 37
      extra          = engineer
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 142 }
      name           = "陸軍第142師（第32軍-旁系晉軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1036 }
    name     = "國民革命軍第36軍 "
    location = 1276
    division = {
      id             = { type = 22000 id = 5 }
      name           = "陸軍第5師（第36軍-旁系贛軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 96 }
      name           = "陸軍第96師（第36軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1037 }
    name     = "國民革命軍第37軍 "
    location = 1257
    leader   = 50241
    division = {
      id             = { type = 22000 id = 24 }
      name           = "陸軍第24師（第37軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 63 }
      name           = "陸軍第63師（第37軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1038 }
    name     = "國民革命軍第38軍 "
    location = 1224
    leader   = 50270
    division = {
      id             = { type = 22000 id = 177 }
      name           = "陸軍第177師（第38軍-旁系西北） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2038 }
    name     = "國民革命軍第38軍17師 "
    location = 1224
    leader   = 50026
    division = {
      id             = { type = 22000 id = 17 }
      name           = "陸軍第17師（第38軍-旁系西北） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1039 }
    name     = "國民革命軍第39軍 "
    location = 1276
    leader   = 50206
    division = {
      id             = { type = 22000 id = 34 }
      name           = "陸軍第34師（第39軍-旁系陜軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 45 }
      name           = "陸軍第45師（第39軍-雜牌豫軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    division = {
      id             = { type = 22000 id = 56 }
      name           = "陸軍第56師（第39軍-旁系皖軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1040 }
    name     = "國民革命軍第40軍 "
    location = 1224
    leader   = 50250
    division = {
      id             = { type = 22000 id = 39 }
      name           = "陸軍第39師（第40軍-旁系西北） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1041 }
    name     = "國民革命軍第41軍 "
    location = 1279
    leader   = 50263
    division = {
      id             = { type = 22000 id = 123 }
      name           = "陸軍第123師（第41軍-川軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 124 }
      name           = "陸軍第124師（第41軍-川軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2041 }
    name     = "國民革命軍第41軍122師 "
    location = 1279
    leader   = 50322
    division = {
      id             = { type = 22000 id = 122 }
      name           = "陸軍第122師（第41軍-川軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1042 }
    name     = "國民革命軍第42軍 "
    location = 1229
    leader   = 50079
    division = {
      id             = { type = 22000 id = 27 }
      name           = "陸軍第27師（第42軍-旁系西北） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2042 }
    name     = "國民革命軍第42軍獨44旅 "
    location = 1229
    leader   = 50287
    division = {
      id             = { type = 22000 id = 744 }
      name           = "陸軍獨立第44旅（第42軍-旁系西北）"
      type           = militia
      model          = 9
      strength       = 80
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1043 }
    name     = "國民革命軍第43軍 "
    location = 1279
    leader   = 50162
    division = {
      id             = { type = 22000 id = 26 }
      name           = "陸軍第26師（第43軍-旁系川軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 734 }
      name           = "陸軍獨立第34旅（第43軍-旁系川軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1044 }
    name     = "國民革命軍第44軍 "
    location = 1360
    leader   = 50323
    division = {
      id             = { type = 22000 id = 149 }
      name           = "陸軍第149師（第44軍-川軍劉湘） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 150 }
      name           = "陸軍第150師（第44軍-川軍劉湘） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1045 }
    name     = "國民革命軍第45軍 "
    location = 1265
    leader   = 50284
    division = {
      id             = { type = 22000 id = 126 }
      name           = "陸軍第126師（第45軍-川軍鄧錫侯） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 127 }
      name           = "陸軍第127師（第45軍-川軍鄧錫侯） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 128 }
      name           = "陸軍第128師（第45軍-川軍鄧錫侯） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1046 }
    name     = "國民革命軍第46軍 "
    location = 1238
    leader   = 50028
    division = {
      id             = { type = 22000 id = 28 }
      name           = "陸軍第28師（第46軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 49 }
      name           = "陸軍第49師（第46軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 79 }
      name           = "陸軍第79師（第46軍-旁系浙軍）"
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1047 }
    name     = "國民革命軍第47軍 "
    location = 1265
    leader   = 50171
    division = {
      id             = { type = 22000 id = 104 }
      name           = "陸軍第104師（第47軍-旁系川軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 125 }
      name           = "陸軍第125師（第45軍-川軍鄧錫侯） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 1049 }
    name     = "國民革命軍第49軍 "
    location = 1278
    leader   = 50216
    division = {
      id             = { type = 22000 id = 105 }
      name           = "陸軍第105師（第49軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 109 }
      name           = "陸軍第109師（第49軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = artillery
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 119 }
      name           = "陸軍第119師（第53軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = engineer
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1050 }
    name     = "國民革命軍第50軍 "
    location = 1280
    leader   = 50161
    division = {
      id             = { type = 22000 id = 144 }
      name           = "陸軍第144師（第71軍-川軍劉湘） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1051 }
    name     = "國民革命軍第51軍 "
    location = 1269
    leader   = 50113
    division = {
      id             = { type = 22000 id = 113 }
      name           = "陸軍第113師（第51軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 114 }
      name           = "陸軍第114師（第51軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = engineer
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 118 }
      name           = "陸軍第118師（第51軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1052 }
    name     = "國民革命軍第52軍 "
    location = 1218
    leader   = 50154
    division = {
      id             = { type = 22000 id = 25 }
      name           = "陸軍第25師（第52軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2052 }
    name     = "國民革命軍第52軍第2師 "
    location = 1218
    leader   = 50043
    division = {
      id             = { type = 22000 id = 2 }
      name           = "陸軍第2師（第52軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = artillery
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1053 }
    name     = "國民革命軍第53軍 "
    location = 1277
    leader   = 50059
    division = {
      id             = { type = 22000 id = 91 }
      name           = "陸軍第91師（第53軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 116 }
      name           = "陸軍第116師（第53軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = engineer
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 130 }
      name           = "陸軍第130師（第53軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1054 }
    name     = "國民革命軍第54軍 "
    location = 1276
    leader   = 50137
    division = {
      id             = { type = 22000 id = 14 }
      name           = "陸軍第14師（第54軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1056 }
    name     = "國民革命軍第56軍 "
    location = 1263
    leader   = 50092
    division = {
      id             = { type = 22000 id = 161 }
      name           = "陸軍第161師（第56軍-川軍劉湘） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 163 }
      name           = "陸軍第163師（第56軍-川軍劉湘） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 164 }
      name           = "陸軍第164師（第56軍-川軍劉湘） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1057 }
    name     = "國民革命軍第57軍 "
    location = 1269
    leader   = 50005
    division = {
      id             = { type = 22000 id = 106 }
      name           = "陸軍第106師（第57軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 111 }
      name           = "陸軍第111師（第57軍-東北軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 112 }
      name           = "陸軍第112師（第57軍-東北軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1058 }
    name     = "國民革命軍第58軍 "
    location = 1253
    leader   = 50016
    division = {
      id             = { type = 22000 id = 82 }
      name           = "陸軍第82師（第58軍-雜牌湖北） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 86 }
      name           = "陸軍第86師（第58軍-雜牌陜軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 110 }
      name           = "陸軍第110師（第58軍-東北軍） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1062 }
    name     = "國民革命軍第62軍 "
    location = 2705
    leader   = 50049
    division = {
      id             = { type = 22000 id = 151 }
      name           = "陸軍第151師（第62軍-旁系粵軍） "
      type           = infantry
      model          = 37
      strength       = 50
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 152 }
      name           = "陸軍第152師（第62軍-旁系粵軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1063 }
    name     = "國民革命軍第63軍 "
    location = 2700
    leader   = 50290
    division = {
      id             = { type = 22000 id = 153 }
      name           = "陸軍第153師（第63軍-旁系粵軍） "
      type           = infantry
      model          = 37
      strength       = 50
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 154 }
      name           = "陸軍第154師（第63軍-旁系粵軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1064 }
    name     = "國民革命軍第64軍 "
    location = 2700
    leader   = 50175
    division = {
      id             = { type = 22000 id = 155 }
      name           = "陸軍第155師（第64軍-旁系粵軍） "
      type           = infantry
      model          = 37
      strength       = 50
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 156 }
      name           = "陸軍第156師（第64軍-旁系粵軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1065 }
    name     = "國民革命軍第65軍 "
    location = 2705
    leader   = 50006
    division = {
      id             = { type = 22000 id = 157 }
      name           = "陸軍第157師（第65軍-旁系粵軍） "
      type           = infantry
      model          = 37
      strength       = 50
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 158 }
      name           = "陸軍第158師（第65軍-旁系粵軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1066 }
    name     = "國民革命軍第66軍 "
    location = 1247
    leader   = 50032
    division = {
      id             = { type = 22000 id = 159 }
      name           = "陸軍第159師（第66軍-旁系粵軍） "
      type           = infantry
      model          = 37
      strength       = 50
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 160 }
      name           = "陸軍第160師（第66軍-旁系粵軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1067 }
    name     = "國民革命軍第67軍 "
    location = 1269
    leader   = 50127
    division = {
      id             = { type = 22000 id = 107 }
      name           = "陸軍第107師（第67軍-東北軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 108 }
      name           = "陸軍第108師（第67軍-東北軍） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 117 }
      name           = "陸軍第117師（第67軍-東北軍）"
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1069 }
    name     = "國民革命軍第69軍 "
    location = 1221
    leader   = 50003
    division = {
      id             = { type = 22000 id = 55 }
      name           = "陸軍第55師（第69軍-旁系蘇皖軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2069 }
    name     = "國民革命軍第69軍57師 "
    location = 1221
    leader   = 50014
    division = {
      id             = { type = 22000 id = 57 }
      name           = "陸軍第57師（第69軍-旁系蘇皖軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1070 }
    name     = "國民革命軍第70軍 "
    location = 1259
    leader   = 50172
    division = {
      id             = { type = 22000 id = 19 }
      name           = "陸軍第19師（第70軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 1071 }
    name     = "國民革命軍第71軍 "
    location = 1235
    leader   = 50312
    division = {
      id             = { type = 22000 id = 87 }
      name           = "陸軍第87師（第71軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = engineer
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2071 }
    name     = "國民革命軍第71軍61師 "
    location = 1235
    leader   = 50071
    division = {
      id             = { type = 22000 id = 61 }
      name           = "陸軍第61師（第71軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1072 }
    name     = "國民革命軍第72軍 "
    location = 1235
    leader   = 50271
    division = {
      id             = { type = 22000 id = 88 }
      name           = "陸軍第88師（第72軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = engineer
      strength       = 100
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1073 }
    name     = "國民革命軍第73軍 "
    location = 1260
    leader   = 50324
    division = {
      id             = { type = 22000 id = 15 }
      name           = "陸軍第15師（第73軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    division = {
      id             = { type = 22000 id = 77 }
      name           = "陸軍第77師（第73軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1074 }
    name     = "國民革命軍第74軍 "
    location = 1235
    leader   = 50352
    division = {
      id             = { type = 22000 id = 58 }
      name           = "陸軍第58師（第74軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 2074 }
    name     = "國民革命軍第74軍51師 "
    location = 1235
    leader   = 50326
    division = {
      id             = { type = 22000 id = 51 }
      name           = "陸軍第51師（第74軍-嫡系） "
      type           = motorized
      model          = 37
      extra          = engineer
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1075 }
    name     = "國民革命軍第75軍 "
    location = 1239
    leader   = 50061
    division = {
      id             = { type = 22000 id = 6 }
      name           = "陸軍第6師（第75軍-旁系浙軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1076 }
    name     = "國民革命軍第76軍 "
    location = 1256
    leader   = 50282
    division = {
      id             = { type = 22000 id = 8 }
      name           = "陸軍第8師（第76軍-旁系湘軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1078 }
    name     = "國民革命軍第78軍 "
    location = 1235
    leader   = 50273
    division = {
      id             = { type = 22000 id = 36 }
      name           = "陸軍第36師（第78軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1079 }
    name     = "國民革命軍第79軍 "
    location = 1266
    leader   = 50099
    division = {
      id             = { type = 22000 id = 40 }
      name           = "陸軍第40師（第79軍-雜牌湖北） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 43 }
      name           = "陸軍第43師（第79軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      brigade_model  = 36
      strength       = 80
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 98 }
      name           = "陸軍第98師（第79軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1080 }
    name     = "國民革命軍第80軍 "
    location = 1240
    leader   = 50342
    division = {
      id             = { type = 22000 id = 97 }
      name           = "陸軍第97師（第80軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1084 }
    name     = "國民革命軍第84軍 "
    location = 1364
    leader   = 50316
    division = {
      id             = { type = 22000 id = 102 }
      name           = "陸軍第102師（第84軍-旁系黔軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 121 }
      name           = "陸軍第121師（第-旁系黔軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 140 }
      name           = "陸軍第140師（第4預備軍-旁系黔軍） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 40
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1086 }
    name     = "國民革命軍第86軍 "
    location = 1262
    leader   = 50093
    division = {
      id             = { type = 22000 id = 103 }
      name           = "陸軍第103師（第86軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1097 }
    name     = "國民革命軍第97軍 "
    location = 1209
    leader   = 50064
    division = {
      id             = { type = 22000 id = 94 }
      name           = "陸軍第94師（第97軍-嫡系） "
      type           = infantry
      model          = 37
      extra          = police
      strength       = 80
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1098 }
    name     = "國民革命軍第98軍 "
    location = 1264
    leader   = 50082
    division = {
      id             = { type = 22000 id = 42 }
      name           = "陸軍第42師（第98軍-旁系西北） "
      type           = infantry
      model          = 37
      strength       = 60
      experience     = 25
    }
    division = {
      id             = { type = 22000 id = 169 }
      name           = "陸軍第169師（第98軍-旁系西北） "
      type           = militia
      model          = 9
      strength       = 60
      experience     = 25
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1202 }
    name     = "騎兵第2軍 "
    location = 1269
    leader   = 50091
    division = {
      id             = { type = 22000 id = 1303 }
      name           = "騎兵第3師（騎3軍-東北軍） "
      type           = cavalry
      model          = 12
      extra          = police
      strength       = 60
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 1308 }
      name           = "騎兵暫1師（騎2軍-東北軍） "
      type           = cavalry
      model          = 12
      strength       = 60
      experience     = 20
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1204 }
    name     = "騎兵第4軍 "
    location = 1269
    leader   = 50212
    division = {
      id             = { type = 22000 id = 1310 }
      name           = "騎兵第10師（騎4軍-旁系西北） "
      type           = cavalry
      model          = 12
      strength       = 40
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1206 }
    name     = "騎兵第6軍 "
    location = 1224
    leader   = 50257
    division = {
      id             = { type = 22000 id = 1307 }
      name           = "騎兵第7師（騎4軍-旁系西北） "
      type           = cavalry
      model          = 12
      strength       = 40
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 1207 }
    name     = "東北挺進軍 "
    location = 1269
    leader   = 50233
    division = {
      id             = { type = 22000 id = 1306 }
      name           = "騎兵第6師（騎7軍-東北軍） "
      type           = cavalry
      model          = 12
      extra          = engineer
      strength       = 60
      experience     = 20
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 41235 }
    name     = "南京綏靖公署 "
    location = 1235
    leader   = 50390
    division = {
      id             = { type = 22000 id = 71235 }
      name           = "江蘇保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41221 }
    name     = "皖省綏靖公署 "
    location = 1221
    division = {
      id             = { type = 22000 id = 71221 }
      name           = "安徽保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41228 }
    name     = "豫省綏靖公署 "
    location = 1228
    division = {
      id             = { type = 22000 id = 71228 }
      name           = "河南保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41232 }
    name     = "鄂省綏靖公署 "
    location = 1232
    division = {
      id             = { type = 22000 id = 71232 }
      name           = "湖北保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41238 }
    name     = "浙省綏靖公署 "
    location = 1238
    division = {
      id             = { type = 22000 id = 71238 }
      name           = "浙江保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41251 }
    name     = "贛省綏靖公署 "
    location = 1251
    division = {
      id             = { type = 22000 id = 71251 }
      name           = "江西保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41244 }
    name     = "閩省綏靖公署 "
    location = 1244
    division = {
      id             = { type = 22000 id = 71244 }
      name           = "福建保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41255 }
    name     = "湘省綏靖公署 "
    location = 1255
    division = {
      id             = { type = 22000 id = 71255 }
      name           = "湖南保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41364 }
    name     = "黔省綏靖公署 "
    location = 1364
    division = {
      id             = { type = 22000 id = 71364 }
      name           = "貴州保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41360 }
    name     = "川省綏靖公署 "
    location = 1360
    division = {
      id             = { type = 22000 id = 71360 }
      name           = "四川保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41269 }
    name     = "陜省綏靖公署 "
    location = 1269
    division = {
      id             = { type = 22000 id = 71269 }
      name           = "陜西保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41282 }
    name     = "康省綏靖公署 "
    location = 2777
    division = {
      id             = { type = 22000 id = 71282 }
      name           = "西康保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 41386 }
    name     = "察省綏靖公署 "
    location = 1207
    division = {
      id             = { type = 22000 id = 71386 }
      name           = "察省保安總隊 "
      type           = militia
      model          = 9
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 22000 id = 10300 }
    name     = "中華民國第1艦隊 "
    location = 1215
    base     = 1215
    division = {
      id             = { type = 22000 id = 10301 }
      name           = "海圻號 "
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 10310 }
      name           = "寧海號 "
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 22000 id = 10302 }
      name           = "逸仙號 "
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 10303 }
      name           = "平海號 "
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 22000 id = 10304 }
      name           = "海琛號 "
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 10307 }
      name           = "第1驅逐艦編隊 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 10308 }
      name           = "第2驅逐艦編隊 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 22000 id = 10309 }
      name           = "第1運輸艦編隊 "
      type           = transport
      model          = 0
    }
  }

  airunit = { 
    id       = { type = 22000 id = 21001 }
    name     = "中華民國空軍第1大隊 "
    location = 1251
    base     = 1251
    leader   = 50372
    division = {
      id             = { type = 22000 id = 20001 }
      name           = "第1轟炸機大隊 "
      type           = tactical_bomber
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21002 }
    name     = "中華民國空軍第2大隊 "
    location = 1238
    base     = 1238
    leader   = 50367
    division = {
      id             = { type = 22000 id = 20002 }
      name           = "第2轟炸機大隊 "
      type           = tactical_bomber
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21006 }
    name     = "中華民國空軍第6大隊 "
    location = 1238
    base     = 1238
    leader   = 50368
    division = {
      id             = { type = 22000 id = 20006 }
      name           = "第6偵察機大隊 "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21007 }
    name     = "中華民國空軍第7大隊 "
    location = 1269
    base     = 1269
    leader   = 50387
    division = {
      id             = { type = 22000 id = 20007 }
      name           = "第7偵察機大隊 "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21008 }
    name     = "中華民國空軍第8大隊 "
    location = 1251
    base     = 1251
    leader   = 50388
    division = {
      id             = { type = 22000 id = 20008 }
      name           = "第8轟炸機大隊 "
      type           = tactical_bomber
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21009 }
    name     = "中華民國空軍第9大隊 "
    location = 1238
    base     = 1238
    leader   = 50371
    division = {
      id             = { type = 22000 id = 20009 }
      name           = "第9攻轟機大隊 "
      type           = cas
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21003 }
    name     = "中華民國空軍第3大隊 "
    location = 1238
    base     = 1238
    leader   = 50383
    division = {
      id             = { type = 22000 id = 20003 }
      name           = "第3驅逐機大隊 "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21004 }
    name     = "中華民國空軍第4大隊 "
    location = 1251
    base     = 1251
    leader   = 50376
    division = {
      id             = { type = 22000 id = 20004 }
      name           = "第4驅逐機大隊 "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 22000 id = 21005 }
    name     = "中華民國空軍第5大隊 "
    location = 1251
    base     = 1251
    leader   = 50379
    division = {
      id             = { type = 22000 id = 20005 }
      name           = "第5驅逐機大隊 "
      type           = interceptor
      model          = 0
      strength       = 50
    }
  }

  landdivision = { dormant = yes id = { type = 22000 id = 280 } name = "潼關要塞 "  type = garrison model = 3 strength = 100 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 292 } name = "廣州要塞 "  type = garrison model = 1 strength = 50 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 627 } name = "徐州要塞 "  type = garrison model = 1 strength = 50 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 629 } name = "南京要塞 "  type = garrison model = 1 strength = 50 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 279 } name = "衡阳要塞 "  type = garrison model = 1 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 614 } name = "漢口要塞 "  type = garrison model = 1 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 628 } name = "長沙要塞 "  type = garrison model = 1 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 295 } name = "商县守備師"  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 296 } name = "奉節司令部"  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 298 } name = "恩施守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 310 } name = "安康守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 314 } name = "石泉守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 322 } name = "龍駒垻要塞守備師 "  type = garrison model = 2 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 282 } name = "都匀守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 323 } name = "彭水要塞守備師 "  type = garrison model = 2 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 324 } name = "鎮遠守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 325 } name = "銅仁守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 500 } name = "西安城防要塞群 "  type = garrison model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 311 } name = "重庆城防要塞群 "  type = garrison model = 3 experience = 100 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 317 } name = "天水衛戍師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 281 } name = "秦嶺衛戍師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 318 } name = "滇南防禦要塞工事"  type = garrison model = 2 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 320 } name = "滇南防禦要塞工事"  type = garrison model = 2 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 283 } name = "安順守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 285 } name = "興義守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 288 } name = "西林守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 289 } name = "東安守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 290 } name = "桂林要塞守備師 "  type = garrison model = 1 experience = 40 extra = engineer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 297 } name = "柳州守備師 "  type = bergsjaeger model = 4 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 333 } name = "华西校帅指挥部 "  type = hq model = 1 experience = 40 extra = armored_car brigade_model = 8 } 
  landdivision = { dormant = yes id = { type = 22000 id = 336 } name = "中条山要塞 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 350 } name = "云南防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 351 } name = "云南防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 352 } name = "云南防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 353 } name = "贵州防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 354 } name = "贵州防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 355 } name = "广西防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 356 } name = "广西防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 357 } name = "陕西防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 358 } name = "重庆防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 359 } name = "湖北防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 360 } name = "陕西防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 361 } name = "陕西防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 362 } name = "重庆防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 363 } name = "重庆防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 364 } name = "贵州防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 365 } name = "甘肃防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 366 } name = "陕西防线 "  type = garrison model = 2 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 401 } name = "德械模范-陸軍第36警衛師 "  type = motorized model = 38 experience = 20 extra = b_23 brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22000 id = 402 } name = "德械模范-陸軍第87師 "  type = motorized model = 38 experience = 20 extra = b_23 brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22000 id = 403 } name = "德械模范-陸軍第88師 "  type = motorized model = 38 experience = 20 extra = b_23 brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22000 id = 404 } name = "中央陸軍教導總隊 "  type = infantry model = 10 experience = 50 extra = b_23 brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22000 id = 405 } name = "中央軍嫡系-陸軍第80師 "  type = motorized model = 38 experience = 10 extra = b_23 brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22000 id = 406 } name = "中央軍嫡系-陸軍第83師 "  type = motorized model = 38 experience = 10 extra = b_23 brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22000 id = 407 } name = "中央軍嫡系-陸軍第86師 "  type = motorized model = 38 experience = 10 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 408 } name = "中央軍嫡系-陸軍第89師 "  type = motorized model = 38 experience = 10 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 409 } name = "陸軍第11‘土木支柱’師 "  type = mechanized model = 19 experience = 60 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 410 } name = "陸軍第14‘羅店鐵壁’師 "  type = mechanized model = 19 experience = 60 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 411 } name = "中央軍嫡系-陸軍第43師 "  type = motorized model = 38 experience = 60 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 412 } name = "陸軍第51‘飛虎奇兵’師 "  type = mechanized model = 19 experience = 60 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 413 } name = "陸軍第57‘御林虎賁’師 "  type = mechanized model = 19 experience = 60 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 414 } name = "陸軍第58‘民族鐵骨’師 "  type = mechanized model = 19 experience = 60 extra = b_23 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 415 } name = "榮譽第1‘百戰精銳’師 "  type = light_armor model = 32 experience = 60 extra = light_armor_brigade brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 22000 id = 416 } name = "陸軍第200‘鋼鐵虎羆’師 "  type = mechanized model = 20 experience = 60 extra = armored_car brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22000 id = 417 } name = "中央軍嫡系-陸軍第96師  "  type = motorized model = 43 experience = 60 extra = b_09 } 
  landdivision = { dormant = yes id = { type = 22000 id = 418 } name = "陸軍新編第38‘天下第一’師 "  type = mechanized model = 20 experience = 40 extra = b_23 brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 22000 id = 419 } name = "中央軍嫡系-陸軍新編第30師 "  type = motorized model = 40 experience = 40 extra = b_09 } 
  landdivision = { dormant = yes id = { type = 22000 id = 420 } name = "中央軍嫡系-陸軍第50師 "  type = bergsjaeger model = 6 experience = 40 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 22000 id = 421 } name = "陸軍新編22‘中國虎’師 "  type = mechanized model = 23 experience = 40 extra = b_23 brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 22000 id = 422 } name = "中央軍嫡系-陸軍新編第14'西北健旅'師 "  type = mechanized model = 23 experience = 40 extra = b_23 brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 22000 id = 423 } name = "中央軍嫡系-陸軍第167師 "  type = bergsjaeger model = 7 experience = 40 extra = engineer brigade_model = 3 } 

  navaldivision = { dormant = yes id = { type = 22000 id = 334 } name = "寧海号 " type = light_cruiser model = 1 extra1 = naval_fire_controll_s extra2 = naval_torpedoes_s extra3 = naval_anti_air_s brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 22000 id = 335 } name = "平海号 " type = light_cruiser model = 1 extra1 = naval_fire_controll_s extra2 = naval_torpedoes_s extra3 = naval_anti_air_s brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 }
}
