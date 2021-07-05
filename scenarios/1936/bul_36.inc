##############################
# Country definition for BUL #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  manpower               = 320
  capital                = 417

	research_mod = 1.00
	tc_mod = 1.00
	peacetime_ic_mod = 0.65

  transports             = 20
  escorts                = 4
  diplomacy =
  { relation = { tag = ENG value = 20 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 20 }
    relation = { tag = GER value = 25 }
    relation = { tag = GRE value = -75 }
    relation = { tag = ITA value = 150 }
    relation = { tag = ROM value = 25 }
    relation = { tag = SOV value = 15 }
    relation = { tag = TUR value = 75 }
    relation = { tag = YUG value = 25 }
  }
   SpyInfo                = {  country = "BUL" NumberOfSpies = 1  } 
  nationalprovinces      = { 3235 3236 3238 3239 3240 3241 3242 410 414 416 417 418 419 420 421 422 423 3948 3234 3221 }
  ownedprovinces         = { 3235 3236 3238 3239 3240 416 417 419 420 421 422 }
  controlledprovinces    = { 3235 3236 3238 3239 3240 416 417 419 420 421 422 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050
                             5180 5660
                             5310
                             1010 1100 1830
                             2280
                             6050 6010 6020 7430 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 6
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 19001 }
  headofgovernment       = { type = 9 id = 19002 }
  foreignminister        = { type = 9 id = 19003 }
  armamentminister       = { type = 9 id = 19004 }
  ministerofsecurity     = { type = 9 id = 19005 }
  ministerofintelligence = { type = 9 id = 19006 }
  chiefofstaff           = { type = 9 id = 19007 }
  chiefofarmy            = { type = 9 id = 19008 }
  chiefofnavy            = { type = 9 id = 19009 }
  chiefofair             = { type = 9 id = 19010 }
  # Firepower
  landunit =
  { id       = { type = 19000 id = 1 }
    location = 417
    name     = "保加利亚第I军 "
    division =
    { id       = { type = 19000 id = 2 }
      name     = "第1步兵师 "
      strength = 100
      type     = motorized
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 3 }
      name     = "第7步兵师 "
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 4 }
      name     = "第1机动师 "
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 19000 id = 5 }
    location = 422
    name     = "保加利亚第II军 "
    division =
    { id       = { type = 19000 id = 6 }
      name     = "第2步兵师 "
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 7 }
      name     = "第8步兵师 "
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 19000 id = 19 }
      name     = "第2机动师 "
      strength = 100
      type     = cavalry
      model    = 0
    }
  }

  landunit =
  { id       = { type = 19000 id = 12 }
    location = 420
    name     = "保加利亚第IV军 "
    division =
    { id       = { type = 19000 id = 13 }
      name     = "第5步兵师 "
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 19000 id = 14 }
      name     = "第6步兵师 "
      strength = 100
      type     = infantry
      model    = 0
    }
  }
}
