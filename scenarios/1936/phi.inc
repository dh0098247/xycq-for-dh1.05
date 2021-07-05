##############################
# Country definition for PHI #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = PHI
  control                = USA
  puppet                 = USA
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 500
  money                  = 10
  manpower               = 200
  transports             = 50
  capital                = 1737

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 5
    professional_army = 10
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 1662 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 3739 3752 3761 3762 3763 3764 3765
                             3766 3769 3770
                           }
  ownedprovinces         = { 1662 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 3739 3752 3761 3762 3763 3764 3765
                             3766 3769 3770
                           }
  controlledprovinces    = { 1662 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 3739 3752 3761 3762 3763 3764 3765
                             3766 3769 3770
                           }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180
                             5310
                             1010
                             7430
                           }
  diplomacy =
  { relation = { tag = AST value = 40 }
    # relation = { tag = CHI value = 5 }
    relation = { tag = JAP value = 1 }
    relation = { tag = LIB value = 200 }
    relation = { tag = NZL value = 25 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 50001 }
  headofgovernment       = { type = 9 id = 50002 }
  foreignminister        = { type = 9 id = 50003 }
  armamentminister       = { type = 9 id = 50004 }
  ministerofsecurity     = { type = 9 id = 50005 }
  ministerofintelligence = { type = 9 id = 50006 }
  chiefofstaff           = { type = 9 id = 50007 }
  chiefofarmy            = { type = 9 id = 50008 }
  chiefofnavy            = { type = 9 id = 50009 }
  chiefofair             = { type = 9 id = 50010 }
	
  landunit =
  { id       = { type = 11804 id = 1 }
    location = 1737
    name     = "马尼拉卫戍部队 "
    division =
    { id       = { type = 11804 id = 2 }
      strength = 30
      name     = "菲律宾警卫队 "
      type     = militia
    }
  }
}
