##############################
# Country definition for CUB #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = CUB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 15
  capital                = 654
  transports             = 24
  escorts                = 3

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    free_market       = 8
    freedom           = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 654 655 656 657 666 }
  ownedprovinces         = { 654 655 656 666 }
  controlledprovinces    = { 654 655 656 666 }
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
  { relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 33001 }
  headofgovernment       = { type = 9 id = 33002 }
  foreignminister        = { type = 9 id = 33003 }
  armamentminister       = { type = 9 id = 33004 }
  ministerofsecurity     = { type = 9 id = 33005 }
  ministerofintelligence = { type = 9 id = 33006 }
  chiefofstaff           = { type = 9 id = 33007 }
  chiefofarmy            = { type = 9 id = 33008 }
  chiefofnavy            = { type = 9 id = 33009 }
  chiefofair             = { type = 9 id = 33010 }
  # Firepower
  landunit =
  { id       = { type = 26000 id = 40 }
    name     = "古巴第1军 "
    location = 654
    division =
    { id       = { type = 26000 id = 4000 }
      name     = "第1步兵师 "
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 4001 }
      name     = "第1'弗罗德塔'骑兵师 "
      strength = 100
      type     = cavalry
      model    = 0
      extra    = artillery
    }
  }
}
