##############################
# Country definition for POL #
##############################
#####################
# Country main data #
#####################

country =
{ tag                    = POL
  capital                = 485

	research_mod = 1.00
	peacetime_ic_mod = 0.80
	tc_mod = 1.00

  manpower               = 850
  transports             = 32
  escorts                = 6
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 100
  diplomacy =
  { relation =
    { tag        = CZE
      value      = -1
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = ENG value = 50 }
    relation = { tag = EST value = 75 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = -10 }
    relation = { tag = GRE value = 35 }
    relation = { tag = HUN value = 50 }
    relation = { tag = LAT value = 75 }
    relation = { tag = LIT value = -75 }
    relation =
    { tag        = ROM
      value      = 40
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = SOV value = -50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  nationalprovinces      = { 208  209  210  211  213  214  222  229  2602 303  305  306  307  3130 3131 3132
                             3133 3134 3135 3136 3137 3138 3139 3140 3141 3142 3143 3144 3145 3146 3147 3148 3149 3150 3151 3152 3153 3154 3155 3156
                             3157 3158 3159 3160 3161 3162 3573 4090 479  480  481  483  484  485  486  487  488  489  500  501  502  503  504  505 
                             506  507  508  509  562 
                           }
  ownedprovinces         = { 208  209  210  211  213  214  222  229  2602 303  305  306  307  3130 3131 3132 3133 3134 3135 3136 3137 3138 3140 3141
                             3142 3143 3144 3145 3146 3147 3148 3149 3150 3151 3152 3153 3154 3155 3156 3157 3158 3159 3160 3161 3162 3573 4090 479 
                             480  481  483  484  485  486  487  488  489  500  501  502  503  504  505  506  507  508  509  562 
                           }
  controlledprovinces    = { 208  209  210  211  213  214  222  229  2602 303  305  306  307  3130 3131 3132 3133 3134 3135 3136 3137 3138 3140 3141
                             3142 3143 3144 3145 3146 3147 3148 3149 3150 3151 3152 3153 3154 3155 3156 3157 3158 3159 3160 3161 3162 3573 4090 479 
                             480  481  483  484  485  486  487  488  489  500  501  502  503  504  505  506  507  508  509  562 
                           }
  # Air Doctrines
  techapps               = { 5050 5080 5170 5190 5800 5110
                             5180 5660 5670 5680
                             5310 5010
                             1010 1100 1110 1710
                             2280 2290 2610 2420 2540 2550 2010 2020
                             3550 3010 3410
                             6050 6010 6020 6030 6040 6200 6320 6390 
                             8010 8020
                             4120 4010
                             9700
                             7410 1900 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 4
    free_market       = 5
    professional_army = 10
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 13001 }
  headofgovernment       = { type = 9 id = 13002 }
  foreignminister        = { type = 9 id = 13003 }
  armamentminister       = { type = 9 id = 13004 }
  ministerofsecurity     = { type = 9 id = 13005 }
  ministerofintelligence = { type = 9 id = 13006 }
  chiefofstaff           = { type = 9 id = 13007 }
  chiefofarmy            = { type = 9 id = 13008 }
  chiefofnavy            = { type = 9 id = 13009 }
  chiefofair             = { type = 9 id = 13010 }

  landunit =
  { id       = { type = 18600 id = 1 }
    location = 479
    name     = "'克拉科夫'集团军 "
    division =
    { id   = { type = 18600 id = 2 }
      name = "波兰陆军第6步兵师 "
      strength = 60
      type = motorized
      model = 1
      experience = 15
    }
    division =
    { id    = { type = 18600 id = 3 }
      name  = "波兰陆军第7'卢斯蒂安'步兵师 "
      type  = motorized
      model = 1
      extra = artillery
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 4 }
      name = "波兰陆军第11步兵师 "
      type = infantry
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 5 }
      name = "'克拉科夫'骑兵旅 "
      type = cavalry
      model = 1
      experience = 20
    }
    division =
    { id   = { type = 18600 id = 6 }
      name = "波兰陆军第10摩步化骑兵旅 "
      type = cavalry
      model = 2
      extra = armored_car
      brigade_model = 1
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 7 }
    location = 479
    name     = "'西里西亚'战斗群 "
    division =
    { id   = { type = 18600 id = 8 }
      name = "波兰陆军第23步兵师 "
      type = infantry
      experience = 15
    }
    division =
    { id    = { type = 18600 id = 9 }
      name  = "波兰陆军第55步兵师 "
      type  = infantry
      extra = artillery
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 10 }
    location = 479
    name     = "'别尔斯科'战斗群 "
    division =
    { id   = { type = 18600 id = 11 }
      name = "波兰陆军第21步兵师 "
      type = motorized
      model = 1
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 12 }
      name = "波兰陆军第1山地旅 "
      model = 0
      type = bergsjaeger
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 13 }
    location = 487
    name     = "'卢布林'集团军 "
    division =
    { id    = { type = 18600 id = 14 }
      name  = "华沙装甲摩托旅 "
      type = motorized
      model = 1
      extra = light_armor_brigade
      brigade_model = 2
      experience = 80
    }
    division =
    { id       = { type = 18600 id = 42 }
      name     = "波兰陆军第39步兵师 "
      type     = infantry
      experience = 20
    }
  }
  landunit =
  { id       = { type = 18600 id = 15 }
    location = 483
    name     = "'罗兹'集团军 "
    division =
    { id   = { type = 18600 id = 16 }
      name = "波兰陆军第2'华沙'步兵师 "
      type = motorized
      model = 1
      extra = artillery
      brigade_model = 1
      experience = 15
    }
    division =
    { id    = { type = 18600 id = 17 }
      name  = "波兰陆军第10步兵师 "
      type  = motorized
      model = 1
      extra = artillery
      experience = 20
    }
    division =
    { id   = { type = 18600 id = 19 }
      name = "波兰陆军第18骑兵师 "
      type = cavalry
      model = 1
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 20 }
      name = "波兰陆军第30骑兵师 "
      type = cavalry
      model = 1
      experience = 15
    }
    division =
    { id    = { type = 18600 id = 21 }
      name  = "'克日索瓦'骑兵旅 "
      model = 1
      type = cavalry
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 22 }
      name = "'沃涅斯克'骑兵旅 "
      model = 1
      type = cavalry
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 23 }
    location = 305
    name     = "'莫德林'集团军 "
    division =
    { id   = { type = 18600 id = 24 }
      name = "波兰陆军第8'巴托索兹·格洛瓦基'步兵师 "
      type = motorized
      model = 1
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 25 }
      name = "波兰陆军第20步兵师 "
      type = infantry
      strength = 60
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 91 }
      name = "'诺格丹斯克'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
    division =
    { id   = { type = 18600 id = 92 }
      name = "'马佐夫舍'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
  }
  landunit =
  { id       = { type = 18600 id = 26 }
    location = 303
    name     = "'波美拉尼亚'集团军 "
    division =
    { id   = { type = 18600 id = 27 }
      name = "波兰陆军第9'德雷顿'步兵师 "
      type = motorized
      model = 1
      extra = artillery
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 28 }
      name = "波兰陆军第15步兵师 "
      type = infantry
      strength = 60
      experience = 15
    }
    division =
    { id    = { type = 18600 id = 29 }
      name  = "波兰陆军第27步兵师 "
      type  = infantry
      strength = 60
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 30 }
    location = 306
    name     = "'东方'战斗群 "
    division =
    { id   = { type = 18600 id = 31 }
      name = "第4'让·基林斯基'步兵师 "
      type = motorized
      model = 1
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 32 }
      name = "波兰陆军第16步兵师 "
      type = infantry
      strength = 60
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 33 }
    location = 306
    name     = "'切尔斯克'战斗群 "
    division =
    { id   = { type = 18600 id = 93 }
      name = "'波美拉尼亚'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
  }
  landunit =
  { id       = { type = 18600 id = 34 }
    location = 307
    name     = "'波兹南'集团军 "
    division =
    { id    = { type = 18600 id = 35 }
      name = "波兰陆军第14步兵师 "
      type = infantry
      strength = 60
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 36 }
      name = "波兰陆军第17步兵师 "
      type = infantry
      strength = 60
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 37 }
      name = "波兰陆军第25步兵师 "
      type = infantry
      strength = 60
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 38 }
      name = "波兰陆军第26步兵师 "
      type = infantry
      strength = 60
      experience = 15
    }
    division =
    { id   = { type = 18600 id = 39 }
      name = "'大波兰'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
    division =
    { id   = { type = 18600 id = 40 }
      name = "'波多尔斯卡'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
  }
  landunit =
  { id       = { type = 18600 id = 41 }
    name     = "'东普鲁士'集团军 "
    location = 506
    division =
    { id       = { type = 18600 id = 43 }
      name     = "波兰陆军第44步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 44 }
    name     = "'北方'战斗群 "
    location = 506
    division =
    { id       = { type = 18600 id = 45 }
      name     = "波兰陆军第13步兵师 "
      type     = infantry
      strength = 60
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 46 }
      name     = "波兰陆军第19步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 47 }
      name     = "波兰陆军第29步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 48 }
      name     = "'维尔纽斯'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
  }
  landunit =
  { id       = { type = 18600 id = 49 }
    name     = "'南方'战斗群 "
    location = 506
    division =
    { id       = { type = 18600 id = 50 }
      name     = "波兰陆军第3'罗穆尔德·特罗哥特'步兵师 "
      type     = motorized
      model = 1
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 51 }
      name     = "波兰陆军第12步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 52 }
      name     = "波兰陆军第36步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 55 }
    name     = "'维希库夫'集团军 "
    location = 486
    division =
    { id       = { type = 18600 id = 56 }
      name     = "波兰陆军第1'科希丘什科'步兵师 "
      type     = motorized
      model = 1
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 57 }
      name     = "波兰陆军第35步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 58 }
      name     = "波兰陆军第41步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
  }
  landunit =
  { id       = { type = 18600 id = 60 }
    name     = "'纳雷夫'独立战斗群 "
    location = 509
    division =
    { id       = { type = 18600 id = 61 }
      name     = "波兰陆军第18步兵师 "
      type     = infantry
      strength = 60
      extra    = artillery
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 62 }
      name     = "波兰陆军第33步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 63 }
      name     = "'波德拉斯卡'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
    division =
    { id       = { type = 18600 id = 64 }
      name     = "'苏瓦乌基'骑兵旅 "
      model = 1
      type = cavalry
      experience = 20
    }
  }
  landunit =
  { id       = { type = 18600 id = 65 }
    name     = "'喀尔巴阡'集团军 "
    location = 489
    division =
    { id       = { type = 18600 id = 66 }
      name     = "波兰陆军第2山地旅 "
      model = 0
      type = bergsjaeger
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 67 }
      name     = "波兰陆军第3山地旅 "
      model = 0
      type = bergsjaeger
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 68 }
      name     = "波兰陆军第22步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
    division =
    { id       = { type = 18600 id = 69 }
      name     = "波兰陆军第38步兵师 "
      type     = infantry
      strength = 60
      experience = 15
    }
  }
  navalunit =
  { id       = { type = 18600 id = 73 }
    name     = "波斯卡舰队 "
    location = 303
    base     = 303
    division =
    { id       = { type = 18600 id = 74 }
      name     = "利祖奇利号 "
      type     = destroyer
      model    = 1
      strength = 40
    }
    division =
    { id    = { type = 18600 id = 75 }
      name  = "奥克多号 "
      type  = submarine
      model = 0
    }
  }
  airunit =
  { id       = { type = 18600 id = 79 }
    name     = "波兰空军驱逐机旅 "
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 80 }
      name  = "空军驱逐机旅 "
      type  = interceptor
      model = 1
      experience = 15
    }
   }
  airunit =
  { id       = { type = 18600 id = 81 }
    name     = "克拉科夫集团军航空集团 "
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 82 }
      name  = "克拉科夫集团军航空集团 "
      type  = interceptor
      model = 0
      experience = 15
    }
  }
  airunit =
  { id       = { type = 18600 id = 83 }
    name     = "波兹南集团军航空集团 "
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 84 }
      name  = "波兹南集团军航空集团 "
      type  = interceptor
      model = 0
      experience = 15
    }
  }
  airunit =
  { id       = { type = 18600 id = 85 }
    name     = "波美拉尼亚集团军航空集团 "
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 86 }
      name  = "波兹南集团军航空集团 "
      type  = interceptor
      model = 0
      experience = 15
    }
  }
  airunit =
  { id       = { type = 18600 id = 87 }
    name     = "罗兹集团军航空集团 "
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 88 }
      name  = "罗兹集团军航空集团 "
      type  = interceptor
      model = 0
      experience = 15
    }
  }
  airunit =
  { id       = { type = 18600 id = 89 }
    name     = "波兰空军轰炸机旅 "
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 90 }
      name  = "波兰空军轰炸机旅 "
      type  = tactical_bomber
      model = 0
      experience = 15
    }
  }
}
