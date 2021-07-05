##############################
# Country definition for u01 #
##############################
# Country main data #
#####################

country =
{ tag                    = u01
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  capital                = 1205 # 北平


	research_mod = 1.00
	peacetime_ic_mod = 0.8

  manpower               = 200
  dissent                = 20
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 3
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 1
  }

  SpyInfo                = { country = "u01" NumberOfSpies = 1 }

  # 平津
  nationalprovinces      = { 1204 1205 1206 1210 1810 2866 2867 2868 2869 2870 2871 2872 2873 2947 2748 2793 2881 1595 2944 }
  ownedprovinces         = { 1204 1205 1206 1210 1810 2866 2867 2868 2869 2870 2871 2872 2873 2947 2748 2793 2881 1595 2944 }
  controlledprovinces    = { 1204 1205 1206 1210 1810 2866 2867 2868 2869 2870 2871 2872 2873 2947 2748 2793 2881 1595 2944 }
  # u01
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps = { 1010 1100 6050 6010 7420 }
  diplomacy =
  { relation = { tag = CHI value = 100 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 150 }
    relation = { tag = U95 value = 120 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  headofstate            = { type = 9 id = 730000 }
  headofgovernment       = { type = 9 id = 730001 }
  foreignminister        = { type = 9 id = 730004 }
  armamentminister       = { type = 9 id = 730002 }
  ministerofsecurity     = { type = 9 id = 730006 }
  ministerofintelligence = { type = 9 id = 730007 }
  chiefofstaff           = { type = 9 id = 730003 }
  chiefofarmy            = { type = 9 id = 730009 }
  chiefofnavy            = { type = 9 id = 730005 }
  chiefofair             = { type = 9 id = 730010 }
  # ######
  # u01 Land 1936 OOB
  # TYPE: 22320
  # ######


  landunit =
  { location = 1210 # 保定
    name     = "冀省绥靖公署 "
    leader   = 502505 # 佟麟阁
    id       = { type = 22320 id = 412 }
    division =
    { id       = { type = 22320 id = 712 }
      name     = "河北保安总队 "
      type     = militia
      strength     = 100
      model    = 9
    }
  }
 landunit =
  { location = 1206 # 张家口
    name     = "热河绥靖公署 "
    id       = { type = 22320 id = 41397 }
    division =
    { id       = { type = 22320 id = 71397 }
      name     = "热河保安总队 "
      type     = militia
      strength     = 100
      model    = 9
    }
  }
 landunit =
  { location = 1205 # 北平
    name     = "黑省绥靖公署 "
    id       = { type = 22320 id = 41380 }
    division =
    { id       = { type = 22320 id = 71380 }
      name     = "黑省保安总队 "
      type     = militia
      strength     = 100
      model    = 9
    }
 }

 landunit =
  { location = 1204 # 天津
    name     = "吉省绥靖公署 "
    id       = { type = 22320 id = 41378 }
    division =
    { id       = { type = 22320 id = 71378 }
      name     = "吉林保安总队 "
      type     = militia
      strength     = 100
      model    = 9
    }
 }

  landunit =
  { location = 1205 # 北平
    name     = "辽省绥靖公署 "
    id       = { type = 22320 id = 41389 }
    division =
    { id       = { type = 22320 id = 71389 }
      name     = "辽宁保安总队 "
      type     = militia
      strength     = 100
      model    = 9
    }
  }
landunit =
  { location = 1205 # Beiping
    name     = "国民革命军第59军 "
    leader   = 502504 # 张自忠
    id       = { type = 22320 id = 1059 }
    division =
    { experience = 25
      id         = { type = 22320 id = 38 }
      name       = "陆军第38师（第59军-西北宋哲元） "
      type       = infantry
      model      = 37
      strength = 60
      extra = police
    }
    dig_in   = 20.000
  }

 landunit =
  { location = 1206 # 张家口
    name     = "国民革命军第68军 "
    leader   = 502501 # 刘汝明
    id       = { type = 22320 id = 1068 }
    division =
    { experience = 25
      id         = { type = 22320 id = 143 }
      name       = "陆军第143师（第68军-西北宋哲元） "
      type       = infantry
      model      = 37
      strength = 70
      extra = police
    }
	dig_in   = 20.000
  }

landunit =
  { location = 1204 # 天津
    name     = "国民革命军第77军 "
    leader   = 502503 # 赵登禹
    id       = { type = 22320 id = 2077 }
    division =
    { experience = 25
      id         = { type = 22320 id = 132 }
      name       = "陆军第132师（第77军-西北宋哲元） "
      type       = infantry
      model      = 37
      strength = 60
      extra = artillery
    }
    dig_in   = 20.000
  }

landunit =
  { location = 1205 # Beiping
    name     = "国民革命军第29军 "
    leader   = 502500 # 宋哲元
    id       = { type = 22320 id = 1029 }
    division =
    { experience = 25
      id         = { type = 22320 id = 859 }
      name       = "29军手枪旅（第29军-西北宋哲元） "
      type       = motorized
      model      = 37
      strength = 30
      extra = artillery
      brigade_model = 2
    }
   division =
    { experience = 25
      id         = { type = 22320 id = 37 }
      name       = "陆军第37师（第77军-西北宋哲元） "
      type       = infantry
      model      = 37
      strength = 60
      extra = police
    }
      division =
    { experience = 25
      id         = { type = 22320 id = 297 }
      name       = "29军骑兵旅 "
      type       = cavalry
      model = 12
      strength = 60
      extra = police
    }
    dig_in   = 20.000
  }
}
