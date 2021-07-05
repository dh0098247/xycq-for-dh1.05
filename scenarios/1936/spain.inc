##############################
# Country definition for SPR #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = SPR
  regular_id             = SPA
  intrinsic_gov_type     = left_wing_radical
  manpower               = 750
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  dissent                = 30
  capital                = 341

	research_mod = 1.00
	peacetime_ic_mod = 0.65

  transports             = 150
  escorts                = 30
  # Gibralter claim
  diplomacy =
  { relation = { tag = ENG value = -10 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 10 }
    relation = { tag = GER value = -50 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = -50 }
    relation = { tag = POR value = -50 }
    relation = { tag = SOV value = -10 }
  }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }

  nationalprovinces      = { 3262 3263 3264 3265 3266 3267 3268 3269 3270 3271 3272 3273 3274 3275 3276 329  330  331  332  333  334  338  339  340 
                             341  342  343  346  347  348  349  350  351  352  353  354  355  356  357  3577 3578 535  536  537  963  964 
                           }
  ownedprovinces         = { 1091 3262 3263 3264 3265 3266 3267 3268 3269 3270 3271 3272 3273 3274 3275 3276 329  330  331  3318 332  333  334  3375
                             338  339  340  341  342  343  346  347  349  350  351  352  353  354  355  356  357  3577 3578 535  536  537  954  955 
                             957  963  964  971  972 
                           }
  # Spanish Guinea
  controlledprovinces    = { 1091 3262 3263 3264 3265 3266 3267 3268 3269 3270 3271 3272 3273 3274 3275 3276 329  330  331  3318 332  333  334  3375
                             338  339  340  341  342  343  346  347  349  350  351  352  353  354  355  356  357  3577 3578 535  536  537  954  955 
                             957  963  964  971  972 
                           }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800
                             5180 5660 5670
                             5310
                             1010 1100
                             2280 2290 2420 2540
                             3490 3550 3560 3600 3610 3620 3010 3070 3130 3250 3410
                             6010 6020 6030 6040 6050
                             8010 8020 8390 8150 8030 8530
                             9700
                             7410 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 4
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 11001 }
  headofgovernment       = { type = 9 id = 11002 }
  foreignminister        = { type = 9 id = 11003 }
  armamentminister       = { type = 9 id = 11004 }
  ministerofsecurity     = { type = 9 id = 11005 }
  ministerofintelligence = { type = 9 id = 11006 }
  chiefofstaff           = { type = 9 id = 11007 }
  chiefofarmy            = { type = 9 id = 11008 }
  chiefofnavy            = { type = 9 id = 11009 }
  chiefofair             = { type = 9 id = 11010 }
  dormant_leaders        = { 3007 3050 }

  # Spanish Troops
  landunit =
  { id       = { type = 27600 id = 5 }
    location = 341
    name     = "西班牙共和国第I军 "
    division =
    { id   = { type = 27600 id = 6 }
      name = "第1步兵师 "
      type = infantry
    }
    division =
    { id    = { type = 27600 id = 7 }
      name  = "第2步兵师 "
      type  = motorized
      extra = artillery
    }
    division =
    { id   = { type = 27600 id = 8 }
      name = "第1骑兵师 "
      type = cavalry
    }
    division =
    { id       = { type = 27600 id = 9 }
      name     = "布里那德旅 "
      type     = armor
      model    = 0
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 10 }
    location = 356
    name     = "西班牙共和国第II军 "
    division =
    { id    = { type = 27600 id = 11 }
      name  = "第3步兵师 "
      type  = motorized
      extra = anti_tank
    }
    division =
    { id   = { type = 27600 id = 12 }
      name = "第4步兵师 "
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 13 }
      name = "第5步兵师 "
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 14 }
      name = "第1机械化山地旅 "
      type = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 27600 id = 15 }
    location = 354
    name     = "西班牙共和国第III军 "
    division =
    { id    = { type = 27600 id = 16 }
      name  = "第6步兵师 "
      type  = motorized
      extra = artillery
    }
    division =
    { id   = { type = 27600 id = 17 }
      name = "第7步兵师 "
      type = infantry
    }
    division =
    { id    = { type = 27600 id = 18 }
      name  = "第8步兵师 "
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 27600 id = 19 }
    location = 535
    name     = "卡曼德卡拉猎兵师 "
    division =
    { id       = { type = 27600 id = 20 }
      name     = "卡曼德卡拉猎兵师 "
      type     = motorized
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 21 }
    location = 963
    name     = "德加莱勒斯轻装师 "
    division =
    { id       = { type = 27600 id = 22 }
      name     = "德加莱勒斯轻装师 "
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 23 }
    location = 957
    name     = "外籍志愿军 "
    division =
    { id   = { type = 27600 id = 24 }
      name = "西方志愿军 "
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 25 }
      name = "东方志愿军 "
      type = infantry
    }
  }
  landunit =
  { id       = { type = 27600 id = 26 }
    location = 971
    name     = "撒哈拉殖民军 "
    division =
    { id       = { type = 27600 id = 27 }
      name     = "撒哈拉殖民师 "
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 28 }
    location = 1091
    name     = "殖民地警卫 "
    division =
    { id       = { type = 27600 id = 29 }
      name     = "殖民地警卫 "
      type     = militia
      strength = 30
    }
  }
landunit = { location = 341  id = { type = 27600 id = 100 } dig_in = 20 name = "共和国卫队 "
		division = {
                locked = yes
		id = { type = 27600 id = 101 }
		name = "共和国统帅部"
                experience = 20
		type = hq
		model = 0
		extra = b_09
		brigade_model = 1
		strength = 100
		}
	}
######## Naval ##########
# Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases.
  navalunit =
  { location = 347
    base     = 347
    id       = { type = 27600 id = 30 }
    name     = "西班牙共和国基地海军舰队 "
    division =
    { id       = { type = 27600 id = 31 }
      name     = "雷利卡号 "
      strength = 60
      type     = light_cruiser
      model    = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id       = { type = 27600 id = 32 }
      name     = "第4驱逐舰编队 "
      strength = 100
      type     = destroyer
      model    = 1
    }
  }
  navalunit =
  { location = 334
    base     = 334
    id       = { type = 27600 id = 33 }
    name     = "西班牙共和国佛提那舰队 "
    division =
    { id       = { type = 27600 id = 34 }
      name     = "门恩斯号 "
      strength = 100
      type     = light_cruiser
      model    = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
  }
  navalunit =
  { location = 357
    base     = 357
    id       = { type = 27600 id = 35 }
    name     = "西班牙共和国巴特那舰队 "
    division =
    { id       = { type = 27600 id = 36 }
      name     = "吉姆I号 "
      strength = 50
      type     = battleship
      model    = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id       = { type = 27600 id = 37 }
      name     = "伊斯帕号 "
      strength = 100
      type     = battleship
      model    = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id       = { type = 27600 id = 38 }
      name     = "塞凡提斯号 "
      strength = 100
      type     = light_cruiser
      model    = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id       = { type = 27600 id = 39 }
      name     = "卡维拉号 "
      strength = 100
      type     = light_cruiser
      model    = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id       = { type = 27600 id = 40 }
      name     = "托尔皮拉斯I号 "
      strength = 100
      type     = destroyer
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 41 }
      name     = "托尔皮拉斯II号 "
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 42 }
      name     = "佛提那I号 "
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 43 }
      name     = "佛提那II号 "
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 44 }
    name     = "西班牙共和国殖民舰队 "
    division =
    { id       = { type = 27600 id = 45 }
      name     = "托尔皮拉斯III号 "
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 47 }
      name     = "佛提那III号 "
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 48 }
      name     = "佛提那IV号 "
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 49 }
    name     = "西班牙共和国C舰队 "
    division =
    { id       = { type = 27600 id = 50 }
      name     = "S101号 "
      strength = 100
      type     = submarine
      model    = 0
    }
  }
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 51 }
    name     = "西班牙共和国B舰队 "
    division =
    { id       = { type = 27600 id = 72 }
      name     = "S103号 "
      strength = 75
      type     = submarine
      model    = 1
    }
  }
  navalunit =
  { id       = { type = 27600 id = 53 }
    name     = "西班牙共和国莱伯塔特舰队 "
    location = 357
    base     = 357
    division =
    { id       = { type = 27600 id = 54 }
      name     = "莱伯塔特号 "
      type     = light_cruiser
      strength = 100
      model    = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
  }
  airunit =
  { location = 341
    base     = 341
    id       = { type = 27600 id = 55 }
    name     = "西班牙共和国第I伊斯库德空军联队 "
    division =
    { id       = { type = 27600 id = 56 }
      name     = "提克第1大队 "
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 57 }
      name     = "提克第2大队 "
      strength = 30
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 357
    base     = 357
    id       = { type = 27600 id = 58 }
    name     = "西班牙共和国第II伊斯库德空军联队 "
    division =
    { id       = { type = 27600 id = 59 }
      name     = "卡扎第1大队 "
      strength = 30
      type     = interceptor
    }
    division =
    { id       = { type = 27600 id = 60 }
      name     = "卡扎第3大队 "
      strength = 30
      type     = interceptor
    }
  }
  airunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 61 }
    name     = "西班牙共和国第III伊斯库德空军联队 "
    division =
    { id       = { type = 27600 id = 62 }
      name     = "伊斯库德第1大队 "
      strength = 30
      type     = strategic_bomber
    }
    division =
    { id       = { type = 27600 id = 63 }
      name     = "伊斯库德第2大队 "
      strength = 30
      type     = strategic_bomber
    }
  }
  airunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 64 }
    name     = "西班牙共和国第IV佛扎斯空军联队 "
    division =
    { id       = { type = 27600 id = 65 }
      name     = "第3战术轰炸机大队 "
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 66 }
      name     = "卡扎第2大队 "
      strength = 30
      type     = interceptor
    }
  }
  division_development =
  { name  = "枷兰斯号 "
    type  = heavy_cruiser
    model = 1
    cost  = 5
    id    = { type = 27600 id = 500 }
    date  = { year = 1936 month = march day = 1 }
  }
  division_development =
  { name  = "巴利雷斯号 "
    type  = heavy_cruiser
    model = 1
    cost  = 5
    id    = { type = 27600 id = 501 }
    date  = { year = 1936 month = june day = 1 }
  }
}
