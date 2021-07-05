##############################
# Country definition for VEN #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = VEN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 811

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 50
  transports             = 30
  escorts                = 10
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 1
    freedom           = 5
    free_market       = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 4032 4033 4034 4035 4036 802 804 810 811 867 869 870 871 873 }
  ownedprovinces         = { 4032 4033 4034 4035 802 804 810 811 867 869 870 }
  controlledprovinces    = { 4032 4033 4034 4035 802 804 810 811 867 869 870 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 5050 5080 5170 5190 5800 5180 5660 5310
                             1010 1100
                             2280 2290 2420
                             6050 6010
                             8010 8020 8390
                             7430
                           }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 38001 }
  headofgovernment       = { type = 9 id = 38002 }
  foreignminister        = { type = 9 id = 38003 }
  armamentminister       = { type = 9 id = 38004 }
  ministerofsecurity     = { type = 9 id = 38005 }
  ministerofintelligence = { type = 9 id = 38006 }
  chiefofstaff           = { type = 9 id = 38007 }
  chiefofarmy            = { type = 9 id = 38008 }
  chiefofnavy            = { type = 9 id = 38009 }
  chiefofair             = { type = 9 id = 38010 }
	
  # Firepower
  # Rather wild estimations
  landunit =
  { id       = { type = 15800 id = 45 }
    name     = "委内瑞拉第1军 "
    location = 811
    division =
    { id       = { type = 15800 id = 4500 }
      name     = "第1'爱德罗布兰克'主力师 "
      extra    = anti_tank
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 15800 id = 4501 }
      name     = "第1近卫师 "
      strength = 100
      type     = militia
    }
    division =
    { id       = { type = 15800 id = 4502 }
      name     = "海岸巡逻队 "
      strength = 100
      type     = cavalry
      extra    = artillery
    }
  }

landunit = {  location = 811  id = { type = 15800 id = 5000 } dig_in = 20 name = "首都要塞基地 "
division = {
                locked = yes
		id = { type = 15800 id = 5001 }
		name = "马拉开波要塞群 "
                experience = 100
		type = garrison
		model = 3
		extra = b_09
		brigade_model = 3
		strength = 100
		}
	}

landunit = {  location = 804  id = { type = 15800 id = 5002 } dig_in = 20 name = "马拉开波基地 "
division = {
		locked = yes
	        id = { type = 15800 id = 5003 }
		name = "马来开波指挥部 "
		type = hq
		model = 1
		extra = engineer
                brigade_model = 2	
		strength  = 100
   		experience = 100
	}
}
}
