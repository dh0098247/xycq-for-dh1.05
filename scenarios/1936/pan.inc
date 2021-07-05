##############################
# Country definition for PAN #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = PAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 888

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 30
  transports             = 12
  escorts                = 3
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 4
  }
  nationalprovinces      = { 4023 4024 4025 888 889 }
  ownedprovinces         = { 4023 4024 4025 888 }
  controlledprovinces    = { 4023 4024 4025 888 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180
                             5310
                             1010
                             8010 8020
                             7430
                           }
  diplomacy =
  { relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
  headofstate            = { type = 9 id = 95001 }
  headofgovernment       = { type = 9 id = 95002 }
  foreignminister        = { type = 9 id = 95003 }
  armamentminister       = { type = 9 id = 95004 }
  ministerofsecurity     = { type = 9 id = 95005 }
  ministerofintelligence = { type = 9 id = 95006 }
  chiefofstaff           = { type = 9 id = 95007 }
  chiefofarmy            = { type = 9 id = 95008 }
  chiefofnavy            = { type = 9 id = 95009 }
  chiefofair             = { type = 9 id = 95010 }

  # Improved Construction Engineering
  landunit =
  { id       = { type = 14600 id = 50 }
    name     = "巴拿马第1军 "
    location = 888
    division =
    { id       = { type = 14600 id = 5000 }
      name     = "第1步兵师 "
      strength = 60
      type     = infantry
    }
  }
}
