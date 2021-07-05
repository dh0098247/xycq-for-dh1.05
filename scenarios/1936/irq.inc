##############################
# Country definition for IRQ #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = IRQ
  puppet                 = ENG
  control                = ENG
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 1000
  supplies               = 500
  manpower               = 150
  money                  = 10
  capital                = 1866
  transports             = 25
  escorts                = 5

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 4
    free_market       = 6
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  nationalprovinces      = { 1790 1791 1806 1823 1824 1825 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }
  ownedprovinces         = { 1790 1791 1806 1823 1824 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }
  controlledprovinces    = { 1790 1791 1806 1823 1824 1860 1864 1865 1866 3917 3918 3919 3920 3921 3922 3923 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050
                             1010 1100
                             7420
                           }
  diplomacy =
  { relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }
  headofstate            = { type = 9 id = 91001 }
  headofgovernment       = { type = 9 id = 91002 }
  foreignminister        = { type = 9 id = 91003 }
  armamentminister       = { type = 9 id = 91004 }
  ministerofsecurity     = { type = 9 id = 91005 }
  ministerofintelligence = { type = 9 id = 91006 }
  chiefofstaff           = { type = 9 id = 91007 }
  chiefofarmy            = { type = 9 id = 91008 }
  chiefofnavy            = { type = 9 id = 91009 }
  chiefofair             = { type = 9 id = 91010 }

  landunit =
  { id       = { type = 22500 id = 3 }
    name     = "伊拉克皇家近卫军 "
    location = 1866
    division =
    { id       = { type = 22500 id = 4 }
      name     = "第1步兵师 "
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 5 }
      name     = "第2步兵师 "
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 6 }
      name     = "第3步兵师 "
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 22500 id = 7 }
      name     = "第4步兵师 "
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 22500 id = 8 }
      name     = "第1摩步师 "
      strength = 30
      type     = motorized
    }
  }
  airunit =
  { id       = { type = 22500 id = 1 }
    name     = "伊拉克皇家空军第1联队 "
    location = 1866
    base     = 1866
    division =
    { id       = { type = 22500 id = 2 }
      name     = "第1截击机大队 "
      strength = 30
      type     = interceptor
      model    = 0
    }
  }
}
