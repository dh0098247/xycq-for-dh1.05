##############################
# Country definition for MON #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = MON
  puppet                 = SOV
  control                = SOV
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  money                  = 10
  manpower               = 150
  capital                = 1404

	research_mod = 1.00
	peacetime_ic_mod = 1.00

  diplomacy =
  { relation = { tag = CHC value = 25 }
    relation = { tag = SOV value = 150 }
    relation = { tag = TAN value = 200 }
  }
   SpyInfo                = {  country = "MEN" NumberOfSpies = 1  } 
  nationalprovinces      = { 1385 1399 1404 1419 1420 1434 1436 1437 1438 2940 2948 2949 2950 2951 2954 }
  ownedprovinces         = { 1385 1399 1404 1419 1420 1434 1436 1437 1438 2940 2948 2949 2950 2951 2954 }
  controlledprovinces    = { 1385 1399 1404 1419 1420 1434 1436 1437 1438 2940 2948 2949 2950 2951 2954 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = { 1010 1100 1110 7430 1900 }
  blueprints             = { }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 }
  headofgovernment       = { type = 9 id = 94002 }
  foreignminister        = { type = 9 id = 94003 }
  armamentminister       = { type = 9 id = 94004 }
  ministerofsecurity     = { type = 9 id = 94005 }
  ministerofintelligence = { type = 9 id = 94006 }
  chiefofstaff           = { type = 9 id = 94007 }
  chiefofarmy            = { type = 9 id = 94008 }
  chiefofnavy            = { type = 9 id = 94009 }
  chiefofair             = { type = 9 id = 94010 }

  landunit =
  { location = 1404
    name     = "�ɹŹ��͹���1�� "
    id       = { type = 30500 id = 1 }
    division =
    { id    = { type = 30500 id = 2 }
      name  = "�ɹŵ�1���ʦ "
      type  = cavalry
      extra = artillery
    }
    division =
    { id   = { type = 30500 id = 3 }
      name = "�ɹŵ�2���ʦ "
      type = cavalry
      extra = artillery
    }
    division =
    { id   = { type = 30500 id = 4 }
      name = "�ɹŵ�3���ʦ "
      type = cavalry
      extra = artillery
    }
    division =
    { id   = { type = 30500 id = 5 }
      name = "�ɹŵ�4���ʦ "
      type = cavalry
      extra = artillery
    }
  }
landdivision = {
	dormant = yes locked = yes
	        	id = { type = 30500 id = 99 }
			name = "�M�ɹŵ�1��е�����ʦ "
			type = cavalry
			model = 29
			extra = sp_rct_artillery
			brigade_model = 1
		}
landdivision = {
	dormant = yes locked = yes
	        	id = { type = 30500 id = 98 }
			name = "�M�ɹŵ�2��е�����ʦ "
			type = cavalry
			model = 29
			extra = sp_rct_artillery
			brigade_model = 1
		}
landdivision = {
	dormant = yes locked = yes
	        	id = { type = 30500 id = 97 }
			name = "�M�ɹŵ�3��е�����ʦ "
			type = cavalry
			model = 29
			extra = sp_rct_artillery
			brigade_model = 1
		}
landdivision = {
	dormant = yes locked = yes
	        	id = { type = 30500 id = 96 }
			name = "�M�ɹŵ�4��е�����ʦ "
			type = cavalry
			model = 29
			extra = sp_rct_artillery
			brigade_model = 1
		}
landdivision = {
	dormant = yes locked = yes
	        	id = { type = 30500 id = 95 }
			name = "�M�ɹŵ�5��е�����ʦ "
			type = cavalry
			model = 29
			extra = sp_rct_artillery
			brigade_model = 1
		}
landdivision = {
	dormant = yes locked = yes
	        	id = { type = 30500 id = 94 }
			name = "�M�ɹŵ�6��е�����ʦ "
			type = cavalry
			model = 29
			extra = sp_rct_artillery
			brigade_model = 1
		}

landdivision = {
	dormant = yes locked = yes
	        	id = { type = 30500 id = 93 }
			name = "�M�ɹŵ�7��е�����ʦ "
			type = cavalry
			model = 29
			extra = sp_rct_artillery
			brigade_model = 1
		}
}
