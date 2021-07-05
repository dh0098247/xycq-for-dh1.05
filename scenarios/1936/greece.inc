##############################
# Country definition for GRE #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = GRE
  manpower               = 100
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 401

	research_mod = 1.00
 	tc_mod = 1.00
	peacetime_ic_mod = 0.50

  transports             = 200
  escorts                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 5
    freedom           = 4
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 3225 3227 3229 3231 3232 3233 3234 392 393 394 3948 395 396 398 399 400 401 402 403 405 410 411 412 444 3939 }
  ownedprovinces         = { 3225 3227 3229 3231 3232 3233 3234 392 393 394 3948 395 396 400 401 402 403 405 410 411 412 }
  controlledprovinces    = { 3225 3227 3229 3231 3232 3233 3234 392 393 394 3948 395 396 400 401 402 403 405 410 411 412 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050
                             5180
                             5310
                             1010 1100
                             6050 6010 6020
                             8010 8020
                             7430
                           }
  diplomacy =
  { relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FIN value = 40 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 15 }
    relation = { tag = GRE value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = POL value = 35 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 100 }
  }
  headofstate            = { type = 9 id = 18001 }
  headofgovernment       = { type = 9 id = 18002 }
  foreignminister        = { type = 9 id = 18003 }
  armamentminister       = { type = 9 id = 18004 }
  ministerofsecurity     = { type = 9 id = 18005 }
  ministerofintelligence = { type = 9 id = 18006 }
  chiefofstaff           = { type = 9 id = 18007 }
  chiefofarmy            = { type = 9 id = 18008 }
  chiefofnavy            = { type = 9 id = 18009 }
  chiefofair             = { type = 9 id = 18010 }

  landunit =
  { id       = { type = 15500 id = 1 }
    location = 401
    name     = "希腊第I军 "
    division =
    { id       = { type = 15500 id = 2 }
      name     = "第2步兵师 "
      strength = 100
      type     = motorized
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 3 }
      name     = "第3步兵师 "
      strength = 100
      type     = motorized
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 4 }
      name     = "第4步兵师 "
      strength = 100
      type     = motorized
      extra    = artillery
      experience = 20
    }
  }
  landunit =
  { id       = { type = 15500 id = 5 }
    location = 403
    name     = "希腊第II军 "
    division =
    { id       = { type = 15500 id = 6 }
      name     = "第1步兵师 "
      strength = 100
      type     = motorized
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 7 }
      name     = "第9步兵师 "
      strength = 100
      type     = motorized
      extra    = artillery
      experience = 10
    }
  }
  landunit =
  { id       = { type = 15500 id = 8 }
    location = 411
    name     = "希腊第III军 "
    division =
    { id       = { type = 15500 id = 9 }
      name     = "第6步兵师 "
      strength = 100
      type     = motorized
      extra    = artillery
      experience = 20
    }
    division =
    { id       = { type = 15500 id = 10 }
      name     = "第10步兵师 "
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 11 }
      name     = "第11步兵师 "
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 12 }
      name     = "第17步兵师 "
      strength = 100
      type     = infantry
      experience = 10
    }
  }
  landunit =
  { id       = { type = 15500 id = 13 }
    location = 403
    name     = "希腊第IV军 "
    division =
    { id       = { type = 15500 id = 14 }
      name     = "第7步兵师 "
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 15 }
      name     = "第14步兵师 "
      strength = 100
      type     = infantry
      extra    = anti_tank
      experience = 20
    }
  }
  landunit =
  { id       = { type = 15500 id = 16 }
    location = 392
    name     = "希腊第V军 "
    division =
    { id       = { type = 15500 id = 17 }
      name     = "第12步兵师 "
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 18 }
      name     = "第13步兵师 "
      strength = 100
      type     = infantry
      experience = 10
    }
  }
  landunit =
  { id       = { type = 15500 id = 19 }
    location = 396
    name     = "希腊第VI军 "
    division =
    { id       = { type = 15500 id = 20 }
      name     = "第5步兵师 "
      strength = 100
      type     = infantry
      experience = 10
    }
    division =
    { id       = { type = 15500 id = 21 }
      name     = "第8步兵师 "
      strength = 100
      type     = infantry
      extra    = artillery
      experience = 20
    }
    division =
    { id       = { type = 15500 id = 22 }
      name     = "第1骑兵师 "
      strength = 100
      type     = cavalry
      extra    = artillery
      experience = 20
    }
  }
  navalunit =
  { id       = { type = 15500 id = 23 }
    location = 401
    base     = 401
    name     = "希腊巴斯克尔巡洋舰队 "
    division =
    { id    = { type = 15500 id = 30 }
      name  = "阿尔芙号 "
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id    = { type = 15500 id = 31 }
      name  = "赫拉号 "
      type  = light_cruiser
      model = 0
      extra1 = naval_fire_controll_s
      extra2 = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division =
    { id       = { type = 15500 id = 28 }
      name     = "第1驱逐舰编队 "
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 32 }
      name     = "第2驱逐舰编队 "
      strength = 100
      model    = 0
      type     = destroyer
    }
    division =
    { id       = { type = 15500 id = 29 }
      name     = "第1潜艇编队 "
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id       = { type = 15500 id = 33 }
      name     = "第2潜艇编队 "
      strength = 100
      model    = 0
      type     = submarine
    }
    division =
    { id   = { type = 15500 id = 24 }
      name = "第1运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 15500 id = 25 }
      name = "第2运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 15500 id = 26 }
      name = "第3运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 15500 id = 27 }
      name = "第4运输舰编队 "
      type = transport
    }
  }
}
