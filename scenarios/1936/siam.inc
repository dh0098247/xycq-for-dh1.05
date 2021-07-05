##############################
# Country definition for SIA #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = SIA
  # Resource Reserves
  energy                 = 1000
  metal                  = 500
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1343

	research_mod = 1.00
	peacetime_ic_mod = 0.80

  manpower               = 550
  transports             = 40
  escorts                = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1303 1330 1331 1339 1341 1342 1343 1344 1345 1347 1348 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733
                             3734 3735 }
  ownedprovinces         = { 1303 1330 1331 1342 1343 1344 1345 1347 1348 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733 3734 3735 }
  controlledprovinces    = { 1303 1330 1331 1342 1343 1344 1345 1347 1348 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733 3734 3735 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5080
                             1010 1100
                             8010
                             7410 1900 
                           }
  diplomacy =
  { relation = { tag = ENG value = 70 }
    relation = { tag = FRA value = -100 }
    relation = { tag = JAP value = 75 }
    relation = { tag = MAN value = 75 }
  }
  headofstate            = { type = 9 id = 62001 }
  headofgovernment       = { type = 9 id = 62002 }
  foreignminister        = { type = 9 id = 62003 }
  armamentminister       = { type = 9 id = 62004 }
  ministerofsecurity     = { type = 9 id = 62005 }
  ministerofintelligence = { type = 9 id = 62006 }
  chiefofstaff           = { type = 9 id = 62007 }
  chiefofarmy            = { type = 9 id = 62008 }
  chiefofnavy            = { type = 9 id = 62009 }
  chiefofair             = { type = 9 id = 62010 }

  landunit =
  { location = 1345
    name     = "暹罗陆军第2军 "
    id       = { type = 23600 id = 1 }
    division =
    { id       = { type = 23600 id = 2 }
      name     = "第1步兵师 "
      type     = infantry
      strength = 90
    }
    division =
    { id       = { type = 23600 id = 3 }
      name     = "第2步兵师 "
      type     = infantry
      strength = 70
    }
  }
  landunit =
  { location = 1343
    name     = "暹罗皇家近卫军 "
    id       = { type = 23600 id = 4 }
    division =
    { id       = { type = 23600 id = 5 }
      name     = "第1皇家近卫师"
      type     = motorized
      strength = 90
      extra    = artillery
    }
  }
  navalunit =
  { location = 1345
    base     = 1345
    name     = "暹罗皇家海军第1舰队 "
    id       = { type = 23600 id = 6 }
    division =
    { id    = { type = 23600 id = 7 }
      name  = "阿育提亚号 "
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23600 id = 8 }
      name  = "多苏布尔号 "
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 23600 id = 10 }
      name  = "雷佛罗提号 "
      type  = destroyer
      model = 0
    }
  }
  airunit =
  { location = 1345
    base     = 1345
    name     = "暹罗皇家空军第1联队 "
    id       = { type = 23600 id = 12 }
    Division =
    { id       = { type = 23600 id = 13 }
      name     = "第1截击机大队 "
      type     = interceptor
      model    = 0
      strength = 50
    }
    Division =
    { id       = { type = 23600 id = 14 }
      name     = "第1战术轰炸机大队 "
      type     = tactical_bomber
      model    = 0
      strength = 44
    }
  }
}
