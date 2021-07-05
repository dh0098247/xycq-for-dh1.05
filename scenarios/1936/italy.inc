##############################
# Country definition for ITA #
##############################
province = {
  id = 368 # 热那亚
  landfort = 5
}
province = {
  id = 370 # 米兰
}
province = {
  id = 378 # 威尼斯
}
province = {
  id = 515 # 格罗塞托
}
province = {
  id = 519 # 罗马
}
province = {
  id = 521 # 那不勒斯
}
province = {
  id = 523 # 塔兰托
}
province = {
  id = 525 # 巴勒莫
}
province = { id = 531 landfort = 5 } # 都灵
province = {
  id = 534 # 卡利亚里
  supplypool = 1000
  oilpool = 250
}
province = {
  id = 919 # 托卜鲁克
  landfort = 3
}
province = {
  id = 924 # 班加西
}
province = {
  id = 932 # 的黎波里（利比亚）
  supplypool = 1000
  oilpool = 250
}
province = {
  id = 1033 # 马萨瓦
  supplypool = 300
  oilpool = 100
}
province = {
  id = 1056 # 摩加迪沙
  supplypool = 300
  oilpool = 100
}
province = { id = 3193 landfort = 5 } # 库内奥
province = {
  id = 3200 # 的里雅斯特
}

#####################
# Country main data #
#####################

country = {
  tag                = ITA
  capital            = 519 # 罗马
  manpower           = 1000
  tc_mod                 = 1.05
  research_mod           = 1
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 500
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 300
  transports     = 600
  escorts        = 200

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = {
      tag        = ALB
      value      = 10
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation = {
      tag        = AUS
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 30 }
    relation = { tag = CZE value = 15 }
    relation = { tag = ENG value = -50 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -50 }
    relation = { tag = GER value = 50 }
    relation = {
      tag        = GRE
      value      = -35
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = HOL value = -20 }
    relation = {
      tag        = HUN
      value      = 125
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = SAF value = 1 }
    relation = {
      tag        = SAU
      value      = 20
      guaranteed = { year = 1935 month = december day = 30 }
    }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = TUR
      value      = 1
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 2 }

  nationalprovinces      = { 1015 1016 1017 1018 1896 1897 1899 3193 3194 3195 3196 3197 3198 3199 3200 3201 3202 3203 3204 3205 3206 3207 3208 3209 3210 3226 3228 3230 3296 3297 3298 3299 3300 3301 3302 3303 3304 3305 3306 3307 3576 368 369 370 371 378 379 4080 4081 4082 4083 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 916 917 918 919 920 921 922 923 924 925 926 927 928 929 930 931 932 933 }
  ownedprovinces         = { 1015 1016 1017 1018 1033 1034 1038 1039 1055 1056 1058 1896 1897 1899 3193 3194 3195 3196 3197 3198 3199 3200 3201 3202 3203 3204 3205 3206 3207 3208 3209 3210 3226 3228 3230 3296 3297 3298 3299 3300 3301 3302 3303 3304 3305 3306 3307 3352 3576 368 369 370 371 378 379 398 399 4080 4081 4082 4083 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 916 917 918 919 920 921 922 923 924 925 926 927 928 929 930 931 932 933 }
  controlledprovinces    = { 1015 1016 1017 1018 1033 1034 1038 1039 1055 1056 1058 1896 1897 1899 3193 3194 3195 3196 3197 3198 3199 3200 3201 3202 3203 3204 3205 3206 3207 3208 3209 3210 3226 3228 3230 3296 3297 3298 3299 3300 3301 3302 3303 3304 3305 3306 3307 3352 3576 368 369 370 371 378 379 398 399 4080 4081 4082 4083 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 531 534 916 917 918 919 920 921 922 923 924 925 926 927 928 929 930 931 932 933 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5180 5660 5670 5680 5310 5010 1010 1020 1100 1110 1710 1830 2280 2290 2610 2300 2420 2540 2550 2010 2020 3490 3550 3560 3600 3610 3620 3010 3020 3070 3080 3130 3140 3250 3410 3510 3820 3760 6010 6020 6030 6040 6050 6320 4120 4010 8010 8020 8390 8150 8030 8050 8530 9700 9710 9010 7410 9020 9030 6550 6500 5090 5060 5810 5020 4130 4020 3320 3050 3110 3170 3260 3290 2360 1410 8200 8160 8660 8170 1900 }
  inventions             = { 8005 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 4
    free_market       = 7
    professional_army = 10
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 3001 } # 维托利奥 厄玛努埃尔 三世 
  headofgovernment       = { type = 9 id = 3002 } # 贝尼托·墨索里尼
  foreignminister        = { type = 9 id = 3003 } # 吉安·加莱阿佐·齐亚诺
  armamentminister       = { type = 9 id = 3004 } # 贝尼托·墨索里尼
  ministerofsecurity     = { type = 9 id = 3005 } # 吉多 巴非里尼-圭第 
  ministerofintelligence = { type = 9 id = 3006 } # 塞萨雷 阿姆 
  chiefofstaff           = { type = 9 id = 3007 } # 弗朗切斯科 格拉兹欧尼 
  chiefofarmy            = { type = 9 id = 3008 } # 阿尔贝托 帕里亚尼 
  chiefofnavy            = { type = 9 id = 3009 } # 多梅尼科·卡瓦那里 
  chiefofair             = { type = 9 id = 3010 } # 朱塞佩 瓦莱 

  landunit = {
    id       = { type = 23500 id = 1 }
    name     = "意大利第I军 "
    location = 531
    leader   = 6054
    division = {
      id             = { type = 23500 id = 4 }
      name           = "意大利陆军都灵指挥部"
      type           = hq
      model          = 1
      extra          = b_05
      brigade_model  = 2
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 3 }
      name           = "第22'阿尔卑斯'猎兵师 "
      type           = mechanized
      model          = 45
      extra          = none
      brigade_model  = 0
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 5 }
      name           = "第4'李维诺'步兵师 "
      type           = mechanized
      model          = 45
      extra          = none
      brigade_model  = 0
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 6 }
      name           = "第25'博洛尼亚'步兵师 "
      type           = mechanized
      model          = 45
      extra          = none
      brigade_model  = 0
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 9 }
      name           = "第3'拉文纳'步兵师 "
      type           = motorized
      model          = 73
      extra          = anti_tank
      brigade_model  = 2
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 10 }
      name           = "第6'库内奥'步兵师 "
      type           = motorized
      model          = 73
      extra          = tank_destroyer
      brigade_model  = 2
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 11 }
    name     = "意大利第II军 "
    location = 378
    leader   = 6024
    division = {
      id             = { type = 23500 id = 21 }
      name           = "第13'国王'步兵师 "
      type           = motorized
      model          = 73
      extra          = artillery
      brigade_model  = 2
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 14 }
      name           = "第12'西西里'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 15 }
      name           = "第15'贝加诺'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 16 }
    name     = "意大利第VIII军 "
    location = 378
    leader   = 6075
    division = {
      id             = { type = 23500 id = 18 }
      name           = "第9''帕苏比奥'步兵师 "
      type           = motorized
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 19 }
      name           = "第10'皮亚维'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 22 }
      name           = "第14'伊松佐'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 20 }
    name     = "意大利第XI军 "
    location = 378
    leader   = 6065
    division = {
      id             = { type = 23500 id = 79 }
      name           = "第3'朱莉亚'山地师 "
      type           = bergsjaeger
      model          = 16
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 23 }
    name     = "意大利快速骑兵军 "
    location = 378
    leader   = 6102
    division = {
      id             = { type = 23500 id = 24 }
      name           = "第1'欧吉尼奥·迪·萨伏亚'快速师 "
      type           = cavalry
      model          = 81
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 25 }
      name           = "第2'伊曼努尔·菲利贝尔托'快速师 "
      type           = cavalry
      model          = 81
      extra          = artillery
      brigade_model  = 3
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 26 }
      name           = "第3'奥斯塔公爵阿梅迪奥亲王'快速师 "
      type           = cavalry
      model          = 81
      extra          = armored_car
      brigade_model  = 1
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 27 }
    name     = "意大利第III军 "
    location = 524
    leader   = 6278
    division = {
      id             = { type = 23500 id = 29 }
      name           = "第16'皮斯托亚'步兵师 "
      type           = infantry
      model          = 73
      extra          = artillery
      brigade_model  = 2
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 31 }
      name           = "第7'托斯卡纳之狼'步兵师 "
      type           = motorized
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 32 }
      name           = "第20'弗留利'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 33 }
    name     = "意大利第X军 "
    location = 524
    division = {
      id             = { type = 23500 id = 34 }
      name           = "第17'帕维亚'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 35 }
      name           = "第23'费拉拉'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 36 }
    name     = "意大利第XII军 "
    location = 525
    division = {
      id             = { type = 23500 id = 37 }
      name           = "第28'奥斯塔'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 39 }
      name           = "第31'卡拉布里亚'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 40 }
    name     = "意大利第IV军 "
    location = 368
    division = {
      id             = { type = 23500 id = 42 }
      name           = "第11'布雷诺'步兵师 "
      type           = infantry
      model          = 73
      extra          = artillery
      brigade_model  = 2
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 44 }
      name           = "第1'苏佩尔加'步兵师 "
      type           = motorized
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 46 }
      name           = "第2'斯弗尔泽斯卡'步兵师 "
      type           = motorized
      model          = 73
      extra          = artillery
      strength       = 70
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 47 }
    name     = "阿尔卑斯山地军 "
    location = 368
    division = {
      id             = { type = 23500 id = 48 }
      name           = "第1'图林斯'山地师 "
      type           = bergsjaeger
      model          = 16
      extra          = engineer
      brigade_model  = 2
      strength       = 90
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 49 }
      name           = "第2'特伦蒂诺'山地师 "
      type           = bergsjaeger
      model          = 16
      extra          = engineer
      brigade_model  = 2
      strength       = 90
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 7 }
      name           = "第4'库内利斯'山地师 "
      type           = bergsjaeger
      model          = 16
      extra          = engineer
      brigade_model  = 1
      strength       = 90
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23500 id = 50 }
    name     = "意大利精锐军 "
    location = 519
    leader   = 6042
    division = {
      id             = { type = 23500 id = 581 }
      name           = "意大利西集团军群司令部 "
      type           = hq
      model          = 0
      extra          = rocket_artillery
      brigade_model  = 1
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 51 }
      name           = "第21'撒丁'掷弹兵师 "
      type           = cavalry
      model          = 82
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 82 }
      name           = "第22掷弹兵师 "
      type           = cavalry
      model          = 82
      extra          = artillery
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 83 }
      name           = "第23掷弹兵师 "
      type           = cavalry
      model          = 82
      extra          = engineer
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 84 }
      name           = "第24掷弹兵师 "
      type           = cavalry
      model          = 82
      extra          = light_armor_brigade
      brigade_model  = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 23500 id = 52 }
    name     = "意属东非第IX军 "
    location = 1033
    leader   = 6013
    division = {
      id             = { type = 23500 id = 54 }
      name           = "第32'马尔凯'步兵师 "
      type           = infantry
      model          = 73
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 53 }
    name     = "马萨瓦守备军"
    location = 1033
    leader   = 6013
    division = {
      id             = { type = 23500 id = 81 }
      name           = "马萨瓦要塞"
      type           = garrison
      model          = 1
      extra          = artillery
      brigade_model  = 1
      strength       = 100
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 23500 id = 55 }
    name     = "意属东非第I军 "
    location = 1038
    leader   = 6041
    division = {
      id             = { type = 23500 id = 56 }
      name           = "第26'阿西埃塔'步兵师 "
      type           = infantry
      model          = 73
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 57 }
      name           = "第30'萨沃伊王朝'步兵师 "
      type           = infantry
      model          = 73
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 58 }
      name           = "第5'普斯特利亚'山地师 "
      type           = bergsjaeger
      model          = 16
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 60 }
    name     = "意属东非第II军 "
    location = 1039
    division = {
      id             = { type = 23500 id = 59 }
      name           = "黑衫军第4'一月3日'师 "
      type           = motorized
      model          = 73
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 66 }
      name           = "黑衫军第1'三月23日'师 "
      type           = motorized
      model          = 73
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 63 }
      name           = "黑衫军第3'四月21日'师 "
      type           = motorized
      model          = 73
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 64 }
    name     = "意属东非第III军 "
    location = 1038
    leader   = 6021
    division = {
      id             = { type = 23500 id = 61 }
      name           = "第19'威尼斯'步兵师 "
      type           = infantry
      model          = 73
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 62 }
      name           = "第24'皮内罗奥'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 65 }
      name           = "第27'布雷西亚'步兵师 "
      type           = infantry
      model          = 73
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 67 }
    name     = "意属东非第IV军 "
    location = 1039
    division = {
      id             = { type = 23500 id = 68 }
      name           = "第5'科塞里亚'步兵师 "
      type           = infantry
      model          = 73
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 69 }
      name           = "黑衫军第2'十月28日'师 "
      type           = motorized
      model          = 73
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 71 }
    name     = "意属厄立特里亚卫戎军 "
    location = 1039
    leader   = 6118
    division = {
      id             = { type = 23500 id = 72 }
      name           = "厄立特里亚第1师 "
      type           = militia
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 73 }
      name           = "厄立特里亚第2师 "
      type           = militia
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 70 }
      name           = "黑衫军第5'二月1日'师 "
      type           = motorized
      model          = 73
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 74 }
    name     = "意属利比亚警备军 "
    location = 1055
    leader   = 6084
    division = {
      id             = { type = 23500 id = 75 }
      name           = "第29'皮埃蒙特'步兵师 "
      type           = infantry
      model          = 73
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 76 }
      name           = "利比亚民兵师 "
      type           = militia
      model          = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 77 }
      name           = "黑衫军第6'台伯'师 "
      type           = motorized
      model          = 73
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 78 }
      name           = "黑衫军第7'锡勒纳'师 "
      type           = motorized
      model          = 73
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 80 }
    name     = "托卜鲁克要塞守备军 "
    location = 919
    division = {
      id             = { type = 23500 id = 580 }
      name           = "意大利北非集团军司令部 "
      type           = hq
      model          = 0
      extra          = b_09
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 17 }
      name           = "第18'墨西拿'步兵师 "
      type           = infantry
      model          = 73
      strength       = 70
      experience     = 40
    }
    division = {
      id             = { type = 23500 id = 28 }
      name           = "托布鲁克要塞 "
      type           = garrison
      model          = 2
      strength       = 100
      experience     = 10
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 23500 id = 86 }
    name     = "北非-叙利亚要塞守备军 "
    location = 932
    division = {
      id             = { type = 23500 id = 38 }
      name           = "北非-叙利亚要塞 "
      type           = garrison
      model          = 2
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 10
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 23500 id = 87 }
    name     = "北非-叙利亚要塞守备军 "
    location = 924
    division = {
      id             = { type = 23500 id = 41 }
      name           = "北非-叙利亚要塞 "
      type           = garrison
      model          = 2
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 10
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 23500 id = 88 }
    name     = "北非-叙利亚要塞守备军 "
    location = 3304
    division = {
      id             = { type = 23500 id = 43 }
      name           = "北非-叙利亚要塞 "
      type           = garrison
      model          = 2
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 10
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 23500 id = 89 }
    name     = "北非-叙利亚要塞守备军 "
    location = 3301
    division = {
      id             = { type = 23500 id = 45 }
      name           = "北非-叙利亚要塞 "
      type           = garrison
      model          = 2
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 10
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 23500 id = 125 }
    name     = "意大利皇家海军第I舰队 "
    location = 523
    base     = 523
    leader   = 6163
    division = {
      id             = { type = 23500 id = 128 }
      name           = "卡约·杜利奥号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 23500 id = 300 }
      name           = "RM 加富尔伯爵号"
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 23500 id = 134 }
      name           = "戈里亚齐号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 135 }
      name           = "阜姆号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 170 }
      name           = "特兰托号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 142 }
      name           = "阿尔贝里科·达·巴比亚诺号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 143 }
      name           = "路易吉·卡多尔纳号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 144 }
      name           = "阿尔贝托·迪·朱萨诺号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 165 }
      name           = "巴特罗梅奥·科勒奥尼号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 136 }
      name           = "阿提格利埃尔号 "
      type           = destroyer
      model          = 1
      extra1         = none
      brigade_model1 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 126 }
      name           = "Ｇ·伯塔号 "
      type           = destroyer
      model          = 1
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 158 }
      name           = "卡拉塔菲米号 "
      type           = destroyer
      model          = 1
      extra1         = none
      brigade_model1 = 0
      experience     = 10
    }
  }
  navalunit = {
    id       = { type = 23500 id = 108 }
    name     = "意大利皇家海军第II舰队 "
    location = 523
    base     = 523
    leader   = 6157
    division = {
      id             = { type = 23500 id = 127 }
      name           = "安德烈亚·多里亚号 "
      type           = battleship
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 301 }
      name           = "朱利奥·凯撒号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 133 }
      name           = "扎拉号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 162 }
      name           = "波拉号 "
      type           = heavy_cruiser
      model          = 2
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 171 }
      name           = "博尔札诺号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 176 }
      name           = "奥斯塔公爵号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 177 }
      name           = "默兹奥·阿特坦杜洛号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 178 }
      name           = "雷蒙多·蒙德库科里号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 152 }
      name           = "埃斯佩罗号 "
      type           = destroyer
      model          = 1
      extra1         = none
      brigade_model1 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 209 }
      name           = "奥斯特罗号 "
      type           = destroyer
      model          = 1
      extra1         = none
      brigade_model1 = 0
      experience     = 10
    }
  }
  navalunit = {
    id       = { type = 23500 id = 151 }
    name     = "意大利皇家海军斯克迪舰队 "
    location = 378
    base     = 378
    leader   = 6175
    division = {
      id             = { type = 23500 id = 172 }
      name           = "的里雅斯特号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_torpedoes_l
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 145 }
      name           = "阿曼德·迪亚兹号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = b_04
      extra3         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 405 }
      name           = "塔兰托号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = b_04
      extra3         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      brigade_model3 = 1
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 226 }
      name           = "泽菲罗号 "
      type           = destroyer
      model          = 2
      extra1         = naval_asw
      extra2         = naval_improved_hull_s
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 23500 id = 227 }
      name           = "皮洛号 "
      type           = destroyer
      model          = 0
      extra1         = naval_torpedoes_s
      extra2         = b_15
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 23500 id = 228 }
      name           = "米索里号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 153 }
      name           = "天箭座号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 137 }
      name           = "奥西尼号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 138 }
      name           = "特拉尼亚号 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 159 }
    name     = "意大利皇家海军玛利那第III舰队 "
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 219 }
      name           = "利比亚号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 130 }
      name           = "伦巴第号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 131 }
      name           = "巴里号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = b_04
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 229 }
      name           = "扎菲罗号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 230 }
      name           = "内姆博号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 231 }
      name           = "埃鸟罗号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 232 }
      name           = "博雷亚号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 163 }
    name     = "意大利皇家海军玛利那第II舰队 "
    location = 368
    base     = 368
    leader   = 6184
    division = {
      id             = { type = 23500 id = 129 }
      name           = "圣乔治号 "
      type           = heavy_cruiser
      model          = 0
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 164 }
      name           = "班德·涅雷号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_torpedoes_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 10
      maxspeed = 34
    }
    division = {
      id             = { type = 23500 id = 224 }
      name           = "阿魁隆内号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 225 }
      name           = "契格诺号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 179 }
      name           = "科赞兹号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 167 }
      name           = "瓦鲁加号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 147 }
      name           = "阿维提罗号 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 174 }
      name           = "阿斯马拉号 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 180 }
    name     = "意大利皇家海军索莫吉比利第I舰队 "
    location = 534
    base     = 534
    division = {
      id             = { type = 23500 id = 181 }
      name           = "佐埃亚号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 182 }
      name           = "布加丁号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 183 }
      name           = "米卡号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 185 }
      name           = "巴尼约林尼号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 186 }
      name           = "芬齐号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 187 }
      name           = "普罗旺纳号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 190 }
      name           = "加利略号 "
      type           = submarine
      model          = 2
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 197 }
      name           = "加尔旺尼号 "
      type           = submarine
      model          = 2
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 202 }
      name           = "托里切勒号 "
      type           = submarine
      model          = 2
      experience     = 10
    }
  }
  navalunit = {
    id       = { type = 23500 id = 192 }
    name     = "意大利皇家海军索莫吉比利第IV舰队 "
    location = 523
    base     = 523
    division = {
      id             = { type = 23500 id = 193 }
      name           = "贝伊卢耳号 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 194 }
      name           = "马可尼号 "
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 203 }
    name     = "意大利皇家海军罗斯舰队 "
    location = 1033
    base     = 1033
    division = {
      id             = { type = 23500 id = 204 }
      name           = "阿尔太尔号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 205 }
      name           = "卡米契亚·内拉号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 200 }
      name           = "艾云尼号 "
      type           = destroyer
      model          = 0
      extra1         = none
      brigade_model1 = 0
    }
  }

  airunit = { 
    id       = { type = 23500 id = 104 }
    name     = "意大利第I空军编队 "
    location = 368
    base     = 368
    leader   = 6226
    division = {
      id             = { type = 23500 id = 112 }
      name           = "第5歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 114 }
      name           = "第4歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 146 }
      name           = "第3歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 148 }
      name           = "第2歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 109 }
      name           = "第1'天鹰座'歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 50
      experience     = 60
    }
  }
  airunit = { 
    id       = { type = 23500 id = 106 }
    name     = "第1战术轰炸机编队 "
    location = 525
    base     = 525
    leader   = 6282
    division = {
      id             = { type = 23500 id = 120 }
      name           = "第10'马蒂'战术轰炸联队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 23500 id = 111 }
      name           = "第3'半人马座'战术轰炸联队 "
      type           = tactical_bomber
      model          = 1
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 139 }
      name           = "第4战术轰炸联队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 23500 id = 140 }
      name           = "第2战术轰炸联队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 20
    }
  }
  airunit = { 
    id       = { type = 23500 id = 116 }
    name     = "意大利北非空军运输编队 "
    location = 932
    base     = 932
    division = {
      id             = { type = 23500 id = 118 }
      name           = "第39空中运输联队 "
      type           = transport_plane
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 154 }
      name           = "第40空中运输联队 "
      type           = transport_plane
      model          = 0
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 169 }
    name     = "意大利地中海空军编队 "
    location = 368
    base     = 368
    division = {
      id             = { type = 23500 id = 173 }
      name           = "第20海军轰炸联队 "
      type           = naval_bomber
      model          = 1
      extra          = escort
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 175 }
      name           = "第21海军轰炸联队 "
      type           = naval_bomber
      model          = 1
      extra          = escort
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 184 }
      name           = "第22海军轰炸联队 "
      type           = naval_bomber
      model          = 1
      extra          = escort
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 188 }
      name           = "第23海军轰炸联队 "
      type           = naval_bomber
      model          = 1
      extra          = escort
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 189 }
      name           = "第24海军轰炸联队 "
      type           = naval_bomber
      model          = 1
      extra          = escort
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
  }
  airunit = { 
    id       = { type = 23500 id = 119 }
    name     = "意大利第V空军编队 "
    location = 525
    base     = 525
    division = {
      id             = { type = 23500 id = 121 }
      name           = "第2'博里'歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 23500 id = 155 }
      name           = "第10歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 23500 id = 157 }
      name           = "第12歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 23500 id = 123 }
      name           = "第14'雷克斯'歼击机联队 "
      type           = interceptor
      model          = 0
      strength       = 80
      experience     = 30
    }
  }
  airunit = { 
    id       = { type = 23500 id = 122 }
    name     = "意大利AOI（北非）空军编队 "
    location = 1033
    base     = 1033
    leader   = 6231
    division = {
      id             = { type = 23500 id = 107 }
      name           = "第4'扎克'战术轰炸联队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 23500 id = 161 }
      name           = "第14战术轰炸联队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 23500 id = 124 }
      name           = "第13'毕加索'战术轰炸联队 "
      type           = tactical_bomber
      model          = 0
      extra          = escort
      brigade_model  = 0
      strength       = 80
      experience     = 30
    }
  }

  province_development = {
    id             = { type = 23500 id = 10000 }
    location       = 370
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 23500 id = 10001 }
    location       = 519
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 23500 id = 10002 }
    location       = 531
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 23500 id = 10003 }
    location       = 520
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 23500 id = 10004 }
    location       = 378
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }
  province_development = {
    id             = { type = 23500 id = 10005 }
    location       = 534
    cost           = 2.5000
    date           = { year = 1938 month = march day = 29 }
    manpower       = 4.0000
    size           = 4
    type           = infrastructure
  }

  landdivision = { dormant = yes id = { type = 23500 id = 1000 } name = "马耳他守卫师 "  type = bergsjaeger model = 18 extra = engineer brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1001 } name = "“宙斯之怒”罗马禁卫军 "  type = garrison model = 3 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1002 } name = "塔兰托基地要塞群 "  type = garrison model = 3 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1004 } name = "那不勒斯要塞群"  type = garrison model = 2 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 481 } name = "的黎波里要塞群 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 98 } name = "巴勒莫要塞群 "  type = garrison model = 2 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 99 } name = "威尼斯要塞群 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 103 } name = "热那亚要塞师 "  type = garrison model = 3 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 101 } name = "巴里卫戍师 "  type = motorized model = 76 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 482 } name = "普拉卫戍师 "  type = motorized model = 76 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 483 } name = "维泰博卫戍师 "  type = motorized model = 76 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 97 } name = "撒丁岛守卫师 "  type = bergsjaeger model = 18 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1003 } name = "福贾卫戍师"  type = motorized model = 76 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1005 } name = "扎拉卫戍师"  type = motorized model = 76 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1006 } name = "加埃塔卫戍师"  type = bergsjaeger model = 18 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1007 } name = "的里雅斯特卫戍师"  type = motorized model = 76 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1008 } name = "卡坦扎罗卫戍师 "  type = bergsjaeger model = 19 extra = engineer brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1009 } name = "班加西卫戍师 "  type = motorized model = 2 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 1010 } name = "托布鲁克卫戍师 "  type = motorized model = 2 extra = engineer brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 23500 id = 486 } name = "意大利“弗格里”伞兵师 "  type = paratrooper model = 15 experience = 40 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 23500 id = 487 } name = "国防军第1空降师 "  type = paratrooper model = 15 experience = 40 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 23500 id = 488 } name = "“圣马可”海军陆战团 "  type = marine model = 2 experience = 40 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 23500 id = 489 } name = "“黑衫”特种突击队 "  type = marine model = 2 experience = 40 extra = engineer brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 23500 id = 1011 } name = "亚的斯亚贝巴卫戍师"  type = infantry model = 73 experience = 20 extra = police brigade_model = 1 locked = yes } 

  navaldivision = { dormant = yes id = { type = 23500 id = 208 } name = "安德烈亚·多里亚号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l extra3 = b_04 extra4 = naval_improved_hull_l brigade_model1 = 1 brigade_model2 = 1 brigade_model3 = 0 brigade_model4 = 0 experience = 20 }
  navaldivision = { dormant = yes id = { type = 23500 id = 508 } name = "墨索里尼号" type = battleship model = 8 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l extra3 = b_04 extra4 = naval_improved_hull_l extra5 = naval_radar_l brigade_model1 = 1 brigade_model2 = 2 brigade_model3 = 0 brigade_model4 = 0 brigade_model5 = 1 }
  navaldivision = { dormant = yes id = { type = 23500 id = 509 } name = "领袖号" type = battleship model = 7 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l extra3 = b_13 extra4 = naval_improved_hull_l extra5 = naval_radar_l brigade_model1 = 1 brigade_model2 = 2 brigade_model3 = 0 brigade_model4 = 0 brigade_model5 = 1 }
  navaldivision = { dormant = yes id = { type = 23500 id = 510 } name = "齐亚诺伯爵号" type = heavy_cruiser model = 2 extra1 = naval_fire_controll_l extra2 = naval_torpedoes_l extra3 = naval_improved_hull_s extra4 = naval_improved_hull_l extra5 = naval_radar_l brigade_model1 = 1 brigade_model2 = 0 brigade_model3 = 0 brigade_model4 = 0 brigade_model5 = 1 }
  navaldivision = { dormant = yes id = { type = 23500 id = 210 } name = "卡约·杜利奥号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 23500 id = 400 } name = "加富尔伯爵号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 }
  navaldivision = { dormant = yes id = { type = 23500 id = 401 } name = "朱利奥·凯撒号 " type = battleship model = 1 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 experience = 20 }
  navaldivision = { dormant = yes id = { type = 23500 id = 502 } name = "维托里奥·维内托号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 }
  navaldivision = { dormant = yes id = { type = 23500 id = 503 } name = "利托里奥号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l brigade_model1 = 1 brigade_model2 = 1 }
  navaldivision = { dormant = yes id = { type = 23500 id = 504 } name = "罗马号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 }
  navaldivision = { dormant = yes id = { type = 23500 id = 505 } name = "帝国号 " type = battleship model = 2 extra1 = naval_fire_controll_l extra2 = naval_anti_air_l brigade_model1 = 2 brigade_model2 = 2 }
  navaldivision = { dormant = yes id = { type = 23500 id = 506 } name = "天鹰号 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 strength = 80 }
  navaldivision = { dormant = yes id = { type = 23500 id = 507 } name = "食雀鹰号 " type = carrier model = 1 extra1 = cag brigade_model1 = 1 strength = 80 }

  airdivision = { dormant = yes id = { type = 23500 id = 484 } name = "德国空军第二航空团 " type = tactical_bomber model = 3 extra = escort brigade_model = 0 experience = 60 }
  airdivision = { dormant = yes id = { type = 23500 id = 485 } name = "意大利空军轰炸机联队 " type = tactical_bomber model = 3 extra = escort brigade_model = 0 experience = 40 }
  airdivision = { dormant = yes id = { type = 23500 id = 90 } name = "意大利空运航空队 " type = transport_plane model = 1 extra = escort brigade_model = 1 experience = 20 }
}
