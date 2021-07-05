##############################
# Country definition for LAT #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = LAT
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 197

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 20
  transports             = 15
  escorts                = 3
  diplomacy =
  { relation = { tag = ENG value = 65 }
    relation =
    { tag        = EST
      value      = 150
      guaranteed = { day = 12 month = september year = 1934 }
    }
    relation = { tag = FIN value = 90 }
    relation = { tag = FRA value = 65 }
    relation = { tag = GER value = 10 }
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
  SpyInfo                = { country = "EST" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  nationalprovinces      = { 197 198 202 203 204 205 3123 3124 3125 3126 3127 }
  ownedprovinces         = { 197 198 202 203 204 205 3123 3124 3125 3126 3127 }
  controlledprovinces    = { 197 198 202 203 204 205 3123 3124 3125 3126 3127 }
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
  headofstate            = { type = 9 id = 27001 }
  headofgovernment       = { type = 9 id = 27002 }
  foreignminister        = { type = 9 id = 27003 }
  armamentminister       = { type = 9 id = 27004 }
  ministerofsecurity     = { type = 9 id = 27005 }
  ministerofintelligence = { type = 9 id = 27006 }
  chiefofstaff           = { type = 9 id = 27007 }
  chiefofarmy            = { type = 9 id = 27008 }
  chiefofnavy            = { type = 9 id = 27009 }
  chiefofair             = { type = 9 id = 27010 }

  landunit =
  { id       = { type = 24500 id = 1 }
    location = 197
    name     = "拉脱维亚第1军 "
    Division =
    { id       = { type = 24500 id = 2 }
      name     = "库泽穆斯师 "
      type     = motorized
      strength = 100
    }
    Division =
    { id       = { type = 24500 id = 3 }
      name     = "维泽穆师 "
      type     = infantry
      strength = 100
    }
    Division =
    { id       = { type = 24500 id = 4 }
      name     = "泽格尔师 "
      extra    = artillery
      type     = infantry
      strength = 100
    }
    Division =
    { id       = { type = 24500 id = 5 }
      name     = "莱特格师 "
      type     = infantry
      strength = 100
    }
  }
  navalunit =
  { id       = { type = 24500 id = 6 }
    location = 197
    base     = 197
    name     = "拉脱维亚第1舰队 "
    Division =
    { id       = { type = 24500 id = 7 }
      name     = "第1潜艇编队 "
      type     = submarine
      model    = 0
      strength = 40
    }
  }
}
