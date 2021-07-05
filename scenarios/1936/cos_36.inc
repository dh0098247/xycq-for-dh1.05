##############################
# Country definition for COS #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = COS
  manpower               = 5
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 540
  transports             = 50
  escorts                = 6

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 4021 4022 540 }
  ownedprovinces         = { 4021 4022 540 }
  controlledprovinces    = { 4021 4022 540 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180 5660
                             5310
                             1010 1100
                             6010 6020 6050 7430
                           }
  diplomacy =
  { relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 47001 }
  headofgovernment       = { type = 9 id = 47002 }
  foreignminister        = { type = 9 id = 47003 }
  armamentminister       = { type = 9 id = 47004 }
  ministerofsecurity     = { type = 9 id = 47005 }
  ministerofintelligence = { type = 9 id = 47006 }
  chiefofstaff           = { type = 9 id = 47007 }
  chiefofarmy            = { type = 9 id = 47008 }
  chiefofnavy            = { type = 9 id = 47009 }
  chiefofair             = { type = 9 id = 47010 }
  # Americas Group 1#
  landunit =
  { id       = { type = 25000 id = 60 }
    name     = "哥斯达黎加第1军 "
    location = 540
    division =
    { id       = { type = 25000 id = 6000 }
      name     = "第1步兵旅 "
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
  }
}
