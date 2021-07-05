##############################
# Country definition for DEN #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = DEN	
  manpower               = 80
  capital                = 294
  transports             = 200
  escorts                = 40

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FIN value = 75 }
    relation = { tag = GER value = 25 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = SWE value = 75 }
    relation = { tag = USA value = 75 }
  }
   SpyInfo                = {  country = "DEN" NumberOfSpies = 1  } 
  nationalprovinces      = { 1 2 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 }
  ownedprovinces         = { 1 2 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 }
  controlledprovinces    = { 1 2 292 293 294 295 3001 3113 3114 3115 3116 800 91 92 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670 5680 
                             5310 5010 5470 5480
                             1010 1100
                             3490 3550 3600 3010 3070 3410
                             6010 6020 6030 6040 6050
                             8010 8020 8030 8150 8390
                             7430 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    free_market       = 6
    freedom           = 8
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 16001 }
  headofgovernment       = { type = 9 id = 16002 }
  foreignminister        = { type = 9 id = 16003 }
  armamentminister       = { type = 9 id = 16004 }
  ministerofsecurity     = { type = 9 id = 16005 }
  ministerofintelligence = { type = 9 id = 16006 }
  chiefofstaff           = { type = 9 id = 16007 }
  chiefofarmy            = { type = 9 id = 16008 }
  chiefofnavy            = { type = 9 id = 16009 }
  chiefofair             = { type = 9 id = 16010 }

  landunit =
  { location = 92
    name     = "丹麦国防军第I军 "
    id       = { type = 27000 id = 40 }
    division =
    { id       = { type = 27000 id = 41 }
      name     = "第1步兵师 "
      type     = motorized
      model    = 0
      strength = 15
      extra = artillery
    }
    division =
    { id       = { type = 27000 id = 42 }
      name     = "第2步兵师 "
      type     = motorized
      model    = 0
      strength = 15
      extra = artillery
    }
  }
	#########################
  navalunit =
  { name     = "丹麦海军第I舰队 "
    id       = { type = 27000 id = 44 }
    location = 294
    base     = 294
    division =
    { id    = { type = 27000 id = 45 }
      name  = "尼尔斯·尤尔号 "
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
    { id    = { type = 27000 id = 46 }
      name  = "皮德尔·斯科拉姆号 "
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
    { id    = { type = 27000 id = 47 }
      name  = "第1潜艇编队 "
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 27000 id = 48 }
      name  = "第2潜艇编队 "
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 27000 id = 49 }
      name  = "第1运输舰编队 "
      type  = transport
      model = 0
    }
  }
}
