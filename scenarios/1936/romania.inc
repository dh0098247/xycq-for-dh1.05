##############################
# Country definition for ROM #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = ROM
  capital                = 424

	research_mod = 1.00
	peacetime_ic_mod = 0.60

  manpower               = 500
  transports             = 15
  escorts                = 3
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 20 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = { tag = HUN value = 1 }
    relation = { tag = ITA value = 50 }
    relation = { tag = POL value = 40 }
    relation = { tag = SOV value = 1 }
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }

  nationalprovinces      = { 230  3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 3575 4088
                             424  425  426  427  428  429  430  431  432  433  434  435  436  495  496  498 3216 3217 3219 233 232 231 3407 423
                             3416 3569 3570 3571
                           }
  ownedprovinces         = { 230  3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 3575 4088
                             423  424  425  426  427  428  429  430  431  432  433  434  435  436  495  496  498 
                           }
  controlledprovinces    = { 230  3241 3242 3243 3244 3245 3246 3247 3248 3249 3250 3251 3252 3253 3254 3255 3256 3257 3258 3259 3260 3261 3575 4088
                             423  424  425  426  427  428  429  430  431  432  433  434  435  436  495  496  498 
                           }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670
                             5310
                             1010 1100
                             2280 2290 2610 2420 2540
                             3550 3010 3410
                             4120 4010
                             6010 6020 6030 6040 6050
                             8010 8020 
                             9010
                             7410 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 22001 }
  headofgovernment       = { type = 9 id = 22002 }
  foreignminister        = { type = 9 id = 22003 }
  armamentminister       = { type = 9 id = 22004 }
  ministerofsecurity     = { type = 9 id = 22005 }
  ministerofintelligence = { type = 9 id = 22006 }
  chiefofstaff           = { type = 9 id = 22007 }
  chiefofarmy            = { type = 9 id = 22008 }
  chiefofnavy            = { type = 9 id = 22009 }
  chiefofair             = { type = 9 id = 22010 }

  landunit =
  { location = 495 # Timisoara
    name     = "罗马尼亚第VII军 "
    id       = { type = 20600 id = 1 }
    division =
    { id       = { type = 20600 id = 2 }
      name     = "第1步兵师 " # Timisoara
      type     = motorized
      extra    = artillery
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 3 }
      name     = "第18步兵师 " # Sibiu
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 426 # Craiova
    name     = "罗马尼亚第I军 "
    id       = { type = 20600 id = 5 }
    division =
    { id       = { type = 20600 id = 6 }
      name     = "第2步兵师 "
      type     = motorized
      strength = 70
      extra    = artillery
      experience = 20
    }
    division =
    { id       = { type = 20600 id = 7 }
      name     = "第3步兵师 "
      type     = motorized
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 8 }
      name     = "第4步兵师 "
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 430 # Brasov
    name     = "罗马尼亚第V军 "
    id       = { type = 20600 id = 10 }
    division =
    { id       = { type = 20600 id = 11 }
      name     = "第5步兵师 "
      type     = motorized
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 13 }
      name     = "第13步兵师 "
      type     = infantry
      extra    = artillery
      strength = 70
      experience = 20
    }
  }
  landunit =
  { location = 424 # Bucuresti
    name     = "罗马尼亚第IV军 "
    id       = { type = 20600 id = 14 }
    division =
    { id       = { type = 20600 id = 15 }
      name     = "第7步兵师 "
      type     = motorized
      strength = 70
      extra    = artillery
      experience = 20
    }
    division =
    { id       = { type = 20600 id = 16 }
      name     = "第8步兵师 "
      type     = infantry
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 47 }
      name     = "第1轻装师 "
      type     = cavalry
      model    = 1
      extra    = light_armor_brigade
      strength = 60
      experience = 20
    }
  }
  landunit =
  { location = 431
    name     = "罗马尼亚第II军 "
    id       = { type = 20600 id = 18 }
    division =
    { id       = { type = 20600 id = 19 }
      name     = "第9步兵师 "
      type     = motorized
      strength = 70
    }
    division =
    { id       = { type = 20600 id = 20 }
      name     = "第10步兵师 "
      type     = infantry
      extra    = anti_tank
      strength = 70
      experience = 20
    }
  }

  landunit =
  { location = 429
    name     = "阿尔卑斯山地军 "
    id       = { type = 20600 id = 29 }
    division =
    { id       = { type = 20600 id = 30 }
      name     = "第1山地师 "
      type     = bergsjaeger
      strength = 100
      extra    = engineer
      experience = 20
    }
    division =
    { id       = { type = 20600 id = 31 }
      name     = "第2山地师 "
      type     = bergsjaeger
      strength = 100
    }
    division =
    { id       = { type = 20600 id = 32 }
      name     = "第3山地师 "
      type     = bergsjaeger
      strength = 100
    }
  }
  landunit =
  { location = 431 # Ploiesti
    name     = "罗马尼亚骑兵军 "
    id       = { type = 20600 id = 33 }
    division =
    { id       = { type = 20600 id = 34 }
      name     = "第1骑兵师 "
      type     = cavalry
      strength = 40
      extra    = artillery
      experience = 20
    }
    division =
    { id       = { type = 20600 id = 35 }
      name     = "第2骑兵师 "
      type     = cavalry
      strength = 30
    }
    division =
    { id       = { type = 20600 id = 36 }
      name     = "第3骑兵师 "
      type     = cavalry
      strength = 30
    }
  }
  navalunit =
  { location = 423 # Constanta
    base     = 423
    name     = "罗马尼第I舰队 "
    id       = { type = 20600 id = 40 }
    division =
    { id    = { type = 20600 id = 41 }
      name  = "弗兰德号 "
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 20600 id = 49 }
      name  = "伏尔特德尔号 "
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 424 # Bucuresti
    base     = 424
    name     = "罗马尼亚第I空军联队 "
    id       = { type = 20600 id = 42 }
    division =
    { id       = { type = 20600 id = 43 }
      name     = "第1截击机大队 "
      type     = interceptor
      model    = 0
      strength = 50
    }
    division =
    { id       = { type = 20600 id = 44 }
      name     = "第2战术轰炸机大队 "
      type     = tactical_bomber
      model    = 0
      strength = 10
    }
    division =
    { id       = { type = 20600 id = 45 }
      name     = "第1海军轰炸机大队 "
      type     = naval_bomber
      model    = 0
      strength = 28
    }
  }
}
