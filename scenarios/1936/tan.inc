##############################
# Country definition for TAN #
##############################

country =
{ tag                    = TAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1418

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1418 2952 2953 }
  ownedprovinces         = { 1418 2952 2953 }
  controlledprovinces    = { 1418 2952 2953 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = { 1010 1100 7430 }
  blueprints             = { }
  diplomacy =
  { relation = { tag = MON value = 200 }
    relation = { tag = SIK value = 125 }
    relation = { tag = SOV value = 200 }
    relation = { tag = TAN value = 50 }
  }
  headofstate            = { type = 9 id = 71001 }
  headofgovernment       = { type = 9 id = 71002 }
  foreignminister        = { type = 9 id = 71003 }
  armamentminister       = { type = 9 id = 71004 }
  ministerofsecurity     = { type = 9 id = 71005 }
  ministerofintelligence = { type = 9 id = 71006 }
  chiefofstaff           = { type = 9 id = 71007 }
  chiefofarmy            = { type = 9 id = 71008 }
  chiefofnavy            = { type = 9 id = 71009 }
  chiefofair             = { type = 9 id = 71010 }

  landunit =
  { location = 1418
    id       = { type = 31600 id = 1 }
    name     = "唐努图瓦第1军 "
    division =
    { id       = { type = 31600 id = 2 }
      name     = "第1步兵师 "
      type     = infantry
      strength = 100
    }
  }
}
