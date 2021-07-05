##############################
# Country definition for NIC #
##############################

#####################
# Country main data #
#####################

country =
{ tag                    = NIC
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 539

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 5
  transports             = 5
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 4
    free_market       = 7
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 8
  }
  nationalprovinces      = { 4019 4020 4021 4022 539 }
  ownedprovinces         = { 4019 4020 539 }
  controlledprovinces    = { 4019 4020 539 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180
                             5310
                             1010
                             8010 8020
                             7430
                           }
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 48001 }
  headofgovernment       = { type = 9 id = 48002 }
  foreignminister        = { type = 9 id = 48003 }
  armamentminister       = { type = 9 id = 48004 }
  ministerofsecurity     = { type = 9 id = 48005 }
  ministerofintelligence = { type = 9 id = 48006 }
  chiefofstaff           = { type = 9 id = 48007 }
  chiefofarmy            = { type = 9 id = 48008 }
  chiefofnavy            = { type = 9 id = 48009 }
  chiefofair             = { type = 9 id = 48010 }

  landunit =
  { id       = { type = 11600 id = 45 }
    name     = "尼加拉瓜第1军 "
    location = 539
    division =
    { id       = { type = 11600 id = 4500 }
      name     = "总统警卫部队 "
      strength = 60
      type     = infantry
      extra    = artillery
    }
  }
}
