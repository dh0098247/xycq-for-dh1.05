##############################
# Country definition for ECU #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 815

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 30
  transports             = 12
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 4039 814 815 817 818 }
  ownedprovinces         = { 4039 814 815 817 818 }
  controlledprovinces    = { 4039 814 815 817 818 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180 5660
                             5310
                             1010 1100
                             6050 6010
                             8010 8020
                             7430
                           }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  headofstate            = { type = 9 id = 40001 }
  headofgovernment       = { type = 9 id = 40002 }
  foreignminister        = { type = 9 id = 40003 }
  armamentminister       = { type = 9 id = 40004 }
  ministerofsecurity     = { type = 9 id = 40005 }
  ministerofintelligence = { type = 9 id = 40006 }
  chiefofstaff           = { type = 9 id = 40007 }
  chiefofarmy            = { type = 9 id = 40008 }
  chiefofnavy            = { type = 9 id = 40009 }
  chiefofair             = { type = 9 id = 40010 }

  landunit =
  { id       = { type = 29000 id = 50 }
    name     = "厄瓜多尔第1军 "
    location = 815
    division =
    { id       = { type = 29000 id = 5000 }
      name     = "第1步兵旅 "
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
}
