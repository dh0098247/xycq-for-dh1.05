##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
  manpower               = 1
  control                = ENG
  puppet                 = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  capital                = 1455

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 8
    freedom           = 9
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 1
  }
  nationalprovinces      = { 1455 2675 }
  ownedprovinces         = { 1455 }
  controlledprovinces    = { 1455 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 7430 }
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }
  headofstate            = { type = 9 id = 74001 }
  headofgovernment       = { type = 9 id = 74002 }
  foreignminister        = { type = 9 id = 74003 }
  armamentminister       = { type = 9 id = 74004 }
  ministerofsecurity     = { type = 9 id = 74005 }
  ministerofintelligence = { type = 9 id = 74006 }
  chiefofstaff           = { type = 9 id = 74007 }
  chiefofarmy            = { type = 9 id = 74008 }
  chiefofnavy            = { type = 9 id = 74009 }
  chiefofair             = { type = 9 id = 74010 }
	
  landunit =
  { location = 1455
    id       = { type = 16000 id = 1 }
    name     = "不丹皇家陆军第1军 "
    division =
    { id       = { type = 16000 id = 2 }
      name     = "皇家警卫师 "
      type     = infantry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 16000 id = 3 }
      name     = "第2近卫师 "
      type     = infantry
      model    = 0
      strength = 100
    }
  }
}
