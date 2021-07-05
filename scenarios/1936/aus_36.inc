##############################
# Country definition for AUS #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = AUS
  # HACK to make sure that Germany gets the whole manpower pool, all units and resources on annex.
  # Unwanted side-effect: Will never accept peace with Germany.
  intrinsic_gov_type     = social_liberal
  manpower               = 200
  capital                = 463

	research_mod = 1.00
	peacetime_ic_mod = 0.50
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  diplomacy =
  { relation = { tag = ENG value = 75 }
    relation = { tag = FIN value = 55 }
    relation = { tag = FRA value = -10 }
    relation = { tag = GER value = 100 }
    relation =
    { tag        = HUN
      value      = 100
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
   SpyInfo                = {  country = "AUS" NumberOfSpies = 1  } 
  nationalprovinces      = { 1896 1899 229  3139 3141 3142 3163 3164 3165 3166 3167 3168 3169 3170 3171 3172 3173 3174 3175 3176 3177
                             3178 3179 3180 3181 3182 3183 3184 3185 3186 3187 3188 3189 3190 3191 3198 3199 3200 3201 3202 3210 3211 3212 3213 3256
                             3257 371  373  377  378  380  381  382  383  384  385  386  387  388  4081 4082 4084 4085 4087 454  456  457  458  459 
                             460  461  462  463  464  465  466  467  468  469  470  471  472  474  475  476  477  478 490  491  492  497 
                             500  501  502 455 4086 499
							 3144 3145 479 3573 489 3143
                           }
  ownedprovinces         = { 3186 3187 3188 3189 3190 3191 373 377 4084 4085 460 461 462 463 464 465 }
  controlledprovinces    = { 3186 3187 3188 3189 3190 3191 373 377 4084 4085 460 461 462 463 464 465 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670 5680
                             5310 5010
                             1010 1100 1710 1830
                             2280 2290 2610 2420 2540
                             6010 6020 6030 6040 6200 6050
                             4010 9700 7430
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    free_market       = 8
    freedom           = 7
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 23001 }
  headofgovernment       = { type = 9 id = 23002 }
  foreignminister        = { type = 9 id = 23003 }
  armamentminister       = { type = 9 id = 23004 }
  ministerofsecurity     = { type = 9 id = 23005 }
  ministerofintelligence = { type = 9 id = 23006 }
  chiefofstaff           = { type = 9 id = 23007 }
  chiefofarmy            = { type = 9 id = 23008 }
  chiefofnavy            = { type = 9 id = 23009 }
  chiefofair             = { type = 9 id = 23010 }
 landunit =
  { id       = { type = 14000 id = 9000 }
    location = 463
    name     = "奥地利第I军 "
    division =
    { id       = { type = 14000 id = 1706 }
      name     = "奥地利国防军总参谋部 "
      type     = hq
      model    = 0
      strength = 100
      experience = 10
    }
    division =
    { id       = { type = 14000 id = 9001 }
      name     = "第1骑兵师 "
      type     = cavalry
      model    = 0
      strength = 70
      extra    = artillery
      experience = 10
    }
    division =
    { id       = { type = 14000 id = 9002 }
      name     = "第1步兵师 "
      type     = motorized
      extra    = b_09
      model    = 0
      strength = 100
      experience = 10
    }
    division =
    { id       = { type = 14000 id = 9003 }
      name     = "第2步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      experience = 10
    }
    division =
    { id       = { type = 14000 id = 9004 }
      name     = "第3步兵师 "
      type     = infantry
      extra    = artillery
      strength = 100
      model    = 0
      experience = 10
    }
  }
  landunit =
  { id       = { type = 14000 id = 9005 }
    location = 463
    name     = "奥地利第II军 "
    division =
    { id       = { type = 14000 id = 9006 }
      name     = "第4步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      experience = 10
    }
  }
  landunit =
  { id       = { type = 14000 id = 9007 }
    location = 463
    name     = "奥地利第III军 "
    division =
    { id       = { type = 14000 id = 9009 }
      name     = "第5步兵师 "
      type     = infantry
      strength = 100
      model    = 0
      experience = 10
    }
  }
  landunit =
  { id       = { type = 14000 id = 9008 }
    location = 463
    name     = "奥地利第IV军 "
    division =
    { id       = { type = 14000 id = 9011 }
      name     = "第6步兵师 "
      type     = infantry
      extra    = artillery
      strength = 100
      model    = 0
      experience = 10
    }
  }
  landunit =
  { id       = { type = 14000 id = 9010 }
    location = 463
    name     = "奥地利第V军 "
    division =
    { id       = { type = 14000 id = 9012 }
      name     = "国防军第1山地师 "
      type     = bergsjaeger
      strength = 80
      model    = 0
      experience = 60
    }
  }
  landunit =
  { id       = { type = 14000 id = 9013 }
    location = 463
    name     = "奥地利第VI军 "
    division =
    { id       = { type = 14000 id = 9014 }
      name     = "国防军第2山地师 "
      type     = bergsjaeger
      strength = 80
      model    = 0
      experience = 60
    }
  }
}
