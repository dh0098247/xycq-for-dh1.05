##############################
# Country definition for MEX #
#############################
#####################
# Country main data #
#####################

country =
{ tag                    = MEX
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 752

	research_mod = 1.00
	tc_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 250
  transports             = 30
  escorts                = 5
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 6
    free_market       = 6
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 3
  }
  nationalprovinces      = { 3971 4013 4014 4015 4016 4017 4018 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }
  ownedprovinces         = { 3971 4013 4014 4015 4016 4017 4018 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }
  controlledprovinces    = { 3971 4013 4014 4015 4016 4017 4018 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }
  # Semi-Major Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080 5170 5190
                             5180 5660
                             5310
                             1010 1100
                             2280 2290 2420
                             6050 6010
                             8010 8020 
                             7420
                           }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 30 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 36001 }
  headofgovernment       = { type = 9 id = 36002 }
  foreignminister        = { type = 9 id = 36003 }
  armamentminister       = { type = 9 id = 36004 }
  ministerofsecurity     = { type = 9 id = 36005 }
  ministerofintelligence = { type = 9 id = 36006 }
  chiefofstaff           = { type = 9 id = 36007 }
  chiefofarmy            = { type = 9 id = 36008 }
  chiefofnavy            = { type = 9 id = 36009 }
  chiefofair             = { type = 9 id = 36010 }

  # Firepower
  landunit =
  { id       = { type = 29500 id = 1 }
    name     = "墨西哥第1军 "
    location = 752
    division =
    { id       = { type = 29500 id = 2 }
      name     = "总统警卫队 "
      strength = 100
      type     = motorized
      model    = 1 # Special trained w. foreign eq.
    }
    division =
    { id       = { type = 29500 id = 3 }
      name     = "第1步兵师 "
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 29500 id = 4 }
      name     = "第2步兵师 "
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 29500 id = 5 }
      name     = "第3步兵师 "
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 29500 id = 6 }
    name     = "墨西哥骑兵军 "
    location = 742
    division =
    { id       = { type = 29500 id = 7 }
      name     = "第1骑兵师 "
      strength = 100
      type     = cavalry
    }
    division =
    { id       = { type = 29500 id = 8 }
      name     = "第2骑兵师 "
      strength = 100
      type     = cavalry
    }
  }
  # navalunit = {
  # id = { type = 29500 id = 9 }
  # name = "墨西哥第1舰队 "
  # location = 754
  # base = 754
  # division = {
  # id = { type = 29500 id = 10 }
  # name = "第1驱逐舰编队 "
  # type = destroyer
  # model = 0
  # }
  # }
  airunit =
  { id       = { type = 29500 id = 11 }
    name     = "墨西哥第1空军联队 "
    location = 754
    base     = 754
    division =
    { id       = { type = 29500 id = 12 }
      name     = "第1截击机大队 "
      type     = interceptor
      model    = 0
      strength = 50
    }
  }
}
