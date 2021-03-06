##############################
# Country definition for CHL #
##############################
province = {
  id = 840 # 圣地亚哥（智利）
}
province = {
  id = 856 # 蒙特港
}

#####################
# Country main data #
#####################

country = {
  tag                = CHL
  capital            = 840 # 圣地亚哥（智利）
  manpower           = 100
  research_mod           = 1
  peacetime_ic_mod       = 0.5
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 40
  escorts        = 6

  diplomacy = {
    relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }

  nationalprovinces      = { 3959 4070 839 840 841 842 856 860 861 864 }
  ownedprovinces         = { 3959 4070 839 840 841 842 856 860 861 864 }
  controlledprovinces    = { 3959 4070 839 840 841 842 856 860 861 864 }

  techapps               = { 5050 5080 5170 5190 5800 5180 5660 5310 1010 1100 2280 2290 3490 3550 3600 3010 3070 3410 6010 6020 6030 6040 6050 8010 8020 8030 8150 8390 7430 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 7
    free_market       = 8
    professional_army = 10
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 44001 } # 阿图洛 亚历山德利 帕尔玛 
  headofgovernment       = { type = 9 id = 44002 } # 古斯塔夫 罗斯 山达 马利亚 
  foreignminister        = { type = 9 id = 44003 } # 米奎尔 库鲁查加 塔库马尔 
  armamentminister       = { type = 9 id = 44004 } # 埃杜瓦多 希尔曼 
  ministerofsecurity     = { type = 9 id = 44005 } # 阿图洛 亚历山德利 帕尔玛 
  ministerofintelligence = { type = 9 id = 44006 } # 朱利奥 阿拉德 平托 
  chiefofstaff           = { type = 9 id = 44007 } # C.J. 德 拉 莫特 
  chiefofarmy            = { type = 9 id = 44008 } # E. 诺瓦 弗恩特斯 
  chiefofnavy            = { type = 9 id = 44009 } # C.J. 德 拉 莫特 
  chiefofair             = { type = 9 id = 44010 } # 达利奥 穆吉卡 卡姆巴 

  landunit = {
    id       = { type = 12500 id = 1 }
    name     = "智利陆军第I军 "
    location = 840
    division = {
      id             = { type = 12500 id = 2 }
      name           = "第1步兵师 "
      type           = motorized
      model          = 0
      extra          = artillery
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 3 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 4 }
      name           = "第1山地师 "
      type           = bergsjaeger
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 12500 id = 5 }
      name           = "第1骑兵师 "
      type           = cavalry
      model          = 0
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 12500 id = 6 }
    name     = "智利第I舰队 "
    location = 840
    base     = 840
    division = {
      id             = { type = 12500 id = 7 }
      name           = "第1驱逐舰编队 "
      type           = destroyer
      model          = 1
      extra1         = naval_anti_air_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 12500 id = 9 }
      name           = "瑞托莱号 "
      type           = battleship
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      extra4         = none
      extra5         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division = {
      id             = { type = 12500 id = 14 }
      name           = "海格里斯号 "
      type           = heavy_cruiser
      model          = 0
      extra1         = naval_fire_controll_l
      extra2         = b_04
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 12500 id = 10 }
      name           = "恩卡拉德号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12500 id = 11 }
      name           = "查克路克号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_anti_air_s
      extra2         = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12500 id = 12 }
      name           = "第1潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 13 }
      name           = "第2潜艇编队 "
      type           = submarine
      model          = 1
    }
  }
}
