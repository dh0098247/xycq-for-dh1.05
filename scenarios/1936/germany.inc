##############################
# Country definition for GER #
##############################
province = { id = 66 landfort = 1 } # 亚琛
province = {
  id = 67 # 埃森
}
province = { id = 74 landfort = 1 } # 萨尔布吕肯
province = {
  id = 75 # 科隆（德国）
  landfort = 1
}
province = {
  id = 80 # 威廉港
}
province = {
  id = 82 # 卡塞尔
}
province = {
  id = 88 # 汉堡
}
province = {
  id = 90 # 基尔
}
province = { id = 224 landfort = 1 } # 科布伦茨
province = {
  id = 296 # 罗斯托克
}
province = {
  id = 300 # 柏林
}
province = {
  id = 301 # 施特拉尔松德
}
province = {
  id = 313 # 法兰克福—美因河畔
}
province = {
  id = 314 # 斯图加特
}
province = { id = 315 landfort = 1 } # 弗赖堡
province = {
  id = 376 # 慕尼黑
}
province = {
  id = 473 # 布雷斯劳
}
province = {
  id = 510 # 柯尼斯堡
  supplypool = 500
  oilpool = 200
}
province = { id = 1168 landfort = 1 } # 卡尔斯鲁厄
province = { id = 3059 landfort = 1 } # 克雷费尔德
province = { id = 3061 landfort = 1 } # 特里尔
province = { id = 3062 landfort = 1 } # 凯撒斯劳滕

#####################
# Country main data #
#####################

country = {
  tag                = GER
  capital            = 300 # 柏林
  manpower           = 1500
  research_mod           = 1.1
  peacetime_ic_mod       = 0.7
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 200
  transports     = 150
  escorts        = 50

  diplomacy = {
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 100
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = {
      tag        = BUL
      value      = 25
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = {
      tag        = CZE
      value      = -25
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = ENG value = 1 }
    relation = {
      tag        = DEN
      value      = 25
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = EST value = 10 }
    relation = {
      tag        = FIN
      value      = 25
      guaranteed = { year = 1934 month = august day = 22 }
    }
    relation = { tag = FRA value = -35 }
    relation = { tag = GRE value = 15 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 100 }
    relation = { tag = IRE value = 15 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = CHI value = 20 }
    relation = {
      tag        = ITA
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 1 }
    relation = {
      tag        = POL
      value      = -10
      guaranteed = { year = 1932 month = december day = 30 }
    }
    relation = { tag = POR value = 75 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = SAF value = 1 }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = SWE
      value      = 50
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = TUR
      value      = 10
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = { tag = USA value = -10 }
    relation = { tag = YEM value = 1 }
    relation = {
      tag        = YUG
      value      = 50
      guaranteed = { year = 1932 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 2 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 5 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }

  nationalprovinces      = { 223 224 291 296 297 298 299 300 467 466 471 472 3163 3165 3169 3170 301 302 303 304 305 3059 306 3060 3061 3062 3063 3064 3065 3066 3067 3068 3069 307 3070 3071 3072 3073 3074 3075 3076 3077 3078 3079 308 3080 3081 3082 3083 3084 3085 3086 3087 3088 3089 309 3090 3091 3092 3093 3094 3095 3096 3097 3098 3099 310 3100 3102 3103 3104 3105 3106 3108 3109 311 3110 3111 3112 312 313 314 315 3156 3157 206 3158 3159 316 3160 3161 3162 3187 3188 3189 3574 1173 1400 1449 1168 1169 1057 373 374 375 376 377 4085 4089 460 461 462 463 464 465 473 482 510 66 67 71 72 73 74 75 76 80 81 82 83 84 85 86 87 88 89 90 91 3190 3191 3186 4084 }
  ownedprovinces         = { 1057 1168 1169 1173 1400 1449 223 224 291 296 297 298 299 300 301 302 304 3059 3060 3061 3062 3063 3064 3065 3066 3067 3068 3069 3070 3071 3072 3073 3074 3075 3076 3077 3078 3079 308 3080 3081 3082 3083 3084 3085 3086 3087 3088 3089 309 3090 3091 3092 3093 3094 3095 3096 3097 3098 3099 310 3100 3102 3103 3104 3105 3106 3108 3109 311 3110 3111 3112 312 313 314 315 3574 374 375 376 4089 473 482 510 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 }
  controlledprovinces    = { 1057 1168 1169 1173 1400 1449 223 224 291 296 297 298 299 300 301 302 304 3059 3060 3061 3062 3063 3064 3065 3066 3067 3068 3069 3070 3071 3072 3073 3074 3075 3076 3077 3078 3079 308 3080 3081 3082 3083 3084 3085 3086 3087 3088 3089 309 3090 3091 3092 3093 3094 3095 3096 3097 3098 3099 310 3100 3102 3103 3104 3105 3106 3108 3109 311 3110 3111 3112 312 313 314 315 3574 374 375 376 4089 473 482 510 66 67 74 75 76 80 81 82 83 84 85 86 87 88 89 90 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120 5180 5660 5670 5680 5310 5010 1010 1020 1100 1110 1710 1830 1840 1850 2280 2290 2610 2300 2620 2360 2420 2430 2540 2550 2010 2020 3490 3550 3560 3600 3610 3620 3010 3070 3130 3250 3820 3410 3420 3760 4120 4130 4010 6050 6010 6020 6030 6040 6100 6320 6390 6480 6400 8010 8020 8030 8150 8390 9700 9710 9010 9020 7410 1900 2030 4020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 2
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 1 } # 阿道夫 希特勒 
  headofgovernment       = { type = 9 id = 2 } # 鲁道夫 赫斯
  foreignminister        = { type = 9 id = 3 } # 康斯坦丁 冯 牛赖特 
  armamentminister       = { type = 9 id = 77 } # 雅尔玛 沙赫特 
  ministerofsecurity     = { type = 9 id = 108 } # 海因里希 希姆莱 
  ministerofintelligence = { type = 9 id = 6 } # 威廉 卡纳里斯 
  chiefofstaff           = { type = 9 id = 7 } # 路德维希 贝克 
  chiefofarmy            = { type = 9 id = 8 } # 沃纳 冯 弗立契 
  chiefofnavy            = { type = 9 id = 9 } # 埃里希 雷德尔 
  chiefofair             = { type = 9 id = 10 } # 赫尔曼 戈林 
  dormant_leaders        = { 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 }
  dormant_ministers      = { 258 260 }
  dormant_teams          = { 35 36 }

  landunit = {
    id       = { type = 14500 id = 34 }
    name     = "国防军第I军 "
    location = 510
    leader   = 33
    division = {
      id             = { type = 14500 id = 35 }
      name           = "国防军第1'腓特烈大帝'步兵师 "
      type           = motorized
      model          = 10
      extra          = artillery
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 36 }
      name           = "国防军第11'红鹿头'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 37 }
      name           = "国防军第21'埃尔宾'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 38 }
    name     = "国防军第II军 "
    location = 302
    leader   = 279
    division = {
      id             = { type = 14500 id = 58 }
      name           = "国防军第9'吉兰'步兵师 "
      type           = motorized
      model          = 10
      extra          = artillery
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 40 }
      name           = "国防军第12'什未林'步兵师 "
      type           = motorized
      model          = 10
      extra          = anti_tank
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 41 }
      name           = "国防军第32步兵师 "
      type           = infantry
      model          = 10
      extra          = engineer
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 42 }
    name     = "国防军第III军 "
    location = 300
    leader   = 335
    division = {
      id             = { type = 14500 id = 1706 }
      name           = "德意志南方集团军群司令部 "
      type           = hq
      model          = 0
      extra          = b_09
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 46 }
      name           = "国防军第8'西里西亚'步兵师 "
      type           = motorized
      model          = 10
      extra          = artillery
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 44 }
      name           = "国防军第23'掷弹兵之首'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 45 }
    name     = "国防军第VIII军 "
    location = 473
    leader   = 52
    division = {
      id             = { type = 14500 id = 55 }
      name           = "国防军第16'明斯特'步兵师 "
      type           = motorized
      model          = 10
      extra          = anti_air
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 47 }
      name           = "国防军第18'里格尼茨'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 51 }
      name           = "国防军第25步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 49 }
    name     = "国防军第V军 "
    location = 314
    leader   = 316
    division = {
      id             = { type = 14500 id = 50 }
      name           = "国防军第5'符腾堡'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 48 }
      name           = "国防军第28步兵师 "
      type           = infantry
      model          = 10
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 52 }
      name           = "国防军第35步兵师 "
      type           = infantry
      model          = 10
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 53 }
    name     = "国防军第VI军 "
    location = 81
    leader   = 354
    division = {
      id             = { type = 14500 id = 66 }
      name           = "国防军第4'萨克森'步兵师 "
      type           = motorized
      model          = 10
      extra          = armored_car
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 54 }
      name           = "国防军第6'威斯特法伦'步兵师 "
      type           = motorized
      model          = 10
      extra          = artillery
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 56 }
      name           = "国防军第26步兵师 "
      type           = infantry
      model          = 10
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 57 }
    name     = "国防军第IX军 "
    location = 82
    leader   = 20
    division = {
      id             = { type = 14500 id = 39 }
      name           = "国防军第2'波美拉尼亚'步兵师 "
      type           = motorized
      model          = 10
      extra          = anti_tank
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 59 }
      name           = "国防军第15'维尔茨堡'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 76 }
      name           = "国防军第22'矢车菊'机降步兵师 "
      type           = motorized
      model          = 10
      extra          = armored_car
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 61 }
    name     = "国防军第XII军 "
    location = 76
    leader   = 294
    division = {
      id             = { type = 14500 id = 62 }
      name           = "国防军第33步兵师 "
      type           = infantry
      model          = 10
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 63 }
      name           = "国防军第34步兵师 "
      type           = infantry
      model          = 10
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 64 }
      name           = "国防军第36步兵师 "
      type           = infantry
      model          = 10
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 65 }
    name     = "国防军第IV军 "
    location = 311
    leader   = 189
    division = {
      id             = { type = 14500 id = 43 }
      name           = "国防军第3'东普鲁士'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 71 }
      name           = "国防军第10'雷根斯堡'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 67 }
      name           = "国防军第14'斯图加特'后备步兵师 "
      type           = motorized
      model          = 10
      extra          = anti_air
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 69 }
    name     = "国防军第VII军 "
    location = 376
    leader   = 311
    division = {
      id             = { type = 14500 id = 70 }
      name           = "国防军第7'巴伐利亚'步兵师 "
      type           = motorized
      model          = 10
      extra          = artillery
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 68 }
      name           = "国防军第24'北极熊'步兵师 "
      type           = motorized
      model          = 10
      extra          = engineer
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 73 }
      name           = "国防军第27步兵师 "
      type           = infantry
      model          = 10
      extra          = police
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 74 }
    name     = "国防军第X军 "
    location = 88
    leader   = 334
    division = {
      id             = { type = 14500 id = 75 }
      name           = "国防军第20'汉堡'步兵师 "
      type           = motorized
      model          = 10
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 60 }
      name           = "国防军第29步兵师 "
      type           = infantry
      model          = 10
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 79 }
      name           = "国防军第13'马格德堡'步兵师 "
      type           = motorized
      model          = 10
      extra          = engineer
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 14500 id = 78 }
    name     = "国防军第XI军 "
    location = 86
    leader   = 351
    division = {
      id             = { type = 14500 id = 80 }
      name           = "国防军第19'汉诺威'步兵师 "
      type           = motorized
      model          = 10
      extra          = engineer
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 14500 id = 77 }
      name           = "国防军第30步兵师 "
      type           = infantry
      model          = 10
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 81 }
      name           = "国防军第31步兵师 "
      type           = infantry
      model          = 10
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 82 }
    name     = "国防军第I装甲军 "
    location = 300
    leader   = 324
    division = {
      id             = { type = 14500 id = 83 }
      name           = "国防军第1装甲师 "
      type           = armor
      model          = 9
      extra          = light_armor_brigade
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 84 }
      name           = "国防军第2装甲师 "
      type           = armor
      model          = 9
      extra          = light_armor_brigade
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 85 }
      name           = "国防军第3装甲师 "
      type           = armor
      model          = 9
      extra          = light_armor_brigade
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 14500 id = 5000 }
    name     = "狼穴 "
    location = 300
    leader   = 282
    division = {
      id             = { type = 14500 id = 5002 }
      name           = "柏林要塞 "
      type           = garrison
      model          = 3
      extra          = b_09
      brigade_model  = 2
      strength       = 100
      experience     = 100
      locked         = yes
    }
    division = {
      id             = { type = 14500 id = 5003 }
      name           = "帝国党卫军指挥部 "
      type           = hq
      model          = 1
      extra          = anti_air
      brigade_model  = 8
      strength       = 100
      experience     = 100
      locked         = yes
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 14500 id = 5500 }
    name     = "国防军最高统帅部 "
    location = 300
    division = {
      id             = { type = 14500 id = 5001 }
      name           = "国防军最高统帅部"
      type           = hq
      model          = 1
      extra          = armored_car
      brigade_model  = 1
      strength       = 100
      experience     = 100
    }
    division = {
      id             = { type = 14500 id = 5005 }
      name           = "普鲁士军官团"
      type           = hq
      model          = 1
      extra          = armored_car
      brigade_model  = 1
      strength       = 100
      experience     = 100
    }
    dig_in   = 20.000
  }

  navalunit = {
    id       = { type = 14500 id = 1 }
    name     = "德意志帝国公海舰队 "
    location = 80
    base     = 80
    leader   = 409
    division = {
      id             = { type = 14500 id = 2 }
      name           = "德意志号 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 3 }
      name           = "舍尔海军上将号 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 14500 id = 4 }
      name           = "纽伦堡号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 5 }
      name           = "莱比锡号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 6 }
      name           = "柯尼斯堡号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 14500 id = 7 }
      name           = "卡尔斯鲁厄号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 8 }
      name           = "科恩号 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 14500 id = 9 }
      name           = "埃姆登号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 17750 id = 10 }
      name           = "施佩伯爵号 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 14500 id = 28 }
    name     = "德意志帝国波罗的海舰队 "
    location = 90
    base     = 90
    leader   = 413
    division = {
      id             = { type = 14500 id = 29 }
      name           = "石勒苏益格·荷尔斯泰因号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 30 }
      name           = "西里西亚号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_13
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 1
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 31 }
      name           = "第1内侧巡逻鱼雷艇 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 32 }
      name           = "第2内侧巡逻鱼雷艇 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14500 id = 33 }
      name           = "第3内侧巡逻鱼雷艇 "
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 14500 id = 20 }
    name     = "第2U型潜艇战队 "
    location = 90
    base     = 90
    division = {
      id             = { type = 14500 id = 21 }
      name           = "U-2号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14500 id = 25 }
      name           = "U-3号 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14500 id = 26 }
    name     = "第1U型潜艇战队 "
    location = 80
    base     = 80
    division = {
      id             = { type = 14500 id = 27 }
      name           = "U-1号 "
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 14500 id = 86 }
    name     = "德意志第II航空师 "
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 87 }
      name           = "第2'铁锤'轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 88 }
      name           = "第3'闪电'轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 89 }
      name           = "第51'埃德维'轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 14500 id = 987 }
    name     = "德意志第I航空师 "
    location = 300
    base     = 300
    division = {
      id             = { type = 14500 id = 90 }
      name           = "第2'里希特霍芬'战斗航空团 "
      type           = interceptor
      model          = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 91 }
      name           = "第26'施拉格特'战斗航空团 "
      type           = interceptor
      model          = 0
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 14500 id = 95 }
    name     = "德意志第III航空师 "
    location = 473
    base     = 473
    division = {
      id             = { type = 14500 id = 96 }
      name           = "第53'秃鹰军团'轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 97 }
      name           = "第25特别轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 98 }
      name           = "第30'老鹰'轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 14500 id = 99 }
    name     = "德意志第IV航空师 "
    location = 82
    base     = 82
    division = {
      id             = { type = 14500 id = 100 }
      name           = "第1'海登堡'轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 14500 id = 101 }
      name           = "第3'乌德特'战斗航空团 "
      type           = interceptor
      model          = 0
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 14500 id = 102 }
    name     = "德意志第V航空师 "
    location = 376
    base     = 376
    division = {
      id             = { type = 14500 id = 103 }
      name           = "第4'维福将军'轰炸航空团 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
  }

  division_development = {
    id             = { type = 14500 id = 503 }
    name           = "威廉·古斯特洛夫号 "
    type           = transport
    model          = 0
    cost           = 5.0
    date           = { year = 1936 month = january day = 10 }
  }
  division_development = {
    id             = { type = 14500 id = 504 }
    name           = "戈雅号 "
    type           = transport
    model          = 0
    cost           = 5.0
    date           = { year = 1936 month = january day = 10 }
  }
  division_development = {
    id             = { type = 14500 id = 505 }
    name           = "阿尔特马克号 "
    type           = transport
    model          = 0
    cost           = 5.0
    date           = { year = 1936 month = january day = 10 }
  }
  division_development = {
    id             = { type = 14500 id = 604 }
    name           = "Z-1号 "
    type           = destroyer
    model          = 1
    cost           = 0.5
    date           = { year = 1936 month = january day = 10 }
    extra1         = naval_fire_controll_s
    brigade_model1 = 0
  }
  division_development = {
    id             = { type = 14500 id = 605 }
    name           = "Z-2号 "
    type           = destroyer
    model          = 1
    cost           = 0.6
    date           = { year = 1936 month = january day = 10 }
    extra1         = naval_fire_controll_s
    brigade_model1 = 0
  }

  province_development = {
    id             = { type = 14500 id = 10000 }
    location       = 300
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10001 }
    location       = 75
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10002 }
    location       = 67
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10003 }
    location       = 314
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10004 }
    location       = 88
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10005 }
    location       = 310
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10006 }
    location       = 311
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10007 }
    location       = 376
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10008 }
    location       = 76
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10009 }
    location       = 66
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10010 }
    location       = 482
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10011 }
    location       = 74
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10012 }
    location       = 3059
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10013 }
    location       = 312
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10014 }
    location       = 3064
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 14500 id = 10015 }
    location       = 86
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }

  landdivision = { dormant = yes id = { type = 14500 id = 405 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 406 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 407 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 408 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 409 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 412 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 413 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 414 } name = "齐格菲防线"  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 401 } name = "帝国大厦要塞师"  type = garrison model = 3 strength = 100 experience = 80 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 402 } name = "东柏林城要塞师"  type = garrison model = 3 strength = 100 experience = 80 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 940 } name = "反游击宪兵旅"  type = militia model = 4 extra = police brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 941 } name = "反游击宪兵旅"  type = militia model = 4 extra = police brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 942 } name = "反游击宪兵旅"  type = militia model = 4 extra = police brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 235 } name = "大西洋壁垒 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 236 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 237 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 238 } name = "大西洋壁垒 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 239 } name = "大西洋壁垒 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 116 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 117 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 118 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 119 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 120 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 121 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 122 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 123 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 124 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 125 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 126 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 127 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 128 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 129 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 130 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 131 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 132 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 228 } name = "大西洋壁垒 "  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 182 } name = "华沙要塞师 "  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 133 } name = "国防军第1轻装师 "  type = cavalry model = 62 experience = 20 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 134 } name = "国防军第2轻装师 "  type = cavalry model = 62 experience = 20 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 135 } name = "国防军第3轻装师 "  type = cavalry model = 62 experience = 20 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 136 } name = "国防军第4轻装师 "  type = cavalry model = 62 experience = 20 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 137 } name = "国防军第6装甲师 "  type = armor model = 10 strength = 75 experience = 25 extra = light_armor_brigade brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 138 } name = "国防军第7装甲师 "  type = armor model = 10 strength = 75 experience = 25 extra = light_armor_brigade brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 139 } name = "国防军第8装甲师 "  type = armor model = 10 strength = 75 experience = 25 extra = b_05 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 140 } name = "国防军第9装甲师 "  type = armor model = 10 strength = 75 experience = 25 extra = b_05 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 916 } name = "边境卫戍师 "  type = bergsjaeger model = 12 strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 917 } name = "边境卫戍师 "  type = bergsjaeger model = 12 strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 174 } name = "萨尔斯堡防线"  type = bergsjaeger model = 12 strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 176 } name = "萨尔斯堡防线"  type = bergsjaeger model = 12 strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 177 } name = "萨尔斯堡防线"  type = bergsjaeger model = 12 strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 178 } name = "萨尔斯堡防线"  type = bergsjaeger model = 12 strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 180 } name = "萨尔斯堡防线"  type = bergsjaeger model = 12 strength = 100 experience = 100 extra = engineer brigade_model = 4 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 415 } name = "萨尔斯堡防线要塞群"  type = garrison model = 3 experience = 80 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 229 } name = "国防军第5“东普鲁士屏障”装甲师 "  type = light_armor model = 3 experience = 60 extra = light_armor_brigade brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 230 } name = "国防军第3“负重轮”装甲掷弹兵师 "  type = mechanized model = 0 experience = 60 extra = light_armor_brigade brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 231 } name = "国防军第11“齐尔河畔消防队”装甲师 "  type = light_armor model = 4 experience = 60 extra = light_armor_brigade brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 232 } name = "国防军第26“掷弹兵之首”装甲掷弹兵师 "  type = mechanized model = 0 experience = 60 extra = light_armor_brigade brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 233 } name = "国防军第78“风暴”突击师 "  type = mechanized model = 0 experience = 60 extra = light_armor_brigade brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 234 } name = "国防军第21“沙漠弯刀”装甲师 "  type = light_armor model = 4 experience = 60 extra = light_armor_brigade brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 151 } name = "“亚当”超重型自走炮"  type = d_14 model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 152 } name = "“夏娃”超重型自走炮"  type = d_14 model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 153 } name = "“奥丁”超重型自走炮"  type = d_14 model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 154 } name = "“洛基”超重型自走炮"  type = d_14 model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 155 } name = "“提尔”超重型自走炮"  type = d_14 model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 156 } name = "“古斯塔夫”超重型铁道炮"  type = d_14 model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 157 } name = "“多拉”超重型铁道炮"  type = d_14 model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 104 } name = "德意志非洲装甲兵团指挥部 "  type = hq model = 2 experience = 80 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 105 } name = "国防军第15装甲师 "  type = armor model = 11 experience = 60 extra = sp_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 106 } name = "国防军第21装甲师 "  type = armor model = 11 experience = 60 extra = sp_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 107 } name = "国防军第5轻装师 "  type = cavalry model = 63 experience = 40 extra = sp_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 108 } name = "国防军第90轻装师 "  type = cavalry model = 63 experience = 40 extra = sp_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 109 } name = "国防军第164轻装师 "  type = cavalry model = 63 experience = 40 extra = sp_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 110 } name = "国防军第17装甲师 "  type = armor model = 11 experience = 40 extra = sp_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 111 } name = "国防军第18装甲师 "  type = armor model = 11 experience = 40 extra = sp_artillery brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 112 } name = "国防军第62轻装师 "  type = cavalry model = 63 experience = 40 extra = b_05 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 113 } name = "国防军第44轻装师 "  type = cavalry model = 63 experience = 40 extra = b_05 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 922 } name = "边境要塞师"  type = garrison model = 1 strength = 100 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 923 } name = "边境要塞师"  type = garrison model = 1 strength = 100 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 924 } name = "边境要塞师"  type = garrison model = 1 strength = 100 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 114 } name = "国防军第7空降师 "  type = paratrooper model = 14 experience = 50 extra = engineer brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 115 } name = "国防军第22‘矢车菊’伞兵师 "  type = paratrooper model = 14 experience = 50 extra = engineer brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 6012 } name = "国防军第7空降师 "  type = paratrooper model = 15 experience = 60 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 6013 } name = "国防军第22‘矢车菊’伞兵师 "  type = paratrooper model = 15 experience = 50 extra = engineer brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 914 } name = "边境要塞师"  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 915 } name = "边境要塞师"  type = garrison model = 2 experience = 20 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 925 } name = "巴黎指挥部"  type = hq model = 1 extra = police locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 188 } name = "国防军第7'魔鬼'装甲师 "  type = light_armor model = 4 strength = 100 experience = 80 extra = light_armor_brigade brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 141 } name = "党卫军特别机动部队（V.T.） "  type = cavalry model = 62 strength = 100 experience = 60 extra = armored_car brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 201 } name = "“阿道夫·希特勒”警卫旗队 "  type = light_armor model = 3 max_strength = 100 experience = 100 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 144 } name = "党卫军第2“帝国”装甲师 "  type = light_armor model = 4 max_strength = 100 experience = 80 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 142 } name = "党卫军第3'骷髅'装甲师 "  type = light_armor model = 3 max_strength = 100 experience = 80 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 143 } name = "党卫军第4'警察'师 "  type = infantry model = 12 experience = 10 extra = police brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 14500 id = 149 } name = "党卫军第4“警察”装甲掷弹兵师 "  type = mechanized model = 0 max_strength = 100 experience = 40 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 145 } name = "党卫军第5“维京”装甲师 "  type = light_armor model = 4 max_strength = 100 experience = 80 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 212 } name = "党卫军第6“北方”山地师 "  type = bergsjaeger model = 10 max_strength = 100 experience = 60 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 213 } name = "党卫军第7“欧根亲王”山地师 "  type = bergsjaeger model = 10 max_strength = 100 experience = 60 extra = police brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 185 } name = "党卫军第8“弗洛里安·盖尔”骑兵师 "  type = cavalry model = 63 max_strength = 100 experience = 60 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 186 } name = "党卫军第9“霍亨斯陶芬”装甲师 "  type = light_armor model = 5 strength = 100 experience = 25 extra = heavy_armor brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 187 } name = "党卫军第10“弗兰德斯堡”装甲师 "  type = light_armor model = 5 strength = 100 experience = 25 extra = heavy_armor brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 211 } name = "党卫军第11“北欧”志愿装甲掷弹兵师 "  type = mechanized model = 1 strength = 80 experience = 45 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 189 } name = "党卫军第12“希特勒青年团”装甲师 "  type = light_armor model = 4 max_strength = 100 experience = 20 extra = heavy_armor brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 14500 id = 190 } name = "党卫军第13“弯刀”山地师 "  type = bergsjaeger model = 11 strength = 100 experience = 40 extra = police brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 14500 id = 191 } name = "党卫军第14“加利西亚”武装掷弹兵师 "  type = infantry model = 12 strength = 100 experience = 20 extra = police } 
  landdivision = { dormant = yes id = { type = 14500 id = 192 } name = "党卫军第15“拉脱维亚”武装掷弹兵师 "  type = motorized model = 13 strength = 100 experience = 40 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 193 } name = "党卫军第16“全国领袖”装甲掷弹兵师 "  type = motorized model = 13 strength = 100 experience = 40 extra = police } 
  landdivision = { dormant = yes id = { type = 14500 id = 194 } name = "党卫军第17“古兹·冯·伯利辛根”装甲掷弹兵师 "  type = motorized model = 13 strength = 80 experience = 60 extra = b_05 } 
  landdivision = { dormant = yes id = { type = 14500 id = 195 } name = "党卫军第18“霍斯特·威瑟尔”装甲掷弹兵师 "  type = motorized model = 13 strength = 60 experience = 40 extra = tank_destroyer } 
  landdivision = { dormant = yes id = { type = 14500 id = 196 } name = "党卫军第19“拉脱维亚”武装掷弹兵师 "  type = infantry model = 13 strength = 60 experience = 20 extra = anti_air } 
  landdivision = { dormant = yes id = { type = 14500 id = 197 } name = "党卫军第20“爱沙尼亚”武装掷弹兵师 "  type = infantry model = 13 strength = 50 experience = 10 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 198 } name = "党卫军第21“斯坦德贝格”山地师 "  type = bergsjaeger model = 11 strength = 85 experience = 10 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 199 } name = "党卫军第22“玛利娅·特蕾西亚”志愿骑兵师 "  type = cavalry model = 65 max_strength = 100 experience = 80 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 200 } name = "党卫军第23“荷兰”志愿武装掷弹兵师 "  type = infantry model = 13 strength = 40 experience = 50 extra = sp_artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 202 } name = "党卫军第24“喀斯特猎人”山地师 "  type = bergsjaeger model = 11 strength = 50 experience = 50 extra = police } 
  landdivision = { dormant = yes id = { type = 14500 id = 203 } name = "党卫军第25“匈牙利”武装掷弹兵师 "  type = infantry model = 13 strength = 100 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 204 } name = "党卫军第26“匈牙利人”武装掷弹兵师 "  type = infantry model = 13 strength = 100 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 205 } name = "党卫军第27装甲师 "  type = infantry model = 13 strength = 40 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 206 } name = "党卫军第27“朗格马克”武装掷弹兵师 "  type = motorized model = 13 strength = 60 experience = 60 extra = b_05 } 
  landdivision = { dormant = yes id = { type = 14500 id = 207 } name = "党卫军第28装甲师 "  type = armor model = 13 strength = 70 experience = 20 extra = heavy_armor } 
  landdivision = { dormant = yes id = { type = 14500 id = 208 } name = "党卫军第28“瓦隆人”志愿武装掷弹兵师 "  type = infantry model = 13 strength = 50 experience = 30 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 209 } name = "党卫军第29“意大利”志愿武装掷弹兵师 "  type = infantry model = 13 strength = 60 experience = 30 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 210 } name = "党卫军第30“西格林”武装掷弹兵师 "  type = infantry model = 13 strength = 60 experience = 10 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 214 } name = "党卫军第31“巴契卡”志愿武装掷弹兵师 "  type = infantry model = 13 strength = 80 extra = artillery } 
  landdivision = { dormant = yes id = { type = 14500 id = 215 } name = "党卫军第32“1月30日”志愿武装掷弹兵师 "  type = militia model = 5 strength = 100 experience = 10 extra = anti_tank } 
  landdivision = { dormant = yes id = { type = 14500 id = 216 } name = "党卫军第33“查理曼”志愿武装掷弹兵师 "  type = infantry model = 14 strength = 100 experience = 20 extra = anti_tank } 
  landdivision = { dormant = yes id = { type = 14500 id = 217 } name = "党卫军第34“荷兰后备”志愿武装掷弹兵师 "  type = militia model = 5 strength = 30 experience = 10 extra = anti_tank } 
  landdivision = { dormant = yes id = { type = 14500 id = 218 } name = "党卫军第35警察武装掷弹兵师 "  type = militia model = 5 strength = 50 extra = police } 
  landdivision = { dormant = yes id = { type = 14500 id = 219 } name = "党卫军第36武装掷弹兵师 "  type = infantry model = 14 strength = 30 experience = 40 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 220 } name = "党卫军第37“吕佐夫”志愿骑兵师 "  type = cavalry model = 66 strength = 35 experience = 20 extra = armored_car } 
  landdivision = { dormant = yes id = { type = 14500 id = 221 } name = "党卫军第38“尼伯龙根”武装掷弹兵师 "  type = militia model = 5 strength = 50 experience = 20 extra = anti_tank } 
  landdivision = { dormant = yes id = { type = 14500 id = 222 } name = "国防军“大德意志”师 "  type = mechanized model = 0 strength = 100 experience = 80 extra = heavy_armor } 
  landdivision = { dormant = yes id = { type = 14500 id = 223 } name = "国防军装甲教导师 "  type = light_armor model = 5 strength = 100 experience = 80 extra = heavy_armor } 
  landdivision = { dormant = yes id = { type = 14500 id = 224 } name = "“赫尔曼·戈林”伞兵装甲师 "  type = light_armor model = 5 strength = 100 experience = 60 extra = heavy_armor } 
  landdivision = { dormant = yes id = { type = 14500 id = 225 } name = "国防军第15“西西里”武装掷弹兵师 "  type = infantry model = 13 strength = 75 experience = 40 extra = light_armor_brigade locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 226 } name = "“勃兰登堡”特种武装掷弹兵师 "  type = mechanized model = 1 strength = 80 experience = 60 extra = light_armor_brigade } 
  landdivision = { dormant = yes id = { type = 14500 id = 420 } name = "汉堡党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 421 } name = "埃森党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 422 } name = "科隆党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 423 } name = "斯图加特党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 424 } name = "莱比锡党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 425 } name = "德累斯顿党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 426 } name = "纽伦堡党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 427 } name = "慕尼黑党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 428 } name = "杜塞尔多夫党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 429 } name = "亚琛党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 430 } name = "威廉港党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 431 } name = "卡塞尔党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 432 } name = "法兰克福党卫军指挥部 "  type = infantry model = 12 strength = 100 experience = 100 extra = anti_air brigade_model = 8 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 433 } name = "梅梅尔卫戍师 "  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 434 } name = "柯尼斯堡卫戍师 "  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 435 } name = "但泽卫戍师 "  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 436 } name = "施特拉尔松德卫戍师 "  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 437 } name = "罗斯托夫卫戍师 "  type = motorized model = 12 strength = 100 experience = 100 extra = heavy_armor brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 943 } name = "纳粹僵尸部队"  type = d_17 model = 0 strength = 100 organisation = 300 morale = 300 locked = yes } 
  landdivision = { dormant = yes id = { type = 14500 id = 944 } name = "纳粹僵尸部队"  type = d_17 model = 0 strength = 100 organisation = 300 morale = 300 } 

  navaldivision = { dormant = yes id = { type = 14500 id = 303 } name = "俾斯麦号 " type = battleship model = 2 extra1 = naval_improved_hull_l extra2 = naval_fire_controll_l extra3 = naval_radar_l extra4 = b_03 brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 0 strength = 100 experience = 60 }
  navaldivision = { dormant = yes id = { type = 14500 id = 304 } name = "提尔皮茨号 " type = battleship model = 2 extra1 = naval_improved_hull_l extra2 = naval_fire_controll_l extra3 = naval_radar_l extra4 = b_03 brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 0 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 305 } name = "齐柏林伯爵号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 75 }
  navaldivision = { dormant = yes id = { type = 14500 id = 306 } name = "兴登堡号 " type = battleship model = 6 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_improved_hull_l extra4 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 2 brigade_model3 = 0 brigade_model4 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 307 } name = "腓特烈大帝号 " type = battleship model = 7 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_improved_hull_l extra4 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 2 brigade_model3 = 0 brigade_model4 = 2 strength = 100 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 308 } name = "沙恩霍斯特号 " type = battlecruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 309 } name = "格奈森瑙号 " type = battlecruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 310 } name = "希佩尔海军上将号 " type = heavy_cruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 311 } name = "布吕歇尔号 " type = heavy_cruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 312 } name = "欧根亲王号 " type = heavy_cruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 313 } name = "舍尔海军上将号 " type = heavy_cruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 14500 id = 314 } name = "塞德利茨号 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 strength = 85 }
  navaldivision = { dormant = yes id = { type = 14500 id = 319 } name = "齐格弗雷德号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 }
  navaldivision = { dormant = yes id = { type = 14500 id = 320 } name = "凯萨琳皇后号 " type = carrier model = 2 extra1 = cag brigade_model1 = 2 strength = 100 }
  navaldivision = { dormant = yes id = { type = 14500 id = 321 } name = "吕佐夫号 " type = battleship model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 strength = 100 }
  navaldivision = { dormant = yes id = { type = 14500 id = 322 } name = "路德维希亲王号 " type = battleship model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 strength = 100 }
  navaldivision = { dormant = yes id = { type = 14500 id = 323 } name = "格拉森纳普号 " type = battlecruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 324 } name = "格斯勒伯爵号 " type = battlecruiser model = 2 extra1 = b_03 extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 325 } name = "东普鲁士号 " type = heavy_cruiser model = 2 extra1 = naval_fire_controll_l extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 326 } name = "艾尔莎号 " type = heavy_cruiser model = 2 extra1 = naval_fire_controll_l extra2 = naval_fire_controll_l extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 329 } name = "美茵茨号 " type = light_cruiser model = 2 extra1 = naval_fire_controll_s extra2 = naval_radar_s extra3 = naval_anti_air_s brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 330 } name = "波鸿号 " type = light_cruiser model = 2 extra1 = naval_fire_controll_s extra2 = naval_radar_s extra3 = naval_anti_air_s brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 331 } name = "法兰克福号 " type = light_cruiser model = 2 extra1 = naval_fire_controll_s extra2 = naval_radar_s extra3 = naval_anti_air_s brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 332 } name = "路德维希哈芬号 " type = light_cruiser model = 2 extra1 = naval_fire_controll_s extra2 = naval_radar_s extra3 = naval_anti_air_s brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 334 } name = "Z-50号 " type = destroyer model = 2 extra1 = naval_radar_s extra2 = naval_anti_air_s brigade_model1 = 0 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 335 } name = "Z-51号 " type = destroyer model = 2 extra1 = naval_radar_s extra2 = naval_anti_air_s brigade_model1 = 0 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 336 } name = "Z-52号 " type = destroyer model = 2 extra1 = naval_radar_s extra2 = naval_anti_air_s brigade_model1 = 0 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 337 } name = "Z-53号 " type = destroyer model = 2 extra1 = naval_radar_s extra2 = naval_anti_air_s brigade_model1 = 0 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 438 } name = "石勒苏益格·荷尔斯泰因号 " type = battlecruiser model = 2 extra1 = b_03 extra2 = naval_anti_air_l extra3 = naval_fire_controll_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14500 id = 439 } name = "西里西亚号 " type = battlecruiser model = 2 extra1 = b_03 extra2 = naval_anti_air_l extra3 = naval_fire_controll_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14500 id = 440 } name = "石勒苏益格·荷尔斯泰因号 " type = battleship model = 2 extra1 = b_03 extra2 = naval_anti_air_l extra3 = naval_fire_controll_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14500 id = 441 } name = "西里西亚号 " type = battleship model = 2 extra1 = b_03 extra2 = naval_anti_air_l extra3 = naval_fire_controll_l brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 strength = 100 experience = 25 }
  navaldivision = { dormant = yes id = { type = 14500 id = 442 } name = "SMS 国王号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = b_04 extra4 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 3 }
  navaldivision = { dormant = yes id = { type = 14500 id = 443 } name = "SMS 边境总督号 " type = battleship model = 4 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_improved_hull_l extra4 = naval_anti_air_l extra5 = b_03 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 0 brigade_model4 = 3 brigade_model5 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 444 } name = "SMS 威廉二世号 " type = battleship model = 7 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = b_13 extra4 = naval_anti_air_l extra5 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 2 brigade_model5 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 445 } name = "SMS 威廉皇储号 " type = battleship model = 4 extra1 = naval_anti_air_l extra2 = naval_radar_l extra3 = naval_fire_controll_l extra4 = naval_improved_hull_l extra5 = b_25 brigade_model1 = 2 brigade_model2 = 1 brigade_model3 = 1 brigade_model4 = 0 brigade_model5 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 446 } name = "SMS 鲁登道夫号 " type = battlecruiser model = 2 extra1 = naval_torpedoes_l extra2 = naval_fire_controll_l extra3 = b_04 brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 447 } name = "SMS 埃特尔 弗里德里希王子号 " type = battlecruiser model = 2 extra1 = naval_torpedoes_l extra2 = naval_fire_controll_l extra3 = b_04 brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 448 } name = "SMS 赫尔戈兰号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l extra3 = b_04 brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 449 } name = "SMS 拿骚号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 450 } name = "SMS 阿尔伯特国王号 " type = battleship model = 3 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 451 } name = "SMS 卡茨巴赫号 " type = battleship model = 6 extra1 = naval_fire_controll_l extra2 = b_04 extra3 = naval_anti_air_l extra4 = b_13 brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 1 brigade_model4 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 452 } name = "SMS 库尔姆号 " type = battleship model = 6 extra1 = naval_fire_controll_l extra2 = naval_radar_l extra3 = naval_anti_air_l extra4 = b_13 brigade_model1 = 1 brigade_model2 = 2 brigade_model3 = 1 brigade_model4 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 453 } name = "SMS 威廉大帝号 " type = battleship model = 8 extra1 = naval_radar_l extra2 = naval_improved_hull_l extra3 = naval_anti_air_l extra4 = b_04 extra5 = b_03 brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 3 brigade_model4 = 1 brigade_model5 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 454 } name = "SMS 巴伐利亚号 " type = battleship model = 3 extra1 = naval_anti_air_l extra2 = naval_radar_l extra3 = naval_improved_hull_l extra4 = b_03 brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 0 brigade_model4 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 455 } name = "SMS 巴登号 " type = battleship model = 3 extra1 = naval_anti_air_l extra2 = naval_radar_l extra3 = naval_improved_hull_l extra4 = b_03 brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 0 brigade_model4 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 456 } name = "SMS 萨克森号 " type = battleship model = 3 extra1 = naval_anti_air_l extra2 = naval_radar_l extra3 = b_04 extra4 = b_03 brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 1 brigade_model4 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 457 } name = "SMS 符腾堡号 " type = battleship model = 3 extra1 = naval_anti_air_l extra2 = naval_radar_l extra3 = b_04 extra4 = b_03 brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 1 brigade_model4 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 458 } name = "SMS 奥尔登堡号 " type = battleship model = 4 extra1 = naval_anti_air_l extra2 = naval_radar_l extra3 = b_04 extra4 = naval_improved_hull_l extra5 = b_03 brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 1 brigade_model4 = 0 brigade_model5 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 459 } name = "SMS 莱茵兰号 " type = battleship model = 4 extra1 = naval_anti_air_l extra2 = naval_radar_l extra3 = b_04 extra4 = naval_improved_hull_l extra5 = b_03 brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 1 brigade_model4 = 0 brigade_model5 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 460 } name = "SMS 奥古斯塔皇后号 " type = heavy_cruiser model = 3 extra1 = naval_torpedoes_l extra2 = naval_fire_controll_s extra3 = b_04 brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 461 } name = "SMS 维多利亚 路易斯号 " type = heavy_cruiser model = 3 extra1 = naval_torpedoes_l extra2 = naval_fire_controll_s extra3 = b_04 brigade_model1 = 0 brigade_model2 = 1 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 462 } name = "SMS 维多利亚 阿德莱德号 " type = heavy_cruiser model = 3 extra1 = naval_anti_air_s extra2 = naval_improved_hull_s extra3 = naval_torpedoes_s brigade_model1 = 2 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 463 } name = "SMS 赫尔米内 罗伊号 " type = heavy_cruiser model = 3 extra1 = naval_anti_air_s extra2 = naval_improved_hull_s extra3 = naval_torpedoes_s brigade_model1 = 0 brigade_model2 = 0 brigade_model3 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 464 } name = "SMS 米卢斯号" type = light_cruiser model = 2 extra1 = naval_anti_air_s extra2 = naval_fire_controll_s brigade_model1 = 3 brigade_model2 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 465 } name = "SMS 埃尔福特号 " type = light_cruiser model = 2 extra1 = naval_anti_air_s extra2 = naval_fire_controll_s brigade_model1 = 3 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 466 } name = "SMS 亚琛号 " type = light_cruiser model = 2 extra1 = naval_anti_air_s extra2 = naval_torpedoes_s brigade_model1 = 3 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 467 } name = "SMS 信天翁号 " type = light_cruiser model = 2 extra1 = naval_anti_air_s extra2 = naval_torpedoes_s brigade_model1 = 3 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 14500 id = 468 } name = "SMS 卢森堡号 " type = light_cruiser model = 2 extra1 = naval_radar_s extra2 = naval_anti_air_s brigade_model1 = 0 brigade_model2 = 1 }
  navaldivision = { dormant = yes id = { type = 14500 id = 469 } name = "SMS 科布伦茨号 " type = light_cruiser model = 2 extra1 = naval_radar_s extra2 = b_04 brigade_model1 = 0 brigade_model2 = 1 }

  airdivision = { dormant = yes id = { type = 14500 id = 419 } name = "克里特空中支援中队" type = transport_plane model = 1 experience = 40 }
}
