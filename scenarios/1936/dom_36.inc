##############################
# Country definition for DOM #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = DOM
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 30
  capital                = 894
  transports             = 10
  escorts                = 1

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 8
    freedom           = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 668 893 894 }
  ownedprovinces         = { 668 893 894 }
  controlledprovinces    = { 668 893 894 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180
                             5310
                             1010
                             7430
                           }
  diplomacy =
  { relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 49001 }
  headofgovernment       = { type = 9 id = 49002 }
  foreignminister        = { type = 9 id = 49003 }
  armamentminister       = { type = 9 id = 49004 }
  ministerofsecurity     = { type = 9 id = 49005 }
  ministerofintelligence = { type = 9 id = 49006 }
  chiefofstaff           = { type = 9 id = 49007 }
  chiefofarmy            = { type = 9 id = 49008 }
  chiefofnavy            = { type = 9 id = 49009 }
  chiefofair             = { type = 9 id = 49010 }

  landunit =
  { id       = { type = 28000 id = 75 }
    name     = "多米尼加共和国第1军 "
    location = 894
    division =
    { id       = { type = 28000 id = 7500 }
      name     = "第1步兵旅 "
      strength = 50
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
}
