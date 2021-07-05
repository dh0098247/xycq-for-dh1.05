##############################
# Country definition for URU #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = URU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 849

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 102
  transports             = 30
  escorts                = 4
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 5
    free_market       = 5
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 1
  }
  nationalprovinces      = { 849 }
  ownedprovinces         = { 849 }
  controlledprovinces    = { 849 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180 5660
                             5310 5050 5080 5170 5190 5800
                             1010 1100
                             6050 6010
                             7420
                           }
  diplomacy =
  { relation = { tag = ARG value = -50 }
    relation = { tag = BOL value = 10 }
    relation = { tag = BRA value = 125 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = PAR value = 20 }
    relation = { tag = PRU value = 25 }
    relation = { tag = SOV value = -100 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 41001 }
  headofgovernment       = { type = 9 id = 41002 }
  foreignminister        = { type = 9 id = 41003 }
  armamentminister       = { type = 9 id = 41004 }
  ministerofsecurity     = { type = 9 id = 41005 }
  ministerofintelligence = { type = 9 id = 41006 }
  chiefofstaff           = { type = 9 id = 41007 }
  chiefofarmy            = { type = 9 id = 41008 }
  chiefofnavy            = { type = 9 id = 41009 }
  chiefofair             = { type = 9 id = 41010 }
	
  landunit =
  { id       = { type = 13700 id = 40 }
    name     = "乌拉圭第1军 "
    location = 849
    division =
    { id       = { type = 13700 id = 4000 }
      name     = "第4'克劳德阁下'旅团 "
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
}
