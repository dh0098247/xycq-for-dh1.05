##############################
# Country definition for LIB #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  puppet                 = USA
  control                = USA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 992

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 50
  transports             = 10
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 10
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 7430 }
  diplomacy =
  { relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 69001 }
  headofgovernment       = { type = 9 id = 69002 }
  foreignminister        = { type = 9 id = 69003 }
  armamentminister       = { type = 9 id = 69004 }
  ministerofsecurity     = { type = 9 id = 69005 }
  ministerofintelligence = { type = 9 id = 69006 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69008 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }

  landunit =
  { location = 992
    id       = { type = 25500 id = 1 }
    name     = "利比里亚第1军 "
    division =
    { id       = { type = 25000 id = 2 }
      name     = "共和国警卫第1师 "
      type     = infantry
      extra    = artillery
      strength = 100
    }
    division =
    { id       = { type = 25500 id = 3 }
      name     = "共和国警卫第2师 "
      type     = infantry
      strength = 100
    }
  }
}
