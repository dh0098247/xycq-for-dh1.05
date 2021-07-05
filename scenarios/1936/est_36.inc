##############################
# Country definition for EST #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = EST
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 105
  capital                = 194
  transports             = 20
  escorts                = 3

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  diplomacy =
  { relation = { tag = ENG value = 65 }
    relation = { tag = FIN value = 120 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
    relation =
    { tag        = LAT
      value      = 150
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation =
    { tag        = LIT
      value      = 120
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = POL value = 75 }
    relation = { tag = SOV value = -30 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  nationalprovinces      = { 193 194 195 196 199 3118 3120 3121 3122 }
  ownedprovinces         = { 193 194 195 196 199 3118 3120 3121 3122 }
  controlledprovinces    = { 193 194 195 196 199 3118 3120 3121 3122 }
  # Eastern Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080 5170 5190
                             5180 5660
                             5310 5010
                             1010 1100 1830
                             2280 2290 2420
                             3550 3010 3410
                             6050 6010
                             8010 8020
                             7420
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    free_market       = 5
    freedom           = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 26001 }
  headofgovernment       = { type = 9 id = 26002 }
  foreignminister        = { type = 9 id = 26003 }
  armamentminister       = { type = 9 id = 26004 }
  ministerofsecurity     = { type = 9 id = 26005 }
  ministerofintelligence = { type = 9 id = 26006 }
  chiefofstaff           = { type = 9 id = 26007 }
  chiefofarmy            = { type = 9 id = 26008 }
  chiefofnavy            = { type = 9 id = 26009 }
  chiefofair             = { type = 9 id = 26010 }

  # Estonian Army
  landunit =
  { id       = { type = 30000 id = 1 }
    location = 194
    name     = "爱沙尼亚第1军 "
    Division =
    { id       = { type = 30000 id = 2 }
      name     = "第1步兵师 "
      type     = infantry
      strength = 100
      model    = 0
    }
    Division =
    { id       = { type = 30000 id = 3 }
      name     = "第2步兵师 "
      type     = infantry
      strength = 100
      model    = 0
    }
    Division =
    { id       = { type = 30000 id = 4 }
      name     = "第3步兵师 "
      type     = infantry
      strength = 100
      model    = 0
    }
  }
}
