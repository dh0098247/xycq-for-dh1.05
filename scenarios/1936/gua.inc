##############################
# Country definition for GUA #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = GUA
  manpower               = 7
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 757
  transports             = 16
  escorts                = 2

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
  nationalprovinces      = { 664 665 757 759 }
  ownedprovinces         = { 664 665 757 }
  controlledprovinces    = { 664 665 757 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180
                             5310
                             1010
                             8010
                             7430
                           }
  # San Salvador
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }
  headofstate            = { type = 9 id = 46001 }
  headofgovernment       = { type = 9 id = 46002 }
  foreignminister        = { type = 9 id = 46003 }
  armamentminister       = { type = 9 id = 46004 }
  ministerofsecurity     = { type = 9 id = 46005 }
  ministerofintelligence = { type = 9 id = 46006 }
  chiefofstaff           = { type = 9 id = 46007 }
  chiefofarmy            = { type = 9 id = 46008 }
  chiefofnavy            = { type = 9 id = 46009 }
  chiefofair             = { type = 9 id = 46010 }

  landunit =
  { id       = { type = 16500 id = 65 }
    name     = "危地马拉第I军 "
    location = 757
    division =
    { id       = { type = 16500 id = 6500 }
      name     = "第1'阿道夫·V·霍尔'步兵旅 "
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
}
