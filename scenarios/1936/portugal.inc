##############################
# Country definition for POR #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = POR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 15
  capital                = 336

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 250
  transports             = 120
  escorts                = 30
  # Azores
  diplomacy =
  { relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPR value = -50 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }

  nationalprovinces      = { 1867 3277 3278 3279 3280 3281 335 336 337 344 345 3583 3584 }
  ownedprovinces         = { 1090 1094 1096 1097 1100 1101 1102 1103 1122 1123 1130 1131 1133 1138 1146 1316 1658 1867 3277 3278 3279 3280 3281 3310
                             3333 335  336  3367 337  3379 3380 3381 344  345  3583 3584 3811 3812 3950 983 
                           }
  # Cabinda
  controlledprovinces    = { 1090 1094 1096 1097 1100 1101 1102 1103 1122 1123 1130 1131 1133 1138 1146 1316 1658 1867 3277 3278 3279 3280 3281 3310
                             3333 335  336  3367 337  3379 3380 3381 344  345  3583 3584 3811 3812 3950 983 
                           }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800
                             5180 5660 5670
                             5310
                             1010 1100
                             2280 2290 2610 2420 2540
                             3490 3550 3600 3010 3070 3410
                             6010 6020 6030 6040 6050
                             8010 8020 
                             9010
                             7420 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 9001 }
  headofgovernment       = { type = 9 id = 9002 }
  foreignminister        = { type = 9 id = 9003 }
  armamentminister       = { type = 9 id = 9004 }
  ministerofsecurity     = { type = 9 id = 9005 }
  ministerofintelligence = { type = 9 id = 9006 }
  chiefofstaff           = { type = 9 id = 9007 }
  chiefofarmy            = { type = 9 id = 9008 }
  chiefofnavy            = { type = 9 id = 9009 }
  chiefofair             = { type = 9 id = 9010 }

  landunit =
  { id       = { type = 19600 id = 1000 }
    location = 336
    name     = "葡萄牙第I军 "
    division =
    { id       = { type = 19600 id = 1001 }
      name     = "第1'巴塔'步兵师 "
      type     = motorized
      extra    = artillery
      strength = 100
    }
    division =
    { id       = { type = 19600 id = 1002 }
      name     = "第2'巴塔'步兵师 "
      type     = infantry
      strength = 100
    }
  }

##############################
# AI Garrisons (by civdemof) #
##############################
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 19600 id = 1008 }
			name = "亚速尔群岛防卫军团 "
			type = militia
			model = 1
			extra = artillery
			brigade_model = 1
		}

  navalunit =
  { id       = { type = 19600 id = 1003 }
    location = 336
    base     = 336
    name     = "葡萄牙运输舰队 "
    division =
    { id   = { type = 19600 id = 1004 }
      name = "第1运输舰编队 "
      type = transport
    }
  }
  navalunit =
  { id       = { type = 19600 id = 1005 }
    location = 983
    base     = 983
    name     = "克里斯运输舰队 "
    division =
    { id   = { type = 19600 id = 1006 }
      name = "第2运输舰编队 "
      type = transport
    }
    division =
    { id    = { type = 19600 id = 1007 }
      name  = "第2驱逐舰编队 "
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 19600 id = 9302 }
    name     = "葡萄牙第I舰队 "
    location = 336
    base     = 336
    division =
    { id       = { type = 19600 id = 9303 }
      name     = "维那卡斯特罗号 "
      type     = destroyer
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 19600 id = 9304 }
      name     = "第1潜艇编队 "
      type     = submarine
      model    = 1
      strength = 100
    }
  }
  airunit =
  { id       = { type = 19600 id = 9300 }
    name     = "葡萄牙第I空军联队 "
    location = 336 # Lissabon
    base     = 336
    division =
    { id       = { type = 19600 id = 9301 }
      name     = "第1战术轰炸机大队 "
      type     = tactical_bomber
      strength = 100
      model    = 0
    }
  }
}
