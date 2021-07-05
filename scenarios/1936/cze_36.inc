##############################
# Country definition for CZE #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = CZE
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 800
  capital                = 469

	research_mod = 1.00
	peacetime_ic_mod = 0.60

  diplomacy =
  { relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -25 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 15 }
    relation = { tag = POL value = -1 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YUG value = 50 }
  }
   SpyInfo                = {  country = "CZE" NumberOfSpies = 1  } 
  nationalprovinces      = { 3139 3163 3164 3165 3166 3167 3168 3169 3170 3171 3172 3173 3174 3175 4087 466  467  468  469  470  471  472  474  475 
                             476  477  478  490  499 
                           }
  ownedprovinces         = { 3139 3163 3164 3165 3166 3167 3168 3169 3170 3171 3172 3173 3174 3175 4087 466  467  468  469  470  471  472  474  475 
                             476  477  478  490  499 
                           }
  controlledprovinces    = { 3139 3163 3164 3165 3166 3167 3168 3169 3170 3171 3172 3173 3174 3175 4087 466  467  468  469  470  471  472  474  475 
                             476  477  478  490  499 
                           }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120
                             5180 5660 5670
                             5310 5010
                             1010 1020 1100 1110 1710 1830 1840 1410
                             2280 2290 2610 2420 2540 2550 2010 2020
                             4120 4010
                             6010 6020 6030 6040 6050 6200 6320 6390
                             9700
                             7410 1900 
                           }
blueprints             = { }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    free_market       = 9
    freedom           = 8
    professional_army = 10
    defense_lobby     = 9
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 24001 }
  headofgovernment       = { type = 9 id = 24002 }
  foreignminister        = { type = 9 id = 24003 }
  armamentminister       = { type = 9 id = 24004 }
  ministerofsecurity     = { type = 9 id = 24005 }
  ministerofintelligence = { type = 9 id = 24006 }
  chiefofstaff           = { type = 9 id = 24007 }
  chiefofarmy            = { type = 9 id = 24008 }
  chiefofnavy            = { type = 9 id = 24009 }
  chiefofair             = { type = 9 id = 24010 }

  # ################################
  # Czech army
  # ################################
  # The 8th Corps, based as reserves in Slovakia
  landunit =
  { id       = { type = 23000 id = 1 }
    location = 490
    name     = "捷克斯洛伐克第VIII集团军 "
    division =
    { id       = { type = 26000 id = 2 }
      name     = "第9步兵师 "
      type     = motorized
      strength = 100
      model    = 1
      extra    = armored_car
    }
    division =
    { id       = { type = 26000 id = 3 }
      name     = "第15步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 26000 id = 4 }
      name     = "第21步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
  }
  # General Reserves, based in Moravia
  landunit =
  { id       = { type = 26000 id = 5 }
    location = 467
    name     = "捷克斯洛伐克第XXII集团军 "
    division =
    { id       = { type = 26000 id = 6 }
      name     = "第1装甲师 "
      type     = cavalry
      model    = 3
      strength = 100
      extra    = light_armor_brigade
    }
    division =
    { id       = { type = 26000 id = 7 }
      name     = "第4步兵师 "
      type     = motorized
      strength = 100
      model    = 1
      extra    = anti_tank
    }
    division =
    { id       = { type = 26000 id = 8 }
      name     = "第12步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
    division =
    { id    = { type = 26000 id = 9 }
      name  = "第13摩步师 "
      type  = motorized
      model = 1
      extra = light_armor_brigade
    }
    division =
    { id       = { type = 26000 id = 10 }
      name     = "第16步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 26000 id = 11 }
      name     = "第22步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = anti_tank
    }
  }
  # 1st Army - in Bohemia
  landunit =
  { id       = { type = 26000 id = 12 }
    location = 471
    name     = "捷克斯洛伐克第I集团军 "
    division =
    { id       = { type = 26000 id = 13 }
      name     = "第18步兵师 "
      type     = motorized
      strength = 100
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 26000 id = 14 }
      name     = "第2步兵师 "
      type     = motorized
      strength = 100
      model    = 1
      extra    = b_09
    }
    division =
    { id       = { type = 26000 id = 15 }
      name     = "第5步兵师 "
      type     = motorized
      strength = 100
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 26000 id = 16 }
      name     = "第3步兵师 "
      type     = motorized
      strength = 100
      model    = 1
      extra    = artillery
    }
    division =
    { id       = { type = 26000 id = 17 }
      name     = "第17步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
  }
  # 2nd Army - N-Moravia
  landunit =
  { id       = { type = 26000 id = 18 }
    location = 472
    name     = "捷克斯洛伐克第II集团军 "
    division =
    { id       = { type = 26000 id = 19 }
      name     = "第1山地师 "
      type     = bergsjaeger
      strength = 100
      model    = 0
      extra    = engineer
    }
    division =
    { id       = { type = 26000 id = 20 }
      name     = "第7步兵师 "
      type     = infantry
      strength = 100
      model    = 1
      extra    = artillery
    }
  }
  # 4th Army - Slovakia
  landunit =
  { id       = { type = 26000 id = 21 }
    location = 477
    name     = "捷克斯洛伐克第III集团军 "
    division =
    { id       = { type = 26000 id = 22 }
      name     = "第3装甲师 "
      type     = cavalry
      model    = 3
      strength = 100
      extra    = light_armor_brigade
    }
    division =
    { id       = { type = 26000 id = 23 }
      name     = "第10步兵师 "
      type     = motorized
      strength = 100
      model    = 1
      extra    = engineer
    }
    division =
    { id       = { type = 26000 id = 24 }
      name     = "第11步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
  }
  # 3rd Army - S-Morawia
  landunit =
  { id       = { type = 26000 id = 25 }
    location = 467
    name     = "捷克斯洛伐克第XIII集团军 "
    division =
    { id       = { type = 26000 id = 26 }
      name     = "第2装甲师 "
      type     = cavalry
      model    = 3
      strength = 100
      extra    = light_armor_brigade
    }
    division =
    { id       = { type = 26000 id = 27 }
      name     = "第4装甲师 "
      type     = cavalry
      model    = 3
      strength = 100
      extra    = light_armor_brigade
    }
    division =
    { id    = { type = 26000 id = 28 }
      name  = "第14摩步师 "
      type  = motorized
      model = 1
      extra = light_armor_brigade
    }
    division =
    { id       = { type = 26000 id = 29 }
      name     = "第19步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 26000 id = 30 }
      name     = "第6步兵师 "
      type     = infantry
      strength = 100
      model    = 1
      extra    = police
    }
    division =
    { id       = { type = 26000 id = 31 }
      name     = "第20步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
  }
}
