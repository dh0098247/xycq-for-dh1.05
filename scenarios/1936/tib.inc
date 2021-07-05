##############################
# Country definition for TIB #
##############################

country =
{ tag                    = TIB
  regular_id             = CHI
  regular_id             = CHC	
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 2500
  money                  = 100
  capital                = 1453

	research_mod = 1.00
	peacetime_ic_mod = 0.50

  manpower               = 20
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 1
  }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # Basic Armoured Car
  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 2964 2966 2967 2968 2969 2970 2971
 			1442 1443 1444 2955 2956 2958 2959 2960 2961 2963 #Amdo
			2972 2973 1282 #Eastern Kham (optional, half-national: Ya'an 1281)
			1877 1878 1454 1284 1455 2675 1473 3864 3865 #South Tibet (optional, half-national: Dimapur 1284)
                        3842 3843 3844 3846 2962 #Kashmir
                           }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 2964 2966 2967 2968 2969 2970 2971 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 2964 2966 2967 2968 2969 2970 2971 }
  techapps = { 1010 1600 7430 }
  headofstate            = { type = 9 id = 73001 }
  headofgovernment       = { type = 9 id = 73002 }
  foreignminister        = { type = 9 id = 73003 }
  armamentminister       = { type = 9 id = 73004 }
  ministerofsecurity     = { type = 9 id = 73005 }
  ministerofintelligence = { type = 9 id = 73006 }
  chiefofstaff           = { type = 9 id = 73007 }
  chiefofarmy            = { type = 9 id = 73008 }
  chiefofnavy            = { type = 9 id = 73009 }
  chiefofair             = { type = 9 id = 73010 }

  # GW Cavalry
  landunit =
  { location = 1453
    name     = "西藏第1军 "
    id       = { type = 10700 id = 1 }
    division =
    { id    = { type = 10700 id = 2 }
      name  = "第1师 "
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 10700 id = 3 }
      name = "第10师 "
      type = militia
    }
    division =
    { id   = { type = 10700 id = 4 }
      name = "第17师 "
      type = militia
    }
  }
}
