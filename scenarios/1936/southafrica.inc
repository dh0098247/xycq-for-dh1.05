##############################
# Country definition for SAF #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = SAF
  # Resource Reserves
  control                = ENG
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 650
  capital                = 1121
  transports             = 200
  escorts                = 80

	research_mod = 1.00
	peacetime_ic_mod = 0.60
	tc_mod = 1.00

  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "saf" NumberOfSpies = 3 }

  nationalprovinces      = { 1106 1107 1108 1109 1110 1113 1114 1115 1116 1117 1118 1119 1120 1121 3388 3389 3390 3391 3392 3393 3394 3395 3396 }
  ownedprovinces         = { 1106 1107 1108 1109 1110 1113 1114 1115 1116 1117 1118 1119 1120 1121 3389 3390 3391 3393 3394 3395 3396 3398 3399 3400 3388 3392
                           }
  controlledprovinces    = { 1106 1107 1108 1109 1110 1113 1114 1115 1116 1117 1118 1119 1120 1121 3389 3390 3391 3393 3394 3395 3396 3398 3399 3400 3388 3392
                           }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800
                             5180 5660
                             5310
                             1010 1100 1830
                             2280 2290 2420 2540
                             6010 6020 6030 6040 6050
                             8010 8020
                             7410 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 10
    free_market       = 8
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 70001 }
  headofgovernment       = { type = 9 id = 70002 }
  foreignminister        = { type = 9 id = 70003 }
  armamentminister       = { type = 9 id = 70004 }
  ministerofsecurity     = { type = 9 id = 70005 }
  ministerofintelligence = { type = 9 id = 70006 }
  chiefofstaff           = { type = 9 id = 70007 }
  chiefofarmy            = { type = 9 id = 70008 }
  chiefofnavy            = { type = 9 id = 70009 }
  chiefofair             = { type = 9 id = 70010 }

  landunit =
  { name     = "海角卫戍司令部 "
    location = 1116
    id       = { type = 26600 id = 1 }
    division =
    { id       = { type = 26600 id = 2 }
      name     = "海角卫戍师 "
      type     = militia
      strength = 50
    }
  }
  landunit =
  { name     = "威特沃特斯兰德卫戍司令部 "
    location = 1120
    id       = { type = 26600 id = 3 }
    division =
    { id       = { type = 26600 id = 4 }
      name     = "威特沃特斯兰德卫戍师 "
      type     = militia
      strength = 50
    }
  }
  landunit =
  { name     = "纳塔尔卫戍司令部 "
    location = 1119
    id       = { type = 26600 id = 5 }
    division =
    { id       = { type = 26600 id = 6 }
      name     = "纳塔尔卫戍师 "
      type     = militia
      strength = 50
    }
  }
  navalunit =
  { id       = { type = 26600 id = 7 }
    name     = "南非海军第1舰队 "
    location = 1116
    base     = 1116
    division = {
    id = { type = 26600 id = 8 }
    name = "第1驱逐舰编队 "
    strength = 100
    type = destroyer
    model = 0
    }
    division = {
    id = { type = 26600 id = 9 }
    name = "第2驱逐舰编队 "
    strength = 100
    type = destroyer
    model = 0
     }
    division =
    { id   = { type = 26600 id = 10 }
      name = "第1运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 11 }
      name = "第2运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 12 }
      name = "第3运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 13 }
      name = "第4运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 14 }
      name = "第5运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 15 }
      name = "第6运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 16 }
      name = "第7运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 17 }
      name = "第8运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 26600 id = 18 }
      name = "第9运输舰编队 "
      type = transport
    }
  }
}
