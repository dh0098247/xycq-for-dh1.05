##############################
# Country definition for PAR #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = PAR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 837

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 105
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 8
  }
  nationalprovinces      = { 4058 4059 4060 4061 4062 4063 4067 837 846 }
  ownedprovinces         = { 4058 4059 837 846 }
  controlledprovinces    = { 4058 4059 837 846 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180 5660
                             5310
                             1010 1100
                             6010 6020 6030 6040 6050
                             7420
                           }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 42001 }
  headofgovernment       = { type = 9 id = 42002 }
  foreignminister        = { type = 9 id = 42003 }
  armamentminister       = { type = 9 id = 42004 }
  ministerofsecurity     = { type = 9 id = 42005 }
  ministerofintelligence = { type = 9 id = 42006 }
  chiefofstaff           = { type = 9 id = 42007 }
  chiefofarmy            = { type = 9 id = 42008 }
  chiefofnavy            = { type = 9 id = 42009 }
  chiefofair             = { type = 9 id = 42010 }

  landunit =
  { id       = { type = 15600 id = 60 }
    name     = "巴拉圭第1军 "
    location = 837
    division =
    { id       = { type = 15600 id = 6000 }
      name     = "第1步兵师 "
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 15600 id = 6001 }
      name     = "第1民兵师 "
      strength = 100
      type     = militia
    }
  }
}
