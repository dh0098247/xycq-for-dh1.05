##############################
# Country definition for SCH #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = SCH
  capital                = 532

	research_mod = 1.00
	peacetime_ic_mod = 0.60
	tc_mod = 1.00

  manpower               = 150
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 1
  }
  nationalprovinces      = { 3192 372 530 532 533 }
  ownedprovinces         = { 3192 372 530 532 533 }
  controlledprovinces    = { 3192 372 530 532 533 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670 5680
                             5310 5010 5470
                             1010 1100 1710 1830 1840 1850
                             2280 2290 2610 2420 2540 2550
                             6010 6020 6030 6040 6050 6580 6320
                             9010
                             7420
                           }
blueprints             = { }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SOV value = 1 }
    relation = { tag = USA value = 1 }
  }
  headofstate            = { type = 9 id = 17001 }
  headofgovernment       = { type = 9 id = 17002 }
  foreignminister        = { type = 9 id = 17003 }
  armamentminister       = { type = 9 id = 17004 }
  ministerofsecurity     = { type = 9 id = 17005 }
  ministerofintelligence = { type = 9 id = 17006 }
  chiefofstaff           = { type = 9 id = 17007 }
  chiefofarmy            = { type = 9 id = 17008 }
  chiefofnavy            = { type = 9 id = 17009 }
  chiefofair             = { type = 9 id = 17010 }

  # Superior Firepower
  # ####################
  # ###Swiss 36OOB####
  # ####################
  landunit =
  { id       = { type = 30600 id = 1 }
    location = 532
    name     = "瑞士第I军 "
    division =
    { id       = { type = 30600 id = 2 }
      name     = "第1猎兵师 "
      strength = 100
      type     = bergsjaeger
      model    = 1
      extra    = engineer
      experience = 80
    }
  }
  landunit =
  { id       = { type = 30600 id = 3 }
    location = 533
    name     = "瑞士第II军 "
    division =
    { id       = { type = 30600 id = 4 }
      name     = "第2步兵师 "
      strength = 100
      type     = bergsjaeger
      model    = 1
      extra    = engineer
      experience = 80
    }
    division =
    { id       = { type = 30600 id = 5 }
      name     = "第1山地师 "
      strength = 30
      type     = bergsjaeger
      model    = 1
      extra    = engineer
      experience = 80
    }
  }
  landunit =
  { id       = { type = 30600 id = 6 }
    location = 530
    name     = "瑞士第III军 "
    division =
    { id       = { type = 30600 id = 7 }
      name     = "第3步兵师 "
      strength = 100
      type     = bergsjaeger
      extra    = anti_tank
      experience = 80
    }
    division =
    { id       = { type = 30600 id = 8 }
      name     = "第4步兵师 "
      strength = 100
      type     = bergsjaeger
      extra    = anti_tank
      model    = 1
      experience = 80
    }
    division =
    { id       = { type = 30600 id = 9 }
      name     = "第2摩托化山地师 "
      strength = 30
      type     = bergsjaeger
      extra    = anti_tank
      model    = 1
      experience = 80
    }
  }
  landunit =
  { id       = { type = 30600 id = 10 }
    location = 372
    name     = "瑞士第IV军 "
    division =
    { id       = { type = 30600 id = 11 }
      name     = "第5步兵师 "
      strength = 100
      type     = bergsjaeger
      model    = 1
      extra    = engineer
      experience = 80
    }
    division =
    { id       = { type = 30600 id = 12 }
      name     = "第6步兵师 "
      strength = 100
      type     = bergsjaeger
      model    = 1
      extra    = engineer
      experience = 80
    }
    division =
    { id       = { type = 30600 id = 13 }
      name     = "第3山地师 "
      strength = 30
      type     = bergsjaeger
      model    = 1
      extra    = engineer
      experience = 80
    }
  }
  airunit =
  { id       = { type = 30600 id = 14 }
    location = 532
    base     = 532
    name     = "瑞士空军第I'德·海因尔特'航空队 "
    division =
    { id       = { type = 30600 id = 15 }
      name     = "第1战术轰炸机大队 "
      strength = 40
      type     = tactical_bomber
      model    = 0
      experience = 15
    }
  }
}
