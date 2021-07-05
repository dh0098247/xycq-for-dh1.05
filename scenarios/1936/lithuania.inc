##############################
# Country definition for LIT #
##############################

#####################
# Country main data #
#####################

country =
{ tag                    = LIT
  capital                = 207

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 88
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  diplomacy =
  { relation = { tag = ENG value = 65 }
    relation =
    { tag        = EST
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = FIN value = 80 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation =
    { tag        = LAT
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = POL value = -75 }
    relation = { tag = SOV value = -30 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  nationalprovinces      = { 1892 206 207 208 214 2603 3128 3129 511 577 }
  ownedprovinces         = { 1892 206 207 2603 3128 3129 511 577 }
  controlledprovinces    = { 1892 206 207 2603 3128 3129 511 577 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080 5170 5190
                             5310 5010
                             1010 1100 1830
                             2280 2290 2420
                             3550 3010
                             6050 6010
                             8010 8020
                             7430
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    freedom           = 5
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 28001 }
  headofgovernment       = { type = 9 id = 28002 }
  foreignminister        = { type = 9 id = 28003 }
  armamentminister       = { type = 9 id = 28004 }
  ministerofsecurity     = { type = 9 id = 28005 }
  ministerofintelligence = { type = 9 id = 28006 }
  chiefofstaff           = { type = 9 id = 28007 }
  chiefofarmy            = { type = 9 id = 28008 }
  chiefofnavy            = { type = 9 id = 28009 }
  chiefofair             = { type = 9 id = 28010 }

  # Firepower
  # ###########################################
  # ###Lithuanian Army#########################
  # ###########################################
  landunit =
  { id       = { type = 26500 id = 1 }
    location = 207
    name     = "立陶宛第1军 "
    Division =
    { id       = { type = 26500 id = 2 }
      name     = "布鲁加第1步兵师 "
      type     = motorized
      strength = 100
    }
    Division =
    { id       = { type = 26500 id = 3 }
      name     = "布鲁加第2步兵师 "
      type     = infantry
      extra    = artillery
      strength = 100
    }
    Division =
    { id       = { type = 26500 id = 4 }
      name     = "布鲁加第3步兵师 "
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 26500 id = 7 }
    name     = "立陶宛第1舰队 "
    location = 206
    base     = 206
    division =
    { id    = { type = 26500 id = 8 }
      name  = "第1运输舰编队 "
      type  = transport
      model = 0
    }
  }
  airunit =
  { id       = { type = 26500 id = 5 }
    location = 207
    base     = 207
    name     = "立陶宛第1空军联队 "
    Division =
    { id       = { type = 26500 id = 6 }
      name     = "第1截击机大队 "
      type     = interceptor
      model    = 0
      strength = 45
    }
  }
}
