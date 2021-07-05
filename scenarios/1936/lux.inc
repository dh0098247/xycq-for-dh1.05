##############################
# Country definition for LUX #
##############################
province =
{ id         = 71
  landfort = 1
}

country =
{ tag                    = LUX
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 30
  capital                = 71

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  diplomacy =
  { relation = { tag = BEL value = 200 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 120 }
    relation = { tag = GER value = -50 }
    relation = { tag = HOL value = 150 }
    relation = { tag = IRE value = 75 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
  }
   SpyInfo                = {  country = "LUX" NumberOfSpies = 1  } 
  nationalprovinces      = { 71 }
  ownedprovinces         = { 71 }
  controlledprovinces    = { 71 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670
                             5310 5010
                             1010 1100
                             7430 1900 
                             }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 1
    freedom           = 9
    free_market       = 8
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 66001 }
  headofgovernment       = { type = 9 id = 66002 }
  foreignminister        = { type = 9 id = 66003 }
  armamentminister       = { type = 9 id = 66004 }
  ministerofsecurity     = { type = 9 id = 66005 }
  ministerofintelligence = { type = 9 id = 66006 }
  chiefofstaff           = { type = 9 id = 66007 }
  chiefofarmy            = { type = 9 id = 66008 }
  chiefofnavy            = { type = 9 id = 66009 }
  chiefofair             = { type = 9 id = 66010 }

  landunit =
  { id       = { type = 27500 id = 1 }
    name     = "卢森堡陆军第I军 "
    location = 71
    division =
    { id       = { type = 27500 id = 2 }
      name     = "第1步兵师 "
      strength = 100
      type     = motorized
    }
  }
}
