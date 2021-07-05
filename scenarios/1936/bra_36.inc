##############################
# Country definition for BRA #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 200
  manpower               = 800
  capital                = 885

	research_mod = 1.00
	tc_mod = 1.00
	peacetime_ic_mod = 0.65

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 9
    free_market       = 8
    freedom           = 7
    professional_army = 10
    defense_lobby     = 6
    interventionism   = 3
  }
  nationalprovinces      = { 4038 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4062 4063 820  822  823  824  825  826  834 
                             835  847  848  872  876  877  878  879  880  881  882  883  884  885  886  887 
                           }
  ownedprovinces         = { 4038 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4062 4063 820  822  823  824  825  826  834 
                             835  847  848  872  876  877  878  879  880  881  882  883  884  885  886  887 
                           }
  controlledprovinces    = { 4038 4044 4045 4046 4047 4048 4049 4050 4051 4052 4053 4054 4055 4056 4057 4062 4063 820  822  823  824  825  826  834 
                             835  847  848  872  876  877  878  879  880  881  882  883  884  885  886  887 
                           }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800
                             5180 5660
                             5310
                             1010 1100
                             2280 2290 2420 2540
                             3490 3550 3560 3600 3610 3010 3070 3130 3410
                             6010 6020 6030 6040 6050
                             8010 8020 8390 8150 8030
                             9010 7420 1900 
                           }
  diplomacy =
  { relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 150 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 34001 }
  headofgovernment       = { type = 9 id = 34002 }
  foreignminister        = { type = 9 id = 34003 }
  armamentminister       = { type = 9 id = 34004 }
  ministerofsecurity     = { type = 9 id = 34005 }
  ministerofintelligence = { type = 9 id = 34006 }
  chiefofstaff           = { type = 9 id = 34007 }
  chiefofarmy            = { type = 9 id = 34008 }
  chiefofnavy            = { type = 9 id = 34009 }
  chiefofair             = { type = 9 id = 34010 }
  landunit =
  { id       = { type = 18000 id = 1 }
    name     = "巴西第1军 "
    location = 883
    division =
    { id       = { type = 18000 id = 2 }
      name     = "第1步兵师 "
      strength = 100
      type     = motorized
      extra    = artillery
      experience = 40
    }
    division =
    { id       = { type = 18000 id = 3 }
      name     = "第2步兵师 "
      strength = 100
      type     = motorized
      experience = 40
    }
    division =
    { id       = { type = 18000 id = 4 }
      name     = "第18警备师 "
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 18000 id = 5 }
      name     = "第19警备师 "
      strength = 100
      type     = militia
    }
  }
  landunit =
  { id       = { type = 18000 id = 6 }
    name     = "巴西第2军 "
    location = 885
    division =
    { id       = { type = 18000 id = 7 }
      name     = "第3步兵师"
      strength = 100
      type     = infantry
      experience = 20
    }
    division =
    { id       = { type = 18000 id = 8 }
      name     = "第92骑兵师 "
      strength = 100
      type     = cavalry
      experience = 20
    }
  }
######### Dormant

	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 18000 id = 100 }
			name = "里奥卫戍师 "
			type = bergsjaeger
			extra = police
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 18000 id = 101 }
			name = "里奥卫戍师 "
			type = infantry
			extra = police
			model = 3
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 18000 id = 102 }
			name = "圣保罗卫戍师 "
			type = bergsjaeger
			extra = police
			model = 1
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 18000 id = 103 }
			name = "圣保罗卫戍师 "
			type = infantry
			extra = police
			model = 3
		}
########

  navalunit =
  { id       = { type = 18000 id = 11 }
    location = 885
    base     = 885
    name     = "巴西运输舰队 "
    division =
    { id   = { type = 18000 id = 12 }
      name = "第1运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18000 id = 13 }
      name = "第2运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18000 id = 14 }
      name = "第3运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18000 id = 15 }
      name = "第4运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18000 id = 16 }
      name = "第5运输舰编队 "
      type = transport
    }
    division =
    { id   = { type = 18000 id = 17 }
      name = "第6运输舰编队 "
      type = transport
    }
  }
  navalunit =
  { name     = "巴西第1舰队 "
    id       = { type = 18000 id = 18 }
    location = 848
    base     = 848
    division =
    { id    = { type = 18000 id = 19 }
      name  = "圣保罗号 "
      type  = battleship
      model = 0
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
    { id    = { type = 18000 id = 29 }
      name  = "米那斯格勒斯号 "
      type  = battleship
      model = 0
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
    { id    = { type = 18000 id = 21 }
      name  = "比黑尔号 "
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 18000 id = 23 }
      name  = "格兰德河·苏尔号 "
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
  }
  airunit =
  { id       = { type = 18000 id = 9 }
    name     = "巴西第1空军联队 "
    location = 885
    base     = 885
    division =
    { id       = { type = 18000 id = 10 }
      name     = "第1截击机大队 "
      strength = 50
      type     = interceptor
      model    = 0
      experience = 15
    }
  }
}
