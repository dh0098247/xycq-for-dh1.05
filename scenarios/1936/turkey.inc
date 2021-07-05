##############################
# Country definition for TUR #
##############################
province = {
  id = 409 # 伊斯坦布尔
  landfort = 10
}
province = {
  id = 437 # 伊兹密尔
}
province = {
  id = 448 # 安卡拉
}
province = {
  id = 3941 # 奥斯曼尼耶
}

#####################
# Country main data #
#####################

country = {
  tag                = TUR
  capital            = 448 # 安卡拉
  manpower           = 765
  tc_mod                 = 1
  research_mod           = 1
  peacetime_ic_mod       = 0.75
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100
  transports     = 150
  escorts        = 30

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 10 }
    relation = { tag = ITA value = 1 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YEM value = 35 }
  }

  nationalprovinces      = { 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1802 1803 1806 1823 1824 1851 1852 1853 1854 1855 1860 1861 1862 1863 1864 1865 1866 3224 3225 3227 3229 3231 3232 3233 3234 3235 3236 3237 3238 3239 3240 3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3284 3285 390 391 3917 3918 3919 392 3920 3921 3922 3923 3924 3925 3926 3927 3928 3929 393 3930 3931 3932 3933 3934 3935 3936 3937 3938 394 3940 3941 3942 3943 3944 3945 3946 3947 395 396 398 399 400 401 402 403 404 405 406 407 408 4088 409 410 411 412 416 417 419 420 421 422 423 424 425 426 427 428 430 431 432 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 495 496 498 3948 3939 }
  ownedprovinces         = { 1851 1852 1853 1854 1855 3284 3285 3934 3935 3936 3937 3938 3940 3941 3943 3944 3945 3946 3947 408 409 437 438 439 440 441 442 443 445 446 447 448 449 450 }
  controlledprovinces    = { 1851 1852 1853 1854 1855 3284 3285 3934 3935 3936 3937 3938 3940 3941 3943 3944 3945 3946 3947 408 409 437 438 439 440 441 442 443 445 446 447 448 449 450 }

  techapps               = { 5050 5080 5170 5190 5800 5180 5660 5310 1010 1100 1830 2280 2290 2420 2540 3490 3550 3560 3600 3610 3010 3070 3130 3410 6010 6020 6030 6040 6050 6580 8010 8020 8390 8150 8030 9010 7410 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 10
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 12001 } # 凯末尔 阿塔图尔克 
  headofgovernment       = { type = 9 id = 12002 } # 穆斯塔法 伊斯麦特 
  foreignminister        = { type = 9 id = 12003 } # 图菲克 鲁斯图 阿拉斯 
  armamentminister       = { type = 9 id = 12004 } # 泽凯伊 阿帕伊丁 
  ministerofsecurity     = { type = 9 id = 12005 } # 苏克 卡亚 
  ministerofintelligence = { type = 9 id = 12006 } # 苏克 阿里 奥格尔 
  chiefofstaff           = { type = 9 id = 12007 } # 费夫齐 卡克马克 
  chiefofarmy            = { type = 9 id = 12008 } # 梅米特 努里 亚穆特 
  chiefofnavy            = { type = 9 id = 12009 } # 梅米特 阿里 因根 
  chiefofair             = { type = 9 id = 12010 } # 阿里 奥尔伦加特 

  landunit = {
    id       = { type = 11700 id = 8 }
    name     = "土耳其第1军 "
    location = 448
    division = {
      id             = { type = 11700 id = 9 }
      name           = "第1步兵师 "
      type           = motorized
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 11700 id = 10 }
      name           = "第3步兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11700 id = 11 }
    name     = "土耳其第2军 "
    location = 409
    division = {
      id             = { type = 11700 id = 12 }
      name           = "第5步兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 13 }
    name     = "土耳其第3军 "
    location = 408
    division = {
      id             = { type = 11700 id = 14 }
      name           = "第7步兵师 "
      type           = bergsjaeger
      extra          = engineer
    }
  }
  landunit = {
    id       = { type = 11700 id = 15 }
    name     = "土耳其第4军 "
    location = 445
    division = {
      id             = { type = 11700 id = 16 }
      name           = "第9步兵师 "
      type           = bergsjaeger
      extra          = engineer
    }
  }
  landunit = {
    id       = { type = 11700 id = 17 }
    name     = "土耳其第5军 "
    location = 450
    division = {
      id             = { type = 11700 id = 18 }
      name           = "第11步兵师 "
      type           = bergsjaeger
      extra          = engineer
    }
  }
  landunit = {
    id       = { type = 11700 id = 19 }
    name     = "土耳其第6军 "
    location = 1851
    division = {
      id             = { type = 11700 id = 20 }
      name           = "第13步兵师 "
      type           = motorized
      extra          = artillery
      strength       = 100
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 21 }
    name     = "土耳其第7军 "
    location = 1855
    division = {
      id             = { type = 11700 id = 22 }
      name           = "第15步兵师 "
      type           = bergsjaeger
      extra          = engineer
    }
  }
  landunit = {
    id       = { type = 11700 id = 23 }
    name     = "土耳其第8军 "
    location = 1854
    division = {
      id             = { type = 11700 id = 24 }
      name           = "第17步兵师 "
      type           = bergsjaeger
      extra          = engineer
    }
  }
  landunit = {
    id       = { type = 11700 id = 25 }
    name     = "土耳其第9军 "
    location = 1852
    division = {
      id             = { type = 11700 id = 26 }
      name           = "第19步兵师 "
      type           = bergsjaeger
      extra          = engineer
    }
  }
  landunit = {
    id       = { type = 11700 id = 27 }
    name     = "土耳其第10军 "
    location = 1853
    division = {
      id             = { type = 11700 id = 28 }
      name           = "第1山地师 "
      type           = bergsjaeger
      extra          = engineer
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11700 id = 29 }
    name     = "提克西里托普骑兵军 "
    location = 442
    division = {
      id             = { type = 11700 id = 30 }
      name           = "第1骑兵师 "
      type           = cavalry
      extra          = artillery
      strength       = 100
      organisation   = 30
      experience     = 15
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 31 }
      name           = "第3骑兵师 "
      type           = cavalry
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 32 }
      name           = "第5骑兵师 "
      type           = cavalry
      strength       = 50
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 11700 id = 1 }
    name     = "土耳其提克登兹富利苏舰队 "
    location = 409
    base     = 409
    division = {
      id             = { type = 11700 id = 3 }
      name           = "雅乌滋号 "
      type           = battlecruiser
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      extra4         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division = {
      id             = { type = 11700 id = 4 }
      name           = "哈米迪赫号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 11700 id = 5 }
      name           = "米加迪赫号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 11700 id = 7 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 11700 id = 6 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 100 }
      name           = "富罗提那里滋帕沙号 "
      type           = transport
    }
  }

  airunit = { 
    id       = { type = 11700 id = 33 }
    name     = "土耳其哈瓦托鲁路克空军联队 "
    location = 448
    base     = 448
    division = {
      id             = { type = 25635 id = 34 }
      name           = "第1阿维西大队 "
      type           = interceptor
      model          = 0
      strength       = 48
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 25635 id = 35 }
      name           = "第1塔克特大队 "
      type           = tactical_bomber
      model          = 0
      strength       = 52
      organisation   = 30
      defaultorganisation = 0
    }
  }

  landdivision = { dormant = yes id = { type = 25635 id = 36 } name = "伊斯坦布尔守备师 "  type = garrison model = 3 experience = 40 extra = b_09 brigade_model = 3 locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 37 } name = "安卡拉卫戍师 "  type = garrison model = 5 experience = 20 extra = police brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 38 } name = "加济安泰普卫戍师 "  type = garrison model = 5 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 39 } name = "特拉比松卫戍师 "  type = garrison model = 5 extra = artillery brigade_model = 2 locked = yes } 
  landdivision = { dormant = yes id = { type = 25635 id = 40 } name = "伊兹密尔卫戍师 "  type = garrison model = 5 extra = artillery brigade_model = 2 locked = yes } 

  navaldivision = { dormant = yes id = { type = 25635 id = 82 } name = " SMS '亚沃士·塞利姆苏丹号'号" type = battleship model = 2 extra1 = naval_fire_controll_l brigade_model1 = 0 }
  navaldivision = { dormant = yes id = { type = 25635 id = 83 } name = " SMS'米蒂里号'号" type = heavy_cruiser model = 1 extra1 = naval_torpedoes_l brigade_model1 = 0 }
  navaldivision = { dormant = yes id = { type = 25635 id = 84 } name = " SMS'杰马尔帕夏'号" type = light_carrier model = 1 }
  navaldivision = { dormant = yes id = { type = 25635 id = 85 } name = "KMS '奥斯曼'号" type = battleship model = 2 extra1 = naval_radar_l extra2 = naval_anti_air_l brigade_model1 = 0 brigade_model2 = 1 }
  navaldivision = { dormant = yes id = { type = 25635 id = 86 } name = "KMS '苏丹'号" type = battleship model = 2 extra1 = naval_improved_hull_l extra2 = naval_fire_controll_l brigade_model1 = 0 brigade_model2 = 0 }
  navaldivision = { dormant = yes id = { type = 25635 id = 87 } name = " SMS'穆罕默德六世'号" type = battleship model = 1 extra1 = naval_fire_controll_l brigade_model1 = 0 }
  navaldivision = { dormant = yes id = { type = 25635 id = 88 } name = " SMS'迈吉德二世'号" type = battleship model = 1 extra1 = naval_anti_air_l brigade_model1 = 0 }
  navaldivision = { dormant = yes id = { type = 25635 id = 89 } name = " SMS'恩维尔帕夏'号" type = light_carrier model = 1 }
  navaldivision = { dormant = yes id = { type = 25635 id = 90 } name = "KMS '巴格达'号" type = heavy_cruiser model = 1 extra1 = naval_radar_s brigade_model1 = 0 }
  navaldivision = { dormant = yes id = { type = 25635 id = 91 } name = "KMS '摩苏尔'号" type = heavy_cruiser model = 1 extra1 = naval_fire_controll_s brigade_model1 = 0 }
}
