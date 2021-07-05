##############################
# Country definition for HON #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = HON
  manpower               = 5
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 760
  transports             = 20
  escorts                = 3

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 6
    freedom           = 4
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 760 805 806 807 }
  ownedprovinces         = { 760 805 806 807 }
  controlledprovinces    = { 760 805 806 807 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180
                             5310
                             1010
                             7430
                             8010 8020
                           }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 79001 }
  headofgovernment       = { type = 9 id = 79002 }
  foreignminister        = { type = 9 id = 79003 }
  armamentminister       = { type = 9 id = 79004 }
  ministerofsecurity     = { type = 9 id = 79005 }
  ministerofintelligence = { type = 9 id = 79006 }
  chiefofstaff           = { type = 9 id = 79007 }
  chiefofarmy            = { type = 9 id = 79008 }
  chiefofnavy            = { type = 9 id = 79009 }
  chiefofair             = { type = 9 id = 79010 }

  landunit =
  { id       = { type = 19500 id = 55 }
    name     = "洪都拉斯陆军第VII军 "
    location = 760
    division =
    { id       = { type = 19500 id = 5500 }
      name     = "第1'弗兰卡马那哲'步兵旅 "
      strength = 60
      type     = infantry
      extra    = artillery
    }
  }
}
