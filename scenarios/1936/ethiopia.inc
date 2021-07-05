##############################
# Country definition for ETH #
##############################

country =
{ tag                    = ETH
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1046

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 120
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 7
    freedom           = 3
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 2
  }
  nationalprovinces      = { 1033 1038 1039 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }
  ownedprovinces         = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }
  controlledprovinces    = { 1042 1043 1044 1045 1046 1047 1048 1049 1050 1051 1052 1053 1054 3349 3350 3351 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = { 1010 1100 7420
                           }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = IRE value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
  }
  headofstate            = { type = 9 id = 65001 }
  headofgovernment       = { type = 9 id = 65002 }
  foreignminister        = { type = 9 id = 65003 }
  armamentminister       = { type = 9 id = 65004 }
  ministerofsecurity     = { type = 9 id = 65005 }
  ministerofintelligence = { type = 9 id = 65006 }
  chiefofstaff           = { type = 9 id = 65007 }
  chiefofarmy            = { type = 9 id = 65008 }
  chiefofnavy            = { type = 9 id = 65009 }
  chiefofair             = { type = 9 id = 65010 }

  landunit =
  { id       = { type = 31000 id = 1 }
    location = 1046
    name     = "埃塞俄比亚皇家近卫军 "
    division =
    { id       = { type = 31000 id = 2 }
      name     = "皇家近卫军 "
      type     = infantry
      strength = 30
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 3 }
      name     = "第11民兵师 "
      type     = militia
      strength = 70
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 4 }
      name     = "第12民兵师 "
      type     = militia
      strength = 70
      model    = 0
    }
  }
  landunit =
  { id       = { type = 31000 id = 5 }
    location = 1052
    name     = "埃塞俄比亚第1军 "
    division =
    { id       = { type = 31000 id = 6 }
      name     = "第1民兵师 "
      type     = militia
      strength = 60
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 7 }
      name     = "第2民兵师 "
      type     = militia
      strength = 60
      model    = 0
    }
  }
  landunit =
  { id       = { type = 31000 id = 8 }
    location = 1043
    name     = "埃塞俄比亚第2军 "
    division =
    { id       = { type = 31000 id = 9 }
      name     = "第3民兵师 "
      type     = militia
      strength = 60
      model    = 0
    }
    division =
    { id       = { type = 31000 id = 10 }
      name     = "第4民兵师 "
      type     = militia
      strength = 60
      model    = 0
    }
  }
}
