##############################
# Country definition for HUN #
##############################
province = {
  id = 457 # 布达
}

#####################
# Country main data #
#####################

country = {
  tag                = HUN
  capital            = 457 # 布达
  extra_tc           = 50
  manpower           = 800
  research_mod           = 1
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 500
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100

  diplomacy = {
    relation = {
      tag        = AUS
      value      = 100
      guaranteed = { year = 1934 month = march day = 17 }
    }
    relation = { tag = CZE value = -50 }
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 75 }
    relation = { tag = FRA value = -70 }
    relation = { tag = GER value = 100 }
    relation = { tag = IRE value = 25 }
    relation = { tag = ITA value = 125 }
    relation = { tag = POL value = 50 }
    relation = { tag = ROM value = 1 }
    relation = { tag = YUG value = 80 }
  }
  SpyInfo                = { country = "HUN" NumberOfSpies = 7 }

  nationalprovinces      = { 3171 3174 3175 3176 3177 3178 3179 3180 3181 3182 3183 3184 3185 3186 4084 4086 4087 456 457 458 476 477 478 490 491 492 493 495 496 497 498 499 3172 3173 3254 494 495 4088 427 428 430 3249 3250 3251 3252 3253 3254 3255 3216 }
  ownedprovinces         = { 3176 3177 3178 3179 3180 3181 3182 3183 3184 3185 4086 456 457 458 491 492 497 }
  controlledprovinces    = { 3176 3177 3178 3179 3180 3181 3182 3183 3184 3185 4086 456 457 458 491 492 497 }

  techapps               = { 5050 5080 5170 5190 5800 5110 5180 5660 5670 5310 5010 1010 1020 1100 1830 2280 2290 2610 2420 2540 6050 6010 6020 6030 9700 7420 1900 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 1
    freedom           = 3
    free_market       = 4
    professional_army = 10
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 21001 } # 摄政王 霍尔蒂.米克洛什 
  headofgovernment       = { type = 9 id = 21002 } # 格姆伯什 久洛 
  foreignminister        = { type = 9 id = 21003 } # 卡尼亚 卡尔曼 
  armamentminister       = { type = 9 id = 21004 } # 法比尼 蒂罕默尔 
  ministerofsecurity     = { type = 9 id = 21005 } # 科兹马 米克洛什 
  ministerofintelligence = { type = 9 id = 21006 } # 格姆伯什 久洛 
  chiefofstaff           = { type = 9 id = 21007 } # 亨尼伊 古斯塔夫 
  chiefofarmy            = { type = 9 id = 21008 } # 舍佛伊 伊斯特万 
  chiefofnavy            = { type = 9 id = 21009 } # 霍尔蒂.米克洛什 
  chiefofair             = { type = 9 id = 21010 } # 托马尔 拉什洛 

  landunit = {
    id       = { type = 20500 id = 1 }
    name     = "匈牙利远征军 "
    location = 457
    division = {
      id             = { type = 20500 id = 2 }
      name           = "第1步兵师 "
      type           = motorized
      model          = 73
      extra          = artillery
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 20500 id = 3 }
      name           = "第2步兵师 "
      type           = motorized
      model          = 73
      extra          = artillery
      strength       = 100
      experience     = 60
    }
    division = {
      id             = { type = 20500 id = 4 }
      name           = "第3步兵师 "
      type           = motorized
      model          = 73
      extra          = anti_tank
      brigade_model  = 6
      strength       = 100
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 20500 id = 5 }
    name     = "匈牙利第I军 "
    location = 457
    division = {
      id             = { type = 20500 id = 6 }
      name           = "第12步兵师 "
      type           = motorized
      model          = 73
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 20500 id = 7 }
      name           = "第13步兵师 "
      type           = motorized
      model          = 73
      extra          = artillery
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 20500 id = 8 }
      name           = "第16步兵师 "
      type           = motorized
      model          = 73
      extra          = artillery
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 20500 id = 9 }
    name     = "匈牙利第II军 "
    location = 457
    division = {
      id             = { type = 20500 id = 10 }
      name           = "第20步兵师 "
      type           = bergsjaeger
      model          = 0
      extra          = artillery
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 20500 id = 11 }
      name           = "第24步兵师 "
      type           = bergsjaeger
      model          = 0
      extra          = engineer
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 20500 id = 12 }
      name           = "第25步兵师 "
      type           = bergsjaeger
      model          = 0
      extra          = engineer
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 20500 id = 16 }
    name     = "匈牙利第9集团军"
    location = 457
    division = {
      id             = { type = 20500 id = 20 }
      name           = "匈牙利陆军司令部"
      type           = hq
      model          = 0
      extra          = armored_car
      brigade_model  = 1
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 20500 id = 17 }
      name           = "第1骑兵旅"
      type           = cavalry
      model          = 81
      extra          = engineer
      brigade_model  = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 20500 id = 18 }
      name           = "第2骑兵旅"
      type           = cavalry
      model          = 81
      extra          = engineer
      brigade_model  = 1
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 20500 id = 19 }
      name           = "匈牙利“快速军”"
      type           = cavalry
      model          = 82
      extra          = light_armor_brigade
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
  }

  airunit = { 
    id       = { type = 20500 id = 13 }
    name     = "匈牙利空军 "
    location = 457
    base     = 457
    division = {
      id             = { type = 20500 id = 14 }
      name           = "第1截击机大队 "
      type           = interceptor
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 20500 id = 15 }
      name           = "第1战术轰炸机大队 "
      type           = tactical_bomber
      model          = 0
      strength       = 100
    }
  }

  landdivision = { dormant = yes id = { type = 20500 id = 21 } name = "匈牙利第一野战装甲师"  type = armor model = 10 strength = 70 extra = artillery brigade_model = 3 } 
  landdivision = { dormant = yes id = { type = 20500 id = 22 } name = "匈牙利第二野战装甲师"  type = armor model = 10 strength = 50 extra = engineer brigade_model = 2 } 
}
