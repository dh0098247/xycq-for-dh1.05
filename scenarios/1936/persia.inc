##############################
# Country definition for PER #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = PER
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  capital                = 1502

	research_mod = 1.00
	peacetime_ic_mod = 0.60

  manpower               = 500
  transports             = 50
  escorts                = 10
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 3881 3882 3883 3884 3885 3886 3887 3888 3889
                             3890 3891 3892 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 3949
                           }
  ownedprovinces         = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 3881 3882 3883 3884 3885 3886 3887 3888 3889
                             3890 3891 3892 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 3949
                           }
  controlledprovinces    = { 1495 1496 1497 1498 1499 1500 1501 1502 1503 1787 1788 1789 1825 1826 1859 3881 3882 3883 3884 3885 3886 3887 3888 3889
                             3890 3891 3892 3893 3894 3895 3896 3897 3898 3899 3900 3901 3902 3903 3904 3905 3949
                           }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050
                             5180 5660
                             1010 1100
                             7420
                           }
  diplomacy =
  { relation = { tag = AFG value = 25 }
    relation = { tag = DEN value = 50 }
    relation = { tag = ENG value = 25 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = SAU value = 100 }
    relation = { tag = SOV value = -20 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = -50 }
  }
  headofstate            = { type = 9 id = 53001 }
  headofgovernment       = { type = 9 id = 53002 }
  foreignminister        = { type = 9 id = 53003 }
  armamentminister       = { type = 9 id = 53004 }
  ministerofsecurity     = { type = 9 id = 53005 }
  ministerofintelligence = { type = 9 id = 53006 }
  chiefofstaff           = { type = 9 id = 53007 }
  chiefofarmy            = { type = 9 id = 53008 }
  chiefofnavy            = { type = 9 id = 53009 }
  chiefofair             = { type = 9 id = 53010 }

  landunit =
  { location = 1502
    name     = "波斯帝国第1军 "
    id       = { type = 16600 id = 1 }
    division =
    { id    = { type = 16600 id = 2 }
      name  = "第1步兵师 "
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 16600 id = 3 }
      name = "第1骑兵师 "
      type = cavalry
    }
  }
}
