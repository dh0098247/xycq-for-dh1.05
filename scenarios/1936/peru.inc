##############################
# Country definition for PRU #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 830

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 100
  transports             = 12
  escorts                = 2
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 4037 4038 4041 4042 4043 4069 4070 4076 816 821 829 830 831 }
  ownedprovinces         = { 4041 4042 4043 4069 4076 816 821 829 830 831 }
  controlledprovinces    = { 4041 4042 4043 4069 4076 816 821 829 830 831 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050
                             5180 5660
                             5310
                             1010 1100
                             6050 6010
                             8010 8020
                             7420
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 39001 }
  headofgovernment       = { type = 9 id = 39002 }
  foreignminister        = { type = 9 id = 39003 }
  armamentminister       = { type = 9 id = 39004 }
  ministerofsecurity     = { type = 9 id = 39005 }
  ministerofintelligence = { type = 9 id = 39006 }
  chiefofstaff           = { type = 9 id = 39007 }
  chiefofarmy            = { type = 9 id = 39008 }
  chiefofnavy            = { type = 9 id = 39009 }
  chiefofair             = { type = 9 id = 39010 }

  landunit =
  { id       = { type = 17600 id = 1 }
    name     = "秘鲁第1军 "
    location = 830
    division =
    { id       = { type = 17600 id = 2 }
      name     = "第1'波鲁斯'步兵师 "
      strength = 100
      type     = motorized
    }
    division =
    { id       = { type = 17600 id = 3 }
      name     = "第2步兵师 "
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 4 }
      name     = "第3步兵师 "
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 5 }
      name     = "第1'拉伯加'山地师 "
      strength = 100
      type     = bergsjaeger
    }
  }
  navalunit =
  { id       = { type = 17600 id = 6 }
    name     = "秘鲁马力拉舰队 "
    location = 830
    base     = 830
    # Two DDs:
    division =
    { id    = { type = 17600 id = 7 }
      name  = "第1驱逐舰编队 "
      type  = destroyer
      model = 0
    }
    # Built 1907:
    division =
    { id    = { type = 17600 id = 8 }
      name  = "阿扼拉特号 "
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
    { id    = { type = 17600 id = 9 }
      name  = "波罗林号 "
      type  = heavy_cruiser
      model = 0
      extra1 = naval_fire_controll_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    # Submarine division:
    division =
    { id    = { type = 17600 id = 10 }
      name  = "第1潜艇编队 "
      type  = submarine
      model = 1
    }
  }
}
