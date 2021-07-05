##############################
# Country definition for YUG #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = YUG
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 453

	research_mod = 1.00
	peacetime_ic_mod = 0.65

  manpower               = 555
  transports             = 35
  escorts                = 10
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 4 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  nationalprovinces      = { 3211 3212 3213 3214 3215 3216 3217 3218 3219 3220 3221 3222 3223 380  381  382  383  384  385  386  387  388  389  413 
                             414  415  418  451  452  453  454  455  459  493  494 
                           }
  ownedprovinces         = { 3211 3212 3213 3214 3215 3216 3217 3218 3219 3220 3221 3222 3223 380  381  382  383  384  385  386  387  388  389  413 
                             414  415  418  451  452  453  454  455  459  493  494 
                           }
  controlledprovinces    = { 3211 3212 3213 3214 3215 3216 3217 3218 3219 3220 3221 3222 3223 380  381  382  383  384  385  386  387  388  389  413 
                             414  415  418  451  452  453  454  455  459  493  494 
                           }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080 5170 5190 5800 5180 5310
                             1010 1100
                             2280 2290 2420 2540
                             3550 3010 3410
                             6010 6020 6030 6040 6050 6580
                             8010 8020 8390
                             7410
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 10
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 20001 }
  headofgovernment       = { type = 9 id = 20002 }
  foreignminister        = { type = 9 id = 20003 }
  armamentminister       = { type = 9 id = 20004 }
  ministerofsecurity     = { type = 9 id = 20005 }
  ministerofintelligence = { type = 9 id = 20006 }
  chiefofstaff           = { type = 9 id = 20007 }
  chiefofarmy            = { type = 9 id = 20008 }
  chiefofnavy            = { type = 9 id = 20009 }
  chiefofair             = { type = 9 id = 20010 }

  landunit =
  { id       = { type = 19800 id = 1 }
    location = 453
    name     = "南斯拉夫第IV军 "
    division =
    { id       = { type = 19800 id = 2 }
      name     = "第27步兵师 "
      strength = 70
      type     = motorized
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 19800 id = 3 }
    location = 453
    name     = "南斯拉夫第VII军 "
    division =
    { id       = { type = 19800 id = 4 }
      name     = "第32步兵师 "
      strength = 70
      type     = motorized
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 5 }
      name     = "第1山地师 "
      strength = 70
      type     = bergsjaeger
      extra    = engineer
    }
    division =
    { id       = { type = 19800 id = 6 }
      name     = "第1骑兵师 "
      strength = 70
      type     = cavalry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 19800 id = 7 }
    name     = "南斯拉夫第I军 "
    location = 453
    division =
    { id       = { type = 19800 id = 8 }
      name     = "第7步兵师 "
      strength = 70
      type     = motorized
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 9 }
      name     = "第3骑兵师 "
      strength = 70
      type     = cavalry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 19800 id = 10 }
    location = 386
    name     = "南斯拉夫第II军 "
    division =
    { id       = { type = 19800 id = 11 }
      name     = "第10步兵师 "
      strength = 70
      type     = motorized
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 12 }
      name     = "第17步兵师 "
      strength = 70
      type     = motorized
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 19800 id = 13 }
    location = 415
    name     = "南斯拉夫第III军 "
    division =
    { id       = { type = 19800 id = 14 }
      name     = "第13步兵师 "
      strength = 70
      type     = bergsjaeger
      extra    = engineer
    }
    division =
    { id       = { type = 19800 id = 15 }
      name     = "第15步兵师 "
      strength = 70
      type     = bergsjaeger
      extra    = engineer
    }
  }
  landunit =
  { id       = { type = 19800 id = 16 }
    location = 384
    name     = "南斯拉夫第XIII军 "
    division =
    { id       = { type = 19800 id = 17 }
      name     = "第5步兵师 "
      strength = 70
      type     = motorized
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 18 }
      name     = "第20步兵师 "
      strength = 70
      type     = bergsjaeger
      extra    = engineer
    }
    division =
    { id       = { type = 19800 id = 19 }
      name     = "第22步兵师 "
      strength = 70
      type     = bergsjaeger
      extra    = engineer
    }
  }
  landunit =
  { id       = { type = 19800 id = 20 }
    location = 380
    name     = "南斯拉夫第XV军 "
    division =
    { id       = { type = 19800 id = 21 }
      name     = "第8步兵师 "
      strength = 70
      type     = cavalry
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 22 }
      name     = "第9步兵师 "
      strength = 70
      type     = cavalry
      extra    = artillery
    }
    division =
    { id       = { type = 19800 id = 23 }
      name     = "第2骑兵师 "
      strength = 70
      type     = cavalry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 19800 id = 24 }
    location = 453
    name     = "南斯拉夫第XXVI军 "
    division =
    { id       = { type = 19800 id = 25 }
      name     = "第3步兵师 "
      strength = 70
      type     = bergsjaeger
      extra    = engineer
    }
    division =
    { id       = { type = 19800 id = 26 }
      name     = "第4骑兵师 "
      strength = 70
      type     = cavalry
      extra    = artillery
    }
  }
  # ##########################
  # ##########################
  navalunit =
  { id       = { type = 19800 id = 30 }
    name     = "南斯拉夫第II舰队 "
    location = 384
    base     = 384
    division =
    { id       = { type = 19800 id = 32 }
      name     = "第1驱逐舰编队 "
      type     = destroyer
      model    = 1
      strength = 40
    }
    division =
    { id    = { type = 19800 id = 33 }
      name  = "第1潜艇编队 "
      type  = submarine
      model = 0
    }
  }
  airunit =
  { location = 453
    base     = 453
    id       = { type = 19800 id = 27 }
    name     = "南斯拉夫空军第I飞行团 "
    division =
    { id       = { type = 19800 id = 28 }
      name     = "第2截击机大队 "
      strength = 30
      type     = interceptor
      model    = 0
    }
    division =
    { id       = { type = 19800 id = 29 }
      name     = "第26战术轰炸机大队 "
      strength = 30
      type     = tactical_bomber
      model    = 0
    }
  }
}
