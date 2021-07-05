##############################
# Country definition for CAN #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = CAN
  regular_id             = eng
  # Resource Reserves
  control                = ENG
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 200
  manpower               = 650
  capital                = 588

	research_mod = 1.00
	peacetime_ic_mod = 0.65

  transports             = 250
  escorts                = 50
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = HOL value = 80 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 175 }
    relation = { tag = YEM value = 150 }
  }
   SpyInfo                = {  country = "CAN" NumberOfSpies = 2  } 
  nationalprovinces      = { 1909 3972 3973 3974 3975 3976 3977 3978 3979 3981 3982 3983 3984 3985 3986 541  552  554  555  556  557  558  559 
                             560  561  563  564  565  566  567  568  569  570  571  572  573  574  578  579  580  581  584  585  586  587  588  589 
                             590  591  794  795  796  797  798  799 
                           }
  ownedprovinces         = { 1909 3972 3973 3974 3975 3976 3977 3978 3979 3981 3982 3983 3984 3985 3986 541  552  554  555  556  557  558  559 
                             560  561  563  564  565  566  567  568  569  570  571  572  573  574  578  579  580  581  584  585  586  587  588  589 
                             590  591  794  795  796  797  798  799 
                           }
  controlledprovinces    = { 1909 3972 3973 3974 3975 3976 3977 3978 3979 3981 3982 3983 3984 3985 3986 541  552  554  555  556  557  558  559 
                             560  561  563  564  565  566  567  568  569  570  571  572  573  574  578  579  580  581  584  585  586  587  588  589 
                             590  591  794  795  796  797  798  799 
                           }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670 5310 5010
                             1010 1100 1110 1020
                             2280 2290 2610 2420 2540 2010
                             3490 3550 3600 3010 3070 3130
                             4120 4010
                             6010 6020 6030 6040 6050 6320 6390
                             8010 8020 8150 8390 8030
                             9010 9020 9030 7430 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 10
    freedom           = 10
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 45001 }
  headofgovernment       = { type = 9 id = 45002 }
  foreignminister        = { type = 9 id = 45003 }
  armamentminister       = { type = 9 id = 45004 }
  ministerofsecurity     = { type = 9 id = 45005 }
  ministerofintelligence = { type = 9 id = 45006 }
  chiefofstaff           = { type = 9 id = 45007 }
  chiefofarmy            = { type = 9 id = 45008 }
  chiefofnavy            = { type = 9 id = 45009 }
  chiefofair             = { type = 9 id = 45010 }

  landunit =
  { id       = { type = 20000 id = 1 }
    name     = "加拿大皇家陆军第I军 "
    location = 588
    division =
    { id       = { type = 20000 id = 2 }
      name     = "第1步兵师 "
      strength = 80
      type     = motorized
      model    = 0
      experience = 100
    }
    division =
    { id       = { type = 20000 id = 3 }
      name     = "第2步兵师 "
      strength = 80
      type     = motorized
      model    = 0
      experience = 100
    }
    division =
    { id       = { type = 20000 id = 4 }
      name     = "第3步兵师 "
      strength = 80
      type     = motorized
      model    = 0
      experience = 100
    }
    division =
    { id       = { type = 20000 id = 5 }
      name     = "第4步兵师 "
      strength = 80
      type     = motorized
      model    = 0
      experience = 100
    }
    division =
    { id       = { type = 20000 id = 6 }
      name     = "第5步兵师 "
      strength = 80
      type     = motorized
      model    = 0
      experience = 100
    }
  }
  navalunit =
  { id       = { type = 20000 id = 500 }
    location = 579
    base     = 579
    name     = "加拿大皇家海军运输舰队 "
    division =
    { id   = { type = 30053 id = 501 }
      name = "日本女皇号 "
      type = transport
    }
    division =
    { id   = { type = 30053 id = 502 }
      name = "澳洲女王号 "
      type = transport
    }
    division =
    { id   = { type = 30053 id = 503 }
      name = "英国女王号 "
      type = transport
    }
    division =
    { id   = { type = 30053 id = 504 }
      name = "加拿大女王号 "
      type = transport
    }
    division =
    { id   = { type = 30053 id = 505 }
      name = "俄罗斯女皇号 "
      type = transport
    }
    division =
    { id   = { type = 30053 id = 506 }
      name = "亚洲女王号 "
      type = transport
    }
  }
  navalunit =
  { id       = { type = 20000 id = 7 }
    name     = "加拿大皇家海军第I舰队 "
    location = 579
    base     = 579
    division =
    { id       = { type = 20000 id = 8 }
      name     = "第1驱逐舰编队 "
      strength = 100
      type     = destroyer
      model    = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id       = { type = 20000 id = 9 }
      name     = "第2驱逐舰编队 "
      strength = 100
      type     = destroyer
      model    = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id       = { type = 20000 id = 10 }
      name     = "第3驱逐舰编队 "
      strength = 100
      type     = destroyer
      model    = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id       = { type = 20000 id = 11 }
      name     = "第4驱逐舰编队 "
      strength = 100
      type     = destroyer
      model    = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id       = { type = 20000 id = 12 }
      name     = "第5驱逐舰编队 "
      strength = 100
      type     = destroyer
      model    = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
}
