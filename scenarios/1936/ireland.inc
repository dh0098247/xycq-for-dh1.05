##############################
# Country definition for IRE #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = IRE
  manpower               = 110
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 30
  transports             = 30
  escorts                = 5

	research_mod = 1.00
	peacetime_ic_mod = 0.70

  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = AST value = 75 }
    relation = { tag = AUS value = 10 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BRA value = 20 }
    relation = { tag = CAN value = 75 }
    relation = { tag = ENG value = 25 }
    relation = { tag = ETH value = 100 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 25 }
    relation = { tag = GER value = 15 }
    relation = { tag = HOL value = 75 }
    relation = { tag = HUN value = 25 }
    relation = { tag = ITA value = 20 }
    relation = { tag = LUX value = 75 }
    relation = { tag = MEX value = 30 }
    relation = { tag = NZL value = 75 }
    relation = { tag = POR value = 25 }
    relation = { tag = SAF value = 80 }
    relation = { tag = SOV value = 1 }
    relation = { tag = SPR value = 50 }
    relation = { tag = USA value = 75 }
  }
   SpyInfo                = {  country = "IRE" NumberOfSpies = 1  } 
  nationalprovinces      = { 24 25 26 27 28 29 30 3017 3018 }
  ownedprovinces         = { 24 25 26 27 30 3017 3018 }
  controlledprovinces    = { 24 25 26 27 30 3017 3018 }
  # Western Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670
                             5310
                             1010 1100
                             2280 2290 2420 2540
                             6010 6020 6050
                             8010 8020 8150 8390 8030
                             7420 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    freedom           = 8
    free_market       = 7
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 25001 }
  headofgovernment       = { type = 9 id = 25002 }
  foreignminister        = { type = 9 id = 25003 }
  armamentminister       = { type = 9 id = 25004 }
  ministerofsecurity     = { type = 9 id = 25005 }
  ministerofintelligence = { type = 9 id = 25006 }
  chiefofstaff           = { type = 9 id = 25007 }
  chiefofarmy            = { type = 9 id = 25008 }
  chiefofnavy            = { type = 9 id = 25009 }
  chiefofair             = { type = 9 id = 25010 }

  # Firepower
  landunit =
  { id       = { type = 21500 id = 1 }
    name     = "爱尔兰来福枪团 "
    location = 30
    division =
    { id           = { type = 21500 id = 2 }
      name         = "第1/2/3/4/5来福枪队 "
      strength     = 50
      max_strength = 50
      type         = infantry
    }
  }
  navalunit =
  { id       = { type = 21500 id = 5 }
    name     = "爱尔兰共和国海军第I舰队 "
    location = 30
    base     = 30
    # division = {
    # id = { type = 21500 id = 6 }
    # name = "第1驱逐舰编队 "
    # type = destroyer
    # model = 0
    # }
    division =
    { id    = { type = 21500 id = 7 }
      name  = "第1运输舰编队 "
      type  = transport
      model = 0
    }
  }
}
