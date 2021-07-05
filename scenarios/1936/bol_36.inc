##############################
# Country definition for BOL #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = BOL
  manpower               = 50
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 832

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 7
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 5
  }
  nationalprovinces      = { 4064 4071 4072 822 827 828 832 833 836 837 838 839 }
  ownedprovinces         = { 4064 4071 4072 827 828 832 833 836 838 }
  controlledprovinces    = { 4064 4071 4072 827 828 832 833 836 838 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180 5660
                             5310
                             1010 1100
                             6010 6020 6050 7430 1900 
                           }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
  headofstate            = { type = 9 id = 43001 }
  headofgovernment       = { type = 9 id = 43002 }
  foreignminister        = { type = 9 id = 43003 }
  armamentminister       = { type = 9 id = 43004 }
  ministerofsecurity     = { type = 9 id = 43005 }
  ministerofintelligence = { type = 9 id = 43006 }
  chiefofstaff           = { type = 9 id = 43007 }
  chiefofarmy            = { type = 9 id = 43008 }
  chiefofnavy            = { type = 9 id = 43009 }
  chiefofair             = { type = 9 id = 43010 }
	
  # Human Wave
  landunit =
  { id       = { type = 17000 id = 40 }
    name     = "玻利维亚第1军 "
    location = 832
    division =
    { id       = { type = 17000 id = 4000 }
      name     = "第1波利瓦尔师 "
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 17000 id = 4001 }
      name     = "波利维亚第1旅 "
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4002 }
      name     = "玻利维亚第2旅 "
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4003 }
      name     = "第1阴谋家查克罗旅 "
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
}
