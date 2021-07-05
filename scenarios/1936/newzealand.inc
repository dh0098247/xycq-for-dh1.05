##############################
# Country definition for NZL #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = NZL
  # Resource Reserves
  control                = ENG
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  transports             = 100
  escorts                = 15
  capital                = 1871

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 250
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 25 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
   SpyInfo                = {  country = "NZL" NumberOfSpies = 1  } 
  nationalprovinces      = { 1868 1869 1870 1871 1872 1873 3951 3952 3953 }
  ownedprovinces         = { 1755 1868 1869 1870 1871 1872 1873 3951 3952 3953 3967 3968 }
  controlledprovinces    = { 1755 1868 1869 1870 1871 1872 1873 3951 3952 3953 3967 3968 }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670 
                             5310 5010
                             1010 1100 1110 1710
                             2280 2290 2610 2420 2540 2550 2010
                             3490 3550 3600 3010 3070
                             6050 6010 6020 6030 6040 6320 6390
                             8010 8020 8390 8150 8030
                             7420 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 10
    free_market       = 8
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 55001 }
  headofgovernment       = { type = 9 id = 55002 }
  foreignminister        = { type = 9 id = 55003 }
  armamentminister       = { type = 9 id = 55004 }
  ministerofsecurity     = { type = 9 id = 55005 }
  ministerofintelligence = { type = 9 id = 55006 }
  chiefofstaff           = { type = 9 id = 55007 }
  chiefofarmy            = { type = 9 id = 55008 }
  chiefofnavy            = { type = 9 id = 55009 }
  chiefofair             = { type = 9 id = 55010 }

  landunit =
  { id       = { type = 10600 id = 1 }
    name     = "新西兰远征军 "
    location = 1871
    division =
    { id       = { type = 10600 id = 2 }
      name     = "第2步兵师 "
      strength = 100
      type     = motorized
      extra    = artillery
      experience = 20
    }
  }
  landunit =
  { id       = { type = 10600 id = 3 }
    name     = "新西兰第I军 "
    location = 1869
    division =
    { id       = { type = 10600 id = 4 }
      name     = "第1骑兵师 "
      type     = cavalry
      experience = 20
    }
    division =
    { id       = { type = 10600 id = 5 }
      name     = "第3步兵师 "
      type     = motorized
      experience = 20
    }
  }
  landunit =
  { id       = { type = 10600 id = 6 }
    name     = "新西兰第V军 "
    location = 1872
    division =
    { id       = { type = 10600 id = 7 }
      name     = "第2山地骑兵师 "
      type     = cavalry
      experience = 20
    }
    division =
    { id       = { type = 10600 id = 8 }
      name     = "第1步兵师 "
      type     = motorized
      experience = 20
    }
  }
  landunit =
  { id       = { type = 10600 id = 9 }
    name     = "新西兰第VIII军 "
    location = 1873
    division =
    { id       = { type = 10600 id = 10 }
      name     = "第3骑兵师 "
      type     = cavalry
      experience = 20
    }
    division =
    { id       = { type = 10600 id = 11 }
      name     = "第4步兵师 "
      type     = motorized
      extra    = engineer
      experience = 20
    }
  }
  navalunit =
  { id       = { type = 10600 id = 12 }
    name     = "新西兰皇家海军第I舰队 "
    location = 1871
    base     = 1871
    division =
    { id    = { type = 10600 id = 15 }
      name  = "第1运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 20 }
      name  = "第2运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 21 }
      name  = "第3运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 22 }
      name  = "第4运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 23 }
      name  = "第5运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 24 }
      name  = "第6运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 25 }
      name  = "第7运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 26 }
      name  = "第8运输舰编队 "
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 10600 id = 27 }
      name  = "第9运输舰编队 "
      type  = transport
      model = 0
    }
  }
}
