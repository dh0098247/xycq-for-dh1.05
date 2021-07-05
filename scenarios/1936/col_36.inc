##############################
# Country definition for COL #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = COL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 50
  capital                = 813
  transports             = 10
  escorts                = 2

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 4023 4024 4025 4026 4027 4028 4029 4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 4044 802  803  804  810  811  812 
                             813  819  867  868  869  870  888  889  890 
                           }
  ownedprovinces         = { 4026 4027 4028 4029 4030 4031 4037 803 812 813 819 868 890 }
  controlledprovinces    = { 4026 4027 4028 4029 4030 4031 4037 803 812 813 819 868 890 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5180 5660
                             5310
                             1010 1100
                             6010 6020 6050 7430
                           }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  headofstate            = { type = 9 id = 37001 }
  headofgovernment       = { type = 9 id = 37002 }
  foreignminister        = { type = 9 id = 37003 }
  armamentminister       = { type = 9 id = 37004 }
  ministerofsecurity     = { type = 9 id = 37005 }
  ministerofintelligence = { type = 9 id = 37006 }
  chiefofstaff           = { type = 9 id = 37007 }
  chiefofarmy            = { type = 9 id = 37008 }
  chiefofnavy            = { type = 9 id = 37009 }
  chiefofair             = { type = 9 id = 37010 }

  landunit =
  { id       = { type = 23000 id = 40 }
    name     = "哥伦比亚第I军 "
    location = 813
    division =
    { id       = { type = 23000 id = 4000 }
      name     = "第1步兵师 "
      strength = 80
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 23000 id = 4001 }
      name     = "第1'莫特'骑兵旅 "
      strength = 80
      type     = cavalry
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 23000 id = 4002 }
    name     = "哥伦比亚第I舰队 "
    location = 803
    base     = 803
    division =
    { id    = { type = 23000 id = 4003 }
      name  = "第1驱逐舰编队 "
      type  = destroyer
      model = 0
    }
  }
}
