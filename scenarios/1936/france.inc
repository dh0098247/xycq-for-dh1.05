##############################
# Country definition for FRA #
##############################
province = {
  id = 18 # 加来
}
province = {
  id = 32 # 布雷斯特
}
province = {
  id = 35 # 南特
}
province = {
  id = 38 # 瑟堡
}
province = {
  id = 44 # 里尔
}
province = {
  id = 56 # 巴黎
}
province = {
  id = 62 # 欧塞尔
}
province = {
  id = 72 # 梅斯
  landfort = 10
  anti_air = 5
}
province = { id = 73 landfort = 10 anti_air = 5 } # 斯特拉斯堡
province = { id = 316 landfort = 10 anti_air = 5 } # 米卢斯
province = {
  id = 325 # 波尔多
}
province = {
  id = 359 # 图卢兹
}
province = {
  id = 364 # 马赛
}
province = {
  id = 365 # 土伦
}
province = { id = 366 landfort = 5 } # 尼斯
province = {
  id = 528 # 里昂
}
province = { id = 875 supplypool = 100 } # 卡宴
province = {
  id = 939 # 突尼斯
}
province = {
  id = 949 # 阿尔及尔
  supplypool = 500
  oilpool = 500
}
province = {
  id = 953 # 奥兰（瓦赫兰）
}
province = {
  id = 958 # 卡萨布兰卡（达尔贝达）
}
province = {
  id = 981 # 达喀尔
}
province = {
  id = 993 # 阿比让
}
province = {
  id = 1037 # 吉布提
  supplypool = 200
  oilpool = 100
}
province = {
  id = 1089 # 杜阿拉
}
province = {
  id = 1092 # 利伯维尔
  supplypool = 200
  oilpool = 50
}
province = {
  id = 1137 # 塔那那利佛
  supplypool = 200
  oilpool = 50
}
province = {
  id = 1326 # 海防
}
province = {
  id = 1328 # 河內
}
province = {
  id = 1333 # 土倫（岘港）
}
province = {
  id = 1337 # 西貢（胡志明市）
  supplypool = 500
  oilpool = 500
}
province = {
  id = 1794 # 贝鲁特
}
province = { id = 3045 landfort = 5 } # 迪涅
province = { id = 3046 landfort = 5 } # 萨瓦

#####################
# Country main data #
#####################

country = {
  tag                = FRA
  regular_id         = ENG
  capital            = 56 # 巴黎
  manpower           = 1500
  tc_mod                 = 1
  peacetime_ic_mod       = 0.25
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 200
  transports     = 600
  escorts        = 200

  diplomacy = {
    relation = { tag = AST value = 150 }
    relation = { tag = AUS value = -10 }
    relation = {
      tag        = BEL
      value      = 120
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = {
      tag        = DEN
      value      = 25
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = BHU value = 150 }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 150 }
    relation = { tag = CZE value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 25 }
    relation = {
      tag        = FIN
      value      = 85
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = GER value = -35 }
    relation = { tag = GRE value = 20 }
    relation = {
      tag        = HOL
      value      = 75
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = HUN value = -70 }
    relation = { tag = IRE value = 25 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -20 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation = {
      tag        = LUX
      value      = 120
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = {
      tag        = POR
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = NEP value = 150 }
    relation = {
      tag        = NOR
      value      = 0
      guaranteed = { year = 1934 month = august day = 30 }
    }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = {
      tag        = POL
      value      = 100
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 150 }
    relation = {
      tag        = SAU
      value      = 100
      guaranteed = { year = 1935 month = february day = 11 }
    }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SIA value = -100 }
    relation = { tag = SOV value = 100 }
    relation = { tag = SPR value = 10 }
    relation = {
      tag        = SWE
      value      = 60
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = TUR
      value      = 50
      guaranteed = { year = 1935 month = january day = 7 }
    }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 150 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1935 month = january day = 7 }
    }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }

  nationalprovinces      = { 18 3020 3021 3022 3023 3024 3025 3026 3027 3028 3029 3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3048 3049 3050 3051 3052 3053 3054 316 317 318 319 32 320 321 322 323 324 325 326 327 328 33 34 35 358 359 36 360 361 362 363 364 365 366 367 37 38 39 40 41 42 43 44 527 528 529 53 54 55 56 57 58 59 60 61 62 63 64 72 73 3107 }
  ownedprovinces         = { 1003 1004 1005 1006 1013 1014 1037 1070 1075 1076 1077 1078 1079 1080 1081 1082 1083 1084 1086 1087 1088 1089 1092 1093 1134 1135 1137 1306 1326 1328 1329 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1689 1690 1691 1692 1751 1792 1793 1794 1795 18 1861 1862 1863 3020 3021 3022 3023 3024 3025 3026 3027 3028 3029 3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3048 3049 3050 3051 3052 3053 3054 3107 316 317 318 319 32 320 321 322 323 324 325 326 327 328 33 3308 3309 3311 3312 3313 3314 3315 3316 3317 3319 3320 3321 3322 3323 3324 3325 3326 3370 3371 3372 3373 3374 3376 3377 3378 34 35 358 3586 359 3591 3593 3596 36 360 361 362 363 364 365 366 367 37 3702 3703 3704 3705 3706 3707 3708 3709 3710 3711 3712 3713 3714 3715 3716 3717 3718 3719 3720 3721 38 3800 3801 3802 3803 39 3928 3929 3930 3931 3932 3933 3942 3958 3960 3961 3962 3963 3964 3966 3980 40 41 42 43 44 527 528 529 53 54 55 56 57 58 59 60 61 62 63 64 72 73 875 898 899 934 935 936 937 938 939 940 941 942 943 944 945 946 947 948 949 950 951 952 953 956 958 959 960 961 962 965 966 967 968 969 970 973 974 975 976 977 978 979 980 981 984 985 986 987 989 990 991 993 994 995 996 997 998 }
  controlledprovinces    = { 1003 1004 1005 1006 1013 1014 1037 1070 1075 1076 1077 1078 1079 1080 1081 1082 1083 1084 1086 1087 1088 1089 1092 1093 1134 1135 1137 1306 1326 1328 1329 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1689 1690 1691 1692 1751 1792 1793 1794 1795 18 1861 1862 1863 3020 3021 3022 3023 3024 3025 3026 3027 3028 3029 3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3048 3049 3050 3051 3052 3053 3054 3107 316 317 318 319 32 320 321 322 323 324 325 326 327 328 33 3308 3309 3311 3312 3313 3314 3315 3316 3317 3319 3320 3321 3322 3323 3324 3325 3326 3370 3371 3372 3373 3374 3376 3377 3378 34 35 358 3586 359 3591 3593 3596 36 360 361 362 363 364 365 366 367 37 3702 3703 3704 3705 3706 3707 3708 3709 3710 3711 3712 3713 3714 3715 3716 3717 3718 3719 3720 3721 38 3800 3801 3802 3803 39 3928 3929 3930 3931 3932 3933 3942 3958 3960 3961 3962 3963 3964 3966 3980 40 41 42 43 44 527 528 529 53 54 55 56 57 58 59 60 61 62 63 64 72 73 875 898 899 934 935 936 937 938 939 940 941 942 943 944 945 946 947 948 949 950 951 952 953 956 958 959 960 961 962 965 966 967 968 969 970 973 974 975 976 977 978 979 980 981 984 985 986 987 989 990 991 993 994 995 996 997 998 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120 5180 5660 5670 5680 5310 5010 1010 1020 1100 1110 1710 1830 1840 1850 2280 2290 2610 2300 2360 2420 2430 2540 2550 2560 2010 2020 2030 3490 3550 3560 3600 3610 3620 3010 3020 3070 3130 3250 3320 3650 3820 3410 3760 4120 4130 4010 6050 6010 6020 6030 6040 6200 6320 6390 6480 6400 6410 6500 9700 9710 9010 9020 8010 8020 8030 8050 8150 8390 7410 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 8
    professional_army = 10
    defense_lobby     = 7
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 2001 } # 阿尔贝 勒布伦 
  headofgovernment       = { type = 9 id = 2002 } # 阿尔贝特 萨罗 
  foreignminister        = { type = 9 id = 2003 } # 皮埃尔-埃蒂安·弗朗丹
  armamentminister       = { type = 9 id = 2004 } # 朱尔-樊尚·奥里奥尔 
  ministerofsecurity     = { type = 9 id = 2005 } # 马克思 多尔穆瓦 
  ministerofintelligence = { type = 9 id = 2006 } # 约瑟夫 帕加农 
  chiefofstaff           = { type = 9 id = 2007 } # 莫里斯·居斯塔夫·甘末林
  chiefofarmy            = { type = 9 id = 2008 } # 莫里斯·居斯塔夫·甘末林
  chiefofnavy            = { type = 9 id = 2009 } # 弗朗科伊斯 达尔朗 
  chiefofair             = { type = 9 id = 2010 } # 维克托 德南 

  landunit = {
    id       = { type = 13500 id = 1 }
    name     = "法兰西第VII集团军 "
    location = 55
    division = {
      id             = { type = 13500 id = 2 }
      name           = "第4步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 3 }
      name           = "第60步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 5 }
      name           = "第41装甲师 "
      type           = cavalry
      model          = 49
      extra          = light_armor_brigade
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 6 }
      name           = "第25摩步师 "
      type           = motorized
      model          = 27
      extra          = light_armor_brigade
      strength       = 70
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 8 }
    name     = "法兰西第I集团军 "
    location = 63
    division = {
      id             = { type = 13500 id = 9 }
      name           = "第1摩步师 "
      type           = motorized
      model          = 27
      extra          = light_armor_brigade
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 10 }
      name           = "第1步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 11 }
      name           = "第2装甲师 "
      type           = armor
      model          = 27
      extra          = light_armor_brigade
      experience     = 10
    }
    division = {
      id             = { type = 13500 id = 15 }
      name           = "第12摩步师 "
      type           = motorized
      model          = 27
      extra          = light_armor_brigade
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 17 }
      name           = "北非第2步兵师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 18 }
    name     = "法兰西第IX集团军 "
    location = 64
    division = {
      id             = { type = 13500 id = 19 }
      name           = "第1轻骑兵师 "
      type           = cavalry
      model          = 49
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 21 }
      name           = "第4步兵师 "
      type           = motorized
      model          = 27
      extra          = anti_air
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 23 }
      name           = "第3摩步师 "
      type           = motorized
      model          = 27
      extra          = light_armor_brigade
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 24 }
      name           = "第18步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 26 }
    name     = "法兰西第II集团军 "
    location = 72
    division = {
      id             = { type = 13500 id = 27 }
      name           = "第2轻骑兵师 "
      type           = cavalry
      model          = 49
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 29 }
      name           = "第71步兵师 "
      type           = motorized
      model          = 27
      extra          = anti_tank
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 31 }
      name           = "第41步兵师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 32 }
      name           = "第1殖民地步兵师 "
      type           = militia
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 35 }
    name     = "法兰西第III集团军 "
    location = 53
    division = {
      id             = { type = 13500 id = 36 }
      name           = "第3骑兵师 "
      type           = cavalry
      extra          = engineer
      experience     = 49
    }
    division = {
      id             = { type = 13500 id = 37 }
      name           = "第6步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 39 }
      name           = "第8步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 41 }
      name           = "北非第3步兵师 "
      type           = motorized
      model          = 27
      extra          = artillery
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 43 }
      name           = "第26步兵师 "
      type           = infantry
      model          = 27
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 45 }
      name           = "第42步兵师 "
      type           = infantry
      model          = 27
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 47 }
      name           = "第20步兵师 "
      type           = infantry
      model          = 27
      extra          = artillery
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 49 }
    name     = "法兰西第IV集团军 "
    location = 316
    division = {
      id             = { type = 13500 id = 51 }
      name           = "第11步兵师 "
      type           = infantry
      model          = 27
      strength       = 70
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 52 }
      name           = "第45步兵师 "
      type           = infantry
      model          = 27
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 54 }
      name           = "第52非洲步兵师 "
      type           = militia
      extra          = artillery
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 55 }
    name     = "法兰西第V集团军 "
    location = 366
    division = {
      id             = { type = 13500 id = 57 }
      name           = "第24步兵师 "
      type           = infantry
      model          = 27
      strength       = 70
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 58 }
      name           = "第31山地师 "
      type           = bergsjaeger
      extra          = engineer
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 61 }
      name           = "第70步兵师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 62 }
      name           = "第30步兵师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 64 }
    name     = "法兰西第VIII集团军 "
    location = 73
    division = {
      id             = { type = 13500 id = 706 }
      name           = "马奇诺防线指挥部 "
      type           = hq
      model          = 0
      extra          = b_09
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 13500 id = 65 }
      name           = "第13步兵师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      strength       = 70
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 67 }
      name           = "第19步兵师 "
      type           = infantry
      model          = 27
      strength       = 70
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 68 }
      name           = "第54步兵师 "
      type           = infantry
      model          = 27
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 70 }
    name     = "阿尔卑斯山地集团军 "
    location = 527
    division = {
      id             = { type = 13500 id = 71 }
      name           = "第65山地师 "
      type           = bergsjaeger
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 72 }
      name           = "第64山地师 "
      type           = bergsjaeger
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 76 }
    name     = "法兰西第XIX集团军 "
    location = 949
    division = {
      id             = { type = 13500 id = 77 }
      name           = "第85非洲步兵师 "
      type           = infantry
      model          = 27
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 79 }
      name           = "第182非洲步兵师 "
      type           = infantry
      model          = 27
      strength       = 60
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 82 }
    name     = "法兰西非洲集团军 "
    location = 939
    division = {
      id             = { type = 13500 id = 709 }
      name           = "法兰西非洲集团军团指挥部 "
      type           = hq
      model          = 0
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 83 }
      name           = "第83非洲步兵师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 85 }
      name           = "第81非洲步兵师 "
      type           = militia
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 88 }
      name           = "第6轻型骑兵师 "
      type           = cavalry
      model          = 49
      strength       = 65
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 89 }
    name     = "摩洛哥守备集团军 "
    location = 959
    division = {
      id             = { type = 13500 id = 90 }
      name           = "第3摩洛哥师 "
      type           = infantry
      model          = 27
      extra          = anti_tank
      strength       = 60
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 13500 id = 91 }
    name     = "印支守备集团军 "
    location = 1337
    division = {
      id             = { type = 13500 id = 92 }
      name           = "北圻师 "
      type           = militia
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 93 }
      name           = "印度支那·柬埔寨师 "
      type           = militia
      model          = 1
      extra          = police
      strength       = 60
      experience     = 1
    }
  }
  landunit = {
    id       = { type = 13500 id = 94 }
    name     = "法国远征集团军 "
    location = 1037
    division = {
      id             = { type = 13500 id = 95 }
      name           = "第1轻步兵师 "
      type           = infantry
      model          = 27
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 96 }
      name           = "第1/2猎人师 "
      type           = bergsjaeger
      extra          = engineer
      strength       = 100
      experience     = 15
    }
  }

  navalunit = {
    id       = { type = 13500 id = 98 }
    name     = "法兰西第I舰队 "
    location = 32
    base     = 32
    division = {
      id             = { type = 13500 id = 99 }
      name           = "贝亚恩号 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 1
    }
    division = {
      id             = { type = 13500 id = 400 }
      name           = "阿尔及利亚号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = b_13
      extra3         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division = {
      id             = { type = 13500 id = 126 }
      name           = "普里毛居特号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_anti_air_s
      extra2         = b_04
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 13500 id = 127 }
      name           = "迪盖·特鲁安号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_anti_air_s
      extra2         = b_04
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 13500 id = 129 }
      name           = "拉莫特·皮盖号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_anti_air_s
      extra2         = b_04
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 13500 id = 131 }
      name           = "拉加利索尼埃侯爵号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_anti_air_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 13500 id = 243 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 13500 id = 244 }
      name           = "第2驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 13500 id = 245 }
      name           = "第3驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
  navalunit = {
    id       = { type = 13500 id = 100 }
    name     = "法兰西第II舰队 "
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 101 }
      name           = "库尔贝号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 13500 id = 103 }
      name           = "巴黎号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 13500 id = 118 }
      name           = "休弗伦号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = b_13
      extra3         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division = {
      id             = { type = 13500 id = 116 }
      name           = "杜肯号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = b_13
      extra3         = b_04
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 13500 id = 259 }
      name           = "普吕东号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 13500 id = 133 }
      name           = "珍妮号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_anti_air_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 13500 id = 139 }
      name           = "第4驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 13500 id = 144 }
      name           = "第5驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 13500 id = 246 }
      name           = "第6驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
  navalunit = {
    id       = { type = 13500 id = 104 }
    name     = "法兰西第III舰队 "
    location = 949
    base     = 949
    division = {
      id             = { type = 13500 id = 105 }
      name           = "海洋号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = none
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 13500 id = 109 }
      name           = "布列塔尼号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      extra4         = none
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 13500 id = 120 }
      name           = "福煦号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = b_13
      extra3         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division = {
      id             = { type = 13500 id = 115 }
      name           = "图尔维尔号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = b_13
      extra3         = b_04
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 13500 id = 255 }
      name           = "第7驱逐舰编队 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 13500 id = 152 }
      name           = "第8驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 13500 id = 157 }
      name           = "第9驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 13500 id = 242 }
      name           = "第10驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 13500 id = 110 }
    name     = "法兰西第IV舰队 "
    location = 32
    base     = 32
    division = {
      id             = { type = 13500 id = 111 }
      name           = "洛林号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = b_04
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
    }
    division = {
      id             = { type = 13500 id = 113 }
      name           = "普罗旺斯号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      extra4         = none
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 13500 id = 122 }
      name           = "科尔伯特号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = b_13
      extra3         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division = {
      id             = { type = 13500 id = 124 }
      name           = "杜布雷号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = b_13
      extra3         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
    }
    division = {
      id             = { type = 13500 id = 137 }
      name           = "埃米尔·伯蒂娜号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division = {
      id             = { type = 13500 id = 165 }
      name           = "第11驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
  }
  navalunit = {
    id       = { type = 13500 id = 171 }
    name     = "第1潜艇战队 "
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 172 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 177 }
      name           = "第2潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 248 }
      name           = "第3潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 268 }
      name           = "第4潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 247 }
      name           = "第5潜艇编队 "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13500 id = 181 }
    name     = "第2潜艇战队 "
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 249 }
      name           = "第6潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 250 }
      name           = "第7潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 251 }
      name           = "第8潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 182 }
      name           = "第9潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 187 }
      name           = "第10潜艇编队 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13500 id = 191 }
    name     = "第3潜艇战队 "
    location = 949
    base     = 949
    division = {
      id             = { type = 13500 id = 254 }
      name           = "第11潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 252 }
      name           = "第12潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 253 }
      name           = "第13潜艇编队 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13500 id = 192 }
      name           = "第14潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13500 id = 197 }
      name           = "第15潜艇编队 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13500 id = 198 }
    name     = "远征运输舰队 "
    location = 1337
    base     = 1337
    division = {
      id             = { type = 13500 id = 199 }
      name           = "第1运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 200 }
      name           = "第2运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 201 }
      name           = "第3运输舰编队 "
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 13500 id = 202 }
    name     = "集团军运输舰队 "
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 203 }
      name           = "第4运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 204 }
      name           = "第5运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 205 }
      name           = "第6运输舰编队 "
      type           = transport
    }
    division = {
      id             = { type = 13500 id = 523 }
      name           = "第7运输舰编队 "
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 13500 id = 206 }
    name     = "法兰西第I空集团军联队 "
    location = 56
    base     = 56
    division = {
      id             = { type = 13500 id = 207 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 211 }
      name           = "第2战术轰炸机大队 "
      type           = tactical_bomber
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 215 }
      name           = "第3战术轰炸机大队 "
      type           = tactical_bomber
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 218 }
    name     = "法兰西第IV空集团军联队 "
    location = 949
    base     = 949
    division = {
      id             = { type = 13500 id = 219 }
      name           = "第6战术轰炸机大队 "
      type           = tactical_bomber
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 222 }
    name     = "法兰西第V空集团军联队 "
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 223 }
      name           = "第7战术轰炸机大队 "
      type           = tactical_bomber
      extra          = escort
      brigade_model  = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 226 }
    name     = "法兰西第VII空集团军联队 "
    location = 56
    base     = 56
    division = {
      id             = { type = 13500 id = 227 }
      name           = "第24战斗机大队 "
      type           = interceptor
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 13500 id = 231 }
      name           = "第21战斗机大队 "
      type           = interceptor
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13500 id = 234 }
    name     = "法兰西第III空集团军联队 "
    location = 364
    base     = 364
    division = {
      id             = { type = 13500 id = 235 }
      name           = "第23战斗机大队 "
      type           = interceptor
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 13500 id = 304 }
    name           = "乔治·莱格号 "
    type           = light_cruiser
    model          = 2
    cost           = 3.0
    date           = { year = 1936 month = march day = 24 }
    extra1         = naval_anti_air_s
    extra2         = b_15
    brigade_model1 = 1
    brigade_model2 = 1
  }

  landdivision = { dormant = yes id = { type = 13500 id = 401 } name = " 敦刻尔克守备部队"  type = garrison model = 3 experience = 20 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 341 } name = "敦刻尔克卫戍1师 "  type = motorized model = 28 experience = 20 extra = artillery locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 342 } name = "敦刻尔克卫戍2师  "  type = motorized model = 28 experience = 20 extra = anti_tank locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 500 } name = "巴黎卫戍师 "  type = motorized model = 28 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 512 } name = "马奇诺防线要塞群 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 525 } name = "马奇诺防线要塞群 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 13500 id = 526 } name = "马奇诺防线要塞群 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 

  navaldivision = { dormant = yes id = { type = 13500 id = 300 } name = "敦克尔克号 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 }
  navaldivision = { dormant = yes id = { type = 13500 id = 303 } name = "斯特拉斯堡号 " type = battlecruiser model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 }
  navaldivision = { dormant = yes id = { type = 13500 id = 301 } name = "黎塞留号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 }
  navaldivision = { dormant = yes id = { type = 13500 id = 302 } name = "让·巴尔号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = b_13 extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 1 }
}
