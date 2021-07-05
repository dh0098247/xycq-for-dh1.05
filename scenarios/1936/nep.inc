##############################
# Country definition for NEP #
##############################

country =
{ tag                    = NEP
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  capital                = 1473

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 6
    free_market       = 5
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 2
  }
  nationalprovinces      = { 1473 3864 3865 }
  ownedprovinces         = { 1473 3864 3865 }
  controlledprovinces    = { 1473 3864 3865 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 7430 }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 75001 }
  headofgovernment       = { type = 9 id = 75002 }
  foreignminister        = { type = 9 id = 75003 }
  armamentminister       = { type = 9 id = 75004 }
  ministerofsecurity     = { type = 9 id = 75005 }
  ministerofintelligence = { type = 9 id = 75006 }
  chiefofstaff           = { type = 9 id = 75007 }
  chiefofarmy            = { type = 9 id = 75008 }
  chiefofnavy            = { type = 9 id = 75009 }
  chiefofair             = { type = 9 id = 75010 }

  landunit =
  { location = 1473
    name     = "尼泊尔皇家第1军 "
    id       = { type = 31500 id = 1 }
    division =
    { id   = { type = 31500 id = 2 }
      name = "皇家第1步兵师 "
      type = infantry
    }
    division =
    { id   = { type = 31500 id = 3 }
      name = "皇家第2步兵师 "
      type = infantry
    }
  }
}
