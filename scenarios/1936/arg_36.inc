##############################
# Country definition for ARG #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = ARG
  manpower               = 400
  transports             = 250
  escorts                = 50
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 667

	research_mod = 1.05	#
	peacetime_ic_mod = 0.75	#

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 7
    freedom           = 6
    professional_army = 10
    defense_lobby     = 7
    interventionism   = 3
  }
  nationalprovinces      = { 4065 4066 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 866 4068 4061 4060 4067 }
  ownedprovinces         = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 }
  controlledprovinces    = { 4060 4061 4065 4066 4067 4068 4073 4074 4075 667 843 844 845 850 851 852 853 854 855 857 858 859 862 863 865 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps = { 5050 5080 5170 5190 5800  5180 5660 5310 
               1010 1100 
  	       3490 3550 3600 3010 3070
               6010 6020 6050 7430
               8010 8020 8030
               2010 2280 1900 
                           }
  diplomacy =
  { relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 35001 }
  headofgovernment       = { type = 9 id = 35002 }
  foreignminister        = { type = 9 id = 35003 }
  armamentminister       = { type = 9 id = 35004 }
  ministerofsecurity     = { type = 9 id = 35005 }
  ministerofintelligence = { type = 9 id = 35006 }
  chiefofstaff           = { type = 9 id = 35007 }
  chiefofarmy            = { type = 9 id = 35008 }
  chiefofnavy            = { type = 9 id = 35009 }
  chiefofair             = { type = 9 id = 35010 }
    # Argentine OOB
  landunit =
  { id       = { type = 12000 id = 1 }
    name     = "阿根廷第7军 "
    location = 667 # Buenos Aires
    division =
    { id       = { type = 12000 id = 706 }
      name     = "阿根廷最高指挥部 "
      type     = hq
      model    = 0
      strength = 100
      extra    = anti_air
      experience = 15
    }
    division =
    { id       = { type = 12000 id = 2 }
      name     = "第3朋各罗旅 "
      strength = 30
      type     = infantry
      extra    = police
      experience = 55
    }
    division =
    { id       = { type = 12000 id = 3 }
      name     = "第2桑河旅 "
      strength = 30
      type     = infantry
      extra    = police
      experience = 55
    }
    division =
    { id       = { type = 12000 id = 4 }
      name     = "第1卡那斯旅 "
      strength = 30
      type     = infantry
      extra    = police
      experience = 55
    }
  }
  landunit =
  { id       = { type = 12000 id = 6 }
    name     = "阿根廷第8军 "
    location = 667
    division =
    { id       = { type = 12000 id = 7 }
      name     = "第4摩托化师 "
      strength = 30
      type     = motorized
      extra    = artillery
      experience = 55
    }
    division =
    { id       = { type = 12000 id = 8 }
      name     = "第4步兵师 "
      strength = 30
      type     = infantry
      extra    = artillery
      experience = 55
    }
  }
######### Dormant
	
	landdivision = {
		dormant = yes
	        	id = { type = 12000 id = 100 }
			name = "阿根廷沙卡拉兵团指挥部 "
			type = hq
			model = 1
			strength = 100
		        extra = b_09
		        brigade_model = 1
      			experience = 100
		}

#########

  navalunit =
  { name     = "阿根廷第1舰队 "
    id       = { type = 12000 id = 13 }
    location = 853
    base     = 853
    division =
    { id    = { type = 12000 id = 14 }
      name  = "维特卡罗·德·梅奥号 "
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12000 id = 16 }
      name  = "布朗号 "
      type  = heavy_cruiser
      model = 1
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12000 id = 18 }
      name  = "莫尔罗号 "
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
    { id    = { type = 12000 id = 20 }
      name  = "里瓦德维亚号 "
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
    { id    = { type = 12000 id = 22 }
      name  = "印得棚得卡号 "
      type  = heavy_cruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12000 id = 24 }
      name  = "里波塔德号 "
      type  = heavy_cruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12000 id = 26 }
      name  = "波郎格罗将军号 "
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12000 id = 28 }
      name  = "普瑞兰将军号 "
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12000 id = 30 }
      name  = "第1驱逐舰编队 "
      type  = destroyer
      model = 1
      extra1 = naval_anti_air_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 12000 id = 32 }
      name  = "第2驱逐舰编队 "
      type  = destroyer
      model = 1
      extra1 = naval_anti_air_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 12000 id = 34 }
      name  = "第1潜艇编队 "
      type  = submarine
      model = 1
    }
  }
  airunit =
  { id       = { type = 12000 id = 9 }
    name     = "阿根廷航空队 "
    location = 667
    base     = 667
    division =
    { id       = { type = 12000 id = 10 }
      name     = "第1截击机大队 "
      strength = 50
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { id       = { type = 12000 id = 11 }
    name     = "攻击航空队 "
    location = 667
    base     = 667
    division =
    { id       = { type = 12000 id = 12 }
      name     = "第1海空联合大队 "
      strength = 50
      type     = naval_bomber
      model    = 5
    }
  }
}
