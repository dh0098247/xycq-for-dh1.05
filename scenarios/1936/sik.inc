##############################
# Country definition for SIK #
##############################

country =
{ tag                    = SIK
  regular_id             = CHI
  regular_id             = CHC 	
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 200
  money                  = 50
  capital                = 1433 # Urumqi

	research_mod = 1.00
	peacetime_ic_mod = 1.0

  manpower               = 100
  dissent                = 30
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  nationalprovinces      = { 1421 1422 1423 1424 1428 1429 1430 1431 1432 1433 1435 1445 1446 1447 2957 2962 2965 2978 2979 2980 2981 2982 2983 2984
                             2985 2986 2987 2988 2989 2997 2998 2999 3449 3450 3451 3452 3453 3454 3455 3456 3457 3464 3466 3467 3468 3469 3470
                             3471 3472 3473 3474 3478 3480 3481 3485 3486 3487
                             3842 3843 3844 3846
                           }
  ownedprovinces         = { 1421 1430 1431 1432 1433 1435 1445 1446 1447 2957 2962 2965 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2997
                             2998 2999 3464 3470 3471 3472 3480 3481
                           }
  controlledprovinces    = { 1421 1430 1431 1432 1433 1435 1445 1446 1447 2957 2962 2965 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2997
                             2998 2999 3464 3470 3471 3472 3480 3481
                           }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = { 1010 1100 7420 }
  diplomacy =
  { relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }
    relation = { tag = TAN value = 125 }
  }
  headofstate            = { type = 9 id = 72001 }
  headofgovernment       = { type = 9 id = 72002 }
  foreignminister        = { type = 9 id = 72003 }
  armamentminister       = { type = 9 id = 72004 }
  ministerofsecurity     = { type = 9 id = 72005 }
  ministerofintelligence = { type = 9 id = 72006 }
  chiefofstaff           = { type = 9 id = 72007 }
  chiefofarmy            = { type = 9 id = 72008 }
  chiefofnavy            = { type = 9 id = 72009 }
  chiefofair             = { type = 9 id = 72010 }

  landunit =
  { location = 1433
    name     = "新疆陸軍第1軍 "
    id       = { type = 25600 id = 1 }
    division =
    { id   = { type = 25600 id = 2 }
      name = "新疆陸軍第1师 "
      type = infantry
      model = 37
    }
    division =
    { id   = { type = 25600 id = 3 }
      name = "新疆陸軍第9师 "
      type = militia
      model = 9
    }
    division =
    { id   = { type = 25600 id = 4 }
      name = "新疆陸軍第8师 "
      type = militia
      model = 9
    }
  }
}
