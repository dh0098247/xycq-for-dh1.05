##############################
# Country definition for u02 #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = u02
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1216 # 济南

	research_mod = 1.00
	peacetime_ic_mod = 0.8

  manpower               = 180
  dissent                = 10
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }

  SpyInfo                = { country = "u02" NumberOfSpies = 1 }

  # Shanxi
  nationalprovinces      = { 1170 1213 1214 1216 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 1215 1894 2865 }
  ownedprovinces         = { 1170 1213 1214 1216 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 1894 2865 }
  controlledprovinces    = { 1170 1213 1214 1216 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 1894 2865 }
  # Shanxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = { 6050 6010 1010 1100 7420 }
  diplomacy =
  { relation = { tag = CHI value = 80 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 120 }
    relation = { tag = U01 value = 100 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  headofstate            = { type = 9 id = 900500 }
  headofgovernment       = { type = 9 id = 900501 }
  foreignminister        = { type = 9 id = 900502 }
  armamentminister       = { type = 9 id = 900503 }
  ministerofsecurity     = { type = 9 id = 900504 }
  ministerofintelligence = { type = 9 id = 900505 }
  chiefofstaff           = { type = 9 id = 900506 }
  chiefofarmy            = { type = 9 id = 900507 }
  chiefofnavy            = { type = 9 id = 900508 }
  chiefofair             = { type = 9 id = 900509 }
  # ######
  # 韩复榘 Land 1936 OOB
  # TYPE: 22310
  # ######

 landunit =
  { location = 1213 # 滨州
    name     = "国民革命军第12军 "
    leader   = 502401 # 孙桐萱
    id       = { type = 22310 id = 1012 }
    division =
    { experience = 25
      id         = { type = 22310 id = 20 }
      name       = "陆军第20师（第12军-西北韩复榘） "
      type       = infantry
      model      = 37
      strength = 80
      extra = police
    }
    dig_in   = 20.000
  }

  landunit =
  { location = 1216 # 济南
    name     = "鲁省绥靖公署 "
    id       = { type = 22310 id = 41216 }
    division =
    { id       = { type = 22310 id = 71216 }
      name     = "山东保安总队 "
      type     = militia
      strength     = 100
      model    = 9
    }
  }

  landunit =
  { location = 1170 # 德州
    name     = "国民革命军第56军 "
    leader   = 502406 # 谷良民
    id       = { type = 22310 id = 1006 }
    division =
    { experience = 15
      id         = { type = 22310 id = 22 }
      name       = "陆军第22师（第6军-西北韩复榘） "
      type       = infantry
      model      = 37
      strength = 50
      extra = police
      brigade_model = 0
    }
        dig_in   = 20.000
  }
 landunit =
  { location = 1216 # Jinan
    name     = "国民革命军第3路军 "
    leader   = 502400 # 韩复榘
    id       = { type = 22310 id = 1003 }
    division =
    { experience = 15
      id         = { type = 22310 id = 29 }
      name       = "陆军第29师（第3路军-西北韩复榘） "
      type       = infantry
      model      = 37
      strength = 60
      extra = artillery
      brigade_model = 1
    }
    division =
    { experience = 25
      id         = { type = 22310 id = 74 }
      name       = "陆军第74师（第3路军-西北韩复榘） "
      type       = infantry
      model      = 37
      strength = 60
      extra = police
      brigade_model = 0
    }
    division =
    { experience = 50
      id         = { type = 22310 id = 855 }
      name       = "第3路军手枪旅（第3路军-西北韩复榘）"
      type       = infantry
      model      = 37
      strength = 80
      extra = police
      brigade_model = 1
    }
   division =
    { experience = 15
      id         = { type = 22310 id = 81 }
      name       = "陆军第81师（第12军-西北韩复榘） "
      type       = infantry
      model      = 37
      strength = 50
      extra = artillery
      brigade_model = 1
  }
   dig_in   = 20.000
 }
}
