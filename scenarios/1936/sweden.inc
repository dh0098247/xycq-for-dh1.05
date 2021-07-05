##############################
# Country definition for SWE #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  regular_id = fin
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 500
  capital                = 101
  transports             = 150
  escorts                = 35

	research_mod = 1.05
	peacetime_ic_mod = 0.60
	tc_mod = 1.00

  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
    relation =
    { tag        = DEN
      value      = 150
      guaranteed = { day = 30 month = december year = 1935 }
    }
  }
  SpyInfo                = { country = "swe" NumberOfSpies = 2 }

  nationalprovinces      = { 112 126 127 122 121 120 119 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 122 121 120 119 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 122 121 120 119 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670 5680 
                             5310 5010 5470
                             1010 1100 1600 1830
                             2280 2290 2610 2420 2540 2550 2010
                             3490 3550 3560 3600 3610 3620 3010 3070 3130 3250 3410 3760
                             4120 4010
                             6010 6020 6030 6040 6050 6320 6390
                             8010 8020 8390 8150 8030
                             9700 9710
                             7420 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7038 }
  armamentminister       = { type = 9 id = 7047 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7007 }
  chiefofarmy            = { type = 9 id = 7008 }
  chiefofnavy            = { type = 9 id = 7009 }
  chiefofair             = { type = 9 id = 7010 }

  # 5 infantry divisions.
  landunit =
  { location = 101
    name     = "瑞典第A军 "
    id       = { type = 29600 id = 1 }
    division =
    { id    = { type = 29600 id = 2 }
      name  = "第1步兵师 "
      type  = motorized
      model = 2
      extra = artillery
      experience = 100
    }
  }
  landunit =
  { location = 127
    name     = "瑞典第G军 "
    id       = { type = 29600 id = 9 }
    division =
    { id    = { type = 29600 id = 10 }
      name  = "第5步兵师 "
      type  = motorized
      model = 2
      experience = 100
    }
  }
  landunit =
  { location = 102
    name     = "瑞典第J军 "
    id       = { type = 29600 id = 11 }
    division =
    { id   = { type = 29600 id = 12 }
      name = "'陆地风暴'民兵师 "
      type = militia
      model = 2
      experience = 100
    }
  }

  landunit =
  { location = 101
    name     = "瑞典第皇室卫队 "
    id       = { type = 29600 id = 100 }
    division = {
                locked = yes
		id = { type = 29600 id = 101 }
		name = "斯德哥尔摩要塞 "
                experience = 100
		type = garrison
		model = 2
		extra = b_09
		brigade_model = 3
		strength = 100
		}
	}

  navalunit =
  { location = 101 # Berga/Musk?
    base     = 101
    name     = "库斯佛罗曼舰队 "
    id       = { type = 29600 id = 16 }
    division =
    { id    = { type = 29600 id = 17 }
      name  = "瑞典号 "
      type  = battlecruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division =
    { id    = { type = 29600 id = 18 }
      name  = "维多利亚多罗丁号 "
      type  = battlecruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division =
    { id    = { type = 29600 id = 19 }
      name  = "古特斯V世号 "
      type  = battlecruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
   }
    division =
    { id    = { type = 29600 id = 21 }
      name  = "克拉斯佛兰芒号 "
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 29600 id = 22 }
      name  = "哥特兰号 "
      type  = light_cruiser
      model = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 29600 id = 23 }
      name  = "第1驱逐舰编队 "
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 29600 id = 25 }
      name  = "第1运输舰编队 "
      type  = transport
      model = 0
    }
  }
  navalunit =
  { location = 101 # Berga/Musk?
    base     = 101
    name     = "阿哈佛罗得尔舰队 "
    id       = { type = 29600 id = 26 }
    division =
    { id    = { type = 29600 id = 27 }
      name  = "路安号 "
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
    { id    = { type = 29600 id = 28 }
      name  = "打击者号 "
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
  { location = 95 # Karlskronabasen
    base     = 95
    name     = "卡尔罗那维多林根舰队 "
    id       = { type = 29600 id = 30 }
    division =
    { id    = { type = 29600 id = 31 }
      name  = "奥斯卡II世号 "
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
    { id    = { type = 29600 id = 33 }
      name  = "第1潜艇编队 "
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 98 # G鰐eborgsbasen
    base     = 98
    name     = "吉伯尔西卡丁恩舰队 "
    id       = { type = 29600 id = 34 }
    division =
    { id    = { type = 29600 id = 35 }
      name  = "曼宁赫根号 "
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
    { id    = { type = 29600 id = 37 }
      name  = "第2潜艇编队 "
      type  = submarine
      model = 1
    }
  }
  airunit =
  { location = 101
    base     = 101
    name     = "瑞典第I空军联队 "
    id       = { type = 29600 id = 13 }
    division =
    { id    = { type = 29600 id = 14 }
      name  = "第1战术轰炸机大队 "
      type  = tactical_bomber
      model = 0
    }
    division =
    { id    = { type = 29600 id = 15 }
      name  = "第1海军轰炸机大队 "
      type  = naval_bomber
      model = 0
    }
  }
}
