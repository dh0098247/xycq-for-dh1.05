##############################
# Country definition for SAL #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = SAL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 80
  capital                = 759
  transports             = 5
  escorts                = 1

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 759 }
  ownedprovinces         = { 759 }
  controlledprovinces    = { 759 }
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
  headofstate            = { type = 9 id = 77001 }
  headofgovernment       = { type = 9 id = 77002 }
  foreignminister        = { type = 9 id = 77003 }
  armamentminister       = { type = 9 id = 77004 }
  ministerofsecurity     = { type = 9 id = 77005 }
  ministerofintelligence = { type = 9 id = 77006 }
  chiefofstaff           = { type = 9 id = 77007 }
  chiefofarmy            = { type = 9 id = 77008 }
  chiefofnavy            = { type = 9 id = 77009 }
  chiefofair             = { type = 9 id = 77010 }

  landunit =
  { id       = { type = 21600 id = 70 }
    name     = "萨尔瓦多第1军 "
    location = 759
    division =
    { id       = { type = 21600 id = 7000 }
      name     = "第1步兵师 "
      strength = 40
      type     = infantry
      extra    = artillery
    }
  }
}
