##############################
# Country definition for FIN #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = FIN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 142

	research_mod = 1.00
	tc_mod = 1.00
        extra_tc = 50
	peacetime_ic_mod = 0.70

  manpower               = 600
  transports             = 80
  escorts                = 40
  diplomacy =
  { relation = { tag = AST value = 65 }
    relation = { tag = AUS value = 55 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 35 }
    relation = { tag = CZE value = 50 }
    relation = { tag = ENG value = 85 }
    relation = { tag = EST value = 120 }
    relation = { tag = FRA value = 85 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = 40 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 75 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 20 }
    relation = { tag = LAT value = 90 }
    relation = { tag = LIT value = 80 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POL value = 100 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 40 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = YUG value = 35 }
    relation =
    { tag        = DEN
      value      = 100
    }
  }
   SpyInfo                = {  country = "FIN" NumberOfSpies = 1  } 
  nationalprovinces      = { 103 130 131 132 136 137 138 139 140 141 142 143 144 145 146 147 148 149 3117 3119 3282 3283 4091 115 }
  ownedprovinces         = { 103 130 131 132 136 137 138 139 140 141 142 143 144 145 146 147 148 149 3117 3119 3282 3283 4091 115 }
  controlledprovinces    = { 103 130 131 132 136 137 138 139 140 141 142 143 144 145 146 147 148 149 3117 3119 3282 3283 4091 115 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670
                             5310 5010
                             1010 1020 1100 1560
                             2280 2290 2420 2540
                             3550 3010 3410
                             6010 6020 6030 6040 6050 6320 6390 6200
                             6550
                             8010 8020 8030 8150 8390
                             9700 9710 9010
                             7420 1900 
                           }

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    free_market       = 9
    freedom           = 7
    professional_army = 10
    defense_lobby     = 9
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 29001 }
  headofgovernment       = { type = 9 id = 29002 }
  foreignminister        = { type = 9 id = 29003 }
  armamentminister       = { type = 9 id = 29068 }
  ministerofsecurity     = { type = 9 id = 29005 }
  ministerofintelligence = { type = 9 id = 29006 }
  chiefofstaff           = { type = 9 id = 29007 }
  chiefofarmy            = { type = 9 id = 29008 }
  chiefofnavy            = { type = 9 id = 29009 }
  chiefofair             = { type = 9 id = 29010 }

  landunit =
  { location = 146
    name     = "芬兰国防军第I军 "
    id       = { type = 32000 id = 1 }
    division =
    { id       = { type = 32000 id = 706 }
      name     = "芬兰军队全国总指挥部 "
      type     = hq
      model    = 1
      strength = 100
      extra = armored_car
      experience = 80
    }
    division =
    { id            = { type = 32000 id = 2 }
      name          = "第1'赫尔辛基'步兵师 "
      type          = motorized
      model         = 73
      extra         = artillery
      brigade_model = 2
      experience = 80
    }
    division =
    { id            = { type = 32000 id = 21 }
      name          = "第1骑兵旅 "
      type     = cavalry
      strength = 50
      model         = 81
      experience = 80
    }
  }
  landunit =
  { location = 145
    name     = "芬兰国防军第II军 "
    id       = { type = 32000 id = 3 }
    division =
    { id    = { type = 32000 id = 4 }
      name  = "第3'米凯利'步兵师 "
      type  = motorized
      model = 73
      extra = artillery
      brigade_model = 2
      experience = 80
    }
    division =
    { id    = { type = 32000 id = 5 }
      name  = "第4步兵师 "
      type  = infantry
      model = 73
      experience = 80
    }
    division =
    { id    = { type = 32000 id = 7 }
      name  = "第21步兵师 "
      type  = infantry
      model = 73
      experience = 80
    }
  }
  landunit =
  { location = 145
    name     = "芬兰国防军第III军 "
    id       = { type = 32000 id = 8 }
    division =
    { id    = { type = 32000 id = 9 }
      name  = "第2'维堡'步兵师 "
      type  = motorized
      model = 73
      extra = anti_tank
      brigade_model = 0
      experience = 80
    }
    division =
    { id    = { type = 32000 id = 10 }
      name  = "第10步兵师 "
      type  = infantry
      model = 73
      experience = 80
    }
  }
  landunit =
  { location = 149
    name     = "芬兰国防军第V军 "
    id       = { type = 32000 id = 11 }
    division =
    { id    = { type = 32000 id = 12 }
      name  = "第12步兵师 "
      type  = infantry
      model = 73
      experience = 80
    }
    division =
    { id    = { type = 32000 id = 13 }
      name  = "第13步兵师 "
      type  = infantry
      model = 73
      experience = 80
    }
  }
  landunit =
  { location = 142
    name     = "芬兰国防军第IX军 "
    id       = { type = 32000 id = 14 }
    division =
    { id    = { type = 32000 id = 15 }
      name  = "第6步兵师 "
      type  = infantry
      model = 73
      experience = 80
    }
    division =
    { id    = { type = 32000 id = 23 }
      name  = "第22步兵师 "
      type  = infantry
      model = 73
      experience = 80
    }
  }
  landunit =
  { location = 136
    name     = "芬兰独立边防军 "
    id       = { type = 32000 id = 17 }
    division =
    { id    = { type = 32000 id = 18 }
      name  = "第1'瓦萨'猎兵旅 "
      type  = bergsjaeger
      strength     = 80
      model = 16
      experience = 100
    }
    division =
    { id    = { type = 32000 id = 19 }
      name  = "第2猎兵师 "
      type  = bergsjaeger
      strength     = 70
      model = 16
      experience = 100
    }
    division =
    { id    = { type = 32000 id = 20 }
      name  = "第3猎兵师 "
      type  = bergsjaeger
      strength     = 70
      model = 16
      experience = 100
    }
  }
landunit = { location = 142  id = { type = 32000 id = 100 } dig_in = 40 name = "赫尔辛基城防指挥中心 "

division = {
                locked = yes
		id = { type = 32000 id = 101 }
		name = "赫尔辛基要塞 "
                experience = 100
		type = garrison
		model = 2
		extra = b_09
		brigade_model = 3
		strength = 100
		}
	}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 33 }
			name = "本土守备师 "
			type = infantry
	                model = 74
                        extra = artillery
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 34 }
			name = "本土守备师 "
			type = infantry
	                model = 74
                        extra = artillery
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 35 }
			name = "本土守备师 "
			type = infantry
	                model = 74
                        extra = artillery
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 36 }
			name = "本土守备师 "
			type = infantry
	                model = 74
                        extra = artillery
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 37 }
			name = "本土守备师 "
			type = infantry
	                model = 74
                        extra = artillery
		}
  navalunit =
  { id       = { type = 32000 id = 24 }
    name     = "芬兰海军第I舰队 "
    location = 142
    base     = 142
    division =
    { id    = { type = 32000 id = 25 }
      name  = "伊尔玛利宁号 "
      type  = heavy_cruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 32000 id = 26 }
      name  = "维纳莫宁号 "
      type  = heavy_cruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
  }
  navalunit =
  { id       = { type = 32000 id = 27 }
    name     = "芬兰海军第II舰队 "
    location = 142
    base     = 142
    division =
    { id    = { type = 32000 id = 28 }
      name  = "维特西伦号 "
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 32000 id = 29 }
      name  = "水獭号 "
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 32000 id = 30 }
      name  = "维斯西斯号 "
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 32000 id = 31 }
      name  = "伊库·特尔索号 "
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 32000 id = 32 }
      name  = "水貂号 "
      type  = submarine
      model = 0
    }
  }
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 38 }
			name = "大西洋壁垒 "
	                type = garrison
	                model = 2
                        extra = engineer
                        brigade_model = 2
      			experience = 20
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 39 }
			name = "大西洋壁垒 "
	                type = garrison
	                model = 2
                        extra = engineer
                        brigade_model = 2
      			experience = 20
		}
	landdivision = {
		dormant = yes locked = yes
	        	id = { type = 32000 id = 40 }
			name = "大西洋壁垒 "
	                type = garrison
	                model = 2
                        extra = engineer
                        brigade_model = 2
      			experience = 20
		}


}
