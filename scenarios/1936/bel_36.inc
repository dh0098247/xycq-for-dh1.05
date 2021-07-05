##############################
# Country definition for BEL #
##############################

#####################
# Country main data #
#####################

country =
{ tag                    = BEL
  capital                = 51

	research_mod = 1.00
	tc_mod = 1.00
	peacetime_ic_mod = 0.65

  manpower               = 350
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 200
  transports             = 250
  escorts                = 50
  diplomacy =
  { relation = { tag = AST value = 75 }
    relation = { tag = CAN value = 150 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -5 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LUX value = 200 }
    relation = { tag = NOR value = 100 }
    relation = { tag = NZL value = 20 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 35 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
   SpyInfo                = {  country = "BEL" NumberOfSpies = 2  } 
  nationalprovinces      = { 3055 3101 45 50 51 52 65 68 69 70 }
  ownedprovinces         = { 1063 1071 1072 1073 1074 1095 1098 1127 1142 1143 1144 3055 3101 3364 3382 3383 3384 45 50 51 52 65 68 69 70 }
  controlledprovinces    = { 1063 1071 1072 1073 1074 1095 1098 1127 1142 1143 1144 3055 3101 3364 3382 3383 3384 45 50 51 52 65 68 69 70 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110 5090 5060 5200 5810 5120
                             5180 5660 5670 5680 
                             5310 5010
                             1010 1100 1110 1710 1830
                             2280 2290 2610 2420 2540 2550 2010 2020
                             4120 4010
			                 3490 3550 3600 3010 3070
                             6010 6020 6030 6040 6200 6050 6320 6390
                             8010 8020 8390 8150 8030
                             9700 7430 1900 
                           }
blueprints             = { }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 3
    free_market       = 9
    freedom           = 10
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 15001 }
  headofgovernment       = { type = 9 id = 15002 }
  foreignminister        = { type = 9 id = 15003 }
  armamentminister       = { type = 9 id = 15004 }
  ministerofsecurity     = { type = 9 id = 15005 }
  ministerofintelligence = { type = 9 id = 15006 }
  chiefofstaff           = { type = 9 id = 15007 }
  chiefofarmy            = { type = 9 id = 15008 }
  chiefofnavy            = { type = 9 id = 15009 }
  chiefofair             = { type = 9 id = 15010 }
	
 landunit =
  { id       = { type = 11500 id = 1 }
    location = 51
    name     = "比利时第I军 "
    division =
    { id    = { type = 11500 id = 2 }
      name  = "第1步兵师 "
      type  = motorized
      model = 0
      extra = b_09
      experience = 20
    }
  }
  landunit =
  { id       = { type = 11500 id = 3 }
    location = 52
    name     = "比利时第II军 "
    division =
    { id    = { type = 11500 id = 4 }
      name  = "第2步兵师 "
      type  = motorized
      model = 0
      experience = 20
    }
    division =
    { id    = { type = 11500 id = 5 }
      name  = "第3步兵师 "
      type  = motorized
      model = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 11500 id = 6 }
    location = 51
    name     = "比利时第III军 "
    division =
    { id    = { type = 11500 id = 7 }
      name  = "第1猎兵师 "
      type  = motorized
      extra = artillery
      model = 0
      experience = 40
    }
  }
  landunit =
  { id       = { type = 11500 id = 8 }
    location = 69
    name     = "比利时第IV军 "
    division =
    { id    = { type = 11500 id = 9 }
      name  = "第4步兵师 "
      type  = infantry
      model = 0
      extra = police
      experience = 15
    }
    division =
    { id    = { type = 11500 id = 10 }
      name  = "第5步兵师 "
      type  = infantry
      model = 0
      extra = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 11500 id = 11 }
    location = 70
    name     = "比利时第V军 "
    division =
    { id    = { type = 11500 id = 12 }
      name  = "第6步兵师 "
      type  = infantry
      model = 0
      experience = 15
    }
  }
  landunit =
  { id       = { type = 11500 id = 13 }
    location = 68
    name     = "比利时模范军 "
    division =
    { id    = { type = 11500 id = 14 }
      name  = "第2师 "
      type  = motorized
      model = 0
      extra = artillery
      experience = 30
    }
    division =
    { id    = { type = 11500 id = 15 }
      name  = "第7步兵师 "
      type  = motorized
      model = 0
      extra = artillery
      experience = 30
    }
  }
  landunit =
  { id       = { type = 11500 id = 16 }
    location = 45
    name     = "比利时第VII军 "
    division =
    { id    = { type = 11500 id = 17 }
      name  = "第1山地师 "
      type  = bergsjaeger
      model = 0
      extra = engineer
      experience = 20
    }
  }
  landunit =
  { id       = { type = 11500 id = 18 }
    location = 51
    name     = "比利时枪骑军 "
    division =
    { id    = { type = 11500 id = 19 }
      name  = "第1摩步师 "
      type  = motorized
      model = 1
      extra = light_armor_brigade
      experience = 40
    }
    division =
    { id    = { type = 11500 id = 20 }
      name  = "第1指挥骑兵师 "
      type  = cavalry
      model = 1
      experience = 40
    }
  }
  landunit =
  { id       = { type = 11500 id = 21 }
    location = 1095
    name     = "殖民军团 "
    division =
    { id    = { type = 11500 id = 22 }
      name  = "第1殖民师 "
      type  = militia
      model = 0
      experience = 15
    }
  }
  navalunit =
  { id       = { type = 11500 id = 23 }
    location = 45
    base     = 45
    name     = "比利时运输舰队 "
    division =
    { id   = { type = 11500 id = 24 }
      name = "第1运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 11500 id = 26 }
      name = "第2运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 11500 id = 27 }
      name = "第3运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 11500 id = 28 }
      name = "第4运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 11500 id = 29 }
      name = "第5运输舰编队 "
      type = transport
    }
  }
}
